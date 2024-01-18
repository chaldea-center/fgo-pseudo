void __fastcall BoxGachaItemComponent___ctor(BoxGachaItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BoxGachaItemComponent__Clear(BoxGachaItemComponent_o *this, const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0

  if ( (byte_41896B3 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_41896B3 = 1;
  }
  itemIcon = this->fields.itemIcon;
  if ( !itemIcon
    || (ItemIconComponent__Clear(itemIcon, 0LL), (itemIcon = (ItemIconComponent_o *)this->fields.dataLabel) == 0LL) )
  {
    sub_B2C434(itemIcon, method);
  }
  UILabel__set_text((UILabel_o *)itemIcon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemComponent__Set(
        BoxGachaItemComponent_o *this,
        int32_t itemId,
        int32_t payNum,
        const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0
  UILabel_o *dataLabel; // x20

  if ( (byte_41896B4 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&itemId);
    byte_41896B4 = 1;
  }
  if ( itemId < 1 )
  {
    BoxGachaItemComponent__Clear(this, *(const MethodInfo **)&itemId);
  }
  else
  {
    itemIcon = this->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_11;
    ItemIconComponent__SetItem(itemIcon, itemId, -1, 0LL);
    dataLabel = this->fields.dataLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    itemIcon = (ItemIconComponent_o *)LocalizationManager__GetNumberFormat(payNum, 0LL);
    if ( !dataLabel )
LABEL_11:
      sub_B2C434(itemIcon, *(_QWORD *)&itemId);
    UILabel__set_text(dataLabel, (System_String_o *)itemIcon, 0LL);
  }
}