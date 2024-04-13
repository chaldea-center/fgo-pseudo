void __fastcall UserItemListViewItemDraw___ctor(UserItemListViewItemDraw_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Array_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_RuntimeFieldHandle_o v15; // 0:w1.4

  if ( (byte_42E7171 & 1) == 0 )
  {
    sub_B5D5C4(&float___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__422B3C7B2DE8568542AA18DEE65F4FCAC64982394C5ABCF41D2B33D3EBFE51FD,
      v5,
      v6,
      v7);
    byte_42E7171 = 1;
  }
  v8 = (System_Array_o *)sub_B5D5DC(float___TypeInfo, 5LL);
  v15.fields.value = Field__PrivateImplementationDetails__422B3C7B2DE8568542AA18DEE65F4FCAC64982394C5ABCF41D2B33D3EBFE51FD;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v8, v15, 0LL);
  this->fields.enableTimePos = (struct System_Single_array *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.enableTimePos,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall UserItemListViewItemDraw__SetEnableTime(UserItemListViewItemDraw_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int64_t dispEndTime; // x20
  System_String_o *RestTime2; // x20
  System_String_o *v22; // x0
  bool v23; // w0
  UILabel_o *stringLabel; // x22
  bool v25; // w21
  __int64 *v26; // x8
  System_String_o *gameObject; // x0
  __int64 v28; // x1
  UILabel_o *enableTimeLabel; // x22
  struct UILabel_o *v30; // x8
  struct System_String_o *mText; // x9
  struct System_Single_array *enableTimePos; // x8
  __int64 m_stringLength; // x9
  int64_t v34; // x20
  UserItemListViewItemDraw_o *Time; // x0
  const MethodInfo *v36; // x3
  __int64 v37; // x0

  if ( (byte_42E7170 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_13568/*"TIME_REST_USER_ITEM"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_13529/*"TIME_OVER_USER_ITEM"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_13530/*"TIME_OVER_WORD"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_13536/*"TIME_REST2_TIMEOVER"*/, v17, v18, v19);
    byte_42E7170 = 1;
  }
  dispEndTime = this->fields.dispEndTime;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  RestTime2 = LocalizationManager__GetRestTime2(dispEndTime, -1LL, 0LL);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_13536/*"TIME_REST2_TIMEOVER"*/, 0LL);
  v23 = System_String__op_Equality(RestTime2, v22, 0LL);
  stringLabel = this->fields.stringLabel;
  v25 = v23;
  if ( v23 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v26 = &StringLiteral_13529/*"TIME_OVER_USER_ITEM"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v26 = &StringLiteral_13568/*"TIME_REST_USER_ITEM"*/;
  }
  gameObject = LocalizationManager__Get((System_String_o *)*v26, 0LL);
  if ( !stringLabel )
    goto LABEL_31;
  UILabel__set_text(stringLabel, gameObject, 0LL);
  enableTimeLabel = this->fields.enableTimeLabel;
  if ( v25 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_13530/*"TIME_OVER_WORD"*/, 0LL);
    RestTime2 = gameObject;
  }
  if ( !enableTimeLabel
    || (UILabel__set_text(enableTimeLabel, RestTime2, 0LL),
        (gameObject = (System_String_o *)this->fields.stringLabel) == 0LL)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)gameObject,
                                          0LL),
        (v30 = this->fields.enableTimeLabel) == 0LL)
    || (mText = v30->fields.mText) == 0LL
    || (enableTimePos = this->fields.enableTimePos) == 0LL )
  {
LABEL_31:
    sub_B5D69C(gameObject, v28);
  }
  m_stringLength = mText->fields.m_stringLength;
  if ( (unsigned int)m_stringLength >= enableTimePos->max_length )
  {
    v37 = sub_B5D6C8(gameObject);
    sub_B5D668(v37, 0LL);
  }
  GameObjectExtensions__SetLocalPositionX(
    (UnityEngine_GameObject_o *)gameObject,
    enableTimePos->m_Items[m_stringLength + 1],
    0LL);
  v34 = this->fields.dispEndTime;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = (UserItemListViewItemDraw_o *)NetworkManager__getTime(0LL);
  UserItemListViewItemDraw__SetRemainTimeColor(Time, v34 - (_QWORD)Time, this->fields.enableTimeLabel, v36);
}


void __fastcall UserItemListViewItemDraw__SetInput(
        UserItemListViewItemDraw_o *this,
        UserItemListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  UnityEngine_Object_o *baseButton; // x22
  __int64 v17; // x1
  UnityEngine_Component_o *Component_WebViewObject; // x0
  int64_t itemLostTime; // x20
  int64_t v20; // x21
  const MethodInfo *v21; // x1

  if ( (byte_42E716F & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)item, isInput, method);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_12956/*"SetEnableTime"*/, v13, v14, v15);
    byte_42E716F = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    Component_WebViewObject = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !Component_WebViewObject )
      goto LABEL_27;
    Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                           Component_WebViewObject,
                                                           (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !Component_WebViewObject )
      goto LABEL_27;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, isInput, 0LL);
    Component_WebViewObject = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !Component_WebViewObject )
      goto LABEL_27;
    ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))Component_WebViewObject->klass[1]._1.implementedInterfaces)(
      Component_WebViewObject,
      0LL,
      1LL,
      Component_WebViewObject->klass[1]._1.interfaceOffsets);
  }
  if ( !item )
    return;
  itemLostTime = item->fields.itemLostTime;
  this->fields.dispEndTime = itemLostTime;
  Component_WebViewObject = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Component_WebViewObject = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
    itemLostTime = this->fields.dispEndTime;
  }
  if ( !this->fields.enableTimeLabel
    || (v20 = *(int *)(*(_QWORD *)&Component_WebViewObject[7].fields.m_CachedPtr + 476LL),
        (Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this->fields.enableTimeLabel,
                                                                0LL)) == 0LL) )
  {
LABEL_27:
    sub_B5D69C(Component_WebViewObject, v17);
  }
  if ( itemLostTime < v20 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, 1, 0LL);
    Component_WebViewObject = (UnityEngine_Component_o *)this->fields.stringLabel;
    if ( Component_WebViewObject )
    {
      Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             Component_WebViewObject,
                                                             0LL);
      if ( Component_WebViewObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, 1, 0LL);
        UserItemListViewItemDraw__SetEnableTime(this, v21);
        if ( !UnityEngine_MonoBehaviour__IsInvoking_35614496(
                (UnityEngine_MonoBehaviour_o *)this,
                (System_String_o *)StringLiteral_12956/*"SetEnableTime"*/,
                0LL) )
          UnityEngine_MonoBehaviour__InvokeRepeating(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_12956/*"SetEnableTime"*/,
            1.0,
            1.0,
            0LL);
        return;
      }
    }
    goto LABEL_27;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, 0, 0LL);
  Component_WebViewObject = (UnityEngine_Component_o *)this->fields.stringLabel;
  if ( !Component_WebViewObject )
    goto LABEL_27;
  Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                         Component_WebViewObject,
                                                         0LL);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, 0, 0LL);
  if ( UnityEngine_MonoBehaviour__IsInvoking_35614496(
         (UnityEngine_MonoBehaviour_o *)this,
         (System_String_o *)StringLiteral_12956/*"SetEnableTime"*/,
         0LL) )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_35614336(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12956/*"SetEnableTime"*/,
      0LL);
  }
}


void __fastcall UserItemListViewItemDraw__SetItem(
        UserItemListViewItemDraw_o *this,
        UserItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  ItemIconComponent_o *itemIconInfo; // x0
  UILabel_o *numTextLabel; // x21
  int32_t itemNum; // w22
  UnityEngine_GameObject_o *gameObject; // x21
  System_Action_int__o *v50; // x22
  UILabel_o *v51; // x21
  int32_t v52; // w22
  System_String_o **v53; // x8
  System_String_o *v54; // x22
  System_String_o *v55; // x22
  Il2CppObject *v56; // x23
  Il2CppObject *v57; // x0
  int64_t itemLostTime; // x20
  int64_t v59; // x21
  const MethodInfo *v60; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x19
  int32_t MaxNum; // [xsp+0h] [xbp-40h] BYREF
  int32_t v63; // [xsp+4h] [xbp-3Ch] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E716E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)item, mode, method);
    sub_B5D5C4(&System_Action_int__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMaster_ItemMaster___, v13, v14, v15);
    sub_B5D5C4(&DataManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v19, v20, v21);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, v22, v23, v24);
    sub_B5D5C4(&int_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_UserItemListViewItemDraw__SetItem_b__10_0__, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_14870/*"UNIT_INFO_LIMITED"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_12956/*"SetEnableTime"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_14871/*"UNIT_INFO_LIMITED_MAX"*/, v43, v44, v45);
    byte_42E716E = 1;
  }
  entity = 0LL;
  if ( item && mode )
  {
    itemIconInfo = this->fields.itemIconInfo;
    if ( !itemIconInfo )
      goto LABEL_51;
    ItemIconComponent__SetCombineItem(itemIconInfo, item->fields.itemId, -1, 0LL);
    itemIconInfo = (ItemIconComponent_o *)this->fields.nameTextLabel;
    if ( !itemIconInfo )
      goto LABEL_51;
    UILabel__set_text((UILabel_o *)itemIconInfo, item->fields.itemName, 0LL);
    numTextLabel = this->fields.numTextLabel;
    itemNum = item->fields.itemNum;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    itemIconInfo = (ItemIconComponent_o *)LocalizationManager__GetUnitInfo(itemNum, 0LL);
    if ( !numTextLabel )
      goto LABEL_51;
    UILabel__set_text(numTextLabel, (System_String_o *)itemIconInfo, 0LL);
    if ( item->fields.itemType == 2 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v50 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v50,
        (Il2CppObject *)this,
        Method_UserItemListViewItemDraw__SetItem_b__10_0__,
        (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
      StoneCountRefreshComponent__AttachToGameObject(gameObject, v50, 1, 0LL);
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    itemIconInfo = (ItemIconComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !itemIconInfo )
      goto LABEL_51;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)itemIconInfo,
           &entity,
           item->fields.itemId,
           (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    {
      itemIconInfo = (ItemIconComponent_o *)entity;
      if ( !entity )
        goto LABEL_51;
      if ( ItemEntity__GetMaxNum((ItemEntity_o *)entity, 0LL) )
      {
        itemIconInfo = (ItemIconComponent_o *)entity;
        if ( !entity )
          goto LABEL_51;
        v51 = this->fields.numTextLabel;
        v52 = item->fields.itemNum;
        if ( v52 >= ItemEntity__GetMaxNum((ItemEntity_o *)entity, 0LL) )
          v53 = (System_String_o **)&StringLiteral_14871/*"UNIT_INFO_LIMITED_MAX"*/;
        else
          v53 = (System_String_o **)&StringLiteral_14870/*"UNIT_INFO_LIMITED"*/;
        v54 = *v53;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v55 = LocalizationManager__Get(v54, 0LL);
        v63 = item->fields.itemNum;
        itemIconInfo = (ItemIconComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v63);
        if ( !entity )
          goto LABEL_51;
        v56 = (Il2CppObject *)itemIconInfo;
        MaxNum = ItemEntity__GetMaxNum((ItemEntity_o *)entity, 0LL);
        v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxNum);
        itemIconInfo = (ItemIconComponent_o *)System_String__Format_44573324(v55, v56, v57, 0LL);
        if ( !v51 )
          goto LABEL_51;
        UILabel__set_text(v51, (System_String_o *)itemIconInfo, 0LL);
      }
    }
    itemLostTime = item->fields.itemLostTime;
    this->fields.dispEndTime = itemLostTime;
    itemIconInfo = (ItemIconComponent_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      itemIconInfo = (ItemIconComponent_o *)BalanceConfig_TypeInfo;
      itemLostTime = this->fields.dispEndTime;
    }
    if ( !this->fields.enableTimeLabel )
      goto LABEL_51;
    v59 = *((int *)&itemIconInfo[1].fields.frameSprite->fields.mFillCenter + 1);
    itemIconInfo = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)this->fields.enableTimeLabel,
                                            0LL);
    if ( !itemIconInfo )
      goto LABEL_51;
    if ( itemLostTime <= v59 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIconInfo, 1, 0LL);
      itemIconInfo = (ItemIconComponent_o *)this->fields.stringLabel;
      if ( !itemIconInfo )
        goto LABEL_51;
      itemIconInfo = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)itemIconInfo,
                                              0LL);
      if ( !itemIconInfo )
        goto LABEL_51;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIconInfo, 1, 0LL);
      UserItemListViewItemDraw__SetEnableTime(this, v60);
      UnityEngine_MonoBehaviour__InvokeRepeating(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_12956/*"SetEnableTime"*/,
        1.0,
        1.0,
        0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIconInfo, 0, 0LL);
      itemIconInfo = (ItemIconComponent_o *)this->fields.stringLabel;
      if ( !itemIconInfo )
        goto LABEL_51;
      itemIconInfo = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)itemIconInfo,
                                              0LL);
      if ( !itemIconInfo )
        goto LABEL_51;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIconInfo, 0, 0LL);
    }
    itemIconInfo = (ItemIconComponent_o *)this->fields.iconImageSprite;
    if ( !itemIconInfo )
      goto LABEL_51;
    itemIconInfo = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)itemIconInfo,
                                            0LL);
    if ( !itemIconInfo )
      goto LABEL_51;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)itemIconInfo,
                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    itemIconInfo = (ItemIconComponent_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
    if ( ((unsigned __int8)itemIconInfo & 1) != 0 )
    {
      if ( Component_srcLineSprite )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 0, 0LL);
        return;
      }
LABEL_51:
      sub_B5D69C(itemIconInfo, item);
    }
  }
}


void __fastcall UserItemListViewItemDraw__SetRemainTimeColor(
        UserItemListViewItemDraw_o *this,
        int64_t remainTime,
        UILabel_o *label,
        const MethodInfo *method)
{
  float v4; // s4
  float v5; // s5
  float v6; // s6
  float v7; // s7
  __int64 v10; // x0
  __int64 v11; // x1
  float v12; // s4
  float v13; // s5
  float v14; // s6
  float v15; // s7
  UnityEngine_Color_o v16; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v17.fields.b = 0.0;
  v17.fields.r = 255.0;
  v17.fields.g = 255.0;
  v17.fields.a = 255.0;
  *(_QWORD *)&v16.fields.r = 0LL;
  *(_QWORD *)&v16.fields.b = 0LL;
  UnityEngine_Color___ctor(v17, v4, v5, v6, v7, (const MethodInfo *)&v16);
  if ( !label )
    sub_B5D69C(v10, v11);
  UIWidget__set_color((UIWidget_o *)label, v16, 0LL);
  if ( (remainTime & 0x8000000000000000LL) == 0
    && (int)(remainTime / 0x15180uLL) <= 0
    && (int)(remainTime / 0xE10uLL) <= 59 )
  {
    v18.fields.r = 230.0;
    v18.fields.g = 0.0;
    v18.fields.b = 0.0;
    v18.fields.a = 255.0;
    v16 = (UnityEngine_Color_o)0LL;
    UnityEngine_Color___ctor(v18, v12, v13, v14, v15, (const MethodInfo *)&v16);
    UIWidget__set_color((UIWidget_o *)label, v16, 0LL);
  }
}


void __fastcall UserItemListViewItemDraw___SetItem_b__10_0(
        UserItemListViewItemDraw_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UILabel_o *numTextLabel; // x20
  System_String_o *UnitInfo; // x0
  __int64 v8; // x1

  if ( (byte_42E7172 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, stoneCount, (_DWORD)method, v3);
    byte_42E7172 = 1;
  }
  numTextLabel = this->fields.numTextLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0LL);
  if ( !numTextLabel )
    sub_B5D69C(UnitInfo, v8);
  UILabel__set_text(numTextLabel, UnitInfo, 0LL);
}