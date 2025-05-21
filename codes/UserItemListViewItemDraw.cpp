void __fastcall UserItemListViewItemDraw___ctor(UserItemListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Array_o *v4; // x0
  struct System_Single_array *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_4B3FC2A & 1) == 0 )
  {
    sub_1BDB878(&float___TypeInfo, method);
    sub_1BDB878(
      &Field__PrivateImplementationDetails__422B3C7B2DE8568542AA18DEE65F4FCAC64982394C5ABCF41D2B33D3EBFE51FD,
      v3);
    byte_4B3FC2A = 1;
  }
  v4 = (System_Array_o *)sub_1BDB920(float___TypeInfo, 5LL);
  v8.fields.value = Field__PrivateImplementationDetails__422B3C7B2DE8568542AA18DEE65F4FCAC64982394C5ABCF41D2B33D3EBFE51FD;
  v5 = (struct System_Single_array *)v4;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63272576(v4, v8, 0LL);
  this->fields.enableTimePos = v5;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.enableTimePos, (int32_t)v5, v6, v7);
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
  System_String_o **v14; // x8
  System_String_o *gameObject; // x0
  __int64 v16; // x1
  UILabel_o *enableTimeLabel; // x22
  __int64 v18; // x2
  struct UILabel_o *v19; // x8
  struct System_String_o *mText; // x9
  struct System_Single_array *enableTimePos; // x8
  __int64 stringLength; // x9
  int64_t v23; // x20
  UserItemListViewItemDraw_o *Time; // x0
  const MethodInfo *v25; // x3

  if ( (byte_4B3FC29 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, method);
    sub_1BDB878(&NetworkManager_TypeInfo, v3);
    sub_1BDB878(&StringLiteral_13411/*"TIME_REST_USER_ITEM"*/, v4);
    sub_1BDB878(&StringLiteral_13367/*"TIME_OVER_USER_ITEM"*/, v5);
    sub_1BDB878(&StringLiteral_13368/*"TIME_OVER_WORD"*/, v6);
    sub_1BDB878(&StringLiteral_13374/*"TIME_REST2_TIMEOVER"*/, v7);
    byte_4B3FC29 = 1;
  }
  dispEndTime = this->fields.dispEndTime;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime2 = LocalizationManager__GetRestTime2(dispEndTime, -1LL, 0LL);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_13374/*"TIME_REST2_TIMEOVER"*/, 0LL);
  v11 = System_String__op_Equality(RestTime2, v10, 0LL);
  stringLabel = this->fields.stringLabel;
  v13 = v11;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v13 )
    v14 = (System_String_o **)&StringLiteral_13367/*"TIME_OVER_USER_ITEM"*/;
  else
    v14 = (System_String_o **)&StringLiteral_13411/*"TIME_REST_USER_ITEM"*/;
  gameObject = LocalizationManager__Get(*v14, 0LL);
  if ( !stringLabel )
    goto LABEL_24;
  UILabel__set_text(stringLabel, gameObject, 0LL);
  enableTimeLabel = this->fields.enableTimeLabel;
  if ( v13 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_13368/*"TIME_OVER_WORD"*/, 0LL);
    RestTime2 = gameObject;
  }
  if ( !enableTimeLabel
    || (UILabel__set_text(enableTimeLabel, RestTime2, 0LL),
        (gameObject = (System_String_o *)this->fields.stringLabel) == 0LL)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)gameObject,
                                          0LL),
        (v19 = this->fields.enableTimeLabel) == 0LL)
    || (mText = v19->fields.mText) == 0LL
    || (enableTimePos = this->fields.enableTimePos) == 0LL )
  {
LABEL_24:
    sub_1BDBAD4(gameObject, v16);
  }
  stringLength = mText->fields._stringLength;
  if ( (unsigned int)stringLength >= enableTimePos->max_length )
    sub_1BDBADC(gameObject, v16, v18);
  GameObjectExtensions__SetLocalPositionX(
    (UnityEngine_GameObject_o *)gameObject,
    enableTimePos->m_Items[stringLength + 1],
    0LL);
  v23 = this->fields.dispEndTime;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (UserItemListViewItemDraw_o *)NetworkManager__getTime(0LL);
  UserItemListViewItemDraw__SetRemainTimeColor(Time, v23 - (_QWORD)Time, this->fields.enableTimeLabel, v25);
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
  UnityEngine_Component_o *Component_object; // x0
  int64_t itemLostTime; // x20
  int64_t v14; // x21
  const MethodInfo *v15; // x1

  if ( (byte_4B3FC28 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, item);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_Collider___, v7);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v8);
    sub_1BDB878(&StringLiteral_12760/*"SetEnableTime"*/, v9);
    byte_4B3FC28 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !Component_object )
      goto LABEL_25;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    Component_object,
                                                    (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_Collider___);
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
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Component_object = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
    itemLostTime = this->fields.dispEndTime;
  }
  if ( !this->fields.enableTimeLabel
    || (v14 = *(int *)(*(_QWORD *)&Component_object[7].fields.m_CachedPtr + 528LL),
        (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this->fields.enableTimeLabel,
                                                         0LL)) == 0LL) )
  {
LABEL_25:
    sub_1BDBAD4(Component_object, v11);
  }
  if ( itemLostTime < v14 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0LL);
    Component_object = (UnityEngine_Component_o *)this->fields.stringLabel;
    if ( Component_object )
    {
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
      if ( Component_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0LL);
        UserItemListViewItemDraw__SetEnableTime(this, v15);
        if ( !UnityEngine_MonoBehaviour__IsInvoking_70269216(
                (UnityEngine_MonoBehaviour_o *)this,
                (System_String_o *)StringLiteral_12760/*"SetEnableTime"*/,
                0LL) )
          UnityEngine_MonoBehaviour__InvokeRepeating(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_12760/*"SetEnableTime"*/,
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
  if ( UnityEngine_MonoBehaviour__IsInvoking_70269216(
         (UnityEngine_MonoBehaviour_o *)this,
         (System_String_o *)StringLiteral_12760/*"SetEnableTime"*/,
         0LL) )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_70269080(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12760/*"SetEnableTime"*/,
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
  ItemIconComponent_o *itemIconInfo; // x0
  UILabel_o *numTextLabel; // x21
  int32_t itemNum; // w22
  UnityEngine_GameObject_o *gameObject; // x21
  System_Action_int__o *v23; // x22
  UILabel_o *v24; // x21
  int32_t v25; // w22
  System_String_o **v26; // x8
  System_String_o *v27; // x22
  System_String_o *v28; // x22
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *v32; // x23
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  Il2CppObject *v36; // x0
  int64_t itemLostTime; // x20
  int64_t kernelEvent_low; // x21
  const MethodInfo *v39; // x1
  Il2CppObject *Component_object; // x19
  int32_t MaxNum; // [xsp+8h] [xbp-48h] BYREF
  int32_t v42; // [xsp+Ch] [xbp-44h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B3FC27 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_int__TypeInfo, item);
    sub_1BDB878(&BalanceConfig_TypeInfo, v7);
    sub_1BDB878(&Method_DataManager_GetMaster_ItemMaster___, v8);
    sub_1BDB878(&DataManager_TypeInfo, v9);
    sub_1BDB878(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v10);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, v11);
    sub_1BDB878(&int_TypeInfo, v12);
    sub_1BDB878(&LocalizationManager_TypeInfo, v13);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v14);
    sub_1BDB878(&Method_UserItemListViewItemDraw__SetItem_b__10_0__, v15);
    sub_1BDB878(&StringLiteral_14782/*"UNIT_INFO_LIMITED"*/, v16);
    sub_1BDB878(&StringLiteral_12760/*"SetEnableTime"*/, v17);
    sub_1BDB878(&StringLiteral_14783/*"UNIT_INFO_LIMITED_MAX"*/, v18);
    byte_4B3FC27 = 1;
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    itemIconInfo = (ItemIconComponent_o *)LocalizationManager__GetUnitInfo(itemNum, 0LL);
    if ( !numTextLabel )
      goto LABEL_46;
    UILabel__set_text(numTextLabel, (System_String_o *)itemIconInfo, 0LL);
    if ( item->fields.itemType == 2 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v23 = (System_Action_int__o *)sub_1BDBAC4(System_Action_int__TypeInfo);
      System_Action_int____ctor(v23, (Il2CppObject *)this, Method_UserItemListViewItemDraw__SetItem_b__10_0__, 0LL);
      StoneCountRefreshComponent__AttachToGameObject(gameObject, v23, 1, 0LL);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    itemIconInfo = (ItemIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !itemIconInfo )
      goto LABEL_46;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)itemIconInfo,
           &entity,
           item->fields.itemId,
           (const MethodInfo_32E1E88 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    {
      itemIconInfo = (ItemIconComponent_o *)entity;
      if ( !entity )
        goto LABEL_46;
      if ( ItemEntity__GetMaxNum((ItemEntity_o *)entity, 0LL) )
      {
        itemIconInfo = (ItemIconComponent_o *)entity;
        if ( !entity )
          goto LABEL_46;
        v24 = this->fields.numTextLabel;
        v25 = item->fields.itemNum;
        if ( v25 >= ItemEntity__GetMaxNum((ItemEntity_o *)entity, 0LL) )
          v26 = (System_String_o **)&StringLiteral_14783/*"UNIT_INFO_LIMITED_MAX"*/;
        else
          v26 = (System_String_o **)&StringLiteral_14782/*"UNIT_INFO_LIMITED"*/;
        v27 = *v26;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v28 = LocalizationManager__Get(v27, 0LL);
        v42 = item->fields.itemNum;
        itemIconInfo = (ItemIconComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v29, v30, v31);
        if ( !entity )
          goto LABEL_46;
        v32 = (Il2CppObject *)itemIconInfo;
        MaxNum = ItemEntity__GetMaxNum((ItemEntity_o *)entity, 0LL);
        v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxNum, v33, v34, v35);
        itemIconInfo = (ItemIconComponent_o *)System_String__Format_62613552(v28, v32, v36, 0LL);
        if ( !v24 )
          goto LABEL_46;
        UILabel__set_text(v24, (System_String_o *)itemIconInfo, 0LL);
      }
    }
    itemLostTime = item->fields.itemLostTime;
    this->fields.dispEndTime = itemLostTime;
    itemIconInfo = (ItemIconComponent_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      itemIconInfo = (ItemIconComponent_o *)BalanceConfig_TypeInfo;
      itemLostTime = this->fields.dispEndTime;
    }
    if ( !this->fields.enableTimeLabel )
      goto LABEL_46;
    kernelEvent_low = SLODWORD(itemIconInfo[1].fields.m_CancellationTokenSource[8].fields._kernelEvent);
    itemIconInfo = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)this->fields.enableTimeLabel,
                                            0LL);
    if ( !itemIconInfo )
      goto LABEL_46;
    if ( itemLostTime <= kernelEvent_low )
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
      UserItemListViewItemDraw__SetEnableTime(this, v39);
      UnityEngine_MonoBehaviour__InvokeRepeating(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_12760/*"SetEnableTime"*/,
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
                         (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      sub_1BDBAD4(itemIconInfo, item);
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
    sub_1BDBAD4(this, remainTime);
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

  if ( (byte_4B3FC2B & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_4B3FC2B = 1;
  }
  numTextLabel = this->fields.numTextLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0LL);
  if ( !numTextLabel )
    sub_1BDBAD4(UnitInfo, v7);
  UILabel__set_text(numTextLabel, UnitInfo, 0LL);
}