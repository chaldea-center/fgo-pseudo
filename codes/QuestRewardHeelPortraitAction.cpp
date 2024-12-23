void __fastcall QuestRewardHeelPortraitAction___ctor(QuestRewardHeelPortraitAction_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1

  if ( (byte_4B63B06 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_6363/*"EventUI/Prefabs/"*/, method);
    byte_4B63B06 = 1;
  }
  *(_QWORD *)&this->fields.screenTouchInfoPosY = 0x40000000FFFFFF23LL;
  v9 = StringLiteral_6363/*"EventUI/Prefabs/"*/;
  this->fields.loadAssetName = (struct System_String_o *)StringLiteral_6363/*"EventUI/Prefabs/"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.loadAssetName, v9, v2, v3, v4, v5, v6, v7);
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
    sub_1BE4D28(0LL, v4);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Action_o **v17; // x22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  AssetData_o *eventUIAssetData; // x0
  System_String_o *loadAssetName; // x21
  System_String_o *v26; // x0
  System_String_o *v27; // x19
  AssetLoader_LoadEndDataHandler_o *v28; // x21

  if ( (byte_4B63B02 & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, callback);
    sub_1BE4ACC(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1BE4ACC(&Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__0__, v6);
    sub_1BE4ACC(&QuestRewardHeelPortraitAction___c__DisplayClass14_0_TypeInfo, v7);
    byte_4B63B02 = 1;
  }
  v8 = sub_1BE4D18(QuestRewardHeelPortraitAction___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BE4D28(v9, v10);
  *(_QWORD *)(v8 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 24) = callback;
  v17 = (System_Action_o **)(v8 + 24);
  sub_1BE4A70((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)callback, v18, v19, v20, v21, v22, v23);
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( eventUIAssetData && !AssetData__get_IsEmpty(eventUIAssetData, 0LL) )
  {
    if ( *v17 )
      ActionExtensions__Call(*v17, 0LL);
  }
  else
  {
    loadAssetName = this->fields.loadAssetName;
    v26 = System_Int32__ToString((int)this + 88, 0LL);
    v27 = System_String__Concat_62698808(loadAssetName, v26, 0LL);
    v28 = (AssetLoader_LoadEndDataHandler_o *)sub_1BE4D18(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v28,
      (Il2CppObject *)v8,
      Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v27, v28, 1, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall QuestRewardHeelPortraitAction__Play(
        QuestRewardHeelPortraitAction_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B63B05 & 1) == 0 )
  {
    sub_1BE4ACC(&QuestRewardHeelPortraitAction__Play_d__17_TypeInfo, endAction);
    byte_4B63B05 = 1;
  }
  v5 = sub_1BE4D18(QuestRewardHeelPortraitAction__Play_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = endAction;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)endAction, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall QuestRewardHeelPortraitAction__ReleaseEventUI(
        QuestRewardHeelPortraitAction_o *this,
        const MethodInfo *method)
{
  int32_t eventId; // w20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4B63B03 & 1) == 0 )
  {
    sub_1BE4ACC(&AtlasManager_TypeInfo, method);
    byte_4B63B03 = 1;
  }
  eventId = this->fields.eventId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_38766772(eventId, 0LL);
  this->fields.eventUIAssetData = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.eventUIAssetData, 0LL, v4, v5, v6, v7, v8, v9);
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 Master_object; // x0
  __int64 v30; // x1
  __int64 v31; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x21
  unsigned __int64 v33; // x28
  QuestRewardInfo_o **m_Items; // x24
  QuestRewardInfo_o *v35; // x25
  Il2CppObject *portraitObj; // x23
  UnityEngine_GameObject_o *v37; // x23
  UnityEngine_Transform_o *v38; // x24
  UnityEngine_Transform_o *v39; // x24
  UISprite_o *v40; // x24
  int32_t eventId; // w25
  int32_t klass; // w19
  System_String_o *v43; // x19
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *Component_object; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  QuestRewardHeelPortraitAction_o *v55; // [xsp+8h] [xbp-78h]
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B63B04 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_Sort_QuestRewardInfo___, infos);
    sub_1BE4ACC(&AtlasManager_TypeInfo, v5);
    sub_1BE4ACC(&System_Comparison_QuestRewardInfo__TypeInfo, v6);
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_UIGrid___, v7);
    sub_1BE4ACC(&System_Convert_TypeInfo, v8);
    sub_1BE4ACC(&Method_DataManager_GetMaster_HeelPortraitMaster___, v9);
    sub_1BE4ACC(&DataManager_TypeInfo, v10);
    sub_1BE4ACC(&Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int__TryGetEntity__, v11);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v12);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v13);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v15);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_1BE4ACC(&Method_QuestRewardHeelPortraitAction___c__Setup_b__16_0__, v17);
    sub_1BE4ACC(&QuestRewardHeelPortraitAction___c_TypeInfo, v18);
    byte_4B63B04 = 1;
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
    _9__16_0 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_QuestRewardInfo__TypeInfo);
    System_Comparison_object____ctor(_9__16_0, v21, Method_QuestRewardHeelPortraitAction___c__Setup_b__16_0__, 0LL);
    static_fields = QuestRewardHeelPortraitAction___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Comparison_QuestRewardInfo__o *)_9__16_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__16_0,
      (int64_t)_9__16_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  System_Array__Sort_object__49441616(
    (System_Object_array *)infos,
    _9__16_0,
    (const MethodInfo_2F26B50 *)Method_System_Array_Sort_QuestRewardInfo___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_HeelPortraitMaster___);
  if ( !infos )
    goto LABEL_49;
  v31 = *(_QWORD *)&infos->max_length;
  if ( (int)v31 >= 1 )
  {
    v32 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v33 = 0LL;
    m_Items = infos->m_Items;
    v55 = this;
    do
    {
      if ( v33 >= (unsigned int)v31 )
        sub_1BE4D30(Master_object, v30);
      v35 = m_Items[v33];
      if ( v35 && v35->fields.type == 15 )
      {
        portraitObj = (Il2CppObject *)this->fields.portraitObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Master_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                   portraitObj,
                                   (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Master_object )
          goto LABEL_49;
        v37 = (UnityEngine_GameObject_o *)Master_object;
        Master_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Master_object, 0LL);
        if ( !Master_object )
          goto LABEL_49;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Master_object, this->fields.listRoot, 0LL);
        Master_object = (__int64)UnityEngine_GameObject__get_transform(v37, 0LL);
        v38 = (UnityEngine_Transform_o *)Master_object;
        if ( !byte_4B612E1 )
        {
          Master_object = sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v30);
          byte_4B612E1 = 1;
        }
        if ( !v38 )
          goto LABEL_49;
        UnityEngine_Transform__set_localPosition(v38, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        Master_object = (__int64)UnityEngine_GameObject__get_transform(v37, 0LL);
        v39 = (UnityEngine_Transform_o *)Master_object;
        if ( !byte_4B612E6 )
        {
          Master_object = sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v30);
          byte_4B612E6 = 1;
        }
        if ( !v39 )
          goto LABEL_49;
        UnityEngine_Transform__set_localScale(v39, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                   v37,
                                   (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !v32 )
          goto LABEL_49;
        v40 = (UISprite_o *)Master_object;
        Master_object = DataMasterBase_object__object__int___TryGetEntity(
                          v32,
                          &entity,
                          v35->fields.objectId,
                          (const MethodInfo_31FD818 *)Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int__TryGetEntity__);
        if ( (Master_object & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_49;
          eventId = this->fields.eventId;
          klass = (int32_t)entity[2].klass;
          if ( !System_Convert_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
          v43 = System_Convert__ToString_63364716(klass, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventUI_38766888(eventId, v40, v43, 0LL);
          this = v55;
        }
        UnityEngine_GameObject__SetActive(v37, 1, 0LL);
        m_Items = infos->m_Items;
      }
      LODWORD(v31) = infos->max_length;
    }
    while ( (__int64)++v33 < (int)v31 );
  }
  Master_object = (__int64)this->fields.listRoot;
  if ( !Master_object )
    goto LABEL_49;
  Master_object = (__int64)UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)Master_object,
                             (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                             (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields.screenTouchInfo,
          (int64_t)Component_object,
          v48,
          v49,
          v50,
          v51,
          v52,
          v53);
        goto LABEL_45;
      }
    }
LABEL_49:
    sub_1BE4D28(Master_object, v30);
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

  if ( (byte_4B63B01 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&AvalonSceneManager_TypeInfo, v3);
    sub_1BE4ACC(&CTouch_TypeInfo, v4);
    sub_1BE4ACC(&Method_QuestRewardHeelPortraitAction__Update_b__11_0__, v5);
    sub_1BE4ACC(&Method_QuestRewardHeelPortraitAction_Update__, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4B63B01 = 1;
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
        v10 = (_QWORD *)sub_1BE4AE4(Method_QuestRewardHeelPortraitAction_Update__);
      v11 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v13 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v13 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
      v15 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_QuestRewardHeelPortraitAction__Update_b__11_0__, 0LL);
      if ( !Instance )
LABEL_16:
        sub_1BE4D28(screenTouchInfo, v8);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  QuestRewardHeelPortraitAction__Play_d__17_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t _1__state; // w8
  struct QuestRewardHeelPortraitAction_o *_4__this; // x20
  int64_t endAction; // x1
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  CommonUI_o *v18; // x21
  float dispTouchWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v20; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  bool result; // w0

  v8 = this;
  if ( (byte_4B63B09 & 1) == 0 )
  {
    sub_1BE4ACC(&AvalonSceneManager_TypeInfo, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BE4ACC(&Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__, v10);
    sub_1BE4ACC(&UnityEngine_WaitForSeconds_TypeInfo, v11);
    this = (QuestRewardHeelPortraitAction__Play_d__17_o *)sub_1BE4ACC(&StringLiteral_17092/*"ar236"*/, v12);
    byte_4B63B09 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
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
      v8->fields.__1__state = -1;
      if ( _4__this )
      {
        _4__this->fields.state = 1;
        endAction = (int64_t)v8->fields.endAction;
        _4__this->fields.endAct = (struct System_Action_o *)endAction;
        sub_1BE4A70((PartyOrganizationUtility_o *)&_4__this->fields.endAct, endAction, v2, v3, v4, v5, v6, v7);
        this = (QuestRewardHeelPortraitAction__Play_d__17_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)_4__this,
                                                                0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          v16 = Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__;
          if ( (*((_BYTE *)Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__ + 83) & 2) != 0 )
            v16 = (_QWORD *)sub_1BE4AE4(Method_QuestRewardHeelPortraitAction__Play_d__17_MoveNext__);
          v17 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v16, v16[4]);
          OverwriteAssetSoundName__PlaySe(v17, (System_String_o *)StringLiteral_17092/*"ar236"*/, 0LL);
          this = (QuestRewardHeelPortraitAction__Play_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v18 = (CommonUI_o *)this;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          if ( v18 )
          {
            CommonUI__maskFadein(v18, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
            dispTouchWaitTime = _4__this->fields.dispTouchWaitTime;
            v20 = (UnityEngine_WaitForSeconds_o *)sub_1BE4D18(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(v20, dispTouchWaitTime, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v20;
            p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1BE4A70(p__2__current, (int64_t)v20, v22, v23, v24, v25, v26, v27);
            result = 1;
            *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
            return result;
          }
        }
      }
LABEL_18:
      sub_1BE4D28(this, method);
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_QuestRewardHeelPortraitAction__Play_d__17_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B63B07 & 1) == 0 )
  {
    sub_1BE4ACC(&QuestRewardHeelPortraitAction___c_TypeInfo, v1);
    byte_4B63B07 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(QuestRewardHeelPortraitAction___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestRewardHeelPortraitAction___c_TypeInfo->static_fields->__9 = (struct QuestRewardHeelPortraitAction___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)QuestRewardHeelPortraitAction___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, x);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v3 = this;
  if ( (byte_4B63B08 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, assetData);
    sub_1BE4ACC(&AtlasManager_TypeInfo, v4);
    this = (QuestRewardHeelPortraitAction___c__DisplayClass14_0_o *)sub_1BE4ACC(
                                                                      &Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__1__,
                                                                      v5);
    byte_4B63B08 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    sub_1BE4D28(this, assetData);
  eventId = _4__this->fields.eventId;
  _9__1 = v3->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_QuestRewardHeelPortraitAction___c__DisplayClass14_0__LoadEventUI_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v3->fields.__9__1, (int64_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_38766608(eventId, _9__1, 1, 0LL);
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