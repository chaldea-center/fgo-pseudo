void __fastcall ItemLinkInfoDetailObject___ctor(ItemLinkInfoDetailObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ItemLinkInfoDetailObject__Awake(ItemLinkInfoDetailObject_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ItemLinkInfoDetailObject__Setup(
        ItemLinkInfoDetailObject_o *this,
        ItemEntity_o *itemEnt,
        bool isDispStoneDetail,
        const MethodInfo *method)
{
  UILabel_o *itemDetailLabel; // x0
  int32_t type; // w23
  ItemIconComponent_o *itemIcon; // x22

  if ( itemEnt )
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    if ( !itemDetailLabel
      || (UILabel__set_text(itemDetailLabel, itemEnt->fields.detail, 0LL),
          type = itemEnt->fields.type,
          itemIcon = this->fields.itemIcon,
          itemDetailLabel = (UILabel_o *)ItemEntity__GetImageId(itemEnt, 0LL),
          !itemIcon) )
    {
      sub_1B64324(itemDetailLabel);
    }
    ItemIconComponent__SetCombineItemImage(
      itemIcon,
      (int32_t)itemDetailLabel,
      itemEnt->fields.bgImageId,
      -1,
      type == 29,
      0LL);
  }
  if ( isDispStoneDetail )
    ItemLinkInfoDetailObject__SetupStoneDetail(this, (const MethodInfo *)itemEnt);
}


void __fastcall ItemLinkInfoDetailObject__SetupStoneDetail(ItemLinkInfoDetailObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  UnityEngine_Object_o *payStoneNumLabel; // x20
  UILabel_o *v10; // x20
  int32_t v11; // w21
  UnityEngine_Object_o *freeStoneNumLabel; // x20
  UILabel_o *v13; // x20
  int32_t freeStone; // w21
  UnityEngine_Object_o *externalPayStoneNumLabel; // x20
  UILabel_o *v16; // x19
  int32_t stone; // w20
  UserExternalPaymentStoneEntity_o *v18; // [xsp+8h] [xbp-38h] BYREF
  UserGameEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49FE615 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserExternalPaymentStoneMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    byte_49FE615 = 1;
  }
  entity = 0LL;
  v18 = 0LL;
  if ( UserGameMaster__TryGetSelfUserGame(&entity, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserExternalPaymentStoneMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !Master_object )
      goto LABEL_36;
    if ( !UserExternalPaymentStoneMaster__TryGetEntity(
            (UserExternalPaymentStoneMaster_o *)Master_object,
            &v18,
            UserId,
            4,
            0LL) )
      return;
    payStoneNumLabel = (UnityEngine_Object_o *)this->fields.payStoneNumLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UserId = UnityEngine_Object__op_Inequality(payStoneNumLabel, 0LL, 0LL);
    if ( (UserId & 1) != 0 )
    {
      if ( !entity || !v18 )
        goto LABEL_36;
      v10 = this->fields.payStoneNumLabel;
      v11 = entity->fields.chargeStone - v18->fields.stone;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      UserId = (int64_t)LocalizationManager__GetUnitInfo(v11, 0LL);
      if ( !v10 )
        goto LABEL_36;
      UILabel__set_text(v10, (System_String_o *)UserId, 0LL);
    }
    freeStoneNumLabel = (UnityEngine_Object_o *)this->fields.freeStoneNumLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UserId = UnityEngine_Object__op_Inequality(freeStoneNumLabel, 0LL, 0LL);
    if ( (UserId & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_36;
      v13 = this->fields.freeStoneNumLabel;
      freeStone = entity->fields.freeStone;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      UserId = (int64_t)LocalizationManager__GetUnitInfo(freeStone, 0LL);
      if ( !v13 )
        goto LABEL_36;
      UILabel__set_text(v13, (System_String_o *)UserId, 0LL);
    }
    externalPayStoneNumLabel = (UnityEngine_Object_o *)this->fields.externalPayStoneNumLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UserId = UnityEngine_Object__op_Inequality(externalPayStoneNumLabel, 0LL, 0LL);
    if ( (UserId & 1) != 0 )
    {
      if ( v18 )
      {
        v16 = this->fields.externalPayStoneNumLabel;
        stone = v18->fields.stone;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        UserId = (int64_t)LocalizationManager__GetUnitInfo(stone, 0LL);
        if ( v16 )
        {
          UILabel__set_text(v16, (System_String_o *)UserId, 0LL);
          return;
        }
      }
LABEL_36:
      sub_1B64324(UserId);
    }
  }
}


float __fastcall ItemLinkInfoDetailObject__get_Height(ItemLinkInfoDetailObject_o *this, const MethodInfo *method)
{
  struct UIWidget_o *widget; // x8

  widget = this->fields.widget;
  if ( !widget )
    sub_1B64324(this);
  return (float)widget->fields.mHeight;
}