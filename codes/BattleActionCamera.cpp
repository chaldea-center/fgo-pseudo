void __fastcall BattleActionCamera___ctor(BattleActionCamera_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_Dictionary_int__object__o *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_Dictionary_int__int__o *v29; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Collections_Generic_List_object__o *v39; // x20
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Collections_Generic_List_int__o *v49; // x20
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7

  if ( (byte_4B18409 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PlayMakerFSM___ctor__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_PlayMakerFSM__TypeInfo, v17, v18);
    byte_4B18409 = 1;
  }
  v19 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo,
                                                                  method,
                                                                  v2,
                                                                  v3);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v19,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__);
  this->fields.cameraFsmDictionary = (struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *)v19;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.cameraFsmDictionary,
    (int64_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v29 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v26,
                                                               v27,
                                                               v28);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v29,
    (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.cameraTargetDictionary = v29;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.cameraTargetDictionary,
    (int64_t)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v39 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_PlayMakerFSM__TypeInfo,
                                                       v36,
                                                       v37,
                                                       v38);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_PlayMakerFSM___ctor__);
  this->fields.fieldCameraFsmList = (struct System_Collections_Generic_List_PlayMakerFSM__o *)v39;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.fieldCameraFsmList,
    (int64_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v49 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v46,
                                                    v47,
                                                    v48);
  System_Collections_Generic_List_int____ctor(
    v49,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields._FieldCameraIdList_k__BackingField = v49;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._FieldCameraIdList_k__BackingField,
    (int64_t)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleActionCamera__InitCommonRegisterFsm(
        BattleActionCamera_o *this,
        PlayMakerFSM_o *targetFsm,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *perf; // x21
  __int64 v8; // x1
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x2

  if ( (byte_4B183F9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, targetFsm, method);
    sub_1BCA7E0(&StringLiteral_10734/*"Performance"*/, v5, v6);
    byte_4B183F9 = 1;
  }
  perf = (UnityEngine_Object_o *)this->fields.perf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, targetFsm);
  if ( UnityEngine_Object__op_Inequality(perf, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.perf;
    if ( !v9 )
      sub_1BCAA3C(0LL, v8);
    gameObject = UnityEngine_Component__get_gameObject(v9, 0LL);
    HutongGames_PlayMaker_PlayMakerFSMHelper__SetFsmGameObject(
      targetFsm,
      (System_String_o *)StringLiteral_10734/*"Performance"*/,
      gameObject,
      0LL);
  }
}


void __fastcall BattleActionCamera__InitFieldCameraList(BattleActionCamera_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActionCamera_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  struct System_Collections_Generic_List_PlayMakerFSM__o *fieldCameraFsmList; // x8
  System_Collections_Generic_IEnumerable_PlayMakerFSM__o *NotNullFieldCameraFsmEnumerable; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  BattleActionCamera___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_T__o *v24; // x21
  System_Action_object__o *_9__26_0; // x22
  Il2CppObject *v26; // x23
  struct BattleActionCamera___c_StaticFields *static_fields; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Collections_Generic_List_object__o *v37; // x21
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Collections_Generic_List_int__o *FieldCameraIdList_k__BackingField; // x8
  int v45; // w9

  v3 = this;
  if ( (byte_4B183F4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_PlayMakerFSM__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_PlayMakerFSM___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PlayMakerFSM___ctor__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PlayMakerFSM__get_Count__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_PlayMakerFSM__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_BattleActionCamera___c__InitFieldCameraList_b__26_0__, v14, v15);
    this = (BattleActionCamera_o *)sub_1BCA7E0(&BattleActionCamera___c_TypeInfo, v16, v17);
    byte_4B183F4 = 1;
  }
  fieldCameraFsmList = v3->fields.fieldCameraFsmList;
  if ( !fieldCameraFsmList )
    goto LABEL_14;
  if ( fieldCameraFsmList->fields._size < 1 )
    return;
  NotNullFieldCameraFsmEnumerable = BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(v3, method);
  v23 = BattleActionCamera___c_TypeInfo;
  v24 = (System_Collections_Generic_IEnumerable_T__o *)NotNullFieldCameraFsmEnumerable;
  if ( !BattleActionCamera___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionCamera___c_TypeInfo, v20);
    v23 = BattleActionCamera___c_TypeInfo;
  }
  _9__26_0 = (System_Action_object__o *)v23->static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23, v20);
      v23 = BattleActionCamera___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__26_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_PlayMakerFSM__TypeInfo, v20, v21, v22);
    System_Action_object____ctor(_9__26_0, v26, Method_BattleActionCamera___c__InitFieldCameraList_b__26_0__, 0LL);
    static_fields = BattleActionCamera___c_TypeInfo->static_fields;
    static_fields->__9__26_0 = (struct System_Action_PlayMakerFSM__o *)_9__26_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__26_0,
      (int64_t)_9__26_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  BasicHelper__ForEach_object_(
    v24,
    (System_Action_T__o *)_9__26_0,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_PlayMakerFSM___);
  v37 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_PlayMakerFSM__TypeInfo,
                                                       v34,
                                                       v35,
                                                       v36);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_PlayMakerFSM___ctor__);
  v3->fields.fieldCameraFsmList = (struct System_Collections_Generic_List_PlayMakerFSM__o *)v37;
  sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.fieldCameraFsmList, (int64_t)v37, v38, v39, v40, v41, v42, v43);
  FieldCameraIdList_k__BackingField = v3->fields._FieldCameraIdList_k__BackingField;
  if ( !FieldCameraIdList_k__BackingField )
LABEL_14:
    sub_1BCAA3C(this, method);
  v45 = FieldCameraIdList_k__BackingField->fields._version + 1;
  FieldCameraIdList_k__BackingField->fields._size = 0;
  FieldCameraIdList_k__BackingField->fields._version = v45;
}


void __fastcall BattleActionCamera__Initialize(
        BattleActionCamera_o *this,
        BattlePerformance_o *inPerf,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_Dictionary_int__object__o *cameraFsmDictionary; // x0
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o **p_cameraFsmDictionary; // x21
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x1
  __int64 v38; // x1
  UnityEngine_Object_o *gameObject; // x22
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Collections_Generic_Dictionary_int__object__o *v43; // x22
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  System_Collections_Generic_Dictionary_int__int__o *v50; // x21
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  Il2CppObject *Component_object; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  const MethodInfo *v70; // x2
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  struct System_Single_array *actorCameraDefaultClipRange_k__BackingField; // x21
  float v78; // s0
  float farClipPlane; // s0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  struct System_Single_array *middleCameraDefaultClipRange_k__BackingField; // x21
  float v87; // s0
  float v88; // s0
  const MethodInfo *v89; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v90; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v91; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4B183F3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, inPerf, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Count__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__get_Current__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Key__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__, v27, v28);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v29, v30);
    sub_1BCA7E0(&float___TypeInfo, v31, v32);
    byte_4B183F3 = 1;
  }
  memset(&v91, 0, sizeof(v91));
  p_cameraFsmDictionary = &this->fields.cameraFsmDictionary;
  cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.cameraFsmDictionary;
  if ( !cameraFsmDictionary )
    goto LABEL_31;
  if ( System_Collections_Generic_Dictionary_int__object___get_Count(
         cameraFsmDictionary,
         (const MethodInfo_3205B94 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Count__) >= 1 )
  {
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)*p_cameraFsmDictionary;
    if ( !*p_cameraFsmDictionary )
      goto LABEL_31;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v90,
      cameraFsmDictionary,
      (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__);
    v91 = v90;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v91,
              (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__) )
    {
      if ( LODWORD(v91.fields._current.fields.key) )
      {
        if ( !v91.fields._current.fields.value )
          sub_1BCAA3C(0LL, v37);
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v91.fields._current.fields.value,
                                               0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
        UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v91,
      (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__);
    v43 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                    System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo,
                                                                    v40,
                                                                    v41,
                                                                    v42);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v43,
      (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__);
    *p_cameraFsmDictionary = (struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *)v43;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.cameraFsmDictionary,
      (int64_t)v43,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
  }
  v50 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               inPerf,
                                                               v35,
                                                               v36);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v50,
    (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.cameraTargetDictionary = v50;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.cameraTargetDictionary,
    (int64_t)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  this->fields.perf = inPerf;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.perf, (int64_t)inPerf, v57, v58, v59, v60, v61, v62);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.mainFsm = (struct PlayMakerFSM_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mainFsm,
    (int64_t)Component_object,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  BattleActionCamera__InitCommonRegisterFsm(this, this->fields.mainFsm, v70);
  cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.cameraFsmDictionary;
  if ( !cameraFsmDictionary )
LABEL_31:
    sub_1BCAA3C(cameraFsmDictionary, inPerf);
  System_Collections_Generic_Dictionary_int__object___Add(
    cameraFsmDictionary,
    0,
    (Il2CppObject *)this->fields.mainFsm,
    (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__);
  actorCameraDefaultClipRange_k__BackingField = this->fields._actorCameraDefaultClipRange_k__BackingField;
  if ( !actorCameraDefaultClipRange_k__BackingField )
  {
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCA888(float___TypeInfo, 2LL);
    if ( !this->fields.actorcamera )
      goto LABEL_31;
    actorCameraDefaultClipRange_k__BackingField = (struct System_Single_array *)cameraFsmDictionary;
    v78 = UnityEngine_Camera__get_nearClipPlane(this->fields.actorcamera, 0LL);
    if ( !actorCameraDefaultClipRange_k__BackingField )
      goto LABEL_31;
    if ( !actorCameraDefaultClipRange_k__BackingField->max_length )
      goto LABEL_32;
    actorCameraDefaultClipRange_k__BackingField->m_Items[1] = v78;
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.actorcamera;
    if ( !cameraFsmDictionary )
      goto LABEL_31;
    farClipPlane = UnityEngine_Camera__get_farClipPlane((UnityEngine_Camera_o *)cameraFsmDictionary, 0LL);
    if ( actorCameraDefaultClipRange_k__BackingField->max_length <= 1 )
      goto LABEL_32;
    actorCameraDefaultClipRange_k__BackingField->m_Items[2] = farClipPlane;
  }
  this->fields._actorCameraDefaultClipRange_k__BackingField = actorCameraDefaultClipRange_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._actorCameraDefaultClipRange_k__BackingField,
    (int64_t)actorCameraDefaultClipRange_k__BackingField,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  middleCameraDefaultClipRange_k__BackingField = this->fields._middleCameraDefaultClipRange_k__BackingField;
  if ( !middleCameraDefaultClipRange_k__BackingField )
  {
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCA888(float___TypeInfo, 2LL);
    if ( this->fields.middleCamera )
    {
      middleCameraDefaultClipRange_k__BackingField = (struct System_Single_array *)cameraFsmDictionary;
      v87 = UnityEngine_Camera__get_nearClipPlane(this->fields.middleCamera, 0LL);
      if ( middleCameraDefaultClipRange_k__BackingField )
      {
        if ( !middleCameraDefaultClipRange_k__BackingField->max_length )
          goto LABEL_32;
        middleCameraDefaultClipRange_k__BackingField->m_Items[1] = v87;
        cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.middleCamera;
        if ( cameraFsmDictionary )
        {
          v88 = UnityEngine_Camera__get_farClipPlane((UnityEngine_Camera_o *)cameraFsmDictionary, 0LL);
          if ( middleCameraDefaultClipRange_k__BackingField->max_length > 1 )
          {
            middleCameraDefaultClipRange_k__BackingField->m_Items[2] = v88;
            goto LABEL_29;
          }
LABEL_32:
          sub_1BCAA44(cameraFsmDictionary, inPerf);
        }
      }
    }
    goto LABEL_31;
  }
LABEL_29:
  this->fields._middleCameraDefaultClipRange_k__BackingField = middleCameraDefaultClipRange_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._middleCameraDefaultClipRange_k__BackingField,
    (int64_t)middleCameraDefaultClipRange_k__BackingField,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  BattleActionCamera__InitFieldCameraList(this, v89);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__RegisterFieldCameraFsm(
        BattleActionCamera_o *this,
        int32_t cameraId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  System_String_o *v20; // x21
  BaseMonoBehaviour_o *perf; // x21
  Il2CppObject *v22; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v24; // x1
  const MethodInfo *v25; // x2
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x8
  _QWORD *v33; // x9
  __int64 klass_low; // x10
  __int64 v35; // x8
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  PlayMakerFSM_o *targetFsm; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *data; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B18405 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetManager_TryGetAssetObject_GameObject___, *(_QWORD *)&cameraId, method);
    sub_1BCA7E0(&AssetManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_GameObjectExtensions_HasComponent_PlayMakerFSM___, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_TryGetComponent_PlayMakerFSM___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PlayMakerFSM__Add__, v15, v16);
    sub_1BCA7E0(&StringLiteral_15214/*"UniqueCameraPrefab"*/, v17, v18);
    byte_4B18405 = 1;
  }
  targetFsm = 0LL;
  data = 0LL;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, *(_QWORD *)&cameraId);
  v20 = BattleDataDefine__AddUniqueCameraPath(cameraId, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v19);
  if ( AssetManager__TryGetAssetObject_object_(
         &data,
         v20,
         (System_String_o *)StringLiteral_15214/*"UniqueCameraPrefab"*/,
         (const MethodInfo_2EF51E0 *)Method_AssetManager_TryGetAssetObject_GameObject___)
    && GameObjectExtensions__HasComponent_object_(
         (UnityEngine_GameObject_o *)data,
         (const MethodInfo_2F63FF0 *)Method_GameObjectExtensions_HasComponent_PlayMakerFSM___) )
  {
    perf = (BaseMonoBehaviour_o *)this->fields.perf;
    v22 = data;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_24;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
    if ( !perf )
      goto LABEL_24;
    gameObject = BaseMonoBehaviour__createObject(
                   perf,
                   (UnityEngine_GameObject_o *)v22,
                   (UnityEngine_Transform_o *)gameObject,
                   0LL,
                   0LL);
    if ( !gameObject )
      goto LABEL_24;
    if ( !UnityEngine_GameObject__TryGetComponent_object_(
            gameObject,
            (Il2CppObject **)&targetFsm,
            (const MethodInfo_2F63960 *)Method_UnityEngine_GameObject_TryGetComponent_PlayMakerFSM___) )
      return;
    BattleActionCamera__initializeRegisterFsm(this, targetFsm, v25);
    gameObject = (UnityEngine_GameObject_o *)this->fields.fieldCameraFsmList;
    if ( !gameObject )
      goto LABEL_24;
    v24 = (Il2CppObject *)targetFsm;
    v32 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
    v33 = Method_System_Collections_Generic_List_PlayMakerFSM__Add__;
    ++HIDWORD(gameObject[1].klass);
    if ( !v32 )
      goto LABEL_24;
    klass_low = SLODWORD(gameObject[1].klass);
    if ( (unsigned int)klass_low >= *(_DWORD *)(v32 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)gameObject,
        v24,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = v32 + 8 * klass_low;
      LODWORD(gameObject[1].klass) = klass_low + 1;
      *(_QWORD *)(v35 + 32) = v24;
      sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 32), (int64_t)v24, v26, v27, v28, v29, v30, v31);
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields._FieldCameraIdList_k__BackingField;
    if ( !gameObject
      || (v36 = *(_QWORD *)&gameObject->fields.m_CachedPtr,
          v37 = Method_System_Collections_Generic_List_int__Add__,
          ++HIDWORD(gameObject[1].klass),
          !v36) )
    {
LABEL_24:
      sub_1BCAA3C(gameObject, v24);
    }
    v38 = SLODWORD(gameObject[1].klass);
    if ( (unsigned int)v38 >= *(_DWORD *)(v36 + 24) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        (System_Collections_Generic_List_int__o *)gameObject,
        cameraId,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    }
    else
    {
      LODWORD(gameObject[1].klass) = v38 + 1;
      *(_DWORD *)(v36 + 4 * v38 + 32) = cameraId;
    }
  }
}


void __fastcall BattleActionCamera__ResetAllCameraEvent(BattleActionCamera_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  BattleActionCamera___c_c *v17; // x0
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *cameraFsmDictionary; // x20
  System_Func_T__TResult__o *_9__42_0; // x21
  Il2CppObject *v20; // x22
  struct BattleActionCamera___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  BattleActionCamera___c_c *v32; // x8
  System_Collections_Generic_IEnumerable_T__o *v33; // x20
  System_Action_T__o *_9__42_1; // x21
  Il2CppObject *v35; // x22
  struct BattleActionCamera___c_StaticFields *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  const MethodInfo *v43; // x1

  if ( (byte_4B183FD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_KeyValuePair_int__PlayMakerFSM___TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_KeyValuePair_int__PlayMakerFSM____, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_KeyValuePair_int__PlayMakerFSM____, v7, v8);
    sub_1BCA7E0(&System_Func_KeyValuePair_int__PlayMakerFSM___bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_BattleActionCamera___c__ResetAllCameraEvent_b__42_0__, v11, v12);
    sub_1BCA7E0(&Method_BattleActionCamera___c__ResetAllCameraEvent_b__42_1__, v13, v14);
    sub_1BCA7E0(&BattleActionCamera___c_TypeInfo, v15, v16);
    byte_4B183FD = 1;
  }
  v17 = BattleActionCamera___c_TypeInfo;
  cameraFsmDictionary = this->fields.cameraFsmDictionary;
  if ( !BattleActionCamera___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionCamera___c_TypeInfo, method);
    v17 = BattleActionCamera___c_TypeInfo;
  }
  _9__42_0 = (System_Func_T__TResult__o *)v17->static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17, method);
      v17 = BattleActionCamera___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__42_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                              System_Func_KeyValuePair_int__PlayMakerFSM___bool__TypeInfo,
                                              method,
                                              v2,
                                              v3);
    System_Func_KeyValuePair_int__object___bool____ctor(
      _9__42_0,
      v20,
      Method_BattleActionCamera___c__ResetAllCameraEvent_b__42_0__,
      0LL);
    static_fields = BattleActionCamera___c_TypeInfo->static_fields;
    static_fields->__9__42_0 = (struct System_Func_KeyValuePair_int__PlayMakerFSM___bool__o *)_9__42_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__42_0,
      (int64_t)_9__42_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = System_Linq_Enumerable__Where_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)cameraFsmDictionary,
          (System_Func_TSource__bool__o *)_9__42_0,
          (const MethodInfo_2F501F4 *)Method_System_Linq_Enumerable_Where_KeyValuePair_int__PlayMakerFSM____);
  v32 = BattleActionCamera___c_TypeInfo;
  v33 = (System_Collections_Generic_IEnumerable_T__o *)v28;
  if ( !BattleActionCamera___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionCamera___c_TypeInfo, v29);
    v32 = BattleActionCamera___c_TypeInfo;
  }
  _9__42_1 = (System_Action_T__o *)v32->static_fields->__9__42_1;
  if ( !_9__42_1 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32, v29);
      v32 = BattleActionCamera___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v32->static_fields->__9;
    _9__42_1 = (System_Action_T__o *)sub_1BCAA2C(System_Action_KeyValuePair_int__PlayMakerFSM___TypeInfo, v29, v30, v31);
    System_Action_KeyValuePair_int__object_____ctor(
      _9__42_1,
      v35,
      Method_BattleActionCamera___c__ResetAllCameraEvent_b__42_1__,
      0LL);
    v36 = BattleActionCamera___c_TypeInfo->static_fields;
    v36->__9__42_1 = (struct System_Action_KeyValuePair_int__PlayMakerFSM___o *)_9__42_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v36->__9__42_1, (int64_t)_9__42_1, v37, v38, v39, v40, v41, v42);
  }
  BasicHelper__ForEach_KeyValuePair_int__object__(
    v33,
    _9__42_1,
    (const MethodInfo_2EFEA48 *)Method_BasicHelper_ForEach_KeyValuePair_int__PlayMakerFSM____);
  BattleActionCamera__ResetFieldCameraEvent(this, v43);
}


void __fastcall BattleActionCamera__ResetFieldCameraEvent(BattleActionCamera_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_IEnumerable_PlayMakerFSM__o *NotNullFieldCameraFsmEnumerable; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  BattleActionCamera___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_T__o *v15; // x19
  System_Action_object__o *_9__43_0; // x20
  Il2CppObject *v17; // x21
  struct BattleActionCamera___c_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B183FE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_PlayMakerFSM__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_PlayMakerFSM___, v4, v5);
    sub_1BCA7E0(&Method_BattleActionCamera___c__ResetFieldCameraEvent_b__43_0__, v6, v7);
    sub_1BCA7E0(&BattleActionCamera___c_TypeInfo, v8, v9);
    byte_4B183FE = 1;
  }
  NotNullFieldCameraFsmEnumerable = BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(this, method);
  v14 = BattleActionCamera___c_TypeInfo;
  v15 = (System_Collections_Generic_IEnumerable_T__o *)NotNullFieldCameraFsmEnumerable;
  if ( !BattleActionCamera___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionCamera___c_TypeInfo, v11);
    v14 = BattleActionCamera___c_TypeInfo;
  }
  _9__43_0 = (System_Action_object__o *)v14->static_fields->__9__43_0;
  if ( !_9__43_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14, v11);
      v14 = BattleActionCamera___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__43_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_PlayMakerFSM__TypeInfo, v11, v12, v13);
    System_Action_object____ctor(_9__43_0, v17, Method_BattleActionCamera___c__ResetFieldCameraEvent_b__43_0__, 0LL);
    static_fields = BattleActionCamera___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = (struct System_Action_PlayMakerFSM__o *)_9__43_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__43_0,
      (int64_t)_9__43_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  BasicHelper__ForEach_object_(
    v15,
    (System_Action_T__o *)_9__43_0,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_PlayMakerFSM___);
}


bool __fastcall BattleActionCamera__SendFieldEvent(
        BattleActionCamera_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_String_o **v23; // x20
  const MethodInfo *v24; // x1
  System_Collections_Generic_IEnumerable_PlayMakerFSM__o *NotNullFieldCameraFsmEnumerable; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Func_object__bool__o *v29; // x23
  __int64 v30; // x1
  Il2CppObject *v31; // x21
  const MethodInfo *v32; // x1
  bool v33; // w22

  if ( (byte_4B183FC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_PlayMakerFSM___, eventName, method);
    sub_1BCA7E0(&System_Func_PlayMakerFSM__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_BattleActionCamera___c__DisplayClass41_0__SendFieldEvent_b__0__, v10, v11);
    sub_1BCA7E0(&BattleActionCamera___c__DisplayClass41_0_TypeInfo, v12, v13);
    byte_4B183FC = 1;
  }
  v14 = sub_1BCAA2C(BattleActionCamera___c__DisplayClass41_0_TypeInfo, eventName, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_10;
  *(_QWORD *)(v14 + 16) = eventName;
  v23 = (System_String_o **)(v14 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)eventName, v17, v18, v19, v20, v21, v22);
  NotNullFieldCameraFsmEnumerable = BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(this, v24);
  v29 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_PlayMakerFSM__bool__TypeInfo, v26, v27, v28);
  System_Func_object__bool____ctor(
    v29,
    (Il2CppObject *)v14,
    Method_BattleActionCamera___c__DisplayClass41_0__SendFieldEvent_b__0__,
    0LL);
  v31 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
          (System_Collections_Generic_IEnumerable_TSource__o *)NotNullFieldCameraFsmEnumerable,
          (System_Func_TSource__bool__o *)v29,
          (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_PlayMakerFSM___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
  v33 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v31, 0LL, 0LL);
  if ( !v33 )
  {
    BattleActionCamera__ResetAllCameraEvent(this, v32);
    if ( v31 )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)v31, *v23, 0LL);
      return !v33;
    }
LABEL_10:
    sub_1BCAA3C(v15, v16);
  }
  return !v33;
}


void __fastcall BattleActionCamera__SetGameObjectToField(
        BattleActionCamera_o *this,
        UnityEngine_GameObject_o *obj,
        System_String_o *varName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  UnityEngine_Object_o *v31; // x21
  const MethodInfo *v32; // x1
  System_Collections_Generic_IEnumerable_T__o *NotNullFieldCameraFsmEnumerable; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Action_object__o *v37; // x22

  if ( (byte_4B18400 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_PlayMakerFSM__TypeInfo, obj, varName);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_PlayMakerFSM___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_BattleActionCamera___c__DisplayClass45_0__SetGameObjectToField_b__0__, v11, v12);
    sub_1BCA7E0(&BattleActionCamera___c__DisplayClass45_0_TypeInfo, v13, v14);
    byte_4B18400 = 1;
  }
  v15 = sub_1BCAA2C(BattleActionCamera___c__DisplayClass45_0_TypeInfo, obj, varName, method);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v16, v17);
  *(_QWORD *)(v15 + 16) = varName;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)varName, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = obj;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)obj, v24, v25, v26, v27, v28, v29);
  v31 = *(UnityEngine_Object_o **)(v15 + 24);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
  if ( !UnityEngine_Object__op_Equality(v31, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(*(System_String_o **)(v15 + 16), 0LL) )
  {
    NotNullFieldCameraFsmEnumerable = (System_Collections_Generic_IEnumerable_T__o *)BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(
                                                                                       this,
                                                                                       v32);
    v37 = (System_Action_object__o *)sub_1BCAA2C(System_Action_PlayMakerFSM__TypeInfo, v34, v35, v36);
    System_Action_object____ctor(
      v37,
      (Il2CppObject *)v15,
      Method_BattleActionCamera___c__DisplayClass45_0__SetGameObjectToField_b__0__,
      0LL);
    BasicHelper__ForEach_object_(
      NotNullFieldCameraFsmEnumerable,
      (System_Action_T__o *)v37,
      (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_PlayMakerFSM___);
    HutongGames_PlayMaker_PlayMakerFSMHelper__SetFsmGameObject(
      this->fields.mainFsm,
      *(System_String_o **)(v15 + 16),
      *(UnityEngine_GameObject_o **)(v15 + 24),
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__ShakePosition(
        BattleActionCamera_o *this,
        UnityEngine_Vector3_o range,
        float tm,
        const MethodInfo *method)
{
  this->fields.ShakeRange.fields.y = range.fields.y;
  this->fields.ShakeRange.fields.z = range.fields.z;
  this->fields.ShakeTargetTime = tm;
  this->fields.ShakeRange.fields.x = range.fields.x;
  this->fields.Shaking = 1;
  this->fields.ShakeTime = 0.0;
}


void __fastcall BattleActionCamera__Update(BattleActionCamera_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  float ShakeTime; // s8
  float v7; // s0
  float v8; // s9
  float v9; // s1
  float Epsilon; // s3
  int v11; // w8
  int v12; // w21
  float v13; // s0
  int v14; // w8
  float v15; // s8
  float v16; // s9
  float v17; // s10
  UnityEngine_Transform_o *transform; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Transform_o *v22; // x20
  UnityEngine_Object_o *perf; // x20
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B18406 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_12114/*"SHAKE"*/, v4, v5);
    byte_4B18406 = 1;
  }
  if ( this->fields.Shaking )
  {
    ShakeTime = this->fields.ShakeTime;
    if ( !byte_4B109C5 )
    {
      sub_1BCA7E0(&UnityEngine_Mathf_TypeInfo, method, v2);
      byte_4B109C5 = 1;
    }
    v7 = fmaxf(fabsf(ShakeTime), 0.0) * 0.000001;
    v8 = this->fields.ShakeTime;
    v9 = vabds_f32(0.0, ShakeTime);
    Epsilon = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon;
    if ( v7 <= (float)(Epsilon * 8.0) )
      v7 = Epsilon * 8.0;
    v11 = (int)(float)(v8 * 30.0);
    if ( (float)(v8 * 30.0) == INFINITY )
      v11 = 0x80000000;
    if ( v9 < v7 )
      v12 = -1;
    else
      v12 = v11;
    v13 = v8 + UnityEngine_Time__get_deltaTime(0LL);
    v14 = (int)(float)(v13 * 30.0);
    if ( (float)(v13 * 30.0) == INFINITY )
      v14 = 0x80000000;
    this->fields.ShakeTime = v13;
    if ( v12 < v14 )
    {
      v15 = UnityEngine_Random__Range(
              this->fields.ShakeRange.fields.x * -0.5,
              this->fields.ShakeRange.fields.x * 0.5,
              0LL);
      v16 = UnityEngine_Random__Range(
              this->fields.ShakeRange.fields.y * -0.5,
              this->fields.ShakeRange.fields.y * 0.5,
              0LL);
      v17 = UnityEngine_Random__Range(
              this->fields.ShakeRange.fields.z * -0.5,
              this->fields.ShakeRange.fields.z * 0.5,
              0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform )
        goto LABEL_28;
      v24.fields.x = v15;
      v24.fields.y = v16;
      v24.fields.z = v17;
      UnityEngine_Transform__set_localPosition(transform, v24, 0LL);
      if ( this->fields.ShakeTime >= this->fields.ShakeTargetTime )
      {
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        v22 = transform;
        if ( !byte_4B109C1 )
        {
          transform = (UnityEngine_Transform_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v19, v21);
          byte_4B109C1 = 1;
        }
        if ( !v22 )
          goto LABEL_28;
        UnityEngine_Transform__set_localPosition(v22, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        this->fields.Shaking = 0;
      }
      perf = (UnityEngine_Object_o *)this->fields.perf;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
      if ( UnityEngine_Object__op_Inequality(perf, 0LL, 0LL) )
      {
        transform = (UnityEngine_Transform_o *)this->fields.perf;
        if ( transform )
        {
          BattlePerformance__sendLocalEventFieldMotion(
            (BattlePerformance_o *)transform,
            (System_String_o *)StringLiteral_12114/*"SHAKE"*/,
            0LL);
          return;
        }
LABEL_28:
        sub_1BCAA3C(transform, v19);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__UpdateFieldUniqueCameraFsm(
        BattleActionCamera_o *this,
        System_Int32_array *cameraIds,
        bool isInitFieldCamera,
        const MethodInfo *method)
{
  long double inited; // q0
  System_Collections_Generic_IEnumerable_T__o *v6; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  _QWORD *v16; // x21
  __int64 v17; // x8
  __int64 v18; // x0
  __int64 v19; // x0
  const MethodInfo *v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Action_int__o *v23; // x20

  v6 = (System_Collections_Generic_IEnumerable_T__o *)cameraIds;
  if ( (byte_4B18404 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, cameraIds, isInitFieldCamera);
    sub_1BCA7E0(&Method_System_Array_Empty_int___, v8, v9);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_int___, v10, v11);
    sub_1BCA7E0(&Method_BattleActionCamera_RegisterFieldCameraFsm__, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SequenceEqual_int___, v14, v15);
    byte_4B18404 = 1;
  }
  if ( !v6 )
  {
    v16 = Method_System_Array_Empty_int___;
    v17 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v17 )
    {
      sub_1C1C718(Method_System_Array_Empty_int___, cameraIds);
      v17 = v16[7];
    }
    v18 = *(_QWORD *)(v17 + 16);
    if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
      v18 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v18 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v18, cameraIds);
    v19 = *(_QWORD *)(v16[7] + 16LL);
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
      v19 = sub_1C1C6BC(inited);
    v6 = **(System_Collections_Generic_IEnumerable_T__o ***)(v19 + 184);
  }
  if ( !System_Linq_Enumerable__SequenceEqual_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._FieldCameraIdList_k__BackingField,
          (System_Collections_Generic_IEnumerable_TSource__o *)v6,
          (const MethodInfo_2F4642C *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
  {
    if ( isInitFieldCamera )
      BattleActionCamera__InitFieldCameraList(this, v20);
    v23 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v20, v21, v22);
    System_Action_int____ctor(v23, (Il2CppObject *)this, Method_BattleActionCamera_RegisterFieldCameraFsm__, 0LL);
    BasicHelper__ForEach_int_(
      v6,
      (System_Action_T__o *)v23,
      (const MethodInfo_2EFF36C *)Method_BasicHelper_ForEach_int___);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__deleteCamera(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        int32_t cameraId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_Dictionary_int__int__o *cameraTargetDictionary; // x0
  char v28; // w23
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *cameraFsmDictionary; // x8
  UnityEngine_Object_o *v30; // x20
  __int64 v31; // x1
  __int64 v32; // x1
  UnityEngine_Object_o *gameObject; // x19
  __int128 v34[2]; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v35; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B18403 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__,
      *(_QWORD *)&uniqueId,
      *(_QWORD *)&cameraId);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Remove__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v23, v24);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v25, v26);
    byte_4B18403 = 1;
  }
  memset(&v35, 0, 32);
  if ( cameraId )
  {
    cameraTargetDictionary = this->fields.cameraTargetDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_25;
    if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
           cameraTargetDictionary,
           uniqueId,
           (const MethodInfo_31FD460 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    {
      cameraTargetDictionary = this->fields.cameraTargetDictionary;
      if ( !cameraTargetDictionary )
        goto LABEL_25;
      System_Collections_Generic_Dictionary_int__int___Remove(
        cameraTargetDictionary,
        uniqueId,
        (const MethodInfo_31FE62C *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    }
    cameraTargetDictionary = this->fields.cameraTargetDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_25;
    System_Collections_Generic_Dictionary_int__int___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v34,
      cameraTargetDictionary,
      (const MethodInfo_31FD64C *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    v28 = 1;
    *(_OWORD *)&v35.fields._dictionary = v34[0];
    v35.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v34[1];
    while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
              &v35,
              (const MethodInfo_3354DA0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
      v28 &= HIDWORD(v35.fields._current.fields.key) != cameraId;
    System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
      &v35,
      (const MethodInfo_3354EA0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    if ( (v28 & 1) == 0 )
      return;
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_25;
    if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
            (System_Collections_Generic_Dictionary_int__object__o *)cameraTargetDictionary,
            cameraId,
            (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__) )
      return;
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
    if ( !cameraTargetDictionary
      || (cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                          (System_Collections_Generic_Dictionary_int__object__o *)cameraTargetDictionary,
                                                                                          cameraId,
                                                                                          (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__),
          (cameraFsmDictionary = this->fields.cameraFsmDictionary) == 0LL) )
    {
LABEL_25:
      sub_1BCAA3C(cameraTargetDictionary, *(_QWORD *)&uniqueId);
    }
    v30 = (UnityEngine_Object_o *)cameraTargetDictionary;
    System_Collections_Generic_Dictionary_int__object___Remove(
      (System_Collections_Generic_Dictionary_int__object__o *)cameraFsmDictionary,
      cameraId,
      (const MethodInfo_320736C *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Remove__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)UnityEngine_Object__op_Inequality(
                                                                                    v30,
                                                                                    0LL,
                                                                                    0LL);
    if ( ((unsigned __int8)cameraTargetDictionary & 1) != 0 )
    {
      if ( v30 )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
        UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
        return;
      }
      goto LABEL_25;
    }
  }
}


PlayMakerFSM_o *__fastcall BattleActionCamera__getUniqueFsm(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t cameraId; // [xsp+Ch] [xbp-4h] BYREF

  cameraId = 0;
  return BattleActionCamera__getUniqueFsm_43080120(this, uniqueId, &cameraId, v3);
}


// local variable allocation has failed, the output may be wrong!
PlayMakerFSM_o *__fastcall BattleActionCamera__getUniqueFsm_43080120(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        int32_t *cameraId,
        const MethodInfo *method)
{
  int32_t v5; // w21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_Dictionary_int__int__o *cameraTargetDictionary; // x0
  unsigned int Item; // w0
  __int64 v15; // x1
  Il2CppObject *v16; // x19

  v5 = uniqueId;
  if ( (byte_4B18401 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, *(_QWORD *)&uniqueId, cameraId);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B18401 = 1;
  }
  *cameraId = 0;
  cameraTargetDictionary = this->fields.cameraTargetDictionary;
  if ( !cameraTargetDictionary )
    goto LABEL_12;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          cameraTargetDictionary,
          v5,
          (const MethodInfo_31FD460 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0LL;
  cameraTargetDictionary = this->fields.cameraTargetDictionary;
  if ( !cameraTargetDictionary
    || (Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 cameraTargetDictionary,
                 v5,
                 (const MethodInfo_31FD1D8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__),
        *cameraId = Item,
        *(_QWORD *)&uniqueId = Item,
        (cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary) == 0LL) )
  {
LABEL_12:
    sub_1BCAA3C(cameraTargetDictionary, *(_QWORD *)&uniqueId);
  }
  v16 = System_Collections_Generic_Dictionary_int__object___get_Item(
          (System_Collections_Generic_Dictionary_int__object__o *)cameraTargetDictionary,
          uniqueId,
          (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL) )
    return 0LL;
  return (PlayMakerFSM_o *)v16;
}


System_Collections_Generic_List_int__o *__fastcall BattleActionCamera__get_FieldCameraIdList(
        BattleActionCamera_o *this,
        const MethodInfo *method)
{
  return this->fields._FieldCameraIdList_k__BackingField;
}


System_Collections_Generic_IEnumerable_PlayMakerFSM__o *__fastcall BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(
        BattleActionCamera_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B183F2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_ExcludeNull_PlayMakerFSM___, method, v2);
    byte_4B183F2 = 1;
  }
  return (System_Collections_Generic_IEnumerable_PlayMakerFSM__o *)BasicHelper__ExcludeNull_object_(
                                                                     (System_Collections_Generic_IEnumerable_T__o *)this->fields.fieldCameraFsmList,
                                                                     (const MethodInfo_2EFE5E8 *)Method_BasicHelper_ExcludeNull_PlayMakerFSM___);
}


System_Single_array *__fastcall BattleActionCamera__get_actorCameraDefaultClipRange(
        BattleActionCamera_o *this,
        const MethodInfo *method)
{
  return this->fields._actorCameraDefaultClipRange_k__BackingField;
}


System_Single_array *__fastcall BattleActionCamera__get_middleCameraDefaultClipRange(
        BattleActionCamera_o *this,
        const MethodInfo *method)
{
  return this->fields._middleCameraDefaultClipRange_k__BackingField;
}


void __fastcall BattleActionCamera__initializeRegisterFsm(
        BattleActionCamera_o *this,
        PlayMakerFSM_o *targetFsm,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v8; // x1
  HutongGames_PlayMaker_FsmGameObject_o *v9; // x21
  PlayMakerFSM_o *mainFsm; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v11; // x19

  if ( (byte_4B183F8 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4044/*"Camera"*/, targetFsm, method);
    sub_1BCA7E0(&StringLiteral_4053/*"Camera_obj"*/, v5, v6);
    byte_4B183F8 = 1;
  }
  BattleActionCamera__InitCommonRegisterFsm(this, targetFsm, method);
  if ( !targetFsm )
    goto LABEL_15;
  Fsm = PlayMakerFSM__get_Fsm(targetFsm, 0LL);
  if ( !Fsm )
    goto LABEL_15;
  Fsm = (HutongGames_PlayMaker_Fsm_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                         Fsm,
                                         (System_String_o *)StringLiteral_4044/*"Camera"*/,
                                         0LL);
  if ( !this->fields.mainFsm )
    goto LABEL_15;
  v9 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
  Fsm = PlayMakerFSM__get_Fsm(this->fields.mainFsm, 0LL);
  if ( !Fsm )
    goto LABEL_15;
  Fsm = (HutongGames_PlayMaker_Fsm_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                         Fsm,
                                         (System_String_o *)StringLiteral_4044/*"Camera"*/,
                                         0LL);
  if ( !Fsm )
    goto LABEL_15;
  Fsm = (HutongGames_PlayMaker_Fsm_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                         (HutongGames_PlayMaker_FsmGameObject_o *)Fsm,
                                         0LL);
  if ( !v9 )
    goto LABEL_15;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v9, (UnityEngine_GameObject_o *)Fsm, 0LL);
  Fsm = PlayMakerFSM__get_Fsm(targetFsm, 0LL);
  if ( !Fsm
    || (Fsm = (HutongGames_PlayMaker_Fsm_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                               Fsm,
                                               (System_String_o *)StringLiteral_4053/*"Camera_obj"*/,
                                               0LL),
        (mainFsm = this->fields.mainFsm) == 0LL)
    || (v11 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm, (Fsm = PlayMakerFSM__get_Fsm(mainFsm, 0LL)) == 0LL)
    || (Fsm = (HutongGames_PlayMaker_Fsm_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                               Fsm,
                                               (System_String_o *)StringLiteral_4053/*"Camera_obj"*/,
                                               0LL)) == 0LL
    || (Fsm = (HutongGames_PlayMaker_Fsm_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                               (HutongGames_PlayMaker_FsmGameObject_o *)Fsm,
                                               0LL),
        !v11) )
  {
LABEL_15:
    sub_1BCAA3C(Fsm, v8);
  }
  HutongGames_PlayMaker_FsmGameObject__set_Value(v11, (UnityEngine_GameObject_o *)Fsm, 0LL);
}


void __fastcall BattleActionCamera__loadEffectStatus(BattleActionCamera_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  const MethodInfo *v4; // x3

  BattleActionCamera__loadEffectStatusCamera(this, this->fields.frontcamera, this->fields.frontCameraEffectsStatus, v2);
  BattleActionCamera__loadEffectStatusCamera(
    this,
    this->fields.middleCamera,
    this->fields.middleCameraEffectsStatus,
    v4);
}


void __fastcall BattleActionCamera__loadEffectStatusCamera(
        BattleActionCamera_o *this,
        UnityEngine_Camera_o *targetCamera,
        System_Collections_Generic_Dictionary_string__bool__o *stat,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2

  if ( (byte_4B183F7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleActionCamera_loadEffectStatus_Bloom___, targetCamera, stat);
    sub_1BCA7E0(&Method_BattleActionCamera_loadEffectStatus_GrayscaleEffect___, v7, v8);
    sub_1BCA7E0(&Method_BattleActionCamera_loadEffectStatus_MotionBlur___, v9, v10);
    sub_1BCA7E0(&Method_BattleActionCamera_loadEffectStatus_Vignetting___, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    byte_4B183F7 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, targetCamera);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetCamera, 0LL, 0LL) )
  {
    BattleActionCamera__loadEffectStatus_object_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_2F02FD4 *)Method_BattleActionCamera_loadEffectStatus_Bloom___);
    BattleActionCamera__loadEffectStatus_object_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_2F02FD4 *)Method_BattleActionCamera_loadEffectStatus_MotionBlur___);
    BattleActionCamera__loadEffectStatus_object_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_2F02FD4 *)Method_BattleActionCamera_loadEffectStatus_Vignetting___);
    BattleActionCamera__loadEffectStatus_object_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_2F02FD4 *)Method_BattleActionCamera_loadEffectStatus_GrayscaleEffect___);
  }
}


void __fastcall BattleActionCamera__loadEffectStatus_object_(
        BattleActionCamera_o *this,
        UnityEngine_Camera_o *cam,
        System_Collections_Generic_Dictionary_string__bool__o *stat,
        const MethodInfo_2F02FD4 *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  Il2CppObject *Component_object; // x20
  Il2CppObject *v13; // x0
  bool Item; // w1

  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__, cam, stat);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__bool__get_Item__, v7, v8);
    this = (BattleActionCamera_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    if ( !method->rgctx_data )
      this = (BattleActionCamera_o *)sub_1C1C718(method, cam);
  }
  if ( !cam )
    goto LABEL_15;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)cam,
                       (const MethodInfo_2F09734 *)method->rgctx_data->_0_UnityEngine_Component_GetComponent_T_);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  this = (BattleActionCamera_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_15;
    this = (BattleActionCamera_o *)System_Object__GetType(Component_object, 0LL);
    if ( !this )
      goto LABEL_15;
    this = (BattleActionCamera_o *)((__int64 (__fastcall *)(BattleActionCamera_o *, Il2CppClass *))this->klass[1]._1.castClass)(
                                     this,
                                     this->klass[1]._1.declaringType);
    if ( !stat )
      goto LABEL_15;
    if ( System_Collections_Generic_Dictionary_object__bool___ContainsKey(
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)stat,
           (Il2CppObject *)this,
           (const MethodInfo_32504A4 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__) )
    {
      this = (BattleActionCamera_o *)System_Object__GetType(Component_object, 0LL);
      if ( this )
      {
        v13 = (Il2CppObject *)((__int64 (__fastcall *)(BattleActionCamera_o *, Il2CppClass *))this->klass[1]._1.castClass)(
                                this,
                                this->klass[1]._1.declaringType);
        Item = System_Collections_Generic_Dictionary_object__bool___get_Item(
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)stat,
                 v13,
                 (const MethodInfo_3250210 *)Method_System_Collections_Generic_Dictionary_string__bool__get_Item__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, Item, 0LL);
        return;
      }
LABEL_15:
      sub_1BCAA3C(this, cam);
    }
  }
}


void __fastcall BattleActionCamera__playCameraAnimation(
        BattleActionCamera_o *this,
        System_String_o *animName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  Il2CppObject *Component_object; // x20
  __int64 v14; // x1
  Il2CppObject *v15; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v17; // x21
  __int64 v18; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v20; // x0
  UnityEngine_TrackedReference_o *Item; // x0

  if ( (byte_4B18407 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, animName, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v9, v10);
    byte_4B18407 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  v15 = UnityEngine_GameObject__GetComponent_object_(
          gameObject,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
      return;
    if ( v15 )
    {
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)v15,
                                                 animName,
                                                 0LL);
      if ( !UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
        return;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)v15,
                                                 animName,
                                                 0LL);
      if ( gameObject )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
        UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v15, 0LL);
        UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)v15, animName, 0LL);
        return;
      }
    }
LABEL_26:
    sub_1BCAA3C(gameObject, v12);
  }
  if ( !Component_object )
    goto LABEL_26;
  if ( !SimpleAnimation__get_Item((SimpleAnimation_o *)Component_object, animName, 0LL) )
    return;
  gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(
                                             (SimpleAnimation_o *)Component_object,
                                             animName,
                                             0LL);
  if ( !gameObject )
    goto LABEL_26;
  klass = gameObject->klass;
  v17 = gameObject;
  v18 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v18;
      p_offset += 2;
      if ( !v18 )
        goto LABEL_15;
    }
    v20 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_15:
    v20 = sub_1C1C7C0(gameObject, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v20)(v17, *(_QWORD *)(v20 + 8), 0.0);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_object, 0LL);
  SimpleAnimation__Play_64539336((SimpleAnimation_o *)Component_object, animName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__registerCamera(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        int32_t cameraId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_Dictionary_int__int__o *cameraTargetDictionary; // x0
  __int64 v22; // x1
  UnityEngine_Transform_o *transform; // x21
  __int64 v24; // x1
  UnityEngine_Object_o *Manager__loadCameraAction; // x20
  System_String_o *v26; // x1
  __int64 v27; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v29; // x2
  int32_t key; // [xsp+Ch] [xbp-24h] BYREF

  key = cameraId;
  if ( (byte_4B18402 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__int__Add__,
      *(_QWORD *)&uniqueId,
      *(_QWORD *)&cameraId);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v19, v20);
    byte_4B18402 = 1;
  }
  if ( cameraId )
  {
    cameraTargetDictionary = this->fields.cameraTargetDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_26;
    if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
            cameraTargetDictionary,
            uniqueId,
            (const MethodInfo_31FD460 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    {
      cameraTargetDictionary = this->fields.cameraTargetDictionary;
      if ( !cameraTargetDictionary )
        goto LABEL_26;
      System_Collections_Generic_Dictionary_int__int___Add(
        cameraTargetDictionary,
        uniqueId,
        cameraId,
        (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_26;
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           (System_Collections_Generic_Dictionary_int__object__o *)cameraTargetDictionary,
           cameraId,
           (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__) )
    {
      return;
    }
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)UnityEngine_Component__get_gameObject(
                                                                                    (UnityEngine_Component_o *)this,
                                                                                    0LL);
    if ( !cameraTargetDictionary )
LABEL_26:
      sub_1BCAA3C(cameraTargetDictionary, *(_QWORD *)&uniqueId);
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)cameraTargetDictionary, 0LL);
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v22);
    Manager__loadCameraAction = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCameraAction(
                                                          cameraId,
                                                          transform,
                                                          0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    if ( UnityEngine_Object__op_Inequality(Manager__loadCameraAction, 0LL, 0LL) )
    {
      cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)System_Int32__ToString(
                                                                                      (int32_t)&key,
                                                                                      0LL);
      if ( !Manager__loadCameraAction )
        goto LABEL_26;
      v26 = cameraTargetDictionary ? (System_String_o *)cameraTargetDictionary : (System_String_o *)StringLiteral_1/*""*/;
      UnityEngine_Object__set_name(Manager__loadCameraAction, v26, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Manager__loadCameraAction,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      {
        BattleActionCamera__initializeRegisterFsm(this, (PlayMakerFSM_o *)Component_object, v29);
        cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
        if ( cameraTargetDictionary )
        {
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)cameraTargetDictionary,
            key,
            Component_object,
            (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__);
          return;
        }
        goto LABEL_26;
      }
    }
  }
}


void __fastcall BattleActionCamera__saveEffectStatus(BattleActionCamera_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct System_Collections_Generic_Dictionary_string__bool__o *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  const MethodInfo *v11; // x2
  struct System_Collections_Generic_Dictionary_string__bool__o *v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  v4 = BattleActionCamera__saveEffectStatusCamera(this, this->fields.frontcamera, v2);
  this->fields.frontCameraEffectsStatus = v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.frontCameraEffectsStatus,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v12 = BattleActionCamera__saveEffectStatusCamera(this, this->fields.middleCamera, v11);
  this->fields.middleCameraEffectsStatus = v12;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.middleCameraEffectsStatus,
    (int64_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


System_Collections_Generic_Dictionary_string__bool__o *__fastcall BattleActionCamera__saveEffectStatusCamera(
        BattleActionCamera_o *this,
        UnityEngine_Camera_o *targetCamera,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v20; // x21

  if ( (byte_4B183F6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleActionCamera_saveEffectStatus_Bloom___, targetCamera, method);
    sub_1BCA7E0(&Method_BattleActionCamera_saveEffectStatus_GrayscaleEffect___, v5, v6);
    sub_1BCA7E0(&Method_BattleActionCamera_saveEffectStatus_MotionBlur___, v7, v8);
    sub_1BCA7E0(&Method_BattleActionCamera_saveEffectStatus_Vignetting___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__bool___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__bool__TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B183F6 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, targetCamera);
  v20 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetCamera, 0LL, 0LL) )
  {
    v20 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__bool__TypeInfo,
                                                                     v17,
                                                                     v18,
                                                                     v19);
    System_Collections_Generic_Dictionary_object__bool____ctor(
      v20,
      (const MethodInfo_324F8DC *)Method_System_Collections_Generic_Dictionary_string__bool___ctor__);
    BattleActionCamera__saveEffectStatus_object_(
      this,
      targetCamera,
      (System_Collections_Generic_Dictionary_string__bool__o *)v20,
      (const MethodInfo_2F03108 *)Method_BattleActionCamera_saveEffectStatus_Bloom___);
    BattleActionCamera__saveEffectStatus_object_(
      this,
      targetCamera,
      (System_Collections_Generic_Dictionary_string__bool__o *)v20,
      (const MethodInfo_2F03108 *)Method_BattleActionCamera_saveEffectStatus_MotionBlur___);
    BattleActionCamera__saveEffectStatus_object_(
      this,
      targetCamera,
      (System_Collections_Generic_Dictionary_string__bool__o *)v20,
      (const MethodInfo_2F03108 *)Method_BattleActionCamera_saveEffectStatus_Vignetting___);
    BattleActionCamera__saveEffectStatus_object_(
      this,
      targetCamera,
      (System_Collections_Generic_Dictionary_string__bool__o *)v20,
      (const MethodInfo_2F03108 *)Method_BattleActionCamera_saveEffectStatus_GrayscaleEffect___);
  }
  return (System_Collections_Generic_Dictionary_string__bool__o *)v20;
}


void __fastcall BattleActionCamera__saveEffectStatus_object_(
        BattleActionCamera_o *this,
        UnityEngine_Camera_o *cam,
        System_Collections_Generic_Dictionary_string__bool__o *stat,
        const MethodInfo_2F03108 *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  Il2CppObject *Component_object; // x20
  Il2CppObject *v11; // x21

  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__bool__set_Item__, cam, stat);
    this = (BattleActionCamera_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    if ( !method->rgctx_data )
      this = (BattleActionCamera_o *)sub_1C1C718(method, cam);
  }
  if ( !cam )
    goto LABEL_13;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)cam,
                       (const MethodInfo_2F09734 *)method->rgctx_data->_0_UnityEngine_Component_GetComponent_T_);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  this = (BattleActionCamera_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( Component_object )
    {
      this = (BattleActionCamera_o *)System_Object__GetType(Component_object, 0LL);
      if ( this )
      {
        v11 = (Il2CppObject *)((__int64 (__fastcall *)(BattleActionCamera_o *, Il2CppClass *))this->klass[1]._1.castClass)(
                                this,
                                this->klass[1]._1.declaringType);
        this = (BattleActionCamera_o *)UnityEngine_Behaviour__get_enabled(
                                         (UnityEngine_Behaviour_o *)Component_object,
                                         0LL);
        if ( stat )
        {
          System_Collections_Generic_Dictionary_object__bool___set_Item(
            (System_Collections_Generic_Dictionary_TKey__TValue__o *)stat,
            v11,
            (unsigned __int8)this & 1,
            (const MethodInfo_3250284 *)Method_System_Collections_Generic_Dictionary_string__bool__set_Item__);
          return;
        }
      }
    }
LABEL_13:
    sub_1BCAA3C(this, cam);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__sendCameraEvent(
        BattleActionCamera_o *this,
        int32_t cameraId,
        System_String_o *eventName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *cameraFsmDictionary; // x0
  __int64 v22; // x1
  int key; // w27
  Il2CppObject *value; // x22
  _BOOL8 v25; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v29; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4B183FA & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__,
      *(_QWORD *)&cameraId,
      eventName);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Key__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_3419/*"CAMERA_END"*/, v19, v20);
    byte_4B183FA = 1;
  }
  memset(&v29, 0, sizeof(v29));
  cameraFsmDictionary = this->fields.cameraFsmDictionary;
  if ( !cameraFsmDictionary )
    sub_1BCAA3C(0LL, *(_QWORD *)&cameraId);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v28,
    (System_Collections_Generic_Dictionary_int__object__o *)cameraFsmDictionary,
    (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v29,
            (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__) )
  {
    key = (int)v29.fields._current.fields.key;
    value = v29.fields._current.fields.value;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
    v25 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, 0LL, 0LL);
    if ( !v25 )
    {
      if ( key == cameraId )
      {
        if ( !value )
          sub_1BCAA3C(v25, v26);
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)value, eventName, 0LL);
      }
      else
      {
        if ( !value )
          sub_1BCAA3C(v25, v26);
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)value, (System_String_o *)StringLiteral_3419/*"CAMERA_END"*/, 0LL);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v29,
    (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__);
  BattleActionCamera__ResetFieldCameraEvent(this, v27);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__sendEvent(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        System_String_o *eventName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  PlayMakerFSM_o *UniqueFsm_43080120; // x21
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  int32_t cameraId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B183FB & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&uniqueId, eventName);
    byte_4B183FB = 1;
  }
  cameraId = 0;
  UniqueFsm_43080120 = BattleActionCamera__getUniqueFsm_43080120(this, uniqueId, &cameraId, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)UniqueFsm_43080120, 0LL, 0LL) )
  {
    if ( HutongGames_PlayMaker_PlayMakerFSMHelper__checkFsmGlobalTransitions(UniqueFsm_43080120, eventName, 0LL) )
      v10 = cameraId;
    else
      v10 = 0;
  }
  else
  {
    v10 = 0;
  }
  BattleActionCamera__sendCameraEvent(this, v10, eventName, v9);
}


void __fastcall BattleActionCamera__sendMainEvent(
        BattleActionCamera_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleActionCamera__sendCameraEvent(this, 0, eventName, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__setGameObject(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        UnityEngine_GameObject_o *obj,
        System_String_o *nameStr,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UnityEngine_Object_o *UniqueFsm_43080120; // x22
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  __int64 v12; // x1
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  int32_t cameraId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B183FF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&uniqueId, obj);
    byte_4B183FF = 1;
  }
  cameraId = 0;
  UniqueFsm_43080120 = (UnityEngine_Object_o *)BattleActionCamera__getUniqueFsm_43080120(
                                                 this,
                                                 uniqueId,
                                                 &cameraId,
                                                 (const MethodInfo *)nameStr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)UnityEngine_Object__op_Inequality(UniqueFsm_43080120, 0LL, 0LL);
  if ( ((unsigned __int8)FsmVariables & 1) != 0 )
  {
    if ( !UniqueFsm_43080120 )
      goto LABEL_18;
    FsmVariables = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)UniqueFsm_43080120, 0LL);
    if ( !FsmVariables )
      goto LABEL_18;
    FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(FsmVariables, nameStr, 0LL);
    if ( FsmGameObject )
      HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, obj, 0LL);
  }
  FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.mainFsm;
  if ( !FsmVariables )
    goto LABEL_18;
  FsmVariables = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)FsmVariables, 0LL);
  if ( !FsmVariables )
    goto LABEL_18;
  if ( HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(FsmVariables, nameStr, 0LL) )
  {
    FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.mainFsm;
    if ( FsmVariables )
    {
      FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)FsmVariables, 0LL);
      if ( FsmVariables )
      {
        FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                                                 (HutongGames_PlayMaker_Fsm_o *)FsmVariables,
                                                                 nameStr,
                                                                 0LL);
        if ( FsmVariables )
        {
          HutongGames_PlayMaker_FsmGameObject__set_Value(
            (HutongGames_PlayMaker_FsmGameObject_o *)FsmVariables,
            obj,
            0LL);
          return;
        }
      }
    }
LABEL_18:
    sub_1BCAA3C(FsmVariables, v12);
  }
}


void __fastcall BattleActionCamera__setNormalMode(BattleActionCamera_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleActionCamera__setSpecialCamera(this, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__setSpecialCamera(BattleActionCamera_o *this, bool active, const MethodInfo *method)
{
  UnityEngine_Object_o *frontcamera; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *middleCamera; // x21

  if ( (byte_4B183F5 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, active, method);
    byte_4B183F5 = 1;
  }
  frontcamera = (UnityEngine_Object_o *)this->fields.frontcamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, active);
  if ( UnityEngine_Object__op_Inequality(frontcamera, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.frontcamera;
    if ( !gameObject )
      goto LABEL_16;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, active, 0LL);
  }
  middleCamera = (UnityEngine_Object_o *)this->fields.middleCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(middleCamera, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.middleCamera;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, active, 0LL);
        return;
      }
    }
LABEL_16:
    sub_1BCAA3C(gameObject, v6);
  }
}


void __fastcall BattleActionCamera__setSpecialMode(BattleActionCamera_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleActionCamera__setSpecialCamera(this, 1, v2);
}


void __fastcall BattleActionCamera__set_actorCameraDefaultClipRange(
        BattleActionCamera_o *this,
        System_Single_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._actorCameraDefaultClipRange_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._actorCameraDefaultClipRange_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleActionCamera__set_middleCameraDefaultClipRange(
        BattleActionCamera_o *this,
        System_Single_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._middleCameraDefaultClipRange_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._middleCameraDefaultClipRange_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleActionCamera__stopCameraAnimation(BattleActionCamera_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 gameObject; // x0
  __int64 v9; // x1
  Il2CppObject *Component_object; // x20
  __int64 v11; // x1
  Il2CppObject *v12; // x21
  __int64 v13; // x2
  UnityEngine_Transform_o *v14; // x20
  __int64 v15; // x2
  UnityEngine_Transform_o *v16; // x20
  __int64 v17; // x2
  UnityEngine_Transform_o *v18; // x19

  if ( (byte_4B18408 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B18408 = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_25;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_25;
  v12 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)gameObject,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_25;
    SimpleAnimation__Stop((SimpleAnimation_o *)Component_object, 0LL);
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL);
    if ( (gameObject & 1) != 0 )
    {
      if ( !v12 )
        goto LABEL_25;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v12, 0LL);
    }
  }
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v14 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4B109C1 )
  {
    gameObject = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v9, v13);
    byte_4B109C1 = 1;
  }
  if ( !v14 )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(v14, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v16 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4B109C6 )
  {
    gameObject = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v9, v15);
    byte_4B109C6 = 1;
  }
  if ( !v16 )
    goto LABEL_25;
  UnityEngine_Transform__set_localScale(v16, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v18 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4B109C1 )
  {
    gameObject = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v9, v17);
    byte_4B109C1 = 1;
  }
  if ( !v18 )
LABEL_25:
    sub_1BCAA3C(gameObject, v9);
  UnityEngine_Transform__set_eulerAngles(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
}


void __fastcall BattleActionCamera___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1840A & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionCamera___c_TypeInfo, v1, v2);
    byte_4B1840A = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleActionCamera___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleActionCamera___c_TypeInfo->static_fields->__9 = (struct BattleActionCamera___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleActionCamera___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall BattleActionCamera___c___ctor(BattleActionCamera___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionCamera___c___InitFieldCameraList_b__26_0(
        BattleActionCamera___c_o *this,
        PlayMakerFSM_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B1840B & 1) == 0 )
  {
    this = (BattleActionCamera___c_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, x, method);
    byte_4B1840B = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
}


bool __fastcall BattleActionCamera___c___ResetAllCameraEvent_b__42_0(
        BattleActionCamera___c_o *this,
        System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__o pair,
        const MethodInfo *method)
{
  UnityEngine_Object_o *value; // x19
  __int64 v4; // x1
  __int64 v5; // x2

  value = (UnityEngine_Object_o *)pair.fields.value;
  if ( (byte_4B1840C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__,
      *(_QWORD *)&pair.fields.key,
      pair.fields.value);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B1840C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&pair.fields.key);
  return UnityEngine_Object__op_Inequality(value, 0LL, 0LL);
}


void __fastcall BattleActionCamera___c___ResetAllCameraEvent_b__42_1(
        BattleActionCamera___c_o *this,
        System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__o pair,
        const MethodInfo *method)
{
  PlayMakerFSM_o *value; // x19
  __int64 v4; // x1
  __int64 v5; // x2

  value = pair.fields.value;
  if ( (byte_4B1840D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__,
      *(_QWORD *)&pair.fields.key,
      pair.fields.value);
    this = (BattleActionCamera___c_o *)sub_1BCA7E0(&StringLiteral_3419/*"CAMERA_END"*/, v4, v5);
    byte_4B1840D = 1;
  }
  if ( !value )
    sub_1BCAA3C(this, *(_QWORD *)&pair.fields.key);
  PlayMakerFSM__SendEvent(value, (System_String_o *)StringLiteral_3419/*"CAMERA_END"*/, 0LL);
}


void __fastcall BattleActionCamera___c___ResetFieldCameraEvent_b__43_0(
        BattleActionCamera___c_o *this,
        PlayMakerFSM_o *fsm,
        const MethodInfo *method)
{
  if ( (byte_4B1840E & 1) == 0 )
  {
    this = (BattleActionCamera___c_o *)sub_1BCA7E0(&StringLiteral_3419/*"CAMERA_END"*/, fsm, method);
    byte_4B1840E = 1;
  }
  if ( !fsm )
    sub_1BCAA3C(this, fsm);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3419/*"CAMERA_END"*/, 0LL);
}


void __fastcall BattleActionCamera___c__DisplayClass41_0___ctor(
        BattleActionCamera___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionCamera___c__DisplayClass41_0___SendFieldEvent_b__0(
        BattleActionCamera___c__DisplayClass41_0_o *this,
        PlayMakerFSM_o *fsm,
        const MethodInfo *method)
{
  return HutongGames_PlayMaker_PlayMakerFSMHelper__checkFsmGlobalTransitions(fsm, this->fields.eventName, 0LL);
}


void __fastcall BattleActionCamera___c__DisplayClass45_0___ctor(
        BattleActionCamera___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionCamera___c__DisplayClass45_0___SetGameObjectToField_b__0(
        BattleActionCamera___c__DisplayClass45_0_o *this,
        PlayMakerFSM_o *fsm,
        const MethodInfo *method)
{
  HutongGames_PlayMaker_PlayMakerFSMHelper__SetFsmGameObject(fsm, this->fields.varName, this->fields.obj, 0LL);
}