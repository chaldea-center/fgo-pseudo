void QuestRewardHeelPortraitAction___ctor(QuestRewardHeelPortraitAction_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C24097 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6259/*"EventUI/Prefabs/"*/);
    byte_4C24097 = 1;
  }
  *(_QWORD *)&this->fields.screenTouchInfoPosY = 0x40000000FFFFFF23LL;
  v5 = StringLiteral_6259/*"EventUI/Prefabs/"*/;
  this->fields.loadAssetName = (struct System_String_o *)StringLiteral_6259/*"EventUI/Prefabs/"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.loadAssetName, v5, v2, v3);
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
    sub_1C2D6EC(0, v4);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Action_o **v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  AssetData_o *eventUIAssetData; // x0
  System_String_o *loadAssetName; // x21
  System_String_o *v15; // x0
  System_String_o *v16; // x19
  AssetLoader_LoadEndDataHandler_o *v17; // x21

  if ( (byte_4C24093 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__0__);
    sub_1C2D490(&QuestRewardHeelPortraitAction___c__DisplayClass14_0_TypeInfo);
    byte_4C24093 = 1;
  }
  v5 = sub_1C2D6DC(QuestRewardHeelPortraitAction___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  v10 = (System_Action_o **)(v5 + 24);
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v11, v12);
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( eventUIAssetData && !AssetData__get_IsEmpty(eventUIAssetData, 0) )
  {
    if ( *v10 )
      ActionExtensions__Call(*v10, 0);
  }
  else
  {
    loadAssetName = this->fields.loadAssetName;
    v15 = System_Int32__ToString((int)this + 88, 0);
    v16 = System_String__Concat_63457864(loadAssetName, v15, 0);
    v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v17,
      (Il2CppObject *)v5,
      Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__0__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v16, v17, 1, 0);
  }
}


System_Collections_IEnumerator_o *QuestRewardHeelPortraitAction__Play(
        QuestRewardHeelPortraitAction_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C24096 & 1) == 0 )
  {
    sub_1C2D490(&QuestRewardHeelPortraitAction__Play_d__17_TypeInfo);
    byte_4C24096 = 1;
  }
  v5 = sub_1C2D6DC(QuestRewardHeelPortraitAction__Play_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = endAction;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 40), (int32_t)endAction, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void QuestRewardHeelPortraitAction__ReleaseEventUI(QuestRewardHeelPortraitAction_o *this, const MethodInfo *method)
{
  int32_t eventId; // w20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C24094 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    byte_4C24094 = 1;
  }
  eventId = this->fields.eventId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_40385248(eventId, 0);
  this->fields.eventUIAssetData = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventUIAssetData, 0, v4, v5);
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
  QuestRewardHeelPortraitAction___c_c *v5; // x0
  System_Comparison_T__o *_9__16_0; // x21
  Il2CppObject *v7; // x22
  struct QuestRewardHeelPortraitAction___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x21
  unsigned __int64 v16; // x28
  QuestRewardInfo_o **m_Items; // x24
  QuestRewardInfo_o *v18; // x25
  Il2CppObject *portraitObj; // x23
  UnityEngine_GameObject_o *v20; // x23
  UnityEngine_Transform_o *v21; // x24
  UnityEngine_Transform_o *v22; // x24
  UISprite_o *v23; // x24
  int32_t eventId; // w25
  int32_t klass; // w19
  System_String_o *v26; // x19
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *Component_object; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  QuestRewardHeelPortraitAction_o *v34; // [xsp+8h] [xbp-78h]
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C24095 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Sort_QuestRewardInfo___);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&System_Comparison_QuestRewardInfo__TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C2D490(&System_Convert_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_HeelPortraitMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_QuestRewardHeelPortraitAction___c__Setup_b__16_0__);
    sub_1C2D490(&QuestRewardHeelPortraitAction___c_TypeInfo);
    byte_4C24095 = 1;
  }
  v5 = QuestRewardHeelPortraitAction___c_TypeInfo;
  entity = 0;
  if ( !QuestRewardHeelPortraitAction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardHeelPortraitAction___c_TypeInfo);
    v5 = QuestRewardHeelPortraitAction___c_TypeInfo;
  }
  _9__16_0 = (System_Comparison_T__o *)v5->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = QuestRewardHeelPortraitAction___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__16_0 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_QuestRewardInfo__TypeInfo);
    System_Comparison_object____ctor(_9__16_0, v7, Method_QuestRewardHeelPortraitAction___c__Setup_b__16_0__, 0);
    static_fields = QuestRewardHeelPortraitAction___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Comparison_QuestRewardInfo__o *)_9__16_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v9, v10);
  }
  System_Array__Sort_object__50966632(
    (System_Object_array *)infos,
    _9__16_0,
    (const MethodInfo_309B068 *)Method_System_Array_Sort_QuestRewardInfo___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_HeelPortraitMaster___);
  if ( !infos )
    goto LABEL_49;
  max_length = infos->max_length;
  if ( (int)max_length >= 1 )
  {
    v15 = Master_object;
    v16 = 0;
    m_Items = infos->m_Items;
    v34 = this;
    do
    {
      if ( v16 >= (unsigned int)max_length )
        sub_1C2D6F4(Master_object, v12, v13);
      v18 = m_Items[v16];
      if ( v18 && v18->fields.type == 15 )
      {
        portraitObj = (Il2CppObject *)this->fields.portraitObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__Instantiate_object_(
                                                                        portraitObj,
                                                                        (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Master_object )
          goto LABEL_49;
        v20 = (UnityEngine_GameObject_o *)Master_object;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__get_transform(
                                                                        (UnityEngine_GameObject_o *)Master_object,
                                                                        0);
        if ( !Master_object )
          goto LABEL_49;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Master_object, this->fields.listRoot, 0);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__get_transform(v20, 0);
        v21 = (UnityEngine_Transform_o *)Master_object;
        if ( !byte_4C20DA1 )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
          byte_4C20DA1 = 1;
        }
        if ( !v21 )
          goto LABEL_49;
        UnityEngine_Transform__set_localPosition(v21, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__get_transform(v20, 0);
        v22 = (UnityEngine_Transform_o *)Master_object;
        if ( !byte_4C20DA6 )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
          byte_4C20DA6 = 1;
        }
        if ( !v22 )
          goto LABEL_49;
        UnityEngine_Transform__set_localScale(v22, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                        v20,
                                                                        (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !v15 )
          goto LABEL_49;
        v23 = (UISprite_o *)Master_object;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                        v15,
                                                                        &entity,
                                                                        v18->fields.objectId,
                                                                        (const MethodInfo_3387DE4 *)Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_49;
          eventId = this->fields.eventId;
          klass = (int32_t)entity[2].klass;
          if ( !System_Convert_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
          v26 = System_Convert__ToString_64554516(klass, 0);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventUI_40385372(eventId, v23, v26, 0);
          this = v34;
        }
        UnityEngine_GameObject__SetActive(v20, 1, 0);
        m_Items = infos->m_Items;
      }
      LODWORD(max_length) = infos->max_length;
    }
    while ( (__int64)++v16 < (int)max_length );
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.listRoot;
  if ( !Master_object )
    goto LABEL_49;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)Master_object,
                                                                  (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !Master_object )
    goto LABEL_49;
  ((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, const MethodInfo *))Master_object->klass->vtable._8_ReplacedForThread.methodPtr)(
    Master_object,
    Master_object->klass->vtable._8_ReplacedForThread.method);
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                             (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.screenTouchInfo, (int32_t)Component_object, v31, v32);
        goto LABEL_45;
      }
    }
LABEL_49:
    sub_1C2D6EC(Master_object, v12);
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
  __int64 v3; // x1
  UnityEngine_Component_o *screenTouchInfo; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v8; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21

  if ( (byte_4C24092 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&CTouch_TypeInfo);
    sub_1C2D490(&Method_QuestRewardHeelPortraitAction__Update_b__11_0__);
    sub_1C2D490(&Method_QuestRewardHeelPortraitAction_Update__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C24092 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
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
      v5 = Method_QuestRewardHeelPortraitAction_Update__;
      if ( (*((_BYTE *)Method_QuestRewardHeelPortraitAction_Update__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C2D4A8(Method_QuestRewardHeelPortraitAction_Update__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v8 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v8 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
      v10 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_QuestRewardHeelPortraitAction__Update_b__11_0__, 0);
      if ( !Instance )
LABEL_16:
        sub_1C2D6EC(screenTouchInfo, v3);
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v10, 0);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  QuestRewardHeelPortraitAction__Play_d__17_o *v4; // x19
  int32_t _1__state; // w8
  struct QuestRewardHeelPortraitAction_o *_4__this; // x20
  struct System_Action_o *endAction; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  CommonUI_o *v10; // x21
  float dispTouchWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v12; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  bool result; // w0

  v4 = this;
  if ( (byte_4C2409A & 1) == 0 )
  {
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__);
    sub_1C2D490(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (QuestRewardHeelPortraitAction__Play_d__17_o *)sub_1C2D490(&StringLiteral_16854/*"ar236"*/);
    byte_4C2409A = 1;
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
                                                            0);
    if ( !this )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
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
        sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.endAct, (int32_t)endAction, v2, v3);
        this = (QuestRewardHeelPortraitAction__Play_d__17_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)_4__this,
                                                                0);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          v8 = Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__;
          if ( (*((_BYTE *)Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__ + 83) & 2) != 0 )
            v8 = (_QWORD *)sub_1C2D4A8(Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__);
          v9 = (System_Reflection_MethodBase_o *)sub_1C2D474(v8, v8[4]);
          OverwriteAssetSoundName__PlaySe(v9, (System_String_o *)StringLiteral_16854/*"ar236"*/, 0, 0);
          this = (QuestRewardHeelPortraitAction__Play_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v10 = (CommonUI_o *)this;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          if ( v10 )
          {
            CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
            dispTouchWaitTime = _4__this->fields.dispTouchWaitTime;
            v12 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(v12, dispTouchWaitTime, 0);
            v4->fields.__2__current = (Il2CppObject *)v12;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1C2D434(p__2__current, (int32_t)v12, v14, v15);
            result = 1;
            LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
            return result;
          }
        }
      }
LABEL_18:
      sub_1C2D6EC(this, method);
    }
    return 0;
  }
  return result;
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_QuestRewardHeelPortraitAction__Play_d__17_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C24098 & 1) == 0 )
  {
    sub_1C2D490(&QuestRewardHeelPortraitAction___c_TypeInfo);
    byte_4C24098 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(QuestRewardHeelPortraitAction___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestRewardHeelPortraitAction___c_TypeInfo->static_fields->__9 = (struct QuestRewardHeelPortraitAction___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)QuestRewardHeelPortraitAction___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, x);
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
  int32_t eventId; // w20
  System_Action_o *_9__1; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v3 = this;
  if ( (byte_4C24099 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    this = (QuestRewardHeelPortraitAction___c__DisplayClass14_0_o *)sub_1C2D490(&Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__1__);
    byte_4C24099 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(this, assetData);
  eventId = _4__this->fields.eventId;
  _9__1 = v3->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_1C2D434((CGThumbnailListItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_40385076(eventId, _9__1, 1, 0);
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