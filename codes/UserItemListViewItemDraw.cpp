void __fastcall UserItemListViewItemDraw___ctor(UserItemListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Array_o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_RuntimeFieldHandle_o v11; // 0:w1.4

  if ( (byte_418700F & 1) == 0 )
  {
    sub_B2C35C(&float___TypeInfo, method);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__422B3C7B2DE8568542AA18DEE65F4FCAC64982394C5ABCF41D2B33D3EBFE51FD,
      v3);
    byte_418700F = 1;
  }
  v4 = (System_Array_o *)sub_B2C374(float___TypeInfo, 5LL);
  v11.fields.value = Field__PrivateImplementationDetails__422B3C7B2DE8568542AA18DEE65F4FCAC64982394C5ABCF41D2B33D3EBFE51FD;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v4, v11, 0LL);
  this->fields.enableTimePos = (struct System_Single_array *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.enableTimePos,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall UserItemListViewItemDraw__SetEnableTime(UserItemListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t dispEndTime; // x20
  System_String_o *RestTime2; // x20
  System_String_o *v10; // x0
  bool v11; // w0
  UILabel_o *stringLabel; // x22
  bool v13; // w21
  __int64 *v14; // x8
  System_String_o *gameObject; // x0
  __int64 v16; // x1
  UILabel_o *enableTimeLabel; // x22
  struct UILabel_o *v18; // x8
  struct System_String_o *mText; // x9
  struct System_Single_array *enableTimePos; // x8
  __int64 m_stringLength; // x9
  int64_t v22; // x20
  UserItemListViewItemDraw_o *Time; // x0
  const MethodInfo *v24; // x3
  __int64 v25; // x0

  if ( (byte_418700E & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_13412/*"TIME_REST_USER_ITEM"*/, v4);
    sub_B2C35C(&StringLiteral_13373/*"TIME_OVER_USER_ITEM"*/, v5);
    sub_B2C35C(&StringLiteral_13374/*"TIME_OVER_WORD"*/, v6);
    sub_B2C35C(&StringLiteral_13380/*"TIME_REST2_TIMEOVER"*/, v7);
    byte_418700E = 1;
  }
  dispEndTime = this->fields.dispEndTime;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  RestTime2 = LocalizationManager__GetRestTime2(dispEndTime, -1LL, 0LL);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_13380/*"TIME_REST2_TIMEOVER"*/, 0LL);
  v11 = System_String__op_Equality(RestTime2, v10, 0LL);
  stringLabel = this->fields.stringLabel;
  v13 = v11;
  if ( v11 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = &StringLiteral_13373/*"TIME_OVER_USER_ITEM"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = &StringLiteral_13412/*"TIME_REST_USER_ITEM"*/;
  }
  gameObject = LocalizationManager__Get((System_String_o *)*v14, 0LL);
  if ( !stringLabel )
    goto LABEL_31;
  UILabel__set_text(stringLabel, gameObject, 0LL);
  enableTimeLabel = this->fields.enableTimeLabel;
  if ( v13 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_13374/*"TIME_OVER_WORD"*/, 0LL);
    RestTime2 = gameObject;
  }
  if ( !enableTimeLabel
    || (UILabel__set_text(enableTimeLabel, RestTime2, 0LL),
        (gameObject = (System_String_o *)this->fields.stringLabel) == 0LL)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)gameObject,
                                          0LL),
        (v18 = this->fields.enableTimeLabel) == 0LL)
    || (mText = v18->fields.mText) == 0LL
    || (enableTimePos = this->fields.enableTimePos) == 0LL )
  {
LABEL_31:
    sub_B2C434(gameObject, v16);
  }
  m_stringLength = mText->fields.m_stringLength;
  if ( (unsigned int)m_stringLength >= enableTimePos->max_length )
  {
    v25 = sub_B2C460(gameObject);
    sub_B2C400(v25, 0LL);
  }
  GameObjectExtensions__SetLocalPositionX(
    (UnityEngine_GameObject_o *)gameObject,
    enableTimePos->m_Items[m_stringLength + 1],
    0LL);
  v22 = this->fields.dispEndTime;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = (UserItemListViewItemDraw_o *)NetworkManager__getTime(0LL);
  UserItemListViewItemDraw__SetRemainTimeColor(Time, v22 - (_QWORD)Time, this->fields.enableTimeLabel, v24);
}


void __fastcall UserItemListViewItemDraw__SetInput(
        UserItemListViewItemDraw_o *this,
        UserItemListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *baseButton; // x22
  __int64 v11; // x1
  UnityEngine_Component_o *Component_WebViewObject; // x0
  int64_t itemLostTime; // x20
  int64_t v14; // x21
  const MethodInfo *v15; // x1

  if ( (byte_418700D & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, item);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_12800/*"SetEnableTime"*/, v9);
    byte_418700D = 1;
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
                                                           (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
    || (v14 = *(int *)(*(_QWORD *)&Component_WebViewObject[7].fields.m_CachedPtr + 476LL),
        (Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this->fields.enableTimeLabel,
                                                                0LL)) == 0LL) )
  {
LABEL_27:
    sub_B2C434(Component_WebViewObject, v11);
  }
  if ( itemLostTime < v14 )
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
        UserItemListViewItemDraw__SetEnableTime(this, v15);
        if ( !UnityEngine_MonoBehaviour__IsInvoking_35309156(
                (UnityEngine_MonoBehaviour_o *)this,
                (System_String_o *)StringLiteral_12800/*"SetEnableTime"*/,
                0LL) )
          UnityEngine_MonoBehaviour__InvokeRepeating(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_12800/*"SetEnableTime"*/,
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
  if ( UnityEngine_MonoBehaviour__IsInvoking_35309156(
         (UnityEngine_MonoBehaviour_o *)this,
         (System_String_o *)StringLiteral_12800/*"SetEnableTime"*/,
         0LL) )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_35308996(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12800/*"SetEnableTime"*/,
      0LL);
  }
}


void __fastcall UserItemListViewItemDraw__SetItem(
        UserItemListViewItemDraw_o *this,
        UserItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  ItemIconComponent_o *itemIconInfo; // x0
  UILabel_o *numTextLabel; // x21
  int32_t itemNum; // w22
  UnityEngine_GameObject_o *gameObject; // x21
  System_Action_int__o *v24; // x22
  UILabel_o *v25; // x21
  int32_t v26; // w22
  System_String_o **v27; // x8
  System_String_o *v28; // x22
  System_String_o *v29; // x22
  Il2CppObject *v30; // x23
  Il2CppObject *v31; // x0
  int64_t itemLostTime; // x20
  int64_t v33; // x21
  const MethodInfo *v34; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x19
  int32_t MaxNum; // [xsp+0h] [xbp-40h] BYREF
  int32_t v37; // [xsp+4h] [xbp-3Ch] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418700C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, item);
    sub_B2C35C(&System_Action_int__TypeInfo, v7);
    sub_B2C35C(&BalanceConfig_TypeInfo, v8);
    sub_B2C35C(&Method_DataManager_GetMaster_ItemMaster___, v9);
    sub_B2C35C(&DataManager_TypeInfo, v10);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v11);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, v12);
    sub_B2C35C(&int_TypeInfo, v13);
    sub_B2C35C(&LocalizationManager_TypeInfo, v14);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v15);
    sub_B2C35C(&Method_UserItemListViewItemDraw__SetItem_b__10_0__, v16);
    sub_B2C35C(&StringLiteral_14713/*"UNIT_INFO_LIMITED"*/, v17);
    sub_B2C35C(&StringLiteral_12800/*"SetEnableTime"*/, v18);
    sub_B2C35C(&StringLiteral_14714/*"UNIT_INFO_LIMITED_MAX"*/, v19);
    byte_418700C = 1;
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
      v24 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v24,
        (Il2CppObject *)this,
        Method_UserItemListViewItemDraw__SetItem_b__10_0__,
        (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
      StoneCountRefreshComponent__AttachToGameObject(gameObject, v24, 1, 0LL);
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    itemIconInfo = (ItemIconComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !itemIconInfo )
      goto LABEL_51;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)itemIconInfo,
           &entity,
           item->fields.itemId,
           (const MethodInfo_24E412C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    {
      itemIconInfo = (ItemIconComponent_o *)entity;
      if ( !entity )
        goto LABEL_51;
      if ( ItemEntity__GetMaxNum((ItemEntity_o *)entity, 0LL) )
      {
        itemIconInfo = (ItemIconComponent_o *)entity;
        if ( !entity )
          goto LABEL_51;
        v25 = this->fields.numTextLabel;
        v26 = item->fields.itemNum;
        if ( v26 >= ItemEntity__GetMaxNum((ItemEntity_o *)entity, 0LL) )
          v27 = (System_String_o **)&StringLiteral_14714/*"UNIT_INFO_LIMITED_MAX"*/;
        else
          v27 = (System_String_o **)&StringLiteral_14713/*"UNIT_INFO_LIMITED"*/;
        v28 = *v27;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v29 = LocalizationManager__Get(v28, 0LL);
        v37 = item->fields.itemNum;
        itemIconInfo = (ItemIconComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
        if ( !entity )
          goto LABEL_51;
        v30 = (Il2CppObject *)itemIconInfo;
        MaxNum = ItemEntity__GetMaxNum((ItemEntity_o *)entity, 0LL);
        v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxNum);
        itemIconInfo = (ItemIconComponent_o *)System_String__Format_44301068(v29, v30, v31, 0LL);
        if ( !v25 )
          goto LABEL_51;
        UILabel__set_text(v25, (System_String_o *)itemIconInfo, 0LL);
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
    v33 = *((int *)&itemIconInfo[1].fields.frameSprite->fields.mFillCenter + 1);
    itemIconInfo = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)this->fields.enableTimeLabel,
                                            0LL);
    if ( !itemIconInfo )
      goto LABEL_51;
    if ( itemLostTime <= v33 )
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
      UserItemListViewItemDraw__SetEnableTime(this, v34);
      UnityEngine_MonoBehaviour__InvokeRepeating(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_12800/*"SetEnableTime"*/,
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
                                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
      sub_B2C434(itemIconInfo, item);
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
    sub_B2C434(v10, v11);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewItemDraw___SetItem_b__10_0(
        UserItemListViewItemDraw_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *numTextLabel; // x20
  System_String_o *UnitInfo; // x0
  __int64 v7; // x1

  if ( (byte_4187010 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_4187010 = 1;
  }
  numTextLabel = this->fields.numTextLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0LL);
  if ( !numTextLabel )
    sub_B2C434(UnitInfo, v7);
  UILabel__set_text(numTextLabel, UnitInfo, 0LL);
}