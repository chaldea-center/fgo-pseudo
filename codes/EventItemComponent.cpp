void __fastcall EventItemComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E9AF0 & 1) == 0 )
  {
    sub_B5D5C4(&EventItemComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_19874/*"img_shopbg04"*/, v8, v9, v10);
    byte_42E9AF0 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventItemComponent_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_19874/*"img_shopbg04"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19874/*"img_shopbg04"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall EventItemComponent___ctor(EventItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventItemComponent__Awake(EventItemComponent_o *this, const MethodInfo *method)
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
  UnityEngine_Object_o *baseSp; // x20
  UIAtlas_o *UIAtlas; // x0
  __int64 v16; // x1
  struct UISprite_o *v17; // x8
  UnityEngine_Object_o *mAtlas; // x20
  UISprite_o *v19; // x20
  UISprite_o *v20; // x20

  if ( (byte_42E9AE5 & 1) == 0 )
  {
    sub_B5D5C4(&EventItemComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_UIAtlas___, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_12995/*"Shop/Atlas/ShopAtlas"*/, v11, v12, v13);
    byte_42E9AE5 = 1;
  }
  baseSp = (UnityEngine_Object_o *)this->fields.baseSp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UIAtlas = (UIAtlas_o *)UnityEngine_Object__op_Inequality(baseSp, 0LL, 0LL);
  if ( ((unsigned __int8)UIAtlas & 1) != 0 )
  {
    v17 = this->fields.baseSp;
    if ( !v17 )
      goto LABEL_20;
    mAtlas = (UnityEngine_Object_o *)v17->fields.mAtlas;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(mAtlas, 0LL, 0LL) )
    {
      v19 = this->fields.baseSp;
      UIAtlas = UnityEngine_Resources__Load_UIAtlas_(
                  (System_String_o *)StringLiteral_12995/*"Shop/Atlas/ShopAtlas"*/,
                  (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_UIAtlas___);
      if ( v19 )
      {
        UISprite__set_atlas(v19, UIAtlas, 0LL);
        v20 = this->fields.baseSp;
        UIAtlas = (UIAtlas_o *)EventItemComponent_TypeInfo;
        if ( (BYTE3(EventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventItemComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventItemComponent_TypeInfo);
        }
        if ( v20 )
        {
          UISprite__set_spriteName(v20, EventItemComponent_TypeInfo->static_fields->BASE_SPRITE_DEFAULT_NAME, 0LL);
          UIAtlas = (UIAtlas_o *)this->fields.baseSp;
          if ( UIAtlas )
          {
            ((void (__fastcall *)(UIAtlas_o *, void *))UIAtlas->klass[2]._1.typeMetadataHandle)(
              UIAtlas,
              UIAtlas->klass[2]._1.interopData);
            return;
          }
        }
      }
LABEL_20:
      sub_B5D69C(UIAtlas, v16);
    }
  }
}


void __fastcall EventItemComponent__Clear(EventItemComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *baseObject; // x0

  if ( (byte_42E9AE7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E9AE7 = 1;
  }
  baseObject = this->fields.baseObject;
  if ( !baseObject
    || (UnityEngine_GameObject__SetActive(baseObject, 0, 0LL),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon) == 0LL)
    || (ItemIconComponent__Clear((ItemIconComponent_o *)baseObject, 0LL),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.dataLabel) == 0LL)
    || (UILabel__set_text((UILabel_o *)baseObject, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.textLabel) == 0LL) )
  {
    sub_B5D69C(baseObject, method);
  }
  UILabel__set_text((UILabel_o *)baseObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall EventItemComponent__OnDestroy(EventItemComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *baseSp; // x20
  __int64 v6; // x1
  UISprite_o *v7; // x0

  if ( (byte_42E9AE6 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9AE6 = 1;
  }
  baseSp = (UnityEngine_Object_o *)this->fields.baseSp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseSp, 0LL, 0LL) )
  {
    v7 = this->fields.baseSp;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    UISprite__set_atlas(v7, 0LL, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemComponent__Set(EventItemComponent_o *this, int32_t itemId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int64_t baseObject; // x0
  ItemMaster_o *v22; // x21
  int64_t v23; // x21
  int32_t v24; // w23
  BalanceConfig_c *v25; // x0
  int32_t QpMax; // w20
  UserGameEntity_o *v27; // x21
  int32_t FriendPoint; // w22
  BalanceConfig_c *v29; // x8
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t v31; // x21
  int32_t v32; // w23
  BalanceConfig_c *v33; // x0
  UILabel_o *dataLabel; // x19

  if ( (byte_42E9AE8 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, itemId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v9, v10, v11);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&NetworkManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42E9AE8 = 1;
  }
  this->fields.dataItemId = itemId;
  if ( itemId < 1 )
  {
    EventItemComponent__Clear(this, *(const MethodInfo **)&itemId);
    return;
  }
  baseObject = (int64_t)this->fields.baseObject;
  if ( !baseObject )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0LL);
  baseObject = (int64_t)this->fields.baseSp;
  if ( !baseObject )
    goto LABEL_56;
  baseObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0LL);
  baseObject = (int64_t)this->fields.itemIcon;
  if ( !baseObject )
    goto LABEL_56;
  baseObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0LL);
  baseObject = (int64_t)this->fields.dataLabel;
  if ( !baseObject )
    goto LABEL_56;
  baseObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0LL);
  baseObject = (int64_t)this->fields.textLabel;
  if ( !baseObject )
    goto LABEL_56;
  baseObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 0, 0LL);
  baseObject = (int64_t)this->fields.itemIcon;
  if ( !baseObject )
    goto LABEL_56;
  ItemIconComponent__SetItem((ItemIconComponent_o *)baseObject, itemId, -1, 0LL);
  baseObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseObject )
    goto LABEL_56;
  baseObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)baseObject,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !baseObject )
    goto LABEL_56;
  v22 = (ItemMaster_o *)baseObject;
  if ( ItemMaster__isQP((ItemMaster_o *)baseObject, itemId, 0LL) )
  {
    baseObject = (int64_t)UserGameMaster__getSelfUserGame(0LL);
    if ( !baseObject )
      goto LABEL_56;
    v23 = baseObject;
    v24 = *(_DWORD *)(baseObject + 96);
    v25 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v25 = BalanceConfig_TypeInfo;
    }
    QpMax = v25->static_fields->QpMax;
    if ( v24 >= QpMax )
    {
      if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
      }
    }
    else
    {
      QpMax = *(_DWORD *)(v23 + 96);
    }
    goto LABEL_51;
  }
  if ( !ItemMaster__isFriendPoint(v22, itemId, 0LL) )
  {
    baseObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( baseObject )
    {
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)baseObject,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      baseObject = NetworkManager__get_UserId(0LL);
      if ( MasterData_WarQuestSelectionMaster )
      {
        baseObject = (int64_t)UserItemMaster__GetEntityDefinitely(
                                MasterData_WarQuestSelectionMaster,
                                baseObject,
                                itemId,
                                0LL);
        if ( baseObject )
        {
          v31 = baseObject;
          v32 = *(_DWORD *)(baseObject + 28);
          v33 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v33 = BalanceConfig_TypeInfo;
          }
          QpMax = v33->static_fields->UserEventItemMax;
          if ( v32 >= QpMax )
          {
            if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v33);
              QpMax = BalanceConfig_TypeInfo->static_fields->UserEventItemMax;
            }
          }
          else
          {
            QpMax = *(_DWORD *)(v31 + 28);
          }
          goto LABEL_51;
        }
      }
    }
LABEL_56:
    sub_B5D69C(baseObject, *(_QWORD *)&itemId);
  }
  baseObject = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !baseObject )
    goto LABEL_56;
  v27 = (UserGameEntity_o *)baseObject;
  FriendPoint = UserGameEntity__GetFriendPoint((UserGameEntity_o *)baseObject, 0LL);
  v29 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v29 = BalanceConfig_TypeInfo;
  }
  QpMax = v29->static_fields->FriendPointMax;
  if ( FriendPoint >= QpMax )
  {
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      QpMax = BalanceConfig_TypeInfo->static_fields->FriendPointMax;
    }
  }
  else
  {
    QpMax = UserGameEntity__GetFriendPoint(v27, 0LL);
  }
LABEL_51:
  dataLabel = this->fields.dataLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  baseObject = (int64_t)LocalizationManager__GetNumberFormat(QpMax, 0LL);
  if ( !dataLabel )
    goto LABEL_56;
  UILabel__set_text(dataLabel, (System_String_o *)baseObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemComponent__SetDailyMissionEvent(
        EventItemComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_GameObject_o *baseObject; // x0
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UILabel_o *textLabel; // x20
  System_String_o *v18; // x22
  System_String_o *v19; // x0
  int32_t DailyMissionAchiveNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E9AEC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v12, v13, v14);
    byte_42E9AEC = 1;
  }
  DailyMissionAchiveNum = 0;
  this->fields.dataMissionEventId = eventId;
  if ( eventId < 1 )
  {
    EventItemComponent__Clear(this, *(const MethodInfo **)&eventId);
  }
  else
  {
    baseObject = this->fields.baseObject;
    if ( !baseObject )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.baseSp;
    if ( !baseObject )
      goto LABEL_21;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !baseObject )
      goto LABEL_21;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.dataLabel;
    if ( !baseObject )
      goto LABEL_21;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.textLabel;
    if ( !baseObject )
      goto LABEL_21;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_21;
    MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)baseObject,
                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_21;
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)baseObject,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( !baseObject
      || (textLabel = this->fields.textLabel,
          DailyMissionAchiveNum = UserEventMissionMaster__getDailyMissionAchiveNum(
                                    (UserEventMissionMaster_o *)baseObject,
                                    eventId,
                                    0LL),
          baseObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&DailyMissionAchiveNum, 0LL),
          !MasterData_WarQuestSelectionMaster)
      || (v18 = (System_String_o *)baseObject,
          DailyMissionAchiveNum = EventMissionMaster__getDailyEventMissionNum(
                                    MasterData_WarQuestSelectionMaster,
                                    eventId,
                                    0LL),
          v19 = System_Int32__ToString((int32_t)&DailyMissionAchiveNum, 0LL),
          baseObject = (UnityEngine_GameObject_o *)System_String__Concat_44580072(
                                                     v18,
                                                     (System_String_o *)StringLiteral_885/*"/"*/,
                                                     v19,
                                                     0LL),
          !textLabel) )
    {
LABEL_21:
      sub_B5D69C(baseObject, *(_QWORD *)&eventId);
    }
    UILabel__set_text(textLabel, (System_String_o *)baseObject, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemComponent__SetGroupPointEvent(
        EventItemComponent_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int64_t baseObject; // x0
  int32_t v28; // w20
  int32_t Script; // w21
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t Point; // x20
  UILabel_o *dataLabel; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E9AE9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, itemId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventPointMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v9, v10, v11);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&NetworkManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_18701/*"eventId"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_18700/*"eventGroupId"*/, v24, v25, v26);
    byte_42E9AE9 = 1;
  }
  entity = 0LL;
  this->fields.dataPointGroupEventId = itemId;
  if ( itemId < 1 )
  {
    EventItemComponent__Clear(this, *(const MethodInfo **)&itemId);
    return;
  }
  baseObject = (int64_t)this->fields.baseObject;
  if ( !baseObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0LL);
  baseObject = (int64_t)this->fields.baseSp;
  if ( !baseObject )
    goto LABEL_33;
  baseObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0LL);
  baseObject = (int64_t)this->fields.itemIcon;
  if ( !baseObject )
    goto LABEL_33;
  baseObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0LL);
  baseObject = (int64_t)this->fields.dataLabel;
  if ( !baseObject )
    goto LABEL_33;
  baseObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0LL);
  baseObject = (int64_t)this->fields.textLabel;
  if ( !baseObject )
    goto LABEL_33;
  baseObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 0, 0LL);
  baseObject = (int64_t)this->fields.itemIcon;
  if ( !baseObject )
    goto LABEL_33;
  ItemIconComponent__SetItem((ItemIconComponent_o *)baseObject, itemId, -1, 0LL);
  baseObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseObject )
    goto LABEL_33;
  baseObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)baseObject,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !baseObject )
    goto LABEL_33;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)baseObject,
         &entity,
         itemId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    baseObject = (int64_t)entity;
    if ( entity )
    {
      baseObject = ItemEntity__getScript((ItemEntity_o *)entity, (System_String_o *)StringLiteral_18701/*"eventId"*/, 0, 0LL);
      if ( entity )
      {
        v28 = baseObject;
        Script = ItemEntity__getScript((ItemEntity_o *)entity, (System_String_o *)StringLiteral_18700/*"eventGroupId"*/, 0, 0LL);
        baseObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( baseObject )
        {
          MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)baseObject,
                                                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          baseObject = NetworkManager__get_UserId(0LL);
          if ( MasterData_WarQuestSelectionMaster )
          {
            Point = UserEventPointMaster__GetPoint(MasterData_WarQuestSelectionMaster, baseObject, v28, Script, 0LL);
            goto LABEL_27;
          }
        }
      }
    }
LABEL_33:
    sub_B5D69C(baseObject, *(_QWORD *)&itemId);
  }
  Point = 0LL;
LABEL_27:
  dataLabel = this->fields.dataLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  baseObject = (int64_t)LocalizationManager__GetNumberFormatLong(Point, 0LL);
  if ( !dataLabel )
    goto LABEL_33;
  UILabel__set_text(dataLabel, (System_String_o *)baseObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemComponent__SetMissionEvent(
        EventItemComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_GameObject_o *baseObject; // x0
  EventMissionEntity_array *EventMissionList; // x21
  UILabel_o *textLabel; // x19
  System_String_o *v18; // x20
  System_String_o *v19; // x0
  __int64 v20; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E9AEB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v12, v13, v14);
    byte_42E9AEB = 1;
  }
  v20 = 0LL;
  this->fields.dataMissionEventId = eventId;
  if ( eventId < 1 )
  {
    EventItemComponent__Clear(this, *(const MethodInfo **)&eventId);
  }
  else
  {
    baseObject = this->fields.baseObject;
    if ( !baseObject )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.baseSp;
    if ( !baseObject )
      goto LABEL_21;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !baseObject )
      goto LABEL_21;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.dataLabel;
    if ( !baseObject )
      goto LABEL_21;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.textLabel;
    if ( !baseObject )
      goto LABEL_21;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_21;
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)baseObject,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !baseObject )
      goto LABEL_21;
    EventMissionList = EventMissionMaster__getEventMissionList((EventMissionMaster_o *)baseObject, eventId, 0LL);
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_21;
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)baseObject,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( !baseObject
      || (HIDWORD(v20) = UserEventMissionMaster__getAchiveMissionNum(
                           (UserEventMissionMaster_o *)baseObject,
                           eventId,
                           0LL),
          textLabel = this->fields.textLabel,
          baseObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v20 + 4, 0LL),
          !EventMissionList)
      || (v18 = (System_String_o *)baseObject,
          LODWORD(v20) = *(_QWORD *)&EventMissionList->max_length,
          v19 = System_Int32__ToString((int32_t)&v20, 0LL),
          baseObject = (UnityEngine_GameObject_o *)System_String__Concat_44580072(
                                                     v18,
                                                     (System_String_o *)StringLiteral_885/*"/"*/,
                                                     v19,
                                                     0LL),
          !textLabel) )
    {
LABEL_21:
      sub_B5D69C(baseObject, *(_QWORD *)&eventId);
    }
    UILabel__set_text(textLabel, (System_String_o *)baseObject, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemComponent__SetNum(
        EventItemComponent_o *this,
        int32_t num,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  __int64 v4; // x3
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UILabel_o *dataLabel; // x20
  System_String_o *v11; // x21
  System_String_o *NumberFormat_34103284; // x0
  __int64 v13; // x1
  int32_t v14; // [xsp+2Ch] [xbp-14h] BYREF
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  v14 = num;
  if ( (byte_42E9AEE & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, num, (_DWORD)method, v4);
    byte_42E9AEE = 1;
  }
  dataLabel = this->fields.dataLabel;
  v11 = System_Int32__ToString((int32_t)&v14, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat_34103284 = LocalizationManager__GetNumberFormat_34103284(v11, 0LL);
  if ( !dataLabel
    || (UILabel__set_text(dataLabel, NumberFormat_34103284, 0LL),
        (NumberFormat_34103284 = (System_String_o *)this->fields.dataLabel) == 0LL) )
  {
    sub_B5D69C(NumberFormat_34103284, v13);
  }
  v15.fields.r = r;
  v15.fields.g = g;
  v15.fields.b = b;
  v15.fields.a = a;
  UIWidget__set_color((UIWidget_o *)NumberFormat_34103284, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemComponent__SetPointEvent(
        EventItemComponent_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0
  UILabel_o *dataLabel; // x21
  int64_t EventPoint; // x19

  if ( (byte_42E9AEA & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, eventId, groupId, method);
    byte_42E9AEA = 1;
  }
  this->fields.dataPointEventId = eventId;
  this->fields.dataPointEventGroupId = groupId;
  if ( eventId < 1 )
  {
    EventItemComponent__Clear(this, *(const MethodInfo **)&eventId);
  }
  else
  {
    baseObject = this->fields.baseObject;
    if ( !baseObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.baseSp;
    if ( !baseObject )
      goto LABEL_20;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !baseObject )
      goto LABEL_20;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.dataLabel;
    if ( !baseObject )
      goto LABEL_20;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.textLabel;
    if ( !baseObject )
      goto LABEL_20;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !baseObject )
      goto LABEL_20;
    ItemIconComponent__SetPointEvent((ItemIconComponent_o *)baseObject, eventId, 0LL);
    dataLabel = this->fields.dataLabel;
    EventPoint = UserEventPointMaster__GetEventPoint(eventId, groupId, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    baseObject = (UnityEngine_GameObject_o *)LocalizationManager__GetNumberFormatLong(EventPoint, 0LL);
    if ( !dataLabel )
LABEL_20:
      sub_B5D69C(baseObject, *(_QWORD *)&eventId);
    UILabel__set_text(dataLabel, (System_String_o *)baseObject, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemComponent__SetRaidEvent(
        EventItemComponent_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  UnityEngine_GameObject_o *baseObject; // x0
  int64_t v14; // x0
  UILabel_o *dataLabel; // x19
  System_String_o *v16; // x20
  int64_t v17; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E9AED & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventRaidMaster___, eventId, day, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42E9AED = 1;
  }
  v17 = 0LL;
  this->fields.dataRaidEventId = eventId;
  this->fields.dataRaidDay = day;
  if ( eventId < 1 )
  {
    EventItemComponent__Clear(this, *(const MethodInfo **)&eventId);
  }
  else
  {
    baseObject = this->fields.baseObject;
    if ( !baseObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.baseSp;
    if ( !baseObject )
      goto LABEL_26;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !baseObject )
      goto LABEL_26;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.dataLabel;
    if ( !baseObject )
      goto LABEL_26;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.textLabel;
    if ( !baseObject )
      goto LABEL_26;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !baseObject )
      goto LABEL_26;
    ItemIconComponent__SetRaidEvent((ItemIconComponent_o *)baseObject, eventId, 0LL);
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_26;
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)baseObject,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
    if ( !baseObject )
      goto LABEL_26;
    v14 = day
        ? UserEventRaidMaster__getDamagePoint((UserEventRaidMaster_o *)baseObject, eventId, day, 0LL)
        : UserEventRaidMaster__getTotalDamagePoint((UserEventRaidMaster_o *)baseObject, eventId, 0LL);
    v17 = v14;
    dataLabel = this->fields.dataLabel;
    v16 = System_Int64__ToString((int64_t)&v17, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    baseObject = (UnityEngine_GameObject_o *)LocalizationManager__GetNumberFormat_34103284(v16, 0LL);
    if ( !dataLabel )
LABEL_26:
      sub_B5D69C(baseObject, *(_QWORD *)&eventId);
    UILabel__set_text(dataLabel, (System_String_o *)baseObject, 0LL);
  }
}


void __fastcall EventItemComponent__UpdateDisp(EventItemComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x3
  int dataItemId; // w1
  int dataPointEventId; // w1
  int dataMissionEventId; // w1
  int dataRaidEventId; // w1
  int dataPointGroupEventId; // w1

  dataItemId = this->fields.dataItemId;
  if ( dataItemId >= 1 )
    EventItemComponent__Set(this, dataItemId, v2);
  dataPointEventId = this->fields.dataPointEventId;
  if ( dataPointEventId >= 1 )
    EventItemComponent__SetPointEvent(this, dataPointEventId, this->fields.dataPointEventGroupId, v3);
  dataMissionEventId = this->fields.dataMissionEventId;
  if ( dataMissionEventId >= 1 )
    EventItemComponent__SetMissionEvent(this, dataMissionEventId, v2);
  dataRaidEventId = this->fields.dataRaidEventId;
  if ( dataRaidEventId >= 1 )
    EventItemComponent__SetRaidEvent(this, dataRaidEventId, this->fields.dataRaidDay, v3);
  dataPointGroupEventId = this->fields.dataPointGroupEventId;
  if ( dataPointGroupEventId >= 1 )
    EventItemComponent__SetGroupPointEvent(this, dataPointGroupEventId, v2);
}


UISprite_o *__fastcall EventItemComponent__get_BackgroundSprite(EventItemComponent_o *this, const MethodInfo *method)
{
  return this->fields.baseSp;
}


void __fastcall EventItemComponent__setBaseSpriteDownloadAtlas(
        EventItemComponent_o *this,
        System_String_o *spName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UISprite_o *baseSp; // x21
  __int64 v7; // x1
  struct UISprite_o *v8; // x0

  if ( (byte_42E9AEF & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)spName, (_DWORD)method, v3);
    byte_42E9AEF = 1;
  }
  baseSp = this->fields.baseSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(baseSp, spName, 0LL);
  v8 = this->fields.baseSp;
  if ( !v8 )
    sub_B5D69C(0LL, v7);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v8->klass->vtable._33_MakePixelPerfect.method)(
    v8,
    v8->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall EventItemComponent__setFontSizeDataLabel(
        EventItemComponent_o *this,
        int32_t size,
        const MethodInfo *method)
{
  UILabel_o *dataLabel; // x0

  dataLabel = this->fields.dataLabel;
  if ( !dataLabel )
    sub_B5D69C(0LL, size);
  UILabel__set_fontSize(dataLabel, size, 0LL);
}


void __fastcall EventItemComponent__setHeightDataLabel(
        EventItemComponent_o *this,
        int32_t height,
        const MethodInfo *method)
{
  UIWidget_o *dataLabel; // x0

  dataLabel = (UIWidget_o *)this->fields.dataLabel;
  if ( !dataLabel )
    sub_B5D69C(0LL, height);
  UIWidget__set_height(dataLabel, height, 0LL);
}


void __fastcall EventItemComponent__setLocalPositionDataLabel(
        EventItemComponent_o *this,
        float x,
        float y,
        const MethodInfo *method)
{
  UnityEngine_Component_o *dataLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  dataLabel = (UnityEngine_Component_o *)this->fields.dataLabel;
  if ( !dataLabel )
    sub_B5D69C(0LL, method);
  gameObject = UnityEngine_Component__get_gameObject(dataLabel, 0LL);
  GameObjectExtensions__SetLocalPosition_32430496(gameObject, x, y, 0LL);
}


void __fastcall EventItemComponent__setLocalPositionXItemIcon(
        EventItemComponent_o *this,
        float x,
        const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0

  itemIcon = this->fields.itemIcon;
  if ( !itemIcon )
    sub_B5D69C(0LL, method);
  ItemIconComponent__setLocalPositionIconSprite(itemIcon, x, 0LL);
}


void __fastcall EventItemComponent__setPivotDataLabel(
        EventItemComponent_o *this,
        int32_t pivot,
        const MethodInfo *method)
{
  UIWidget_o *dataLabel; // x0

  dataLabel = (UIWidget_o *)this->fields.dataLabel;
  if ( !dataLabel )
    sub_B5D69C(0LL, pivot);
  UIWidget__set_rawPivot(dataLabel, pivot, 0LL);
}


void __fastcall EventItemComponent__setScaleItemIcon(EventItemComponent_o *this, float scale, const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0

  itemIcon = this->fields.itemIcon;
  if ( !itemIcon )
    sub_B5D69C(0LL, method);
  ItemIconComponent__setLocalScaleIconSprite(itemIcon, scale, 0LL);
}


void __fastcall EventItemComponent__setWidthDataLabel(
        EventItemComponent_o *this,
        int32_t width,
        const MethodInfo *method)
{
  UIWidget_o *dataLabel; // x0

  dataLabel = (UIWidget_o *)this->fields.dataLabel;
  if ( !dataLabel )
    sub_B5D69C(0LL, width);
  UIWidget__set_width(dataLabel, width, 0LL);
}