void __fastcall QuestRewardHeelPortraitAction___ctor(QuestRewardHeelPortraitAction_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_4217CF5 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_6219/*"EventUI/Prefabs/"*/, method);
    byte_4217CF5 = 1;
  }
  *(_QWORD *)&this->fields.screenTouchInfoPosY = 0x40000000FFFFFF23LL;
  v9 = (System_Int32_array **)StringLiteral_6219/*"EventUI/Prefabs/"*/;
  this->fields.loadAssetName = (struct System_String_o *)StringLiteral_6219/*"EventUI/Prefabs/"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.loadAssetName, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardHeelPortraitAction__Init(
        QuestRewardHeelPortraitAction_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  this->fields.eventId = eventId;
  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall QuestRewardHeelPortraitAction__LoadEventUI(
        QuestRewardHeelPortraitAction_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Action_o **v16; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  AssetData_o *eventUIAssetData; // x0
  System_String_o *loadAssetName; // x21
  System_String_o *v25; // x0
  System_String_o *v26; // x19
  __int64 v27; // x1
  __int64 v28; // x2
  AssetLoader_LoadEndDataHandler_o *v29; // x21

  if ( (byte_4217CF1 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, callback);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B0D8A4(&Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__0__, v6);
    sub_B0D8A4(&QuestRewardHeelPortraitAction___c__DisplayClass14_0_TypeInfo, v7);
    byte_4217CF1 = 1;
  }
  v8 = sub_B0D974(QuestRewardHeelPortraitAction___c__DisplayClass14_0_TypeInfo, callback, method);
  QuestRewardHeelPortraitAction___c__DisplayClass14_0___ctor(
    (QuestRewardHeelPortraitAction___c__DisplayClass14_0_o *)v8,
    0LL);
  if ( !v8 )
    sub_B0D97C(v9);
  *(_QWORD *)(v8 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v8 + 24) = callback;
  v16 = (System_Action_o **)(v8 + 24);
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)callback, v17, v18, v19, v20, v21, v22);
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( eventUIAssetData && !AssetData__get_IsEmpty(eventUIAssetData, 0LL) )
  {
    if ( *v16 )
      ActionExtensions__Call(*v16, 0LL);
  }
  else
  {
    loadAssetName = this->fields.loadAssetName;
    v25 = System_Int32__ToString((int)this + 80, 0LL);
    v26 = System_String__Concat_43849904(loadAssetName, v25, 0LL);
    v29 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v27, v28);
    AssetLoader_LoadEndDataHandler___ctor(
      v29,
      (Il2CppObject *)v8,
      Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(v26, v29, 1, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall QuestRewardHeelPortraitAction__Play(
        QuestRewardHeelPortraitAction_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4217CF4 & 1) == 0 )
  {
    sub_B0D8A4(&QuestRewardHeelPortraitAction__Play_d__17_TypeInfo, endAction);
    byte_4217CF4 = 1;
  }
  v5 = sub_B0D974(QuestRewardHeelPortraitAction__Play_d__17_TypeInfo, endAction, method);
  QuestRewardHeelPortraitAction__Play_d__17___ctor((QuestRewardHeelPortraitAction__Play_d__17_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v5 + 40) = endAction;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)endAction, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall QuestRewardHeelPortraitAction__ReleaseEventUI(
        QuestRewardHeelPortraitAction_o *this,
        const MethodInfo *method)
{
  int32_t eventId; // w20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4217CF2 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    byte_4217CF2 = 1;
  }
  eventId = this->fields.eventId;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_27921720(eventId, 0LL);
  this->fields.eventUIAssetData = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.eventUIAssetData, 0LL, v4, v5, v6, v7, v8, v9);
}


void __fastcall QuestRewardHeelPortraitAction__SerializeFieldNotNullCheck(
        QuestRewardHeelPortraitAction_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardHeelPortraitAction__Setup(
        QuestRewardHeelPortraitAction_o *this,
        QuestRewardInfo_array *infos,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
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
  QuestRewardHeelPortraitAction___c_c *v20; // x0
  struct QuestRewardHeelPortraitAction___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__16_0; // x21
  Il2CppObject *v23; // x22
  struct QuestRewardHeelPortraitAction___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v32; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v33; // x21
  unsigned __int64 v34; // x26
  QuestRewardInfo_o *v35; // x24
  struct UnityEngine_GameObject_o *portraitObj; // x22
  UnityEngine_GameObject_o *v37; // x22
  UnityEngine_Transform_o *transform; // x23
  int v39; // s0
  UnityEngine_Transform_o *v42; // x23
  int v43; // s0
  UISprite_o *v46; // x23
  int32_t eventId; // w24
  int32_t name; // w19
  System_String_o *v49; // x19
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  CommonUI_o *Instance; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v61; // x0
  QuestRewardHeelPortraitAction_o *v62; // [xsp+0h] [xbp-60h]
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4217CF3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Sort_QuestRewardInfo___, infos);
    sub_B0D8A4(&AtlasManager_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Comparison_QuestRewardInfo___ctor__, v6);
    sub_B0D8A4(&System_Comparison_QuestRewardInfo__TypeInfo, v7);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIGrid___, v8);
    sub_B0D8A4(&System_Convert_TypeInfo, v9);
    sub_B0D8A4(&Method_DataManager_GetMaster_HeelPortraitMaster___, v10);
    sub_B0D8A4(&DataManager_TypeInfo, v11);
    sub_B0D8A4(&Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int__TryGetEntity__, v12);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v13);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v14);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_B0D8A4(&Method_QuestRewardHeelPortraitAction___c__Setup_b__16_0__, v18);
    sub_B0D8A4(&QuestRewardHeelPortraitAction___c_TypeInfo, v19);
    byte_4217CF3 = 1;
  }
  entity = 0LL;
  v20 = QuestRewardHeelPortraitAction___c_TypeInfo;
  if ( (BYTE3(QuestRewardHeelPortraitAction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRewardHeelPortraitAction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardHeelPortraitAction___c_TypeInfo);
    v20 = QuestRewardHeelPortraitAction___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__16_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = QuestRewardHeelPortraitAction___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_QuestRewardInfo__TypeInfo,
                                                                           infos,
                                                                           method);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__16_0,
      v23,
      Method_QuestRewardHeelPortraitAction___c__Setup_b__16_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_QuestRewardInfo___ctor__);
    v24 = QuestRewardHeelPortraitAction___c_TypeInfo->static_fields;
    v24->__9__16_0 = (struct System_Comparison_QuestRewardInfo__o *)_9__16_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v24->__9__16_0,
      (System_Int32_array **)_9__16_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    (BattleBuffData_BuffData_array *)infos,
    (System_Comparison_T__o *)_9__16_0,
    (const MethodInfo_23398EC *)Method_System_Array_Sort_QuestRewardInfo___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_HeelPortraitMaster___);
  if ( !infos )
    goto LABEL_52;
  v32 = *(_QWORD *)&infos->max_length;
  if ( (int)v32 >= 1 )
  {
    v33 = Master_WarQuestSelectionMaster;
    v34 = 0LL;
    v62 = this;
    do
    {
      if ( v34 >= (unsigned int)v32 )
      {
        v61 = sub_B0D9A8(Master_WarQuestSelectionMaster);
        sub_B0D948(v61, 0LL);
      }
      v35 = infos->m_Items[v34];
      if ( v35 && v35->fields.type == 15 )
      {
        portraitObj = this->fields.portraitObj;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)portraitObj,
                                                                                          (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_52;
        v37 = (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster;
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_GameObject__get_transform(
                                                                                          (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                                                          0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_52;
        UnityEngine_Transform__set_parent(
          (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
          this->fields.listRoot,
          0LL);
        transform = UnityEngine_GameObject__get_transform(v37, 0LL);
        *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Vector3__get_zero(0LL);
        if ( !transform )
          goto LABEL_52;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v39, 0LL);
        v42 = UnityEngine_GameObject__get_transform(v37, 0LL);
        *(UnityEngine_Vector3_o *)&v43 = UnityEngine_Vector3__get_one(0LL);
        if ( !v42 )
          goto LABEL_52;
        UnityEngine_Transform__set_localScale(v42, *(UnityEngine_Vector3_o *)&v43, 0LL);
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                          v37,
                                                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !v33 )
          goto LABEL_52;
        v46 = (UISprite_o *)Master_WarQuestSelectionMaster;
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                          v33,
                                                                                          &entity,
                                                                                          v35->fields.objectId,
                                                                                          (const MethodInfo_2669C30 *)Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_52;
          eventId = this->fields.eventId;
          name = (int32_t)entity->fields.name;
          if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Convert_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
          }
          v49 = System_Convert__ToString_41931572(name, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetEventUI_27921852(eventId, v46, v49, 0LL);
          this = v62;
        }
        UnityEngine_GameObject__SetActive(v37, 1, 0LL);
      }
      LODWORD(v32) = infos->max_length;
    }
    while ( (__int64)++v34 < (int)v32 );
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.listRoot;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_52;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                                    (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                                                    (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_52;
  ((void (__fastcall *)(DataMasterBase_WarMaster__WarEntity__int__o *, void *))Master_WarQuestSelectionMaster->klass->vtable._8_OnListChangedImplementation.method)(
    Master_WarQuestSelectionMaster,
    Master_WarQuestSelectionMaster->klass[1]._1.image);
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__get_transform(
                                                                                      (UnityEngine_Component_o *)this,
                                                                                      0LL);
    if ( Instance )
    {
      Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)CommonUI__CreateScreeenTouchInfo(
                                                                                        Instance,
                                                                                        (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
                                                                                        0,
                                                                                        0LL);
      if ( Master_WarQuestSelectionMaster )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                           (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_srcLineSprite;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.screenTouchInfo,
          Component_srcLineSprite,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59);
        goto LABEL_48;
      }
    }
LABEL_52:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
LABEL_48:
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)*p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_52;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__get_gameObject(
                                                                                    (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                                                    0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)*p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_52;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, (float)this->fields.screenTouchInfoPosY, 0LL);
}


void __fastcall QuestRewardHeelPortraitAction__Update(QuestRewardHeelPortraitAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *screenTouchInfo; // x0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v14; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v16; // x21

  if ( (byte_4217CF0 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v3);
    sub_B0D8A4(&CTouch_TypeInfo, v4);
    sub_B0D8A4(&Method_QuestRewardHeelPortraitAction__Update_b__11_0__, v5);
    sub_B0D8A4(&Method_QuestRewardHeelPortraitAction_Update__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4217CF0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    CTouch__process(0LL);
    if ( CTouch__isTouchPush(0LL) )
    {
      screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
      this->fields.state = 0;
      if ( !screenTouchInfo )
        goto LABEL_18;
      screenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL);
      if ( !screenTouchInfo )
        goto LABEL_18;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInfo, 0, 0LL);
      v9 = Method_QuestRewardHeelPortraitAction_Update__;
      if ( (*((_BYTE *)Method_QuestRewardHeelPortraitAction_Update__ + 75) & 2) != 0 )
        v9 = (_QWORD *)sub_B0D8AC(Method_QuestRewardHeelPortraitAction_Update__);
      v10 = (System_Reflection_MethodBase_o *)sub_B0D888(v9, v9[3]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v14 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v14 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
      v16 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_QuestRewardHeelPortraitAction__Update_b__11_0__, 0LL);
      if ( !Instance )
LABEL_18:
        sub_B0D97C(screenTouchInfo);
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v16, 0LL);
    }
  }
}


void __fastcall QuestRewardHeelPortraitAction___Update_b__11_0(
        QuestRewardHeelPortraitAction_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall QuestRewardHeelPortraitAction__Play_d__17___ctor(
        QuestRewardHeelPortraitAction__Play_d__17_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestRewardHeelPortraitAction__Play_d__17__MoveNext(
        QuestRewardHeelPortraitAction__Play_d__17_o *this,
        const MethodInfo *method)
{
  QuestRewardHeelPortraitAction__Play_d__17_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  struct QuestRewardHeelPortraitAction_o *_4__this; // x20
  struct System_Action_o *endAction; // x1
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  CommonUI_o *v12; // x21
  float dispTouchWaitTime; // s8
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_WaitForSeconds_o *v16; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  v2 = this;
  if ( (byte_42124F7 & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__, v4);
    sub_B0D8A4(&UnityEngine_WaitForSeconds_TypeInfo, v5);
    this = (QuestRewardHeelPortraitAction__Play_d__17_o *)sub_B0D8A4(&StringLiteral_16491/*"ar236"*/, v6);
    byte_42124F7 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_19;
    this = (QuestRewardHeelPortraitAction__Play_d__17_o *)_4__this->fields.screenTouchInfo;
    if ( !this )
      goto LABEL_19;
    this = (QuestRewardHeelPortraitAction__Play_d__17_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL);
    if ( !this )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    result = 0;
    _4__this->fields.state = 2;
  }
  else
  {
    if ( !_1__state )
    {
      v2->fields.__1__state = -1;
      if ( _4__this )
      {
        _4__this->fields.state = 1;
        endAction = v2->fields.endAction;
        _4__this->fields.endAct = endAction;
        sub_B0D840(&_4__this->fields.endAct, endAction);
        this = (QuestRewardHeelPortraitAction__Play_d__17_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)_4__this,
                                                                0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          v10 = Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__;
          if ( (*((_BYTE *)Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__ + 75) & 2) != 0 )
            v10 = (_QWORD *)sub_B0D8AC(Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__);
          v11 = (System_Reflection_MethodBase_o *)sub_B0D888(v10, v10[3]);
          OverwriteAssetSoundName__PlaySe(v11, (System_String_o *)StringLiteral_16491/*"ar236"*/, 0LL);
          this = (QuestRewardHeelPortraitAction__Play_d__17_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v12 = (CommonUI_o *)this;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          }
          if ( v12 )
          {
            CommonUI__maskFadein(v12, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
            dispTouchWaitTime = _4__this->fields.dispTouchWaitTime;
            v16 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, v14, v15);
            UnityEngine_WaitForSeconds___ctor(v16, dispTouchWaitTime, 0LL);
            v2->fields.__2__current = (Il2CppObject *)v16;
            p__2__current = &v2->fields.__2__current;
            sub_B0D840(p__2__current, v16);
            result = 1;
            *((_DWORD *)p__2__current - 2) = 1;
            return result;
          }
        }
      }
LABEL_19:
      sub_B0D97C(this);
    }
    return 0;
  }
  return result;
}


Il2CppObject *__fastcall QuestRewardHeelPortraitAction__Play_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestRewardHeelPortraitAction__Play_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestRewardHeelPortraitAction__Play_d__17__System_Collections_IEnumerator_Reset(
        QuestRewardHeelPortraitAction__Play_d__17_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_QuestRewardHeelPortraitAction__Play_d__17_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall QuestRewardHeelPortraitAction__Play_d__17__System_Collections_IEnumerator_get_Current(
        QuestRewardHeelPortraitAction__Play_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestRewardHeelPortraitAction__Play_d__17__System_IDisposable_Dispose(
        QuestRewardHeelPortraitAction__Play_d__17_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardHeelPortraitAction___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct QuestRewardHeelPortraitAction___c_StaticFields *static_fields; // x0

  if ( (byte_42124F5 & 1) == 0 )
  {
    sub_B0D8A4(&QuestRewardHeelPortraitAction___c_TypeInfo, v1);
    byte_42124F5 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(QuestRewardHeelPortraitAction___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = QuestRewardHeelPortraitAction___c_TypeInfo->static_fields;
  static_fields->__9 = (struct QuestRewardHeelPortraitAction___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall QuestRewardHeelPortraitAction___c___ctor(
        QuestRewardHeelPortraitAction___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestRewardHeelPortraitAction___c___Setup_b__16_0(
        QuestRewardHeelPortraitAction___c_o *this,
        QuestRewardInfo_o *x,
        QuestRewardInfo_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_B0D97C(this);
  return x->fields.objectId - y->fields.objectId;
}


void __fastcall QuestRewardHeelPortraitAction___c__DisplayClass14_0___ctor(
        QuestRewardHeelPortraitAction___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardHeelPortraitAction___c__DisplayClass14_0___LoadEventUI_b__0(
        QuestRewardHeelPortraitAction___c__DisplayClass14_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppClass *klass; // x8
  int32_t declaringType; // w19
  System_Action_o *v8; // x21

  v3 = (Il2CppObject *)this;
  if ( (byte_42124F6 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, assetData);
    sub_B0D8A4(&AtlasManager_TypeInfo, v4);
    this = (QuestRewardHeelPortraitAction___c__DisplayClass14_0_o *)sub_B0D8A4(
                                                                      &Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__1__,
                                                                      v5);
    byte_42124F6 = 1;
  }
  klass = v3[1].klass;
  if ( !klass )
    sub_B0D97C(this);
  declaringType = (int32_t)klass->_1.declaringType;
  v8 = (System_Action_o *)v3[2].klass;
  if ( !v8 )
  {
    v8 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, assetData, method);
    System_Action___ctor(v8, v3, Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__1__, 0LL);
    v3[2].klass = (Il2CppClass *)v8;
    sub_B0D840(&v3[2], v8);
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_27921540(declaringType, v8, 1, 0LL);
}


void __fastcall QuestRewardHeelPortraitAction___c__DisplayClass14_0___LoadEventUI_b__1(
        QuestRewardHeelPortraitAction___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *callback; // x0

  callback = this->fields.callback;
  if ( callback )
    ActionExtensions__Call(callback, 0LL);
}