void __fastcall QuestRewardHeelPortraitAction___ctor(QuestRewardHeelPortraitAction_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_40FD5F6 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6184, method);
    byte_40FD5F6 = 1;
  }
  *(_QWORD *)&this->fields.screenTouchInfoPosY = 0x40000000FFFFFF23LL;
  v9 = (System_Int32_array **)StringLiteral_6184;
  this->fields.loadAssetName = (struct System_String_o *)StringLiteral_6184;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.loadAssetName, v9, v2, v3, v4, v5, v6, v7);
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
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall QuestRewardHeelPortraitAction__LoadEventUI(
        QuestRewardHeelPortraitAction_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Action_o **v17; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  AssetData_o *eventUIAssetData; // x0
  System_String_o *loadAssetName; // x21
  System_String_o *v26; // x0
  System_String_o *v27; // x19
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  AssetLoader_LoadEndDataHandler_o *v32; // x21

  if ( (byte_40FD5F2 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, callback);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B16FFC(&Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__0__, v8);
    sub_B16FFC(&QuestRewardHeelPortraitAction___c__DisplayClass14_0_TypeInfo, v9);
    byte_40FD5F2 = 1;
  }
  v10 = sub_B170CC(QuestRewardHeelPortraitAction___c__DisplayClass14_0_TypeInfo, callback, method, v3, v4);
  QuestRewardHeelPortraitAction___c__DisplayClass14_0___ctor(
    (QuestRewardHeelPortraitAction___c__DisplayClass14_0_o *)v10,
    0LL);
  if ( !v10 )
    sub_B170D4();
  *(_QWORD *)(v10 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v10 + 24) = callback;
  v17 = (System_Action_o **)(v10 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)callback, v18, v19, v20, v21, v22, v23);
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( eventUIAssetData && !AssetData__get_IsEmpty(eventUIAssetData, 0LL) )
  {
    if ( *v17 )
      ActionExtensions__Call(*v17, 0LL);
  }
  else
  {
    loadAssetName = this->fields.loadAssetName;
    v26 = System_Int32__ToString((int)this + 80, 0LL);
    v27 = System_String__Concat_43743732(loadAssetName, v26, 0LL);
    v32 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v28, v29, v30, v31);
    AssetLoader_LoadEndDataHandler___ctor(
      v32,
      (Il2CppObject *)v10,
      Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(v27, v32, 1, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall QuestRewardHeelPortraitAction__Play(
        QuestRewardHeelPortraitAction_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
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

  if ( (byte_40FD5F5 & 1) == 0 )
  {
    sub_B16FFC(&QuestRewardHeelPortraitAction__Play_d__17_TypeInfo, endAction);
    byte_40FD5F5 = 1;
  }
  v7 = sub_B170CC(QuestRewardHeelPortraitAction__Play_d__17_TypeInfo, endAction, method, v3, v4);
  QuestRewardHeelPortraitAction__Play_d__17___ctor((QuestRewardHeelPortraitAction__Play_d__17_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = endAction;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)endAction, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
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

  if ( (byte_40FD5F3 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    byte_40FD5F3 = 1;
  }
  eventId = this->fields.eventId;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_28584740(eventId, 0LL);
  this->fields.eventUIAssetData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.eventUIAssetData, 0LL, v4, v5, v6, v7, v8, v9);
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v20; // x1
  __int64 v21; // x1
  QuestRewardHeelPortraitAction___c_c *v22; // x0
  struct QuestRewardHeelPortraitAction___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__16_0; // x21
  Il2CppObject *v25; // x22
  struct QuestRewardHeelPortraitAction___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v37; // x21
  unsigned __int64 v38; // x26
  QuestRewardInfo_o *v39; // x24
  struct UnityEngine_GameObject_o *portraitObj; // x22
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v44; // x23
  int v45; // s0
  UnityEngine_Transform_o *v48; // x23
  int v49; // s0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UISprite_o *v53; // x23
  int32_t eventId; // w24
  int32_t name; // w19
  System_String_o *v56; // x19
  UnityEngine_Component_o *listRoot; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_Component_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  CommonUI_o *Instance; // x21
  UnityEngine_Transform_o *v62; // x0
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x0
  System_Int32_array **v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v72; // x0
  QuestRewardHeelPortraitAction_o *v73; // [xsp+0h] [xbp-60h]
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FD5F4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Sort_QuestRewardInfo___, infos);
    sub_B16FFC(&AtlasManager_TypeInfo, v7);
    sub_B16FFC(&Method_System_Comparison_QuestRewardInfo___ctor__, v8);
    sub_B16FFC(&System_Comparison_QuestRewardInfo__TypeInfo, v9);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIGrid___, v10);
    sub_B16FFC(&System_Convert_TypeInfo, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_HeelPortraitMaster___, v12);
    sub_B16FFC(&DataManager_TypeInfo, v13);
    sub_B16FFC(&Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int__TryGetEntity__, v14);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v15);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v16);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_B16FFC(&Method_QuestRewardHeelPortraitAction___c__Setup_b__16_0__, v20);
    sub_B16FFC(&QuestRewardHeelPortraitAction___c_TypeInfo, v21);
    byte_40FD5F4 = 1;
  }
  entity = 0LL;
  v22 = QuestRewardHeelPortraitAction___c_TypeInfo;
  if ( (BYTE3(QuestRewardHeelPortraitAction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRewardHeelPortraitAction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardHeelPortraitAction___c_TypeInfo);
    v22 = QuestRewardHeelPortraitAction___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__16_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = QuestRewardHeelPortraitAction___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_QuestRewardInfo__TypeInfo,
                                                                           infos,
                                                                           method,
                                                                           v3,
                                                                           v4);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__16_0,
      v25,
      Method_QuestRewardHeelPortraitAction___c__Setup_b__16_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_QuestRewardInfo___ctor__);
    v26 = QuestRewardHeelPortraitAction___c_TypeInfo->static_fields;
    v26->__9__16_0 = (struct System_Comparison_QuestRewardInfo__o *)_9__16_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v26->__9__16_0,
      (System_Int32_array **)_9__16_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    (BattleBuffData_BuffData_array *)infos,
    (System_Comparison_T__o *)_9__16_0,
    (const MethodInfo_2506BD4 *)Method_System_Array_Sort_QuestRewardInfo___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_HeelPortraitMaster___);
  if ( !infos )
    goto LABEL_52;
  v36 = *(_QWORD *)&infos->max_length;
  if ( (int)v36 >= 1 )
  {
    v37 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
    v38 = 0LL;
    v73 = this;
    do
    {
      if ( v38 >= (unsigned int)v36 )
      {
        sub_B17100(Master_WarQuestSelectionMaster, v34, v35);
        sub_B170A0();
      }
      v39 = infos->m_Items[v38];
      if ( v39 && v39->fields.type == 15 )
      {
        portraitObj = this->fields.portraitObj;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v41 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)portraitObj,
                                            (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !v41 )
          goto LABEL_52;
        v42 = v41;
        transform = UnityEngine_GameObject__get_transform(v41, 0LL);
        if ( !transform )
          goto LABEL_52;
        UnityEngine_Transform__set_parent(transform, this->fields.listRoot, 0LL);
        v44 = UnityEngine_GameObject__get_transform(v42, 0LL);
        *(UnityEngine_Vector3_o *)&v45 = UnityEngine_Vector3__get_zero(0LL);
        if ( !v44 )
          goto LABEL_52;
        UnityEngine_Transform__set_localPosition(v44, *(UnityEngine_Vector3_o *)&v45, 0LL);
        v48 = UnityEngine_GameObject__get_transform(v42, 0LL);
        *(UnityEngine_Vector3_o *)&v49 = UnityEngine_Vector3__get_one(0LL);
        if ( !v48 )
          goto LABEL_52;
        UnityEngine_Transform__set_localScale(v48, *(UnityEngine_Vector3_o *)&v49, 0LL);
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v42,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !v37 )
          goto LABEL_52;
        v53 = (UISprite_o *)Component_srcLineSprite;
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               v37,
               &entity,
               v39->fields.objectId,
               (const MethodInfo_266F3E4 *)Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int__TryGetEntity__) )
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
          v56 = System_Convert__ToString_41756656(name, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetEventUI_28584872(eventId, v53, v56, 0LL);
          this = v73;
        }
        UnityEngine_GameObject__SetActive(v42, 1, 0LL);
      }
      LODWORD(v36) = infos->max_length;
    }
    while ( (__int64)++v38 < (int)v36 );
  }
  listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !listRoot )
    goto LABEL_52;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              listRoot,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !Component_WebViewObject )
    goto LABEL_52;
  (*(void (__fastcall **)(WebViewObject_o *, Il2CppClass *))&Component_WebViewObject->klass[1]._1.this_arg.bits)(
    Component_WebViewObject,
    Component_WebViewObject->klass[1]._1.element_class);
  p_screenTouchInfo = (UnityEngine_Component_o **)&this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v62 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(Instance, v62, 0, 0LL);
      if ( ScreeenTouchInfo )
      {
        v64 = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       ScreeenTouchInfo,
                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_screenTouchInfo = (UnityEngine_Component_o *)v64;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.screenTouchInfo, v64, v65, v66, v67, v68, v69, v70);
        goto LABEL_48;
      }
    }
LABEL_52:
    sub_B170D4();
  }
LABEL_48:
  if ( !*p_screenTouchInfo )
    goto LABEL_52;
  gameObject = UnityEngine_Component__get_gameObject(*p_screenTouchInfo, 0LL);
  if ( !gameObject )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( !*p_screenTouchInfo )
    goto LABEL_52;
  v72 = UnityEngine_Component__get_gameObject(*p_screenTouchInfo, 0LL);
  GameObjectExtensions__SetLocalPositionY(v72, (float)this->fields.screenTouchInfoPosY, 0LL);
}


void __fastcall QuestRewardHeelPortraitAction__Update(QuestRewardHeelPortraitAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *screenTouchInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v17; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x21

  if ( (byte_40FD5F1 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&CTouch_TypeInfo, v4);
    sub_B16FFC(&Method_QuestRewardHeelPortraitAction__Update_b__11_0__, v5);
    sub_B16FFC(&Method_QuestRewardHeelPortraitAction_Update__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_40FD5F1 = 1;
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
      gameObject = UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL);
      if ( !gameObject )
        goto LABEL_18;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      v10 = Method_QuestRewardHeelPortraitAction_Update__;
      if ( (*((_BYTE *)Method_QuestRewardHeelPortraitAction_Update__ + 75) & 2) != 0 )
        v10 = (_QWORD *)sub_B17004(Method_QuestRewardHeelPortraitAction_Update__);
      v11 = (System_Reflection_MethodBase_o *)sub_B16FE0(v10, v10[3]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v17 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v17 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
      v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_QuestRewardHeelPortraitAction__Update_b__11_0__, 0LL);
      if ( !Instance )
LABEL_18:
        sub_B170D4();
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v19, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t _1__state; // w8
  struct QuestRewardHeelPortraitAction_o *_4__this; // x20
  System_Int32_array **endAction; // x1
  UnityEngine_GameObject_o *v16; // x0
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  CommonUI_o *Instance; // x21
  float dispTouchWaitTime; // s8
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  UnityEngine_WaitForSeconds_o *v25; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  bool result; // w0
  UnityEngine_Component_o *screenTouchInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FA32B & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__, v10);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_16378, v12);
    byte_40FA32B = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_19;
    screenTouchInfo = (UnityEngine_Component_o *)_4__this->fields.screenTouchInfo;
    if ( !screenTouchInfo )
      goto LABEL_19;
    gameObject = UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL);
    if ( !gameObject )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    result = 0;
    _4__this->fields.state = 2;
  }
  else
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      if ( _4__this )
      {
        _4__this->fields.state = 1;
        endAction = (System_Int32_array **)this->fields.endAction;
        _4__this->fields.endAct = (struct System_Action_o *)endAction;
        sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.endAct, endAction, v2, v3, v4, v5, v6, v7);
        v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
        if ( v16 )
        {
          UnityEngine_GameObject__SetActive(v16, 1, 0LL);
          v17 = Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__;
          if ( (*((_BYTE *)Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__ + 75) & 2) != 0 )
            v17 = (_QWORD *)sub_B17004(Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__);
          v18 = (System_Reflection_MethodBase_o *)sub_B16FE0(v17, v17[3]);
          OverwriteAssetSoundName__PlaySe(v18, (System_String_o *)StringLiteral_16378, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          }
          if ( Instance )
          {
            CommonUI__maskFadein(Instance, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
            dispTouchWaitTime = _4__this->fields.dispTouchWaitTime;
            v25 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, v21, v22, v23, v24);
            UnityEngine_WaitForSeconds___ctor(v25, dispTouchWaitTime, 0LL);
            this->fields.__2__current = (Il2CppObject *)v25;
            p__2__current = &this->fields.__2__current;
            sub_B16F98(
              (BattleServantConfConponent_o *)p__2__current,
              (System_Int32_array **)v25,
              v27,
              v28,
              v29,
              v30,
              v31,
              v32);
            result = 1;
            *((_DWORD *)p__2__current - 2) = 1;
            return result;
          }
        }
      }
LABEL_19:
      sub_B170D4();
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_QuestRewardHeelPortraitAction__Play_d__17_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FA329 & 1) == 0 )
  {
    sub_B16FFC(&QuestRewardHeelPortraitAction___c_TypeInfo, v1);
    byte_40FA329 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(QuestRewardHeelPortraitAction___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestRewardHeelPortraitAction___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  struct QuestRewardHeelPortraitAction_o *_4__this; // x8
  int32_t eventId; // w19
  System_Action_o *_9__1; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_40FA32A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, assetData);
    sub_B16FFC(&AtlasManager_TypeInfo, v6);
    sub_B16FFC(&Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__1__, v7);
    byte_40FA32A = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  eventId = _4__this->fields.eventId;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, assetData, method, v3, v4);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_28584560(eventId, _9__1, 1, 0LL);
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