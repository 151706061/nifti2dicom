#include "wizard.h"
#include "../core/n2dInputImporter.h"
#include "../core/n2dHeaderImporter.h"
namespace n2d{
namespace gui{

Wizard::Wizard(QWizard* parent):QWizard(parent)
{
    setWindowTitle(tr("QNifti2Dicom"));
    this->setGeometry(10,10,1024,768);
    	
}

}//namespace gui
}//namespace n2d


