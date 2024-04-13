void __fastcall QuestRewardHeelPortraitAction___ctor(QuestRewardHeelPortraitAction_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_42E6EE8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6281/*"EventUI/Prefabs/"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E6EE8 = 1;
  }
  *(_QWORD *)&this->fields.screenTouchInfoPosY = 0x40000000FFFFFF23LL;
  v9 = (System_Int32_array **)StringLiteral_6281/*"EventUI/Prefabs/"*/;
  this->fields.loadAssetName = (struct System_String_o *)StringLiteral_6281/*"EventUI/Prefabs/"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.loadAssetName, v9, v2, v3, v4, v5, v6, v7);
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
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall QuestRewardHeelPortraitAction__LoadEventUI(
        QuestRewardHeelPortraitAction_o *this,
        System_Action_o *callback,
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
  __int64 v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Action_o **v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  AssetData_o *eventUIAssetData; // x0
  System_String_o *loadAssetName; // x21
  System_String_o *v33; // x0
  System_String_o *v34; // x19
  AssetLoader_LoadEndDataHandler_o *v35; // x21

  if ( (byte_42E6EE4 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__0__, v9, v10, v11);
    sub_B5D5C4(&QuestRewardHeelPortraitAction___c__DisplayClass14_0_TypeInfo, v12, v13, v14);
    byte_42E6EE4 = 1;
  }
  v15 = sub_B5D694(QuestRewardHeelPortraitAction___c__DisplayClass14_0_TypeInfo);
  QuestRewardHeelPortraitAction___c__DisplayClass14_0___ctor(
    (QuestRewardHeelPortraitAction___c__DisplayClass14_0_o *)v15,
    0LL);
  if ( !v15 )
    sub_B5D69C(v16, v17);
  *(_QWORD *)(v15 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = callback;
  v24 = (System_Action_o **)(v15 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)callback, v25, v26, v27, v28, v29, v30);
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( eventUIAssetData && !AssetData__get_IsEmpty(eventUIAssetData, 0LL) )
  {
    if ( *v24 )
      ActionExtensions__Call(*v24, 0LL);
  }
  else
  {
    loadAssetName = this->fields.loadAssetName;
    v33 = System_Int32__ToString((int)this + 80, 0LL);
    v34 = System_String__Concat_44577788(loadAssetName, v33, 0LL);
    v35 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v35,
      (Il2CppObject *)v15,
      Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(v34, v35, 1, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall QuestRewardHeelPortraitAction__Play(
        QuestRewardHeelPortraitAction_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E6EE7 & 1) == 0 )
  {
    sub_B5D5C4(&QuestRewardHeelPortraitAction__Play_d__17_TypeInfo, (_DWORD)endAction, (_DWORD)method, v3);
    byte_42E6EE7 = 1;
  }
  v6 = sub_B5D694(QuestRewardHeelPortraitAction__Play_d__17_TypeInfo);
  QuestRewardHeelPortraitAction__Play_d__17___ctor((QuestRewardHeelPortraitAction__Play_d__17_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = endAction;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)endAction, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall QuestRewardHeelPortraitAction__ReleaseEventUI(
        QuestRewardHeelPortraitAction_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t eventId; // w20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E6EE5 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6EE5 = 1;
  }
  eventId = this->fields.eventId;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_31190280(eventId, 0LL);
  this->fields.eventUIAssetData = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.eventUIAssetData, 0LL, v6, v7, v8, v9, v10, v11);
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
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  QuestRewardHeelPortraitAction___c_c *v51; // x0
  struct QuestRewardHeelPortraitAction___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__16_0; // x21
  Il2CppObject *v54; // x22
  struct QuestRewardHeelPortraitAction___c_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v63; // x1
  __int64 v64; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v65; // x21
  unsigned __int64 v66; // x26
  QuestRewardInfo_o *v67; // x24
  struct UnityEngine_GameObject_o *portraitObj; // x22
  UnityEngine_GameObject_o *v69; // x22
  UnityEngine_Transform_o *transform; // x23
  int v71; // s0
  UnityEngine_Transform_o *v74; // x23
  int v75; // s0
  UISprite_o *v78; // x23
  int32_t eventId; // w24
  int32_t name; // w19
  System_String_o *v81; // x19
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  CommonUI_o *Instance; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v93; // x0
  QuestRewardHeelPortraitAction_o *v94; // [xsp+0h] [xbp-60h]
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E6EE6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Sort_QuestRewardInfo___, (_DWORD)infos, (_DWORD)method, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_QuestRewardInfo___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_QuestRewardInfo__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIGrid___, v15, v16, v17);
    sub_B5D5C4(&System_Convert_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMaster_HeelPortraitMaster___, v21, v22, v23);
    sub_B5D5C4(&DataManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int__TryGetEntity__, v27, v28, v29);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v30, v31, v32);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v33, v34, v35);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v36, v37, v38);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v42, v43, v44);
    sub_B5D5C4(&Method_QuestRewardHeelPortraitAction___c__Setup_b__16_0__, v45, v46, v47);
    sub_B5D5C4(&QuestRewardHeelPortraitAction___c_TypeInfo, v48, v49, v50);
    byte_42E6EE6 = 1;
  }
  entity = 0LL;
  v51 = QuestRewardHeelPortraitAction___c_TypeInfo;
  if ( (BYTE3(QuestRewardHeelPortraitAction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRewardHeelPortraitAction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardHeelPortraitAction___c_TypeInfo);
    v51 = QuestRewardHeelPortraitAction___c_TypeInfo;
  }
  static_fields = v51->static_fields;
  _9__16_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51);
      static_fields = QuestRewardHeelPortraitAction___c_TypeInfo->static_fields;
    }
    v54 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_QuestRewardInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__16_0,
      v54,
      Method_QuestRewardHeelPortraitAction___c__Setup_b__16_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_QuestRewardInfo___ctor__);
    v55 = QuestRewardHeelPortraitAction___c_TypeInfo->static_fields;
    v55->__9__16_0 = (struct System_Comparison_QuestRewardInfo__o *)_9__16_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v55->__9__16_0,
      (System_Int32_array **)_9__16_0,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    (BattleBuffData_BuffData_array *)infos,
    (System_Comparison_T__o *)_9__16_0,
    (const MethodInfo_1AC8530 *)Method_System_Array_Sort_QuestRewardInfo___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_HeelPortraitMaster___);
  if ( !infos )
    goto LABEL_52;
  v64 = *(_QWORD *)&infos->max_length;
  if ( (int)v64 >= 1 )
  {
    v65 = Master_WarQuestSelectionMaster;
    v66 = 0LL;
    v94 = this;
    do
    {
      if ( v66 >= (unsigned int)v64 )
      {
        v93 = sub_B5D6C8(Master_WarQuestSelectionMaster);
        sub_B5D668(v93, 0LL);
      }
      v67 = infos->m_Items[v66];
      if ( v67 && v67->fields.type == 15 )
      {
        portraitObj = this->fields.portraitObj;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)portraitObj,
                                                                                          (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_52;
        v69 = (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster;
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_GameObject__get_transform(
                                                                                          (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                                                          0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_52;
        UnityEngine_Transform__set_parent(
          (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
          this->fields.listRoot,
          0LL);
        transform = UnityEngine_GameObject__get_transform(v69, 0LL);
        *(UnityEngine_Vector3_o *)&v71 = UnityEngine_Vector3__get_zero(0LL);
        if ( !transform )
          goto LABEL_52;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v71, 0LL);
        v74 = UnityEngine_GameObject__get_transform(v69, 0LL);
        *(UnityEngine_Vector3_o *)&v75 = UnityEngine_Vector3__get_one(0LL);
        if ( !v74 )
          goto LABEL_52;
        UnityEngine_Transform__set_localScale(v74, *(UnityEngine_Vector3_o *)&v75, 0LL);
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                          v69,
                                                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !v65 )
          goto LABEL_52;
        v78 = (UISprite_o *)Master_WarQuestSelectionMaster;
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                          v65,
                                                                                          &entity,
                                                                                          v67->fields.objectId,
                                                                                          (const MethodInfo_23FAE6C *)Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int__TryGetEntity__);
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
          v81 = System_Convert__ToString_42796160(name, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetEventUI_31190412(eventId, v78, v81, 0LL);
          this = v94;
        }
        UnityEngine_GameObject__SetActive(v69, 1, 0LL);
      }
      LODWORD(v64) = infos->max_length;
    }
    while ( (__int64)++v66 < (int)v64 );
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.listRoot;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_52;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                                    (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                                                    (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_srcLineSprite;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.screenTouchInfo,
          Component_srcLineSprite,
          v86,
          v87,
          v88,
          v89,
          v90,
          v91);
        goto LABEL_48;
      }
    }
LABEL_52:
    sub_B5D69C(Master_WarQuestSelectionMaster, v63);
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
  __int64 v20; // x1
  UnityEngine_Component_o *screenTouchInfo; // x0
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v25; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v27; // x21

  if ( (byte_42E6EE3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CTouch_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_QuestRewardHeelPortraitAction__Update_b__11_0__, v11, v12, v13);
    sub_B5D5C4(&Method_QuestRewardHeelPortraitAction_Update__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    byte_42E6EE3 = 1;
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
      v22 = Method_QuestRewardHeelPortraitAction_Update__;
      if ( (*((_BYTE *)Method_QuestRewardHeelPortraitAction_Update__ + 75) & 2) != 0 )
        v22 = (_QWORD *)sub_B5D5CC(Method_QuestRewardHeelPortraitAction_Update__);
      v23 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v22, v22[3]);
      OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v25 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v25 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
      v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v27, (Il2CppObject *)this, Method_QuestRewardHeelPortraitAction__Update_b__11_0__, 0LL);
      if ( !Instance )
LABEL_18:
        sub_B5D69C(screenTouchInfo, v20);
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v27, 0LL);
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
  int32_t _1__state; // w8
  struct QuestRewardHeelPortraitAction_o *_4__this; // x20
  System_Int32_array **endAction; // x1
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  CommonUI_o *v26; // x21
  float dispTouchWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v28; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  bool result; // w0

  v8 = this;
  if ( (byte_42E7F1B & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_WaitForSeconds_TypeInfo, v15, v16, v17);
    this = (QuestRewardHeelPortraitAction__Play_d__17_o *)sub_B5D5C4(&StringLiteral_16640/*"ar236"*/, v18, v19, v20);
    byte_42E7F1B = 1;
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
        sub_B5D560((BattleServantConfConponent_o *)&_4__this->fields.endAct, endAction, v2, v3, v4, v5, v6, v7);
        this = (QuestRewardHeelPortraitAction__Play_d__17_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)_4__this,
                                                                0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          v24 = Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__;
          if ( (*((_BYTE *)Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__ + 75) & 2) != 0 )
            v24 = (_QWORD *)sub_B5D5CC(Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__);
          v25 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v24, v24[3]);
          OverwriteAssetSoundName__PlaySe(v25, (System_String_o *)StringLiteral_16640/*"ar236"*/, 0LL);
          this = (QuestRewardHeelPortraitAction__Play_d__17_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v26 = (CommonUI_o *)this;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          }
          if ( v26 )
          {
            CommonUI__maskFadein(v26, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
            dispTouchWaitTime = _4__this->fields.dispTouchWaitTime;
            v28 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(v28, dispTouchWaitTime, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v28;
            p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
            sub_B5D560(p__2__current, (System_Int32_array **)v28, v30, v31, v32, v33, v34, v35);
            result = 1;
            *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
            return result;
          }
        }
      }
LABEL_19:
      sub_B5D69C(this, method);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_QuestRewardHeelPortraitAction__Play_d__17_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7F19 & 1) == 0 )
  {
    sub_B5D5C4(&QuestRewardHeelPortraitAction___c_TypeInfo, v1, v2, v3);
    byte_42E7F19 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(QuestRewardHeelPortraitAction___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestRewardHeelPortraitAction___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, x);
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
  QuestRewardHeelPortraitAction___c__DisplayClass14_0_o *v4; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct QuestRewardHeelPortraitAction_o *_4__this; // x8
  int32_t eventId; // w19
  System_Action_o *_9__1; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  v4 = this;
  if ( (byte_42E7F1A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)assetData, (_DWORD)method, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v5, v6, v7);
    this = (QuestRewardHeelPortraitAction___c__DisplayClass14_0_o *)sub_B5D5C4(
                                                                      &Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__1__,
                                                                      v8,
                                                                      v9,
                                                                      v10);
    byte_42E7F1A = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(this, assetData);
  eventId = _4__this->fields.eventId;
  _9__1 = v4->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v4->fields.__9__1,
      (System_Int32_array **)_9__1,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_31190100(eventId, _9__1, 1, 0LL);
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