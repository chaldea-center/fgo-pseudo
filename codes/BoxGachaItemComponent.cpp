void __fastcall BoxGachaItemComponent___ctor(BoxGachaItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BoxGachaItemComponent__Clear(BoxGachaItemComponent_o *this, const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0

  if ( (byte_4B6ABE7 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1/*""*/, method);
    byte_4B6ABE7 = 1;
  }
  itemIcon = this->fields.itemIcon;
  if ( !itemIcon
    || (ItemIconComponent__Clear(itemIcon, 0LL), (itemIcon = (ItemIconComponent_o *)this->fields.dataLabel) == 0LL) )
  {
    sub_1BE4D28(itemIcon, method);
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

  if ( (byte_4B6ABE8 & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, *(_QWORD *)&itemId);
    byte_4B6ABE8 = 1;
  }
  if ( itemId < 1 )
  {
    BoxGachaItemComponent__Clear(this, *(const MethodInfo **)&itemId);
  }
  else
  {
    itemIcon = this->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_10;
    ItemIconComponent__SetItem(itemIcon, itemId, -1, 1, 0LL);
    dataLabel = this->fields.dataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    itemIcon = (ItemIconComponent_o *)LocalizationManager__GetNumberFormat(payNum, 0LL);
    if ( !dataLabel )
LABEL_10:
      sub_1BE4D28(itemIcon, *(_QWORD *)&itemId);
    UILabel__set_text(dataLabel, (System_String_o *)itemIcon, 0LL);
  }
}