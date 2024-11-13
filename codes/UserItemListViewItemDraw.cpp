void __fastcall UserItemListViewItemDraw___ctor(UserItemListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Array_o *v6; // x0
  struct System_Single_array *v7; // x20
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_4B11687 & 1) == 0 )
  {
    sub_1BCA7E0(&float___TypeInfo, method, v2);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__422B3C7B2DE8568542AA18DEE65F4FCAC64982394C5ABCF41D2B33D3EBFE51FD,
      v4,
      v5);
    byte_4B11687 = 1;
  }
  v6 = (System_Array_o *)sub_1BCA888(float___TypeInfo, 5LL);
  v8.fields.value = Field__PrivateImplementationDetails__422B3C7B2DE8568542AA18DEE65F4FCAC64982394C5ABCF41D2B33D3EBFE51FD;
  v7 = (struct System_Single_array *)v6;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v6, v8, 0LL);
  this->fields.enableTimePos = v7;
  sub_1BCA784(&this->fields.enableTimePos, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall UserItemListViewItemDraw__SetEnableTime(UserItemListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int64_t dispEndTime; // x20
  System_String_o *RestTime2; // x20
  System_String_o *v16; // x0
  bool v17; // w0
  __int64 v18; // x1
  UILabel_o *stringLabel; // x22
  bool v20; // w21
  System_String_o **v21; // x8
  System_String_o *gameObject; // x0
  __int64 v23; // x1
  UILabel_o *enableTimeLabel; // x22
  struct UILabel_o *v25; // x8
  struct System_String_o *mText; // x9
  struct System_Single_array *enableTimePos; // x8
  __int64 stringLength; // x9
  __int64 v29; // x1
  int64_t v30; // x20
  UserItemListViewItemDraw_o *Time; // x0
  const MethodInfo *v32; // x3

  if ( (byte_4B11686 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_13513/*"TIME_REST_USER_ITEM"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_13469/*"TIME_OVER_USER_ITEM"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_13470/*"TIME_OVER_WORD"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_13476/*"TIME_REST2_TIMEOVER"*/, v12, v13);
    byte_4B11686 = 1;
  }
  dispEndTime = this->fields.dispEndTime;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  RestTime2 = LocalizationManager__GetRestTime2(dispEndTime, -1LL, 0LL);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_13476/*"TIME_REST2_TIMEOVER"*/, 0LL);
  v17 = System_String__op_Equality(RestTime2, v16, 0LL);
  stringLabel = this->fields.stringLabel;
  v20 = v17;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
  if ( v20 )
    v21 = (System_String_o **)&StringLiteral_13469/*"TIME_OVER_USER_ITEM"*/;
  else
    v21 = (System_String_o **)&StringLiteral_13513/*"TIME_REST_USER_ITEM"*/;
  gameObject = LocalizationManager__Get(*v21, 0LL);
  if ( !stringLabel )
    goto LABEL_24;
  UILabel__set_text(stringLabel, gameObject, 0LL);
  enableTimeLabel = this->fields.enableTimeLabel;
  if ( v20 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_13470/*"TIME_OVER_WORD"*/, 0LL);
    RestTime2 = gameObject;
  }
  if ( !enableTimeLabel
    || (UILabel__set_text(enableTimeLabel, RestTime2, 0LL),
        (gameObject = (System_String_o *)this->fields.stringLabel) == 0LL)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)gameObject,
                                          0LL),
        (v25 = this->fields.enableTimeLabel) == 0LL)
    || (mText = v25->fields.mText) == 0LL
    || (enableTimePos = this->fields.enableTimePos) == 0LL )
  {
LABEL_24:
    sub_1BCAA3C(gameObject, v23);
  }
  stringLength = mText->fields._stringLength;
  if ( (unsigned int)stringLength >= enableTimePos->max_length )
    sub_1BCAA44(gameObject, v23);
  GameObjectExtensions__SetLocalPositionX(
    (UnityEngine_GameObject_o *)gameObject,
    enableTimePos->m_Items[stringLength + 1],
    0LL);
  v30 = this->fields.dispEndTime;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v29);
  Time = (UserItemListViewItemDraw_o *)NetworkManager__getTime(0LL);
  UserItemListViewItemDraw__SetRemainTimeColor(Time, v30 - (_QWORD)Time, this->fields.enableTimeLabel, v32);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewItemDraw__SetInput(
        UserItemListViewItemDraw_o *this,
        UserItemListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *baseButton; // x22
  __int64 v14; // x1
  UnityEngine_Component_o *Component_object; // x0
  int64_t itemLostTime; // x20
  int64_t v17; // x21
  const MethodInfo *v18; // x1

  if ( (byte_4B11685 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, item, isInput);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_12853/*"SetEnableTime"*/, v11, v12);
    byte_4B11685 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !Component_object )
      goto LABEL_25;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    Component_object,
                                                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !Component_object )
      goto LABEL_25;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL);
    Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !Component_object )
      goto LABEL_25;
    ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))Component_object->klass[1]._1.implementedInterfaces)(
      Component_object,
      0LL,
      1LL,
      Component_object->klass[1]._1.interfaceOffsets);
  }
  if ( !item )
    return;
  itemLostTime = item->fields.itemLostTime;
  this->fields.dispEndTime = itemLostTime;
  Component_object = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v14);
    Component_object = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
    itemLostTime = this->fields.dispEndTime;
  }
  if ( !this->fields.enableTimeLabel
    || (v17 = *(int *)(*(_QWORD *)&Component_object[7].fields.m_CachedPtr + 500LL),
        (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this->fields.enableTimeLabel,
                                                         0LL)) == 0LL) )
  {
LABEL_25:
    sub_1BCAA3C(Component_object, v14);
  }
  if ( itemLostTime < v17 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0LL);
    Component_object = (UnityEngine_Component_o *)this->fields.stringLabel;
    if ( Component_object )
    {
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
      if ( Component_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0LL);
        UserItemListViewItemDraw__SetEnableTime(this, v18);
        if ( !UnityEngine_MonoBehaviour__IsInvoking_70138960(
                (UnityEngine_MonoBehaviour_o *)this,
                (System_String_o *)StringLiteral_12853/*"SetEnableTime"*/,
                0LL) )
          UnityEngine_MonoBehaviour__InvokeRepeating(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_12853/*"SetEnableTime"*/,
            1.0,
            1.0,
            0LL);
        return;
      }
    }
    goto LABEL_25;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0LL);
  Component_object = (UnityEngine_Component_o *)this->fields.stringLabel;
  if ( !Component_object )
    goto LABEL_25;
  Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0LL);
  if ( UnityEngine_MonoBehaviour__IsInvoking_70138960(
         (UnityEngine_MonoBehaviour_o *)this,
         (System_String_o *)StringLiteral_12853/*"SetEnableTime"*/,
         0LL) )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_70138824(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12853/*"SetEnableTime"*/,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewItemDraw__SetItem(
        UserItemListViewItemDraw_o *this,
        UserItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  ItemIconComponent_o *itemIconInfo; // x0
  __int64 v32; // x1
  UILabel_o *numTextLabel; // x21
  int32_t itemNum; // w22
  __int64 v35; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Action_int__o *v40; // x22
  UILabel_o *v41; // x21
  int32_t v42; // w22
  __int64 v43; // x1
  System_String_o **v44; // x8
  System_String_o *v45; // x22
  System_String_o *v46; // x22
  Il2CppObject *v47; // x23
  Il2CppObject *v48; // x0
  int64_t itemLostTime; // x20
  int64_t v50; // x21
  const MethodInfo *v51; // x1
  __int64 v52; // x1
  Il2CppObject *Component_object; // x19
  int32_t MaxNum; // [xsp+8h] [xbp-48h] BYREF
  int32_t v55; // [xsp+Ch] [xbp-44h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B11684 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, v15, v16);
    sub_1BCA7E0(&int_TypeInfo, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_UserItemListViewItemDraw__SetItem_b__10_0__, v23, v24);
    sub_1BCA7E0(&StringLiteral_14963/*"UNIT_INFO_LIMITED"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_12853/*"SetEnableTime"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_14964/*"UNIT_INFO_LIMITED_MAX"*/, v29, v30);
    byte_4B11684 = 1;
  }
  entity = 0LL;
  if ( item && mode )
  {
    itemIconInfo = this->fields.itemIconInfo;
    if ( !itemIconInfo )
      goto LABEL_46;
    ItemIconComponent__SetCombineItem(itemIconInfo, item->fields.itemId, -1, 0LL);
    itemIconInfo = (ItemIconComponent_o *)this->fields.nameTextLabel;
    if ( !itemIconInfo )
      goto LABEL_46;
    UILabel__set_text((UILabel_o *)itemIconInfo, item->fields.itemName, 0LL);
    numTextLabel = this->fields.numTextLabel;
    itemNum = item->fields.itemNum;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
    itemIconInfo = (ItemIconComponent_o *)LocalizationManager__GetUnitInfo(itemNum, 0LL);
    if ( !numTextLabel )
      goto LABEL_46;
    UILabel__set_text(numTextLabel, (System_String_o *)itemIconInfo, 0LL);
    if ( item->fields.itemType == 2 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v40 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v37, v38, v39);
      System_Action_int____ctor(v40, (Il2CppObject *)this, Method_UserItemListViewItemDraw__SetItem_b__10_0__, 0LL);
      StoneCountRefreshComponent__AttachToGameObject(gameObject, v40, 1, 0LL);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v35);
    itemIconInfo = (ItemIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !itemIconInfo )
      goto LABEL_46;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)itemIconInfo,
           &entity,
           item->fields.itemId,
           (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    {
      itemIconInfo = (ItemIconComponent_o *)entity;
      if ( !entity )
        goto LABEL_46;
      if ( ItemEntity__GetMaxNum((ItemEntity_o *)entity, 0LL) )
      {
        itemIconInfo = (ItemIconComponent_o *)entity;
        if ( !entity )
          goto LABEL_46;
        v41 = this->fields.numTextLabel;
        v42 = item->fields.itemNum;
        if ( v42 >= ItemEntity__GetMaxNum((ItemEntity_o *)entity, 0LL) )
          v44 = (System_String_o **)&StringLiteral_14964/*"UNIT_INFO_LIMITED_MAX"*/;
        else
          v44 = (System_String_o **)&StringLiteral_14963/*"UNIT_INFO_LIMITED"*/;
        v45 = *v44;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43);
        v46 = LocalizationManager__Get(v45, 0LL);
        v55 = item->fields.itemNum;
        itemIconInfo = (ItemIconComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v55);
        if ( !entity )
          goto LABEL_46;
        v47 = (Il2CppObject *)itemIconInfo;
        MaxNum = ItemEntity__GetMaxNum((ItemEntity_o *)entity, 0LL);
        v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxNum);
        itemIconInfo = (ItemIconComponent_o *)System_String__Format_62415592(v46, v47, v48, 0LL);
        if ( !v41 )
          goto LABEL_46;
        UILabel__set_text(v41, (System_String_o *)itemIconInfo, 0LL);
      }
    }
    itemLostTime = item->fields.itemLostTime;
    this->fields.dispEndTime = itemLostTime;
    itemIconInfo = (ItemIconComponent_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item);
      itemIconInfo = (ItemIconComponent_o *)BalanceConfig_TypeInfo;
      itemLostTime = this->fields.dispEndTime;
    }
    if ( !this->fields.enableTimeLabel )
      goto LABEL_46;
    v50 = *((int *)&itemIconInfo[1].fields.backSprite->fields.mSpriteSet + 1);
    itemIconInfo = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)this->fields.enableTimeLabel,
                                            0LL);
    if ( !itemIconInfo )
      goto LABEL_46;
    if ( itemLostTime <= v50 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIconInfo, 1, 0LL);
      itemIconInfo = (ItemIconComponent_o *)this->fields.stringLabel;
      if ( !itemIconInfo )
        goto LABEL_46;
      itemIconInfo = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)itemIconInfo,
                                              0LL);
      if ( !itemIconInfo )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIconInfo, 1, 0LL);
      UserItemListViewItemDraw__SetEnableTime(this, v51);
      UnityEngine_MonoBehaviour__InvokeRepeating(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_12853/*"SetEnableTime"*/,
        1.0,
        1.0,
        0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIconInfo, 0, 0LL);
      itemIconInfo = (ItemIconComponent_o *)this->fields.stringLabel;
      if ( !itemIconInfo )
        goto LABEL_46;
      itemIconInfo = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)itemIconInfo,
                                              0LL);
      if ( !itemIconInfo )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIconInfo, 0, 0LL);
    }
    itemIconInfo = (ItemIconComponent_o *)this->fields.iconImageSprite;
    if ( !itemIconInfo )
      goto LABEL_46;
    itemIconInfo = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)itemIconInfo,
                                            0LL);
    if ( !itemIconInfo )
      goto LABEL_46;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)itemIconInfo,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v52);
    itemIconInfo = (ItemIconComponent_o *)UnityEngine_Object__op_Inequality(
                                            (UnityEngine_Object_o *)Component_object,
                                            0LL,
                                            0LL);
    if ( ((unsigned __int8)itemIconInfo & 1) != 0 )
    {
      if ( Component_object )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
        return;
      }
LABEL_46:
      sub_1BCAA3C(itemIconInfo, item);
    }
  }
}


void __fastcall UserItemListViewItemDraw__SetRemainTimeColor(
        UserItemListViewItemDraw_o *this,
        int64_t remainTime,
        UILabel_o *label,
        const MethodInfo *method)
{
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !label )
    sub_1BCAA3C(this, remainTime);
  v6.fields.r = 255.0;
  v6.fields.b = 0.0;
  v6.fields.g = 255.0;
  v6.fields.a = 255.0;
  UIWidget__set_color((UIWidget_o *)label, v6, 0LL);
  if ( (remainTime & 0x8000000000000000LL) == 0
    && (int)(remainTime / 0x15180uLL) <= 0
    && (int)(remainTime / 0xE10uLL) <= 59 )
  {
    v7.fields.g = 0.0;
    v7.fields.b = 0.0;
    v7.fields.r = 230.0;
    v7.fields.a = 255.0;
    UIWidget__set_color((UIWidget_o *)label, v7, 0LL);
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

  if ( (byte_4B11688 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount, method);
    byte_4B11688 = 1;
  }
  numTextLabel = this->fields.numTextLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0LL);
  if ( !numTextLabel )
    sub_1BCAA3C(UnitInfo, v7);
  UILabel__set_text(numTextLabel, UnitInfo, 0LL);
}