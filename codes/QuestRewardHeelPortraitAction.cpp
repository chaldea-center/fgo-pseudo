void __fastcall QuestRewardHeelPortraitAction___ctor(QuestRewardHeelPortraitAction_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_48DF93F & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_6164/*"EventUI/Prefabs/"*/, method);
    byte_48DF93F = 1;
  }
  *(_QWORD *)&this->fields.screenTouchInfoPosY = 0x40000000FFFFFF23LL;
  v5 = StringLiteral_6164/*"EventUI/Prefabs/"*/;
  this->fields.loadAssetName = (struct System_String_o *)StringLiteral_6164/*"EventUI/Prefabs/"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.loadAssetName, v5, v2, v3);
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
    sub_1B00F28(0LL, v4);
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
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_Action_o **v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  AssetData_o *eventUIAssetData; // x0
  System_String_o *loadAssetName; // x21
  System_String_o *v18; // x0
  System_String_o *v19; // x19
  AssetLoader_LoadEndDataHandler_o *v20; // x21

  if ( (byte_48DF93B & 1) == 0 )
  {
    sub_1B00CCC(&AssetManager_TypeInfo, callback);
    sub_1B00CCC(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B00CCC(&Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__0__, v6);
    sub_1B00CCC(&QuestRewardHeelPortraitAction___c__DisplayClass14_0_TypeInfo, v7);
    byte_48DF93B = 1;
  }
  v8 = sub_1B00F18(QuestRewardHeelPortraitAction___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B00F28(v9, v10);
  *(_QWORD *)(v8 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v8 + 24) = callback;
  v13 = (System_Action_o **)(v8 + 24);
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)callback, v14, v15);
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( eventUIAssetData && !AssetData__get_IsEmpty(eventUIAssetData, 0LL) )
  {
    if ( *v13 )
      ActionExtensions__Call(*v13, 0LL);
  }
  else
  {
    loadAssetName = this->fields.loadAssetName;
    v18 = System_Int32__ToString((int)this + 88, 0LL);
    v19 = System_String__Concat_60325748(loadAssetName, v18, 0LL);
    v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1B00F18(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v20,
      (Il2CppObject *)v8,
      Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v19, v20, 1, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall QuestRewardHeelPortraitAction__Play(
        QuestRewardHeelPortraitAction_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_48DF93E & 1) == 0 )
  {
    sub_1B00CCC(&QuestRewardHeelPortraitAction__Play_d__17_TypeInfo, endAction);
    byte_48DF93E = 1;
  }
  v5 = sub_1B00F18(QuestRewardHeelPortraitAction__Play_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = endAction;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)endAction, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall QuestRewardHeelPortraitAction__ReleaseEventUI(
        QuestRewardHeelPortraitAction_o *this,
        const MethodInfo *method)
{
  int32_t eventId; // w20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_48DF93C & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, method);
    byte_48DF93C = 1;
  }
  eventId = this->fields.eventId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_36656708(eventId, 0LL);
  this->fields.eventUIAssetData = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.eventUIAssetData, 0, v4, v5);
}


void __fastcall QuestRewardHeelPortraitAction__SerializeFieldNotNullCheck(
        QuestRewardHeelPortraitAction_o *this,
        const MethodInfo *method)
{
  ;
}


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
  QuestRewardHeelPortraitAction___c_c *v19; // x0
  System_Comparison_T__o *_9__16_0; // x21
  Il2CppObject *v21; // x22
  struct QuestRewardHeelPortraitAction___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 Master_object; // x0
  __int64 v26; // x1
  __int64 v27; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x21
  unsigned __int64 v29; // x28
  QuestRewardInfo_o **m_Items; // x24
  QuestRewardInfo_o *v31; // x25
  Il2CppObject *portraitObj; // x23
  UnityEngine_GameObject_o *v33; // x23
  UnityEngine_Transform_o *v34; // x24
  UnityEngine_Transform_o *v35; // x24
  UISprite_o *v36; // x24
  int32_t eventId; // w25
  int32_t klass; // w19
  System_String_o *v39; // x19
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *Component_object; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  QuestRewardHeelPortraitAction_o *v47; // [xsp+8h] [xbp-78h]
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_48DF93D & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Array_Sort_QuestRewardInfo___, infos);
    sub_1B00CCC(&AtlasManager_TypeInfo, v5);
    sub_1B00CCC(&System_Comparison_QuestRewardInfo__TypeInfo, v6);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_UIGrid___, v7);
    sub_1B00CCC(&System_Convert_TypeInfo, v8);
    sub_1B00CCC(&Method_DataManager_GetMaster_HeelPortraitMaster___, v9);
    sub_1B00CCC(&DataManager_TypeInfo, v10);
    sub_1B00CCC(&Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int__TryGetEntity__, v11);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v12);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v13);
    sub_1B00CCC(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v15);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_1B00CCC(&Method_QuestRewardHeelPortraitAction___c__Setup_b__16_0__, v17);
    sub_1B00CCC(&QuestRewardHeelPortraitAction___c_TypeInfo, v18);
    byte_48DF93D = 1;
  }
  v19 = QuestRewardHeelPortraitAction___c_TypeInfo;
  entity = 0LL;
  if ( !QuestRewardHeelPortraitAction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardHeelPortraitAction___c_TypeInfo);
    v19 = QuestRewardHeelPortraitAction___c_TypeInfo;
  }
  _9__16_0 = (System_Comparison_T__o *)v19->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = QuestRewardHeelPortraitAction___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v19->static_fields->__9;
    _9__16_0 = (System_Comparison_T__o *)sub_1B00F18(System_Comparison_QuestRewardInfo__TypeInfo);
    System_Comparison_object____ctor(_9__16_0, v21, Method_QuestRewardHeelPortraitAction___c__Setup_b__16_0__, 0LL);
    static_fields = QuestRewardHeelPortraitAction___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Comparison_QuestRewardInfo__o *)_9__16_0;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v23, v24);
  }
  System_Array__Sort_object__47387800(
    (System_Object_array *)infos,
    _9__16_0,
    (const MethodInfo_2D31498 *)Method_System_Array_Sort_QuestRewardInfo___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_HeelPortraitMaster___);
  if ( !infos )
    goto LABEL_49;
  v27 = *(_QWORD *)&infos->max_length;
  if ( (int)v27 >= 1 )
  {
    v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v29 = 0LL;
    m_Items = infos->m_Items;
    v47 = this;
    do
    {
      if ( v29 >= (unsigned int)v27 )
        sub_1B00F30(Master_object, v26);
      v31 = m_Items[v29];
      if ( v31 && v31->fields.type == 15 )
      {
        portraitObj = (Il2CppObject *)this->fields.portraitObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Master_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                   portraitObj,
                                   (const MethodInfo_2DD5AE8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Master_object )
          goto LABEL_49;
        v33 = (UnityEngine_GameObject_o *)Master_object;
        Master_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Master_object, 0LL);
        if ( !Master_object )
          goto LABEL_49;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Master_object, this->fields.listRoot, 0LL);
        Master_object = (__int64)UnityEngine_GameObject__get_transform(v33, 0LL);
        v34 = (UnityEngine_Transform_o *)Master_object;
        if ( !byte_48DD9F1 )
        {
          Master_object = sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v26);
          byte_48DD9F1 = 1;
        }
        if ( !v34 )
          goto LABEL_49;
        UnityEngine_Transform__set_localPosition(v34, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        Master_object = (__int64)UnityEngine_GameObject__get_transform(v33, 0LL);
        v35 = (UnityEngine_Transform_o *)Master_object;
        if ( !byte_48DD9F6 )
        {
          Master_object = sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v26);
          byte_48DD9F6 = 1;
        }
        if ( !v35 )
          goto LABEL_49;
        UnityEngine_Transform__set_localScale(v35, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                   v33,
                                   (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !v28 )
          goto LABEL_49;
        v36 = (UISprite_o *)Master_object;
        Master_object = DataMasterBase_object__object__int___TryGetEntity(
                          v28,
                          &entity,
                          v31->fields.objectId,
                          (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int__TryGetEntity__);
        if ( (Master_object & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_49;
          eventId = this->fields.eventId;
          klass = (int32_t)entity[2].klass;
          if ( !System_Convert_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
          v39 = System_Convert__ToString_60991188(klass, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventUI_36656832(eventId, v36, v39, 0LL);
          this = v47;
        }
        UnityEngine_GameObject__SetActive(v33, 1, 0LL);
        m_Items = infos->m_Items;
      }
      LODWORD(v27) = infos->max_length;
    }
    while ( (__int64)++v29 < (int)v27 );
  }
  Master_object = (__int64)this->fields.listRoot;
  if ( !Master_object )
    goto LABEL_49;
  Master_object = (__int64)UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)Master_object,
                             (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !Master_object )
    goto LABEL_49;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 440LL))(
    Master_object,
    *(_QWORD *)(*(_QWORD *)Master_object + 448LL));
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      Master_object = (__int64)CommonUI__CreateScreeenTouchInfo(
                                 (CommonUI_o *)Instance,
                                 (UnityEngine_Transform_o *)Master_object,
                                 0,
                                 0LL);
      if ( Master_object )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Master_object,
                             (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
        sub_1B00C70(
          (ServantStatusBattleListViewItem_o *)&this->fields.screenTouchInfo,
          (int32_t)Component_object,
          v44,
          v45);
        goto LABEL_45;
      }
    }
LABEL_49:
    sub_1B00F28(Master_object, v26);
  }
LABEL_45:
  Master_object = (__int64)*p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_49;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  Master_object = (__int64)*p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_49;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, (float)this->fields.screenTouchInfoPosY, 0LL);
}


void __fastcall QuestRewardHeelPortraitAction__Update(QuestRewardHeelPortraitAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Component_o *screenTouchInfo; // x0
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v13; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v15; // x21

  if ( (byte_48DF93A & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, v3);
    sub_1B00CCC(&CTouch_TypeInfo, v4);
    sub_1B00CCC(&Method_QuestRewardHeelPortraitAction__Update_b__11_0__, v5);
    sub_1B00CCC(&Method_QuestRewardHeelPortraitAction_Update__, v6);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_48DF93A = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    CTouch__process(0LL);
    if ( CTouch__isTouchPush(0LL) )
    {
      screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
      this->fields.state = 0;
      if ( !screenTouchInfo )
        goto LABEL_16;
      screenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL);
      if ( !screenTouchInfo )
        goto LABEL_16;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInfo, 0, 0LL);
      v10 = Method_QuestRewardHeelPortraitAction_Update__;
      if ( (*((_BYTE *)Method_QuestRewardHeelPortraitAction_Update__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1B00CE4(Method_QuestRewardHeelPortraitAction_Update__);
      v11 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v13 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v13 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
      v15 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_QuestRewardHeelPortraitAction__Update_b__11_0__, 0LL);
      if ( !Instance )
LABEL_16:
        sub_1B00F28(screenTouchInfo, v8);
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v15, 0LL);
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
  int32_t v2; // w2
  int32_t v3; // w3
  QuestRewardHeelPortraitAction__Play_d__17_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t _1__state; // w8
  struct QuestRewardHeelPortraitAction_o *_4__this; // x20
  struct System_Action_o *endAction; // x1
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  CommonUI_o *v14; // x21
  float dispTouchWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v16; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v18; // w2
  int32_t v19; // w3
  bool result; // w0

  v4 = this;
  if ( (byte_48DF942 & 1) == 0 )
  {
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B00CCC(&Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__, v6);
    sub_1B00CCC(&UnityEngine_WaitForSeconds_TypeInfo, v7);
    this = (QuestRewardHeelPortraitAction__Play_d__17_o *)sub_1B00CCC(&StringLiteral_16645/*"ar236"*/, v8);
    byte_48DF942 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_18;
    this = (QuestRewardHeelPortraitAction__Play_d__17_o *)_4__this->fields.screenTouchInfo;
    if ( !this )
      goto LABEL_18;
    this = (QuestRewardHeelPortraitAction__Play_d__17_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL);
    if ( !this )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    result = 0;
    _4__this->fields.state = 2;
  }
  else
  {
    if ( !_1__state )
    {
      v4->fields.__1__state = -1;
      if ( _4__this )
      {
        _4__this->fields.state = 1;
        endAction = v4->fields.endAction;
        _4__this->fields.endAct = endAction;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&_4__this->fields.endAct, (int32_t)endAction, v2, v3);
        this = (QuestRewardHeelPortraitAction__Play_d__17_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)_4__this,
                                                                0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          v12 = Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__;
          if ( (*((_BYTE *)Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__ + 83) & 2) != 0 )
            v12 = (_QWORD *)sub_1B00CE4(Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__);
          v13 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v12, v12[4]);
          OverwriteAssetSoundName__PlaySe(v13, (System_String_o *)StringLiteral_16645/*"ar236"*/, 0LL);
          this = (QuestRewardHeelPortraitAction__Play_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v14 = (CommonUI_o *)this;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          if ( v14 )
          {
            CommonUI__maskFadein(v14, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
            dispTouchWaitTime = _4__this->fields.dispTouchWaitTime;
            v16 = (UnityEngine_WaitForSeconds_o *)sub_1B00F18(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(v16, dispTouchWaitTime, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v16;
            p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B00C70(p__2__current, (int32_t)v16, v18, v19);
            result = 1;
            *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
            return result;
          }
        }
      }
LABEL_18:
      sub_1B00F28(this, method);
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

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_QuestRewardHeelPortraitAction__Play_d__17_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48DF940 & 1) == 0 )
  {
    sub_1B00CCC(&QuestRewardHeelPortraitAction___c_TypeInfo, v1);
    byte_48DF940 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(QuestRewardHeelPortraitAction___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestRewardHeelPortraitAction___c_TypeInfo->static_fields->__9 = (struct QuestRewardHeelPortraitAction___c_o *)v2;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)QuestRewardHeelPortraitAction___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B00F28(this, x);
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
  QuestRewardHeelPortraitAction___c__DisplayClass14_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct QuestRewardHeelPortraitAction_o *_4__this; // x8
  int32_t eventId; // w20
  System_Action_o *_9__1; // x21
  int32_t v9; // w2
  int32_t v10; // w3

  v3 = this;
  if ( (byte_48DF941 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, assetData);
    sub_1B00CCC(&AtlasManager_TypeInfo, v4);
    this = (QuestRewardHeelPortraitAction___c__DisplayClass14_0_o *)sub_1B00CCC(
                                                                      &Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__1__,
                                                                      v5);
    byte_48DF941 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    sub_1B00F28(this, assetData);
  eventId = _4__this->fields.eventId;
  _9__1 = v3->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_36656536(eventId, _9__1, 1, 0LL);
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