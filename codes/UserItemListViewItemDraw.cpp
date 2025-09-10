void UserItemListViewItemDraw___ctor(UserItemListViewItemDraw_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x0
  System_RuntimeFieldHandle_o v4; // x1
  struct System_Single_array *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C223A2 & 1) == 0 )
  {
    sub_1C2D490(&float___TypeInfo);
    sub_1C2D490(&Field__PrivateImplementationDetails__422B3C7B2DE8568542AA18DEE65F4FCAC64982394C5ABCF41D2B33D3EBFE51FD);
    byte_4C223A2 = 1;
  }
  v3 = (System_Array_o *)sub_1C2D538(float___TypeInfo, 5);
  v4.fields.value = Field__PrivateImplementationDetails__422B3C7B2DE8568542AA18DEE65F4FCAC64982394C5ABCF41D2B33D3EBFE51FD;
  v5 = (struct System_Single_array *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64158640(v3, v4, 0);
  this->fields.enableTimePos = v5;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.enableTimePos, (int32_t)v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UserItemListViewItemDraw__SetEnableTime(UserItemListViewItemDraw_o *this, const MethodInfo *method)
{
  int64_t dispEndTime; // x20
  System_String_o *RestTime2; // x20
  System_String_o *v5; // x0
  bool v6; // w0
  UILabel_o *stringLabel; // x22
  bool v8; // w21
  System_String_o **v9; // x8
  System_String_o *gameObject; // x0
  __int64 v11; // x1
  UILabel_o *enableTimeLabel; // x22
  __int64 v13; // x2
  struct UILabel_o *v14; // x8
  struct System_String_o *mText; // x9
  struct System_Single_array *enableTimePos; // x8
  __int64 stringLength; // x9
  int64_t v18; // x20
  UserItemListViewItemDraw_o *Time; // x0
  const MethodInfo *v20; // x3

  if ( (byte_4C223A1 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_13436/*"TIME_REST_USER_ITEM"*/);
    sub_1C2D490(&StringLiteral_13392/*"TIME_OVER_USER_ITEM"*/);
    sub_1C2D490(&StringLiteral_13393/*"TIME_OVER_WORD"*/);
    sub_1C2D490(&StringLiteral_13399/*"TIME_REST2_TIMEOVER"*/);
    byte_4C223A1 = 1;
  }
  dispEndTime = this->fields.dispEndTime;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime2 = LocalizationManager__GetRestTime2(dispEndTime, -1, 0);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13399/*"TIME_REST2_TIMEOVER"*/, 0);
  v6 = System_String__op_Equality(RestTime2, v5, 0);
  stringLabel = this->fields.stringLabel;
  v8 = v6;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v8 )
    v9 = (System_String_o **)&StringLiteral_13392/*"TIME_OVER_USER_ITEM"*/;
  else
    v9 = (System_String_o **)&StringLiteral_13436/*"TIME_REST_USER_ITEM"*/;
  gameObject = LocalizationManager__Get(*v9, 0);
  if ( !stringLabel )
    goto LABEL_24;
  UILabel__set_text(stringLabel, gameObject, 0);
  enableTimeLabel = this->fields.enableTimeLabel;
  if ( v8 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_13393/*"TIME_OVER_WORD"*/, 0);
    RestTime2 = gameObject;
  }
  if ( !enableTimeLabel
    || (UILabel__set_text(enableTimeLabel, RestTime2, 0), (gameObject = (System_String_o *)this->fields.stringLabel) == 0)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0),
        (v14 = this->fields.enableTimeLabel) == 0)
    || (mText = v14->fields.mText) == 0
    || (enableTimePos = this->fields.enableTimePos) == 0 )
  {
LABEL_24:
    sub_1C2D6EC(gameObject, v11);
  }
  stringLength = mText->fields._stringLength;
  if ( (unsigned int)stringLength >= LODWORD(enableTimePos->max_length) )
    sub_1C2D6F4(gameObject, v11, v13);
  GameObjectExtensions__SetLocalPositionX(
    (UnityEngine_GameObject_o *)gameObject,
    enableTimePos->m_Items[stringLength],
    0);
  v18 = this->fields.dispEndTime;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (UserItemListViewItemDraw_o *)NetworkManager__getTime(0);
  UserItemListViewItemDraw__SetRemainTimeColor(Time, v18 - (_QWORD)Time, this->fields.enableTimeLabel, v20);
}


void UserItemListViewItemDraw__SetInput(
        UserItemListViewItemDraw_o *this,
        UserItemListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  UnityEngine_Component_o *Component_object; // x0
  int64_t itemLostTime; // x20
  int64_t v11; // x21
  const MethodInfo *v12; // x1

  if ( (byte_4C223A0 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_12790/*"SetEnableTime"*/);
    byte_4C223A0 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !Component_object )
      goto LABEL_25;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    Component_object,
                                                    (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !Component_object )
      goto LABEL_25;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0);
    Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !Component_object )
      goto LABEL_25;
    ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))Component_object->klass[1]._1.nestedTypes)(
      Component_object,
      0,
      1,
      Component_object->klass[1]._1.implementedInterfaces);
  }
  if ( !item )
    return;
  itemLostTime = item->fields.itemLostTime;
  this->fields.dispEndTime = itemLostTime;
  Component_object = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Component_object = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
    itemLostTime = this->fields.dispEndTime;
  }
  if ( !this->fields.enableTimeLabel
    || (v11 = *(int *)(Component_object[7].fields.m_CachedPtr + 528),
        (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this->fields.enableTimeLabel,
                                                         0)) == 0) )
  {
LABEL_25:
    sub_1C2D6EC(Component_object, v8);
  }
  if ( itemLostTime < v11 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
    Component_object = (UnityEngine_Component_o *)this->fields.stringLabel;
    if ( Component_object )
    {
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
      if ( Component_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
        UserItemListViewItemDraw__SetEnableTime(this, v12);
        if ( !UnityEngine_MonoBehaviour__IsInvoking_71148720(
                (UnityEngine_MonoBehaviour_o *)this,
                (System_String_o *)StringLiteral_12790/*"SetEnableTime"*/,
                0) )
          UnityEngine_MonoBehaviour__InvokeRepeating(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_12790/*"SetEnableTime"*/,
            1.0,
            1.0,
            0);
        return;
      }
    }
    goto LABEL_25;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0);
  Component_object = (UnityEngine_Component_o *)this->fields.stringLabel;
  if ( !Component_object )
    goto LABEL_25;
  Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
  if ( !Component_object )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0);
  if ( UnityEngine_MonoBehaviour__IsInvoking_71148720(
         (UnityEngine_MonoBehaviour_o *)this,
         (System_String_o *)StringLiteral_12790/*"SetEnableTime"*/,
         0) )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_71148584(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12790/*"SetEnableTime"*/,
      0);
  }
}


void UserItemListViewItemDraw__SetItem(
        UserItemListViewItemDraw_o *this,
        UserItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 itemIconInfo; // x0
  UILabel_o *numTextLabel; // x21
  int32_t itemNum; // w22
  UnityEngine_GameObject_o *gameObject; // x21
  System_Action_int__o *v11; // x22
  UILabel_o *v12; // x21
  int32_t v13; // w22
  System_String_o **v14; // x8
  System_String_o *v15; // x22
  System_String_o *v16; // x22
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x23
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x0
  int64_t itemLostTime; // x20
  int64_t v26; // x21
  const MethodInfo *v27; // x1
  Il2CppObject *Component_object; // x19
  int32_t MaxNum; // [xsp+8h] [xbp-48h] BYREF
  int32_t v30; // [xsp+Ch] [xbp-44h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C2239F & 1) == 0 )
  {
    sub_1C2D490(&System_Action_int__TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_UserItemListViewItemDraw__SetItem_b__10_0__);
    sub_1C2D490(&StringLiteral_14810/*"UNIT_INFO_LIMITED"*/);
    sub_1C2D490(&StringLiteral_12790/*"SetEnableTime"*/);
    sub_1C2D490(&StringLiteral_14811/*"UNIT_INFO_LIMITED_MAX"*/);
    byte_4C2239F = 1;
  }
  entity = 0;
  if ( item && mode )
  {
    itemIconInfo = (__int64)this->fields.itemIconInfo;
    if ( !itemIconInfo )
      goto LABEL_46;
    ItemIconComponent__SetCombineItem((ItemIconComponent_o *)itemIconInfo, item->fields.itemId, -1, 0);
    itemIconInfo = (__int64)this->fields.nameTextLabel;
    if ( !itemIconInfo )
      goto LABEL_46;
    UILabel__set_text((UILabel_o *)itemIconInfo, item->fields.itemName, 0);
    numTextLabel = this->fields.numTextLabel;
    itemNum = item->fields.itemNum;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    itemIconInfo = (__int64)LocalizationManager__GetUnitInfo(itemNum, 0);
    if ( !numTextLabel )
      goto LABEL_46;
    UILabel__set_text(numTextLabel, (System_String_o *)itemIconInfo, 0);
    if ( item->fields.itemType == 2 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v11 = (System_Action_int__o *)sub_1C2D6DC(System_Action_int__TypeInfo);
      System_Action_int____ctor(v11, (Il2CppObject *)this, Method_UserItemListViewItemDraw__SetItem_b__10_0__, 0);
      StoneCountRefreshComponent__AttachToGameObject(gameObject, v11, 1, 0);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    itemIconInfo = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !itemIconInfo )
      goto LABEL_46;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)itemIconInfo,
           &entity,
           item->fields.itemId,
           (const MethodInfo_3387DE4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    {
      itemIconInfo = (__int64)entity;
      if ( !entity )
        goto LABEL_46;
      if ( ItemEntity__GetMaxNum((ItemEntity_o *)entity, 0) )
      {
        itemIconInfo = (__int64)entity;
        if ( !entity )
          goto LABEL_46;
        v12 = this->fields.numTextLabel;
        v13 = item->fields.itemNum;
        if ( v13 >= ItemEntity__GetMaxNum((ItemEntity_o *)entity, 0) )
          v14 = (System_String_o **)&StringLiteral_14811/*"UNIT_INFO_LIMITED_MAX"*/;
        else
          v14 = (System_String_o **)&StringLiteral_14810/*"UNIT_INFO_LIMITED"*/;
        v15 = *v14;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v16 = LocalizationManager__Get(v15, 0);
        v30 = item->fields.itemNum;
        itemIconInfo = j_il2cpp_value_box_0(int_TypeInfo, &v30, v17, v18, v19);
        if ( !entity )
          goto LABEL_46;
        v20 = (Il2CppObject *)itemIconInfo;
        MaxNum = ItemEntity__GetMaxNum((ItemEntity_o *)entity, 0);
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxNum, v21, v22, v23);
        itemIconInfo = (__int64)System_String__Format_63499156(v16, v20, v24, 0);
        if ( !v12 )
          goto LABEL_46;
        UILabel__set_text(v12, (System_String_o *)itemIconInfo, 0);
      }
    }
    itemLostTime = item->fields.itemLostTime;
    this->fields.dispEndTime = itemLostTime;
    itemIconInfo = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      itemIconInfo = (__int64)BalanceConfig_TypeInfo;
      itemLostTime = this->fields.dispEndTime;
    }
    if ( !this->fields.enableTimeLabel )
      goto LABEL_46;
    v26 = *(int *)(*(_QWORD *)(itemIconInfo + 184) + 528LL);
    itemIconInfo = (__int64)UnityEngine_Component__get_gameObject(
                              (UnityEngine_Component_o *)this->fields.enableTimeLabel,
                              0);
    if ( !itemIconInfo )
      goto LABEL_46;
    if ( itemLostTime <= v26 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIconInfo, 1, 0);
      itemIconInfo = (__int64)this->fields.stringLabel;
      if ( !itemIconInfo )
        goto LABEL_46;
      itemIconInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIconInfo, 0);
      if ( !itemIconInfo )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIconInfo, 1, 0);
      UserItemListViewItemDraw__SetEnableTime(this, v27);
      UnityEngine_MonoBehaviour__InvokeRepeating(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_12790/*"SetEnableTime"*/,
        1.0,
        1.0,
        0);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIconInfo, 0, 0);
      itemIconInfo = (__int64)this->fields.stringLabel;
      if ( !itemIconInfo )
        goto LABEL_46;
      itemIconInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIconInfo, 0);
      if ( !itemIconInfo )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIconInfo, 0, 0);
    }
    itemIconInfo = (__int64)this->fields.iconImageSprite;
    if ( !itemIconInfo )
      goto LABEL_46;
    itemIconInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIconInfo, 0);
    if ( !itemIconInfo )
      goto LABEL_46;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)itemIconInfo,
                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    itemIconInfo = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( (itemIconInfo & 1) != 0 )
    {
      if ( Component_object )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
        return;
      }
LABEL_46:
      sub_1C2D6EC(itemIconInfo, item);
    }
  }
}


void UserItemListViewItemDraw__SetRemainTimeColor(
        UserItemListViewItemDraw_o *this,
        int64_t remainTime,
        UILabel_o *label,
        const MethodInfo *method)
{
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !label )
    sub_1C2D6EC(this, remainTime);
  v6.fields.r = 255.0;
  v6.fields.b = 0.0;
  v6.fields.g = 255.0;
  v6.fields.a = 255.0;
  UIWidget__set_color((UIWidget_o *)label, v6, 0);
  if ( (remainTime & 0x8000000000000000LL) == 0
    && (int)(remainTime / 0x15180uLL) <= 0
    && (int)(remainTime / 0xE10uLL) <= 59 )
  {
    v7.fields.g = 0.0;
    v7.fields.b = 0.0;
    v7.fields.r = 230.0;
    v7.fields.a = 255.0;
    UIWidget__set_color((UIWidget_o *)label, v7, 0);
  }
}


void UserItemListViewItemDraw___SetItem_b__10_0(
        UserItemListViewItemDraw_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *numTextLabel; // x20
  System_String_o *UnitInfo; // x0
  __int64 v7; // x1

  if ( (byte_4C223A3 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    byte_4C223A3 = 1;
  }
  numTextLabel = this->fields.numTextLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0);
  if ( !numTextLabel )
    sub_1C2D6EC(UnitInfo, v7);
  UILabel__set_text(numTextLabel, UnitInfo, 0);
}