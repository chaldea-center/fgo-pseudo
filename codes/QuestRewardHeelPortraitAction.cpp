void __fastcall QuestRewardHeelPortraitAction___ctor(QuestRewardHeelPortraitAction_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_4389902 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_6350/*"EventUI/Prefabs/"*/);
    byte_4389902 = 1;
  }
  *(_QWORD *)&this->fields.screenTouchInfoPosY = 0x40000000FFFFFF23LL;
  v9 = (System_Int32_array **)StringLiteral_6350/*"EventUI/Prefabs/"*/;
  this->fields.loadAssetName = (struct System_String_o *)StringLiteral_6350/*"EventUI/Prefabs/"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.loadAssetName, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardHeelPortraitAction__Init(
        QuestRewardHeelPortraitAction_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.eventId = eventId;
  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7769C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall QuestRewardHeelPortraitAction__LoadEventUI(
        QuestRewardHeelPortraitAction_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Action_o **v14; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  AssetData_o *eventUIAssetData; // x0
  System_String_o *loadAssetName; // x21
  System_String_o *v23; // x0
  System_String_o *v24; // x19
  AssetLoader_LoadEndDataHandler_o *v25; // x21

  if ( (byte_43898FE & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B775C4(&Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__0__);
    sub_B775C4(&QuestRewardHeelPortraitAction___c__DisplayClass14_0_TypeInfo);
    byte_43898FE = 1;
  }
  v5 = sub_B77694(QuestRewardHeelPortraitAction___c__DisplayClass14_0_TypeInfo);
  QuestRewardHeelPortraitAction___c__DisplayClass14_0___ctor(
    (QuestRewardHeelPortraitAction___c__DisplayClass14_0_o *)v5,
    0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  v14 = (System_Action_o **)(v5 + 24);
  sub_B77560((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)callback, v15, v16, v17, v18, v19, v20);
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( eventUIAssetData && !AssetData__get_IsEmpty(eventUIAssetData, 0LL) )
  {
    if ( *v14 )
      ActionExtensions__Call(*v14, 0LL);
  }
  else
  {
    loadAssetName = this->fields.loadAssetName;
    v23 = System_Int32__ToString((int)this + 80, 0LL);
    v24 = System_String__Concat_44901936(loadAssetName, v23, 0LL);
    v25 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v25,
      (Il2CppObject *)v5,
      Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(v24, v25, 1, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall QuestRewardHeelPortraitAction__Play(
        QuestRewardHeelPortraitAction_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4389901 & 1) == 0 )
  {
    sub_B775C4(&QuestRewardHeelPortraitAction__Play_d__17_TypeInfo);
    byte_4389901 = 1;
  }
  v5 = sub_B77694(QuestRewardHeelPortraitAction__Play_d__17_TypeInfo);
  QuestRewardHeelPortraitAction__Play_d__17___ctor((QuestRewardHeelPortraitAction__Play_d__17_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = endAction;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)endAction, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_43898FF & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    byte_43898FF = 1;
  }
  eventId = this->fields.eventId;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_24479600(eventId, 0LL);
  this->fields.eventUIAssetData = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.eventUIAssetData, 0LL, v4, v5, v6, v7, v8, v9);
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
  QuestRewardHeelPortraitAction___c_c *v5; // x0
  struct QuestRewardHeelPortraitAction___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__16_0; // x21
  Il2CppObject *v8; // x22
  struct QuestRewardHeelPortraitAction___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v17; // x1
  __int64 v18; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x21
  unsigned __int64 v20; // x26
  QuestRewardInfo_o *v21; // x24
  struct UnityEngine_GameObject_o *portraitObj; // x22
  UnityEngine_GameObject_o *v23; // x22
  UnityEngine_Transform_o *transform; // x23
  int v25; // s0
  UnityEngine_Transform_o *v28; // x23
  int v29; // s0
  UISprite_o *v32; // x23
  int32_t eventId; // w24
  int32_t name; // w19
  System_String_o *v35; // x19
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  CommonUI_o *Instance; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v47; // x0
  QuestRewardHeelPortraitAction_o *v48; // [xsp+0h] [xbp-60h]
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4389900 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_Sort_QuestRewardInfo___);
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_System_Comparison_QuestRewardInfo___ctor__);
    sub_B775C4(&System_Comparison_QuestRewardInfo__TypeInfo);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_B775C4(&System_Convert_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_HeelPortraitMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int__TryGetEntity__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_QuestRewardHeelPortraitAction___c__Setup_b__16_0__);
    sub_B775C4(&QuestRewardHeelPortraitAction___c_TypeInfo);
    byte_4389900 = 1;
  }
  entity = 0LL;
  v5 = QuestRewardHeelPortraitAction___c_TypeInfo;
  if ( (BYTE3(QuestRewardHeelPortraitAction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRewardHeelPortraitAction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardHeelPortraitAction___c_TypeInfo);
    v5 = QuestRewardHeelPortraitAction___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__16_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = QuestRewardHeelPortraitAction___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_QuestRewardInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__16_0,
      v8,
      Method_QuestRewardHeelPortraitAction___c__Setup_b__16_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_QuestRewardInfo___ctor__);
    v9 = QuestRewardHeelPortraitAction___c_TypeInfo->static_fields;
    v9->__9__16_0 = (struct System_Comparison_QuestRewardInfo__o *)_9__16_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v9->__9__16_0,
      (System_Int32_array **)_9__16_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    (BattleBuffData_BuffData_array *)infos,
    (System_Comparison_T__o *)_9__16_0,
    (const MethodInfo_1C56B58 *)Method_System_Array_Sort_QuestRewardInfo___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_HeelPortraitMaster___);
  if ( !infos )
    goto LABEL_52;
  v18 = *(_QWORD *)&infos->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = Master_WarQuestSelectionMaster;
    v20 = 0LL;
    v48 = this;
    do
    {
      if ( v20 >= (unsigned int)v18 )
      {
        v47 = sub_B776C8(Master_WarQuestSelectionMaster);
        sub_B77668(v47, 0LL);
      }
      v21 = infos->m_Items[v20];
      if ( v21 && v21->fields.type == 15 )
      {
        portraitObj = this->fields.portraitObj;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)portraitObj,
                                                                                          (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_52;
        v23 = (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster;
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_GameObject__get_transform(
                                                                                          (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                                                          0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_52;
        UnityEngine_Transform__set_parent(
          (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
          this->fields.listRoot,
          0LL);
        transform = UnityEngine_GameObject__get_transform(v23, 0LL);
        *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Vector3__get_zero(0LL);
        if ( !transform )
          goto LABEL_52;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v25, 0LL);
        v28 = UnityEngine_GameObject__get_transform(v23, 0LL);
        *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Vector3__get_one(0LL);
        if ( !v28 )
          goto LABEL_52;
        UnityEngine_Transform__set_localScale(v28, *(UnityEngine_Vector3_o *)&v29, 0LL);
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                          v23,
                                                                                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !v19 )
          goto LABEL_52;
        v32 = (UISprite_o *)Master_WarQuestSelectionMaster;
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                          v19,
                                                                                          &entity,
                                                                                          v21->fields.objectId,
                                                                                          (const MethodInfo_21FB8F0 *)Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int__TryGetEntity__);
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
          v35 = System_Convert__ToString_42790284(name, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetEventUI_24479740(eventId, v32, v35, 0LL);
          this = v48;
        }
        UnityEngine_GameObject__SetActive(v23, 1, 0LL);
      }
      LODWORD(v18) = infos->max_length;
    }
    while ( (__int64)++v20 < (int)v18 );
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.listRoot;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_52;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                                    (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                                                    (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                                                           (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_srcLineSprite;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.screenTouchInfo,
          Component_srcLineSprite,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
        goto LABEL_48;
      }
    }
LABEL_52:
    sub_B7769C(Master_WarQuestSelectionMaster, v17);
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
  UnityEngine_Component_o *screenTouchInfo; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v8; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21

  if ( (byte_43898FD & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&CTouch_TypeInfo);
    sub_B775C4(&Method_QuestRewardHeelPortraitAction__Update_b__11_0__);
    sub_B775C4(&Method_QuestRewardHeelPortraitAction_Update__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_43898FD = 1;
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
      v5 = Method_QuestRewardHeelPortraitAction_Update__;
      if ( (*((_BYTE *)Method_QuestRewardHeelPortraitAction_Update__ + 75) & 2) != 0 )
        v5 = (_QWORD *)sub_B775CC(Method_QuestRewardHeelPortraitAction_Update__);
      v6 = (System_Reflection_MethodBase_o *)sub_B775A8(v5, v5[3]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v8 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v8 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
      v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_QuestRewardHeelPortraitAction__Update_b__11_0__, 0LL);
      if ( !Instance )
LABEL_18:
        sub_B7769C(screenTouchInfo, v3);
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v10, 0LL);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  QuestRewardHeelPortraitAction__Play_d__17_o *v8; // x19
  int32_t _1__state; // w8
  struct QuestRewardHeelPortraitAction_o *_4__this; // x20
  System_Int32_array **endAction; // x1
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  CommonUI_o *v14; // x21
  float dispTouchWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v16; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  bool result; // w0

  v8 = this;
  if ( (byte_438B1A4 & 1) == 0 )
  {
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__);
    sub_B775C4(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (QuestRewardHeelPortraitAction__Play_d__17_o *)sub_B775C4(&StringLiteral_16763/*"ar236"*/);
    byte_438B1A4 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
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
      v8->fields.__1__state = -1;
      if ( _4__this )
      {
        _4__this->fields.state = 1;
        endAction = (System_Int32_array **)v8->fields.endAction;
        _4__this->fields.endAct = (struct System_Action_o *)endAction;
        sub_B77560((BattleServantConfConponent_o *)&_4__this->fields.endAct, endAction, v2, v3, v4, v5, v6, v7);
        this = (QuestRewardHeelPortraitAction__Play_d__17_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)_4__this,
                                                                0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          v12 = Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__;
          if ( (*((_BYTE *)Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__ + 75) & 2) != 0 )
            v12 = (_QWORD *)sub_B775CC(Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__);
          v13 = (System_Reflection_MethodBase_o *)sub_B775A8(v12, v12[3]);
          OverwriteAssetSoundName__PlaySe(v13, (System_String_o *)StringLiteral_16763/*"ar236"*/, 0LL);
          this = (QuestRewardHeelPortraitAction__Play_d__17_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v14 = (CommonUI_o *)this;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          }
          if ( v14 )
          {
            CommonUI__maskFadein(v14, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
            dispTouchWaitTime = _4__this->fields.dispTouchWaitTime;
            v16 = (UnityEngine_WaitForSeconds_o *)sub_B77694(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(v16, dispTouchWaitTime, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v16;
            p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
            sub_B77560(p__2__current, (System_Int32_array **)v16, v18, v19, v20, v21, v22, v23);
            result = 1;
            *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
            return result;
          }
        }
      }
LABEL_19:
      sub_B7769C(this, method);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_QuestRewardHeelPortraitAction__Play_d__17_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
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
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438B1A2 & 1) == 0 )
  {
    sub_B775C4(&QuestRewardHeelPortraitAction___c_TypeInfo);
    byte_438B1A2 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(QuestRewardHeelPortraitAction___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestRewardHeelPortraitAction___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7769C(this, x);
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
  QuestRewardHeelPortraitAction___c__DisplayClass14_0_o *v3; // x20
  struct QuestRewardHeelPortraitAction_o *_4__this; // x8
  int32_t eventId; // w19
  System_Action_o *_9__1; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  v3 = this;
  if ( (byte_438B1A3 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AtlasManager_TypeInfo);
    this = (QuestRewardHeelPortraitAction___c__DisplayClass14_0_o *)sub_B775C4(&Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__1__);
    byte_438B1A3 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    sub_B7769C(this, assetData);
  eventId = _4__this->fields.eventId;
  _9__1 = v3->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_B77560(
      (BattleServantConfConponent_o *)&v3->fields.__9__1,
      (System_Int32_array **)_9__1,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_24479412(eventId, _9__1, 1, 0LL);
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