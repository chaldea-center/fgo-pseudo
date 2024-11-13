void __fastcall BoxGachaItemComponent___ctor(BoxGachaItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BoxGachaItemComponent__Clear(BoxGachaItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ItemIconComponent_o *itemIcon; // x0

  if ( (byte_4B1A159 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B1A159 = 1;
  }
  itemIcon = this->fields.itemIcon;
  if ( !itemIcon
    || (ItemIconComponent__Clear(itemIcon, 0LL), (itemIcon = (ItemIconComponent_o *)this->fields.dataLabel) == 0LL) )
  {
    sub_1BCAA3C(itemIcon, method);
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
  __int64 v8; // x1
  UILabel_o *dataLabel; // x20

  if ( (byte_4B1A15A & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&itemId, *(_QWORD *)&payNum);
    byte_4B1A15A = 1;
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
    ItemIconComponent__SetItem(itemIcon, itemId, -1, 0LL);
    dataLabel = this->fields.dataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
    itemIcon = (ItemIconComponent_o *)LocalizationManager__GetNumberFormat(payNum, 0LL);
    if ( !dataLabel )
LABEL_10:
      sub_1BCAA3C(itemIcon, *(_QWORD *)&itemId);
    UILabel__set_text(dataLabel, (System_String_o *)itemIcon, 0LL);
  }
}