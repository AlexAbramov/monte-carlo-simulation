c
c		�᭮���� �ணࠬ��.
�		�������� 䠩�� ���ᨢ�� �祭��. 	
c
      include 'inits.fn'
      call rassech		! ����ணࠬ�� ���� �祭��.
      write(*,*)' Pion=',pion
      do i=1,nexp
	write(*,*)'Nex=',i,' Pexi=',pexi(i)
      enddo
      include 'write_se.fn'	!  ������ ���ᨢ�� �祭�� � 䠩�.
      do i=1,nser
        write(*,*)i,stot(i),selas(i),sexi(nexp,i),sion(i)
      enddo
      end
