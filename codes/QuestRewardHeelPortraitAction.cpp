void QuestRewardHeelPortraitAction___ctor(QuestRewardHeelPortraitAction_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_596D3D4 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6532/*"EventUI/Prefabs/"*/);
    byte_596D3D4 = 1;
  }
  v9 = StringLiteral_6532/*"EventUI/Prefabs/"*/;
  this->fields.loadAssetName = (struct System_String_o *)StringLiteral_6532/*"EventUI/Prefabs/"*/;
  *(_QWORD *)&this->fields.screenTouchInfoPosY = 0x40000000FFFFFF23LL;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.loadAssetName, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void QuestRewardHeelPortraitAction__Init(
        QuestRewardHeelPortraitAction_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.eventId = eventId;
  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void QuestRewardHeelPortraitAction__LoadEventUI(
        QuestRewardHeelPortraitAction_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Action_o **v14; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  AssetData_o *eventUIAssetData; // x0
  System_String_o *loadAssetName; // x21
  System_String_o *v23; // x0
  System_String_o *v24; // x19
  AssetLoader_LoadEndDataHandler_o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2

  if ( (byte_596D3D0 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__0__);
    sub_2213A60(&QuestRewardHeelPortraitAction___c__DisplayClass14_0_TypeInfo);
    byte_596D3D0 = 1;
  }
  v5 = sub_2213CCC(QuestRewardHeelPortraitAction___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  v14 = (System_Action_o **)(v5 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v15, v16, v17, v18, v19, v20);
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( eventUIAssetData && !AssetData__get_IsEmpty(eventUIAssetData, 0) )
  {
    if ( *v14 )
      ActionExtensions__Call(*v14, 0);
  }
  else
  {
    loadAssetName = this->fields.loadAssetName;
    v23 = System_Int32__ToString((int)this + 88, 0);
    v24 = System_String__Concat_75651716(loadAssetName, v23, 0);
    v25 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v25,
      (Il2CppObject *)v5,
      Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__0__,
      0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v26, v27);
    AssetManager__loadAssetStorage(v24, v25, 1, 0, 0);
  }
}


System_Collections_IEnumerator_o *QuestRewardHeelPortraitAction__Play(
        QuestRewardHeelPortraitAction_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596D3D3 & 1) == 0 )
  {
    sub_2213A60(&QuestRewardHeelPortraitAction__Play_d__17_TypeInfo);
    byte_596D3D3 = 1;
  }
  v5 = sub_2213CCC(QuestRewardHeelPortraitAction__Play_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = endAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)endAction, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void QuestRewardHeelPortraitAction__ReleaseEventUI(QuestRewardHeelPortraitAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t eventId; // w20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_596D3D1 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    byte_596D3D1 = 1;
  }
  eventId = this->fields.eventId;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method, v2);
  AtlasManager__ReleaseEventUI_47569360(eventId, 0);
  this->fields.eventUIAssetData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventUIAssetData, 0, v5, v6, v7, v8, v9, v10);
}


void QuestRewardHeelPortraitAction__SerializeFieldNotNullCheck(
        QuestRewardHeelPortraitAction_o *this,
        const MethodInfo *method)
{
  ;
}


void QuestRewardHeelPortraitAction__Setup(
        QuestRewardHeelPortraitAction_o *this,
        QuestRewardInfo_array *infos,
        const MethodInfo *method)
{
  System_Object_array *v3; // x20
  QuestRewardHeelPortraitAction___c_c *v5; // x0
  struct QuestRewardHeelPortraitAction___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__16_0; // x21
  Il2CppObject *v8; // x22
  struct QuestRewardHeelPortraitAction___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  __int64 v17; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  il2cpp_array_size_t max_length; // x8
  const MethodInfo_38F34CC **v22; // x27
  const MethodInfo_38B6F40 **v23; // x22
  const MethodInfo_3F10B80 **v24; // x29
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x21
  unsigned __int64 v26; // x28
  Il2CppObject **m_Items; // x24
  Il2CppObject *v28; // x25
  Il2CppObject *portraitObj; // x23
  UnityEngine_GameObject_o *v30; // x23
  UnityEngine_Transform_o *v31; // x24
  UnityEngine_Transform_o *v32; // x24
  UISprite_o *v33; // x24
  __int64 v34; // x2
  const MethodInfo_3F10B80 **v35; // x25
  System_Object_array *v36; // x29
  DataMasterBase_TMaster__TEntity__PKType__o *v37; // x20
  const MethodInfo_38B6F40 **v38; // x21
  const MethodInfo_38F34CC **v39; // x22
  int32_t klass; // w27
  __int64 v41; // x1
  __int64 v42; // x2
  System_String_o *v43; // x27
  __int64 v44; // x1
  __int64 v45; // x2
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *Component_object; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t eventId; // [xsp+Ch] [xbp-74h]
  Il2CppObject **v58; // [xsp+10h] [xbp-70h]
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  v3 = (System_Object_array *)infos;
  if ( (byte_596D3D2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Sort_QuestRewardInfo___);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&System_Comparison_QuestRewardInfo__TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_HeelPortraitMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int__TryGetEntity__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_QuestRewardHeelPortraitAction___c__Setup_b__16_0__);
    sub_2213A60(&QuestRewardHeelPortraitAction___c_TypeInfo);
    byte_596D3D2 = 1;
  }
  v5 = QuestRewardHeelPortraitAction___c_TypeInfo;
  entity = 0;
  if ( !*(&QuestRewardHeelPortraitAction___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardHeelPortraitAction___c_TypeInfo, infos, method);
    v5 = QuestRewardHeelPortraitAction___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__16_0 = (System_Comparison_T__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, infos, method);
      static_fields = QuestRewardHeelPortraitAction___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_QuestRewardInfo__TypeInfo);
    System_Comparison_object____ctor(_9__16_0, v8, Method_QuestRewardHeelPortraitAction___c__Setup_b__16_0__, 0);
    v9 = QuestRewardHeelPortraitAction___c_TypeInfo->static_fields;
    v9->__9__16_0 = (struct System_Comparison_QuestRewardInfo__o *)_9__16_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__16_0, (int32_t)_9__16_0, v10, v11, v12, v13, v14, v15);
  }
  System_Array__Sort_object__58432120(
    v3,
    _9__16_0,
    (const MethodInfo_37B9A78 *)Method_System_Array_Sort_QuestRewardInfo___);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16, v17);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_HeelPortraitMaster___);
  if ( !v3 )
    goto LABEL_49;
  max_length = v3->max_length;
  if ( (int)max_length >= 1 )
  {
    v22 = (const MethodInfo_38F34CC **)&Method_UnityEngine_Object_Instantiate_GameObject___;
    v23 = (const MethodInfo_38B6F40 **)&Method_UnityEngine_GameObject_GetComponent_UISprite___;
    v24 = (const MethodInfo_3F10B80 **)&Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int__TryGetEntity__;
    v25 = Master_object;
    v26 = 0;
    m_Items = v3->m_Items;
    v58 = v3->m_Items;
    do
    {
      if ( v26 >= (unsigned int)max_length )
        sub_2213CE4(Master_object);
      v28 = m_Items[v26];
      if ( v28 && LODWORD(v28[1].klass) == 15 )
      {
        portraitObj = (Il2CppObject *)this->fields.portraitObj;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__Instantiate_object_(
                                                                        portraitObj,
                                                                        *v22);
        if ( !Master_object )
          goto LABEL_49;
        v30 = (UnityEngine_GameObject_o *)Master_object;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__get_transform(
                                                                        (UnityEngine_GameObject_o *)Master_object,
                                                                        0);
        if ( !Master_object )
          goto LABEL_49;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Master_object, this->fields.listRoot, 0);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__get_transform(v30, 0);
        v31 = (UnityEngine_Transform_o *)Master_object;
        if ( !byte_5969AE0 )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE0 = 1;
        }
        if ( !v31 )
          goto LABEL_49;
        UnityEngine_Transform__set_localPosition(v31, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__get_transform(v30, 0);
        v32 = (UnityEngine_Transform_o *)Master_object;
        if ( !byte_5969AE5 )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE5 = 1;
        }
        if ( !v32 )
          goto LABEL_49;
        UnityEngine_Transform__set_localScale(v32, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                        v30,
                                                                        *v23);
        if ( !v25 )
          goto LABEL_49;
        v33 = (UISprite_o *)Master_object;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                        v25,
                                                                        &entity,
                                                                        HIDWORD(v28[1].klass),
                                                                        *v24);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_49;
          v35 = v24;
          v36 = v3;
          v37 = v25;
          v38 = v23;
          v39 = v22;
          klass = (int32_t)entity[2].klass;
          eventId = this->fields.eventId;
          if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v19, v34);
          v43 = System_Convert__ToString_76695160(klass, 0);
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v41, v42);
          AtlasManager__SetEventUI_47569484(eventId, v33, v43, 0);
          v22 = v39;
          v23 = v38;
          v25 = v37;
          v3 = v36;
          v24 = v35;
        }
        UnityEngine_GameObject__SetActive(v30, 1, 0);
        m_Items = v58;
      }
      LODWORD(max_length) = v3->max_length;
    }
    while ( (__int64)++v26 < (int)max_length );
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.listRoot;
  if ( !Master_object )
    goto LABEL_49;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)Master_object,
                                                                  (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !Master_object )
    goto LABEL_49;
  ((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, const MethodInfo *))Master_object->klass->vtable._8_ReplacedForThread.methodPtr)(
    Master_object,
    Master_object->klass->vtable._8_ReplacedForThread.method);
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44, v45);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0);
    if ( Instance )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CommonUI__CreateScreeenTouchInfo(
                                                                      (CommonUI_o *)Instance,
                                                                      (UnityEngine_Transform_o *)Master_object,
                                                                      0,
                                                                      0);
      if ( Master_object )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Master_object,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.screenTouchInfo,
          (int32_t)Component_object,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55);
        goto LABEL_45;
      }
    }
LABEL_49:
    sub_2213CDC(Master_object, v19);
  }
LABEL_45:
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_49;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)Master_object,
                                                                  0);
  if ( !Master_object )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_49;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, (float)this->fields.screenTouchInfoPosY, 0);
}


void QuestRewardHeelPortraitAction__Update(QuestRewardHeelPortraitAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Component_o *screenTouchInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v11; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_596D3CF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&CTouch_TypeInfo);
    sub_2213A60(&Method_QuestRewardHeelPortraitAction__Update_b__11_0__);
    sub_2213A60(&Method_QuestRewardHeelPortraitAction_Update__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596D3CF = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method, v2);
    CTouch__process(0);
    if ( CTouch__isTouchPush(0) )
    {
      screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
      this->fields.state = 0;
      if ( !screenTouchInfo )
        goto LABEL_16;
      screenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(screenTouchInfo, 0);
      if ( !screenTouchInfo )
        goto LABEL_16;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInfo, 0, 0);
      v6 = Method_QuestRewardHeelPortraitAction_Update__;
      if ( (*((_BYTE *)Method_QuestRewardHeelPortraitAction_Update__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_2213A78(Method_QuestRewardHeelPortraitAction_Update__);
      v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v11 = AvalonSceneManager_TypeInfo;
      if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v8, v9);
        v11 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
      v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_QuestRewardHeelPortraitAction__Update_b__11_0__, 0);
      if ( !Instance )
LABEL_16:
        sub_2213CDC(screenTouchInfo, v4);
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v13, 0);
    }
  }
}


void QuestRewardHeelPortraitAction___Update_b__11_0(QuestRewardHeelPortraitAction_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAct, 0);
}


void QuestRewardHeelPortraitAction__Play_d__17___ctor(
        QuestRewardHeelPortraitAction__Play_d__17_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool QuestRewardHeelPortraitAction__Play_d__17__MoveNext(
        QuestRewardHeelPortraitAction__Play_d__17_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  QuestRewardHeelPortraitAction__Play_d__17_o *v8; // x19
  int32_t _1__state; // w22
  struct QuestRewardHeelPortraitAction_o *_4__this; // x20
  struct System_Action_o *endAction; // x1
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x2
  CommonUI_o *v15; // x21
  float dispTouchWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v17; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  v8 = this;
  if ( (byte_596D3D7 & 1) == 0 )
  {
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (QuestRewardHeelPortraitAction__Play_d__17_o *)sub_2213A60(&StringLiteral_17569/*"ar236"*/);
    byte_596D3D7 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( !_1__state )
  {
    v8->fields.__1__state = -1;
    if ( _4__this )
    {
      endAction = v8->fields.endAction;
      _4__this->fields.state = 1;
      _4__this->fields.endAct = endAction;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&_4__this->fields.endAct,
        (int32_t)endAction,
        v2,
        v3,
        v4,
        v5,
        v6,
        v7);
      this = (QuestRewardHeelPortraitAction__Play_d__17_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)_4__this,
                                                              0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        v12 = Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__;
        if ( (*((_BYTE *)Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__ + 83) & 2) != 0 )
          v12 = (_QWORD *)sub_2213A78(Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__);
        v13 = (System_Reflection_MethodBase_o *)sub_2213A44(v12, v12[4]);
        OverwriteAssetSoundName__PlaySe(v13, (System_String_o *)StringLiteral_17569/*"ar236"*/, 0, 0);
        this = (QuestRewardHeelPortraitAction__Play_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v15 = (CommonUI_o *)this;
        if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method, v14);
        if ( v15 )
        {
          CommonUI__maskFadein(v15, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
          dispTouchWaitTime = _4__this->fields.dispTouchWaitTime;
          v17 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v17, dispTouchWaitTime, 0);
          v8->fields.__2__current = (Il2CppObject *)v17;
          p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
          sub_2213A04(p__2__current, (int32_t)v17, v19, v20, v21, v22, v23, v24);
          p__2__current[-1].fields._BoardType_k__BackingField = 1;
          return _1__state == 0;
        }
      }
    }
    goto LABEL_18;
  }
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (QuestRewardHeelPortraitAction__Play_d__17_o *)_4__this->fields.screenTouchInfo;
      if ( this )
      {
        this = (QuestRewardHeelPortraitAction__Play_d__17_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          _4__this->fields.state = 2;
          return _1__state == 0;
        }
      }
    }
LABEL_18:
    sub_2213CDC(this, method);
  }
  return _1__state == 0;
}


Il2CppObject *QuestRewardHeelPortraitAction__Play_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestRewardHeelPortraitAction__Play_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestRewardHeelPortraitAction__Play_d__17__System_Collections_IEnumerator_Reset(
        QuestRewardHeelPortraitAction__Play_d__17_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_QuestRewardHeelPortraitAction__Play_d__17_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *QuestRewardHeelPortraitAction__Play_d__17__System_Collections_IEnumerator_get_Current(
        QuestRewardHeelPortraitAction__Play_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void QuestRewardHeelPortraitAction__Play_d__17__System_IDisposable_Dispose(
        QuestRewardHeelPortraitAction__Play_d__17_o *this,
        const MethodInfo *method)
{
  ;
}


void QuestRewardHeelPortraitAction___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596D3D5 & 1) == 0 )
  {
    sub_2213A60(&QuestRewardHeelPortraitAction___c_TypeInfo);
    byte_596D3D5 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(QuestRewardHeelPortraitAction___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestRewardHeelPortraitAction___c_TypeInfo->static_fields->__9 = (struct QuestRewardHeelPortraitAction___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)QuestRewardHeelPortraitAction___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestRewardHeelPortraitAction___c___ctor(QuestRewardHeelPortraitAction___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t QuestRewardHeelPortraitAction___c___Setup_b__16_0(
        QuestRewardHeelPortraitAction___c_o *this,
        QuestRewardInfo_o *x,
        QuestRewardInfo_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_2213CDC(this, x);
  return x->fields.objectId - y->fields.objectId;
}


void QuestRewardHeelPortraitAction___c__DisplayClass14_0___ctor(
        QuestRewardHeelPortraitAction___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardHeelPortraitAction___c__DisplayClass14_0___LoadEventUI_b__0(
        QuestRewardHeelPortraitAction___c__DisplayClass14_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  QuestRewardHeelPortraitAction___c__DisplayClass14_0_o *v3; // x19
  struct QuestRewardHeelPortraitAction_o *_4__this; // x8
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v3 = this;
  if ( (byte_596D3D6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    this = (QuestRewardHeelPortraitAction___c__DisplayClass14_0_o *)sub_2213A60(&Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__1__);
    byte_596D3D6 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(this, assetData);
  _9__1 = v3->fields.__9__1;
  eventId = _4__this->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, assetData, method);
  AtlasManager__LoadEventUI_47569188(eventId, _9__1, 1, 0);
}


void QuestRewardHeelPortraitAction___c__DisplayClass14_0___LoadEventUI_b__1(
        QuestRewardHeelPortraitAction___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *callback; // x0

  callback = this->fields.callback;
  if ( callback )
    ActionExtensions__Call(callback, 0);
}