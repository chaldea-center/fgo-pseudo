void __fastcall UserItemListViewItemDraw___ctor(UserItemListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Array_o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_RuntimeFieldHandle_o v12; // 0:w1.4

  if ( (byte_40F9719 & 1) == 0 )
  {
    sub_B16FFC(&float___TypeInfo, method);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__422B3C7B2DE8568542AA18DEE65F4FCAC64982394C5ABCF41D2B33D3EBFE51FD,
      v4);
    byte_40F9719 = 1;
  }
  v5 = (System_Array_o *)sub_B17014(float___TypeInfo, 5LL, v2);
  v12.fields.value = Field__PrivateImplementationDetails__422B3C7B2DE8568542AA18DEE65F4FCAC64982394C5ABCF41D2B33D3EBFE51FD;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v5, v12, 0LL);
  this->fields.enableTimePos = (struct System_Single_array *)v5;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.enableTimePos,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  System_String_o *v15; // x0
  UILabel_o *enableTimeLabel; // x22
  UnityEngine_Component_o *v17; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  struct UILabel_o *v21; // x8
  struct System_String_o *mText; // x9
  struct System_Single_array *enableTimePos; // x8
  __int64 m_stringLength; // x9
  int64_t v25; // x20
  UserItemListViewItemDraw_o *Time; // x0
  const MethodInfo *v27; // x3

  if ( (byte_40F9718 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_13356, v4);
    sub_B16FFC(&StringLiteral_13317, v5);
    sub_B16FFC(&StringLiteral_13318, v6);
    sub_B16FFC(&StringLiteral_13324, v7);
    byte_40F9718 = 1;
  }
  dispEndTime = this->fields.dispEndTime;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  RestTime2 = LocalizationManager__GetRestTime2(dispEndTime, -1LL, 0LL);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_13324, 0LL);
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
    v14 = &StringLiteral_13317;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = &StringLiteral_13356;
  }
  v15 = LocalizationManager__Get((System_String_o *)*v14, 0LL);
  if ( !stringLabel )
    goto LABEL_31;
  UILabel__set_text(stringLabel, v15, 0LL);
  enableTimeLabel = this->fields.enableTimeLabel;
  if ( v13 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    RestTime2 = LocalizationManager__Get((System_String_o *)StringLiteral_13318, 0LL);
  }
  if ( !enableTimeLabel
    || (UILabel__set_text(enableTimeLabel, RestTime2, 0LL),
        (v17 = (UnityEngine_Component_o *)this->fields.stringLabel) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(v17, 0LL), (v21 = this->fields.enableTimeLabel) == 0LL)
    || (mText = v21->fields.mText) == 0LL
    || (enableTimePos = this->fields.enableTimePos) == 0LL )
  {
LABEL_31:
    sub_B170D4();
  }
  m_stringLength = mText->fields.m_stringLength;
  if ( (unsigned int)m_stringLength >= enableTimePos->max_length )
  {
    sub_B17100(gameObject, v19, v20);
    sub_B170A0();
  }
  GameObjectExtensions__SetLocalPositionX(gameObject, enableTimePos->m_Items[m_stringLength + 1], 0LL);
  v25 = this->fields.dispEndTime;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = (UserItemListViewItemDraw_o *)NetworkManager__getTime(0LL);
  UserItemListViewItemDraw__SetRemainTimeColor(Time, v25 - (_QWORD)Time, this->fields.enableTimeLabel, v27);
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
  UnityEngine_Component_o *v11; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  struct UIButton_o *v13; // x0
  int64_t itemLostTime; // x20
  BalanceConfig_c *v15; // x0
  int64_t NoneExpireTime; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *stringLabel; // x0
  UnityEngine_GameObject_o *v19; // x0
  const MethodInfo *v20; // x1
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0

  if ( (byte_40F9717 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, item);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_12744, v9);
    byte_40F9717 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    v11 = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !v11 )
      goto LABEL_27;
    Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          v11,
                                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !Component_WebViewObject )
      goto LABEL_27;
    UnityEngine_Collider__set_enabled(Component_WebViewObject, isInput, 0LL);
    v13 = this->fields.baseButton;
    if ( !v13 )
      goto LABEL_27;
    ((void (__fastcall *)(struct UIButton_o *, _QWORD, __int64, Il2CppMethodPointer))v13->klass->vtable._14_SetState.method)(
      v13,
      0LL,
      1LL,
      v13->klass->vtable._15_OnClick.methodPtr);
  }
  if ( !item )
    return;
  itemLostTime = item->fields.itemLostTime;
  this->fields.dispEndTime = itemLostTime;
  v15 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
    itemLostTime = this->fields.dispEndTime;
  }
  if ( !this->fields.enableTimeLabel
    || (NoneExpireTime = v15->static_fields->NoneExpireTime,
        (gameObject = UnityEngine_Component__get_gameObject(
                        (UnityEngine_Component_o *)this->fields.enableTimeLabel,
                        0LL)) == 0LL) )
  {
LABEL_27:
    sub_B170D4();
  }
  if ( itemLostTime < NoneExpireTime )
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    stringLabel = (UnityEngine_Component_o *)this->fields.stringLabel;
    if ( stringLabel )
    {
      v19 = UnityEngine_Component__get_gameObject(stringLabel, 0LL);
      if ( v19 )
      {
        UnityEngine_GameObject__SetActive(v19, 1, 0LL);
        UserItemListViewItemDraw__SetEnableTime(this, v20);
        if ( !UnityEngine_MonoBehaviour__IsInvoking_34803724(
                (UnityEngine_MonoBehaviour_o *)this,
                (System_String_o *)StringLiteral_12744,
                0LL) )
          UnityEngine_MonoBehaviour__InvokeRepeating(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_12744,
            1.0,
            1.0,
            0LL);
        return;
      }
    }
    goto LABEL_27;
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v21 = (UnityEngine_Component_o *)this->fields.stringLabel;
  if ( !v21 )
    goto LABEL_27;
  v22 = UnityEngine_Component__get_gameObject(v21, 0LL);
  if ( !v22 )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(v22, 0, 0LL);
  if ( UnityEngine_MonoBehaviour__IsInvoking_34803724(
         (UnityEngine_MonoBehaviour_o *)this,
         (System_String_o *)StringLiteral_12744,
         0LL) )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_34803564(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12744,
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
  UILabel_o *nameTextLabel; // x0
  UILabel_o *numTextLabel; // x21
  int32_t itemNum; // w22
  System_String_o *UnitInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Action_int__o *v30; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  UILabel_o *v32; // x21
  int32_t v33; // w22
  System_String_o **v34; // x8
  System_String_o *v35; // x22
  System_String_o *v36; // x22
  __int64 v37; // x0
  Il2CppObject *v38; // x23
  Il2CppObject *v39; // x0
  System_String_o *v40; // x0
  int64_t itemLostTime; // x20
  BalanceConfig_c *v42; // x0
  int64_t NoneExpireTime; // x21
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_Component_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_Component_o *stringLabel; // x0
  UnityEngine_GameObject_o *v48; // x0
  const MethodInfo *v49; // x1
  UnityEngine_Component_o *iconImageSprite; // x0
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_Behaviour_o *Component_srcLineSprite; // x19
  int32_t MaxNum; // [xsp+0h] [xbp-40h] BYREF
  int32_t v54; // [xsp+4h] [xbp-3Ch] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F9716 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, item);
    sub_B16FFC(&System_Action_int__TypeInfo, v7);
    sub_B16FFC(&BalanceConfig_TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_ItemMaster___, v9);
    sub_B16FFC(&DataManager_TypeInfo, v10);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v11);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, v12);
    sub_B16FFC(&int_TypeInfo, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&Method_UserItemListViewItemDraw__SetItem_b__10_0__, v16);
    sub_B16FFC(&StringLiteral_14653, v17);
    sub_B16FFC(&StringLiteral_12744, v18);
    sub_B16FFC(&StringLiteral_14654, v19);
    byte_40F9716 = 1;
  }
  entity = 0LL;
  if ( item && mode )
  {
    itemIconInfo = this->fields.itemIconInfo;
    if ( !itemIconInfo )
      goto LABEL_51;
    ItemIconComponent__SetCombineItem(itemIconInfo, item->fields.itemId, -1, 0LL);
    nameTextLabel = this->fields.nameTextLabel;
    if ( !nameTextLabel )
      goto LABEL_51;
    UILabel__set_text(nameTextLabel, item->fields.itemName, 0LL);
    numTextLabel = this->fields.numTextLabel;
    itemNum = item->fields.itemNum;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    UnitInfo = LocalizationManager__GetUnitInfo(itemNum, 0LL);
    if ( !numTextLabel )
      goto LABEL_51;
    UILabel__set_text(numTextLabel, UnitInfo, 0LL);
    if ( item->fields.itemType == 2 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v30 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v26, v27, v28, v29);
      System_Action_int____ctor(
        v30,
        (Il2CppObject *)this,
        Method_UserItemListViewItemDraw__SetItem_b__10_0__,
        (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
      StoneCountRefreshComponent__AttachToGameObject(gameObject, v30, 1, 0LL);
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_51;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           Master_WarQuestSelectionMaster,
           &entity,
           item->fields.itemId,
           (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    {
      if ( !entity )
        goto LABEL_51;
      if ( ItemEntity__GetMaxNum((ItemEntity_o *)entity, 0LL) )
      {
        if ( !entity )
          goto LABEL_51;
        v32 = this->fields.numTextLabel;
        v33 = item->fields.itemNum;
        if ( v33 >= ItemEntity__GetMaxNum((ItemEntity_o *)entity, 0LL) )
          v34 = (System_String_o **)&StringLiteral_14654;
        else
          v34 = (System_String_o **)&StringLiteral_14653;
        v35 = *v34;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v36 = LocalizationManager__Get(v35, 0LL);
        v54 = item->fields.itemNum;
        v37 = j_il2cpp_value_box_0(int_TypeInfo, &v54);
        if ( !entity )
          goto LABEL_51;
        v38 = (Il2CppObject *)v37;
        MaxNum = ItemEntity__GetMaxNum((ItemEntity_o *)entity, 0LL);
        v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxNum);
        v40 = System_String__Format_43739268(v36, v38, v39, 0LL);
        if ( !v32 )
          goto LABEL_51;
        UILabel__set_text(v32, v40, 0LL);
      }
    }
    itemLostTime = item->fields.itemLostTime;
    this->fields.dispEndTime = itemLostTime;
    v42 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v42 = BalanceConfig_TypeInfo;
      itemLostTime = this->fields.dispEndTime;
    }
    if ( !this->fields.enableTimeLabel )
      goto LABEL_51;
    NoneExpireTime = v42->static_fields->NoneExpireTime;
    v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.enableTimeLabel, 0LL);
    if ( !v44 )
      goto LABEL_51;
    if ( itemLostTime <= NoneExpireTime )
    {
      UnityEngine_GameObject__SetActive(v44, 1, 0LL);
      stringLabel = (UnityEngine_Component_o *)this->fields.stringLabel;
      if ( !stringLabel )
        goto LABEL_51;
      v48 = UnityEngine_Component__get_gameObject(stringLabel, 0LL);
      if ( !v48 )
        goto LABEL_51;
      UnityEngine_GameObject__SetActive(v48, 1, 0LL);
      UserItemListViewItemDraw__SetEnableTime(this, v49);
      UnityEngine_MonoBehaviour__InvokeRepeating(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_12744,
        1.0,
        1.0,
        0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive(v44, 0, 0LL);
      v45 = (UnityEngine_Component_o *)this->fields.stringLabel;
      if ( !v45 )
        goto LABEL_51;
      v46 = UnityEngine_Component__get_gameObject(v45, 0LL);
      if ( !v46 )
        goto LABEL_51;
      UnityEngine_GameObject__SetActive(v46, 0, 0LL);
    }
    iconImageSprite = (UnityEngine_Component_o *)this->fields.iconImageSprite;
    if ( !iconImageSprite )
      goto LABEL_51;
    v51 = UnityEngine_Component__get_gameObject(iconImageSprite, 0LL);
    if ( !v51 )
      goto LABEL_51;
    Component_srcLineSprite = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v51,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      if ( Component_srcLineSprite )
      {
        UnityEngine_Behaviour__set_enabled(Component_srcLineSprite, 0, 0LL);
        return;
      }
LABEL_51:
      sub_B170D4();
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
  float v10; // s4
  float v11; // s5
  float v12; // s6
  float v13; // s7
  UnityEngine_Color_o v14; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v15.fields.b = 0.0;
  v15.fields.r = 255.0;
  v15.fields.g = 255.0;
  v15.fields.a = 255.0;
  *(_QWORD *)&v14.fields.r = 0LL;
  *(_QWORD *)&v14.fields.b = 0LL;
  UnityEngine_Color___ctor(v15, v4, v5, v6, v7, (const MethodInfo *)&v14);
  if ( !label )
    sub_B170D4();
  UIWidget__set_color((UIWidget_o *)label, v14, 0LL);
  if ( (remainTime & 0x8000000000000000LL) == 0
    && (int)(remainTime / 0x15180uLL) <= 0
    && (int)(remainTime / 0xE10uLL) <= 59 )
  {
    v16.fields.r = 230.0;
    v16.fields.g = 0.0;
    v16.fields.b = 0.0;
    v16.fields.a = 255.0;
    v14 = (UnityEngine_Color_o)0LL;
    UnityEngine_Color___ctor(v16, v10, v11, v12, v13, (const MethodInfo *)&v14);
    UIWidget__set_color((UIWidget_o *)label, v14, 0LL);
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

  if ( (byte_40F971A & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_40F971A = 1;
  }
  numTextLabel = this->fields.numTextLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0LL);
  if ( !numTextLabel )
    sub_B170D4();
  UILabel__set_text(numTextLabel, UnitInfo, 0LL);
}