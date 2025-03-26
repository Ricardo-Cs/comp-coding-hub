import java.util.Arrays;

class Solution {

    /**
     * Solução Simples (Minha solução)
     * 
     * - Copia os elementos de nums2 para o final de nums1
     * - Ordena o array completo usando Arrays.sort()
     * 
     * Complexidade: O((m+n) log(m+n)) devido ao sorting
     * Espaço: O(1) (ou O(m+n) dependendo da implementação do sort)
     */
    public void mergeSimple(int[] nums1, int m, int[] nums2, int n) {
        // Copia os elementos de nums2 para o final de nums1
        int i = 0;
        for(int j = m; j < m + n; j++) {
            nums1[j] = nums2[i++];
        }
        // Ordena o array completo
        Arrays.sort(nums1);
    }

    /**
     * Solução Eficiente
     * 
     * - Usa três ponteiros para mesclar os arrays de trás para frente
     * - Não requer ordenação adicional
     * 
     * Complexidade: O(m+n) - linear
     * Espaço: O(1) - constante
     */
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        // Ponteiros começando no final de cada parte
        int i = m - 1;      // Último elemento válido de nums1
        int j = n - 1;      // Último elemento de nums2
        int k = m + n - 1;  // Última posição de nums1
    
        // Mescla enquanto ambos arrays têm elementos
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
    
        // Se sobrarem elementos em nums2, copia-os
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
}
