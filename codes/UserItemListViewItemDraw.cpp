void UserItemListViewItemDraw___ctor(UserItemListViewItemDraw_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x0
  System_RuntimeFieldHandle_o v4; // x1
  struct System_Single_array *v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596B5FF & 1) == 0 )
  {
    sub_2213A60(&float___TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__422B3C7B2DE8568542AA18DEE65F4FCAC64982394C5ABCF41D2B33D3EBFE51FD);
    byte_596B5FF = 1;
  }
  v3 = (System_Array_o *)sub_2213B20(float___TypeInfo, 5);
  v4.fields.value = Field__PrivateImplementationDetails__422B3C7B2DE8568542AA18DEE65F4FCAC64982394C5ABCF41D2B33D3EBFE51FD;
  v5 = (struct System_Single_array *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v3, v4, 0);
  this->fields.enableTimePos = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.enableTimePos, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UserItemListViewItemDraw__SetEnableTime(UserItemListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t dispEndTime; // x20
  System_String_o *RestTime2; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  bool v9; // w8
  UILabel_o *stringLabel; // x21
  int v11; // w9
  System_String_o *gameObject; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  UILabel_o *enableTimeLabel; // x21
  UILabel_o **p_enableTimeLabel; // x22
  struct UILabel_o *v18; // x8
  struct System_String_o *mText; // x9
  struct System_Single_array *enableTimePos; // x8
  __int64 stringLength; // x9
  __int64 v22; // x1
  __int64 v23; // x2
  int64_t v24; // x19
  UserItemListViewItemDraw_o *Time; // x0
  const MethodInfo *v26; // x3

  if ( (byte_596B5FE & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_13996/*"TIME_REST_USER_ITEM"*/);
    sub_2213A60(&StringLiteral_13952/*"TIME_OVER_USER_ITEM"*/);
    sub_2213A60(&StringLiteral_13953/*"TIME_OVER_WORD"*/);
    sub_2213A60(&StringLiteral_13959/*"TIME_REST2_TIMEOVER"*/);
    byte_596B5FE = 1;
  }
  dispEndTime = this->fields.dispEndTime;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  RestTime2 = LocalizationManager__GetRestTime2(dispEndTime, -1, 0);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_13959/*"TIME_REST2_TIMEOVER"*/, 0);
  v9 = System_String__op_Equality(RestTime2, v6, 0);
  stringLabel = this->fields.stringLabel;
  v11 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( !v9 )
  {
    if ( !v11 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_13996/*"TIME_REST_USER_ITEM"*/, 0);
    if ( stringLabel )
    {
      UILabel__set_text(stringLabel, gameObject, 0);
      p_enableTimeLabel = &this->fields.enableTimeLabel;
      enableTimeLabel = this->fields.enableTimeLabel;
      goto LABEL_16;
    }
LABEL_25:
    sub_2213CDC(gameObject, v13);
  }
  if ( !v11 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_13952/*"TIME_OVER_USER_ITEM"*/, 0);
  if ( !stringLabel )
    goto LABEL_25;
  UILabel__set_text(stringLabel, gameObject, 0);
  p_enableTimeLabel = &this->fields.enableTimeLabel;
  enableTimeLabel = this->fields.enableTimeLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_13953/*"TIME_OVER_WORD"*/, 0);
  RestTime2 = gameObject;
LABEL_16:
  if ( !enableTimeLabel )
    goto LABEL_25;
  UILabel__set_text(enableTimeLabel, RestTime2, 0);
  gameObject = (System_String_o *)this->fields.stringLabel;
  if ( !gameObject )
    goto LABEL_25;
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  v18 = this->fields.enableTimeLabel;
  if ( !v18 )
    goto LABEL_25;
  mText = v18->fields.mText;
  if ( !mText )
    goto LABEL_25;
  enableTimePos = this->fields.enableTimePos;
  if ( !enableTimePos )
    goto LABEL_25;
  stringLength = mText->fields._stringLength;
  if ( (unsigned int)stringLength >= LODWORD(enableTimePos->max_length) )
    sub_2213CE4(gameObject);
  GameObjectExtensions__SetLocalPositionX(
    (UnityEngine_GameObject_o *)gameObject,
    enableTimePos->m_Items[stringLength],
    0);
  v24 = this->fields.dispEndTime;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22, v23);
  Time = (UserItemListViewItemDraw_o *)NetworkManager__getTime(0);
  UserItemListViewItemDraw__SetRemainTimeColor(Time, v24 - (_QWORD)Time, *p_enableTimeLabel, v26);
}


// local variable allocation has failed, the output may be wrong!
void UserItemListViewItemDraw__SetInput(
        UserItemListViewItemDraw_o *this,
        UserItemListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Component_o *Component_object; // x0
  int64_t itemLostTime; // x8
  BalanceConfig_c *v12; // x0
  struct BalanceConfig_StaticFields *static_fields; // x9
  const MethodInfo *v14; // x1

  if ( (byte_596B5FD & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_13334/*"SetEnableTime"*/);
    byte_596B5FD = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, isInput);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !Component_object )
      goto LABEL_27;
    Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    Component_object,
                                                    (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !Component_object )
      goto LABEL_27;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0);
    Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !Component_object )
      goto LABEL_27;
    ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))Component_object->klass[1]._1.nestedTypes)(
      Component_object,
      0,
      1,
      Component_object->klass[1]._1.implementedInterfaces);
  }
  if ( !item )
    return;
  itemLostTime = item->fields.itemLostTime;
  v12 = BalanceConfig_TypeInfo;
  this->fields.dispEndTime = itemLostTime;
  if ( !*(&v12->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v12, v8, v9);
    v12 = BalanceConfig_TypeInfo;
    itemLostTime = this->fields.dispEndTime;
  }
  static_fields = v12->static_fields;
  Component_object = (UnityEngine_Component_o *)this->fields.enableTimeLabel;
  if ( itemLostTime < static_fields->NoneExpireTime )
  {
    if ( Component_object )
    {
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
      if ( Component_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
        Component_object = (UnityEngine_Component_o *)this->fields.stringLabel;
        if ( Component_object )
        {
          Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
          if ( Component_object )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
            UserItemListViewItemDraw__SetEnableTime(this, v14);
            if ( !UnityEngine_MonoBehaviour__IsInvoking_83443464(
                    (UnityEngine_MonoBehaviour_o *)this,
                    (System_String_o *)StringLiteral_13334/*"SetEnableTime"*/,
                    0) )
              UnityEngine_MonoBehaviour__InvokeRepeating(
                (UnityEngine_MonoBehaviour_o *)this,
                (System_String_o *)StringLiteral_13334/*"SetEnableTime"*/,
                1.0,
                1.0,
                0);
            return;
          }
        }
      }
    }
LABEL_27:
    sub_2213CDC(Component_object, v8);
  }
  if ( !Component_object )
    goto LABEL_27;
  Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
  if ( !Component_object )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0);
  Component_object = (UnityEngine_Component_o *)this->fields.stringLabel;
  if ( !Component_object )
    goto LABEL_27;
  Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
  if ( !Component_object )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0);
  if ( UnityEngine_MonoBehaviour__IsInvoking_83443464(
         (UnityEngine_MonoBehaviour_o *)this,
         (System_String_o *)StringLiteral_13334/*"SetEnableTime"*/,
         0) )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_83442996(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_13334/*"SetEnableTime"*/,
      0);
  }
}


void UserItemListViewItemDraw__SetItem(
        UserItemListViewItemDraw_o *this,
        UserItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  ItemIconComponent_o *itemIconInfo; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  UILabel_o *numTextLabel; // x21
  int32_t itemNum; // w22
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_GameObject_o *gameObject; // x21
  System_Action_int__o *v15; // x22
  __int64 v16; // x2
  int32_t v17; // w22
  UILabel_o *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  System_String_o **v21; // x8
  System_String_o *v22; // x22
  System_String_o *v23; // x22
  Il2CppObject *v24; // x23
  Il2CppObject *v25; // x0
  int64_t itemLostTime; // x8
  BalanceConfig_c *v27; // x0
  struct BalanceConfig_StaticFields *static_fields; // x9
  const MethodInfo *v29; // x1
  __int64 v30; // x1
  __int64 v31; // x2
  Il2CppObject *Component_object; // x19
  int32_t MaxNum; // [xsp+8h] [xbp-48h] BYREF
  int32_t v34; // [xsp+Ch] [xbp-44h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596B5FC & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_UserItemListViewItemDraw__SetItem_b__10_0__);
    sub_2213A60(&StringLiteral_15413/*"UNIT_INFO_LIMITED"*/);
    sub_2213A60(&StringLiteral_13334/*"SetEnableTime"*/);
    sub_2213A60(&StringLiteral_15414/*"UNIT_INFO_LIMITED_MAX"*/);
    byte_596B5FC = 1;
  }
  entity = 0;
  if ( item && mode )
  {
    itemIconInfo = this->fields.itemIconInfo;
    if ( !itemIconInfo )
      goto LABEL_48;
    ItemIconComponent__SetCombineItem(itemIconInfo, item->fields.itemId, -1, 0);
    itemIconInfo = (ItemIconComponent_o *)this->fields.nameTextLabel;
    if ( !itemIconInfo )
      goto LABEL_48;
    UILabel__set_text((UILabel_o *)itemIconInfo, item->fields.itemName, 0);
    numTextLabel = this->fields.numTextLabel;
    itemNum = item->fields.itemNum;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
    itemIconInfo = (ItemIconComponent_o *)LocalizationManager__GetUnitInfo(itemNum, 0);
    if ( !numTextLabel )
      goto LABEL_48;
    UILabel__set_text(numTextLabel, (System_String_o *)itemIconInfo, 0);
    if ( item->fields.itemType == 2 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v15 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
      System_Action_int____ctor(v15, (Il2CppObject *)this, Method_UserItemListViewItemDraw__SetItem_b__10_0__, 0);
      StoneCountRefreshComponent__AttachToGameObject(gameObject, v15, 1, 0);
    }
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12, v13);
    itemIconInfo = (ItemIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !itemIconInfo )
      goto LABEL_48;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)itemIconInfo,
           &entity,
           item->fields.itemId,
           (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    {
      itemIconInfo = (ItemIconComponent_o *)entity;
      if ( !entity )
        goto LABEL_48;
      if ( ItemEntity__GetMaxNum((ItemEntity_o *)entity, 0) )
      {
        itemIconInfo = (ItemIconComponent_o *)entity;
        if ( !entity )
          goto LABEL_48;
        v17 = item->fields.itemNum;
        v18 = this->fields.numTextLabel;
        if ( v17 >= ItemEntity__GetMaxNum((ItemEntity_o *)entity, 0) )
          v21 = (System_String_o **)&StringLiteral_15414/*"UNIT_INFO_LIMITED_MAX"*/;
        else
          v21 = (System_String_o **)&StringLiteral_15413/*"UNIT_INFO_LIMITED"*/;
        v22 = *v21;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v20);
        v23 = LocalizationManager__Get(v22, 0);
        v34 = item->fields.itemNum;
        itemIconInfo = (ItemIconComponent_o *)j_il2cpp_value_box_0(qword_5984348, &v34);
        if ( !entity )
          goto LABEL_48;
        v24 = (Il2CppObject *)itemIconInfo;
        MaxNum = ItemEntity__GetMaxNum((ItemEntity_o *)entity, 0);
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &MaxNum);
        itemIconInfo = (ItemIconComponent_o *)System_String__Format_75697880(v23, v24, v25, 0);
        if ( !v18 )
          goto LABEL_48;
        UILabel__set_text(v18, (System_String_o *)itemIconInfo, 0);
      }
    }
    itemLostTime = item->fields.itemLostTime;
    v27 = BalanceConfig_TypeInfo;
    this->fields.dispEndTime = itemLostTime;
    if ( !*(&v27->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v27, item, v16);
      v27 = BalanceConfig_TypeInfo;
      itemLostTime = this->fields.dispEndTime;
    }
    static_fields = v27->static_fields;
    itemIconInfo = (ItemIconComponent_o *)this->fields.enableTimeLabel;
    if ( itemLostTime <= static_fields->NoneExpireTime )
    {
      if ( !itemIconInfo )
        goto LABEL_48;
      itemIconInfo = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)itemIconInfo,
                                              0);
      if ( !itemIconInfo )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIconInfo, 1, 0);
      itemIconInfo = (ItemIconComponent_o *)this->fields.stringLabel;
      if ( !itemIconInfo )
        goto LABEL_48;
      itemIconInfo = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)itemIconInfo,
                                              0);
      if ( !itemIconInfo )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIconInfo, 1, 0);
      UserItemListViewItemDraw__SetEnableTime(this, v29);
      UnityEngine_MonoBehaviour__InvokeRepeating(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_13334/*"SetEnableTime"*/,
        1.0,
        1.0,
        0);
    }
    else
    {
      if ( !itemIconInfo )
        goto LABEL_48;
      itemIconInfo = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)itemIconInfo,
                                              0);
      if ( !itemIconInfo )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIconInfo, 0, 0);
      itemIconInfo = (ItemIconComponent_o *)this->fields.stringLabel;
      if ( !itemIconInfo )
        goto LABEL_48;
      itemIconInfo = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)itemIconInfo,
                                              0);
      if ( !itemIconInfo )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIconInfo, 0, 0);
    }
    itemIconInfo = (ItemIconComponent_o *)this->fields.iconImageSprite;
    if ( !itemIconInfo )
      goto LABEL_48;
    itemIconInfo = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)itemIconInfo,
                                            0);
    if ( !itemIconInfo )
      goto LABEL_48;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)itemIconInfo,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30, v31);
    itemIconInfo = (ItemIconComponent_o *)UnityEngine_Object__op_Inequality(
                                            (UnityEngine_Object_o *)Component_object,
                                            0,
                                            0);
    if ( ((unsigned __int8)itemIconInfo & 1) != 0 )
    {
      if ( Component_object )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
        return;
      }
LABEL_48:
      sub_2213CDC(itemIconInfo, item);
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
    sub_2213CDC(this, remainTime);
  v6.fields.b = 0.0;
  v6.fields.r = 255.0;
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


// local variable allocation has failed, the output may be wrong!
void UserItemListViewItemDraw___SetItem_b__10_0(
        UserItemListViewItemDraw_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *numTextLabel; // x20
  System_String_o *UnitInfo; // x0
  __int64 v7; // x1

  if ( (byte_596B600 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596B600 = 1;
  }
  numTextLabel = this->fields.numTextLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount, method);
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0);
  if ( !numTextLabel )
    sub_2213CDC(UnitInfo, v7);
  UILabel__set_text(numTextLabel, UnitInfo, 0);
}