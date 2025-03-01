void __fastcall BattleActionCamera___ctor(BattleActionCamera_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_int__object__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_Dictionary_int__int__o *v18; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_List_object__o *v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Collections_Generic_List_int__o *v32; // x20
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  long double inited; // q0
  _QWORD *v46; // x20
  __int64 v47; // x8
  __int64 v48; // x0
  __int64 v49; // x0
  struct System_String_array **v50; // x8
  struct System_String_array *v51; // x1

  if ( (byte_4BFFA64 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Array_Empty_string___, method);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__, v4);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo, v5);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_PlayMakerFSM___ctor__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1C2E12C(&System_Collections_Generic_List_PlayMakerFSM__TypeInfo, v10);
    byte_4BFFA64 = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2E378(System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v11,
    (const MethodInfo_32D4500 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__);
  this->fields.cameraFsmDictionary = (struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *)v11;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.cameraFsmDictionary,
    (int64_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C2E378(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v18,
    (const MethodInfo_32CBA40 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.cameraTargetDictionary = v18;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.cameraTargetDictionary,
    (int64_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_PlayMakerFSM__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_PlayMakerFSM___ctor__);
  this->fields.fieldCameraFsmList = (struct System_Collections_Generic_List_PlayMakerFSM__o *)v25;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.fieldCameraFsmList,
    (int64_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v32,
    (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields._FieldCameraIdList_k__BackingField = v32;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._FieldCameraIdList_k__BackingField,
    (int64_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v46 = Method_System_Array_Empty_string___;
  v47 = *((_QWORD *)Method_System_Array_Empty_string___ + 7);
  if ( !v47 )
  {
    sub_1C80064(Method_System_Array_Empty_string___);
    v47 = v46[7];
  }
  v48 = *(_QWORD *)(v47 + 16);
  if ( (*(_BYTE *)(v48 + 309) & 1) == 0 )
    v48 = sub_1C80008(inited);
  if ( !*(_DWORD *)(v48 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v48);
  v49 = *(_QWORD *)(v46[7] + 16LL);
  if ( (*(_BYTE *)(v49 + 309) & 1) == 0 )
    v49 = sub_1C80008(inited);
  v50 = *(struct System_String_array ***)(v49 + 184);
  v51 = *v50;
  this->fields.sharedObjectNameArray = *v50;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.sharedObjectNameArray,
    (int64_t)v51,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleActionCamera__InitCommonRegisterFsm(
        BattleActionCamera_o *this,
        PlayMakerFSM_o *targetFsm,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *perf; // x21
  __int64 v7; // x1
  UnityEngine_Component_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x2

  if ( (byte_4BFFA54 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, targetFsm);
    sub_1C2E12C(&StringLiteral_10800/*"Performance"*/, v5);
    byte_4BFFA54 = 1;
  }
  perf = (UnityEngine_Object_o *)this->fields.perf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(perf, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Component_o *)this->fields.perf;
    if ( !v8 )
      sub_1C2E388(0LL, v7);
    gameObject = UnityEngine_Component__get_gameObject(v8, 0LL);
    HutongGames_PlayMaker_PlayMakerFSMHelper__SetFsmGameObject(
      targetFsm,
      (System_String_o *)StringLiteral_10800/*"Performance"*/,
      gameObject,
      0LL);
  }
}


void __fastcall BattleActionCamera__InitFieldCameraList(BattleActionCamera_o *this, const MethodInfo *method)
{
  BattleActionCamera_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_PlayMakerFSM__o *fieldCameraFsmList; // x8
  System_Collections_Generic_IEnumerable_PlayMakerFSM__o *NotNullFieldCameraFsmEnumerable; // x0
  BattleActionCamera___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_T__o *v13; // x21
  System_Action_object__o *_9__28_0; // x22
  Il2CppObject *v15; // x23
  struct BattleActionCamera___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Collections_Generic_List_object__o *v23; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Collections_Generic_List_int__o *FieldCameraIdList_k__BackingField; // x8
  int v31; // w9

  v2 = this;
  if ( (byte_4BFFA4D & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_PlayMakerFSM__TypeInfo, method);
    sub_1C2E12C(&Method_BasicHelper_ForEach_PlayMakerFSM___, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Clear__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_PlayMakerFSM___ctor__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_PlayMakerFSM__get_Count__, v6);
    sub_1C2E12C(&System_Collections_Generic_List_PlayMakerFSM__TypeInfo, v7);
    sub_1C2E12C(&Method_BattleActionCamera___c__InitFieldCameraList_b__28_0__, v8);
    this = (BattleActionCamera_o *)sub_1C2E12C(&BattleActionCamera___c_TypeInfo, v9);
    byte_4BFFA4D = 1;
  }
  fieldCameraFsmList = v2->fields.fieldCameraFsmList;
  if ( !fieldCameraFsmList )
    goto LABEL_14;
  if ( fieldCameraFsmList->fields._size < 1 )
    return;
  NotNullFieldCameraFsmEnumerable = BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(v2, method);
  v12 = BattleActionCamera___c_TypeInfo;
  v13 = (System_Collections_Generic_IEnumerable_T__o *)NotNullFieldCameraFsmEnumerable;
  if ( !BattleActionCamera___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionCamera___c_TypeInfo);
    v12 = BattleActionCamera___c_TypeInfo;
  }
  _9__28_0 = (System_Action_object__o *)v12->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = BattleActionCamera___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__28_0 = (System_Action_object__o *)sub_1C2E378(System_Action_PlayMakerFSM__TypeInfo);
    System_Action_object____ctor(_9__28_0, v15, Method_BattleActionCamera___c__InitFieldCameraList_b__28_0__, 0LL);
    static_fields = BattleActionCamera___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Action_PlayMakerFSM__o *)_9__28_0;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&static_fields->__9__28_0,
      (int64_t)_9__28_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  BasicHelper__ForEach_object_(
    v13,
    (System_Action_T__o *)_9__28_0,
    (const MethodInfo_2FBE538 *)Method_BasicHelper_ForEach_PlayMakerFSM___);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_PlayMakerFSM__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_PlayMakerFSM___ctor__);
  v2->fields.fieldCameraFsmList = (struct System_Collections_Generic_List_PlayMakerFSM__o *)v23;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v2->fields.fieldCameraFsmList, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  FieldCameraIdList_k__BackingField = v2->fields._FieldCameraIdList_k__BackingField;
  if ( !FieldCameraIdList_k__BackingField )
LABEL_14:
    sub_1C2E388(this, method);
  v31 = FieldCameraIdList_k__BackingField->fields._version + 1;
  FieldCameraIdList_k__BackingField->fields._size = 0;
  FieldCameraIdList_k__BackingField->fields._version = v31;
}


void __fastcall BattleActionCamera__Initialize(
        BattleActionCamera_o *this,
        BattlePerformance_o *inPerf,
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
  System_Collections_Generic_Dictionary_int__object__o *cameraFsmDictionary; // x0
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o **p_cameraFsmDictionary; // x21
  __int64 v21; // x1
  UnityEngine_Object_o *gameObject; // x22
  System_Collections_Generic_Dictionary_int__object__o *v23; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_Dictionary_int__int__o *v30; // x21
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  Il2CppObject *Component_object; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  const MethodInfo *v50; // x2
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_Single_array *actorCameraDefaultClipRange_k__BackingField; // x21
  float v58; // s0
  float farClipPlane; // s0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct System_Single_array *middleCameraDefaultClipRange_k__BackingField; // x21
  float v67; // s0
  float v68; // s0
  const MethodInfo *v69; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v70; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v71; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4BFFA4C & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, inPerf);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Count__, v9);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo, v10);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__get_Current__, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Key__, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__, v16);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v17);
    sub_1C2E12C(&float___TypeInfo, v18);
    byte_4BFFA4C = 1;
  }
  memset(&v71, 0, sizeof(v71));
  p_cameraFsmDictionary = &this->fields.cameraFsmDictionary;
  cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.cameraFsmDictionary;
  if ( !cameraFsmDictionary )
    goto LABEL_31;
  if ( System_Collections_Generic_Dictionary_int__object___get_Count(
         cameraFsmDictionary,
         (const MethodInfo_32D4B84 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Count__) >= 1 )
  {
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)*p_cameraFsmDictionary;
    if ( !*p_cameraFsmDictionary )
      goto LABEL_31;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v70,
      cameraFsmDictionary,
      (const MethodInfo_32D530C *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__);
    v71 = v70;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v71,
              (const MethodInfo_3423768 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__) )
    {
      if ( LODWORD(v71.fields._current.fields.key) )
      {
        if ( !v71.fields._current.fields.value )
          sub_1C2E388(0LL, v21);
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v71.fields._current.fields.value,
                                               0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70989720(gameObject, 0LL);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v71,
      (const MethodInfo_342388C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__);
    v23 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2E378(System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v23,
      (const MethodInfo_32D4500 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__);
    *p_cameraFsmDictionary = (struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *)v23;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.cameraFsmDictionary,
      (int64_t)v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C2E378(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v30,
    (const MethodInfo_32CBA40 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.cameraTargetDictionary = v30;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.cameraTargetDictionary,
    (int64_t)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.perf = inPerf;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.perf, (int64_t)inPerf, v37, v38, v39, v40, v41, v42);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.mainFsm = (struct PlayMakerFSM_o *)Component_object;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.mainFsm,
    (int64_t)Component_object,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  BattleActionCamera__InitCommonRegisterFsm(this, this->fields.mainFsm, v50);
  cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.cameraFsmDictionary;
  if ( !cameraFsmDictionary )
LABEL_31:
    sub_1C2E388(cameraFsmDictionary, inPerf);
  System_Collections_Generic_Dictionary_int__object___Add(
    cameraFsmDictionary,
    0,
    (Il2CppObject *)this->fields.mainFsm,
    (const MethodInfo_32D4ED4 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__);
  actorCameraDefaultClipRange_k__BackingField = this->fields._actorCameraDefaultClipRange_k__BackingField;
  if ( !actorCameraDefaultClipRange_k__BackingField )
  {
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2E1D4(float___TypeInfo, 2LL);
    if ( !this->fields.actorcamera )
      goto LABEL_31;
    actorCameraDefaultClipRange_k__BackingField = (struct System_Single_array *)cameraFsmDictionary;
    v58 = UnityEngine_Camera__get_nearClipPlane(this->fields.actorcamera, 0LL);
    if ( !actorCameraDefaultClipRange_k__BackingField )
      goto LABEL_31;
    if ( !actorCameraDefaultClipRange_k__BackingField->max_length )
      goto LABEL_32;
    actorCameraDefaultClipRange_k__BackingField->m_Items[1] = v58;
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.actorcamera;
    if ( !cameraFsmDictionary )
      goto LABEL_31;
    farClipPlane = UnityEngine_Camera__get_farClipPlane((UnityEngine_Camera_o *)cameraFsmDictionary, 0LL);
    if ( actorCameraDefaultClipRange_k__BackingField->max_length <= 1 )
      goto LABEL_32;
    actorCameraDefaultClipRange_k__BackingField->m_Items[2] = farClipPlane;
  }
  this->fields._actorCameraDefaultClipRange_k__BackingField = actorCameraDefaultClipRange_k__BackingField;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._actorCameraDefaultClipRange_k__BackingField,
    (int64_t)actorCameraDefaultClipRange_k__BackingField,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  middleCameraDefaultClipRange_k__BackingField = this->fields._middleCameraDefaultClipRange_k__BackingField;
  if ( !middleCameraDefaultClipRange_k__BackingField )
  {
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2E1D4(float___TypeInfo, 2LL);
    if ( this->fields.middleCamera )
    {
      middleCameraDefaultClipRange_k__BackingField = (struct System_Single_array *)cameraFsmDictionary;
      v67 = UnityEngine_Camera__get_nearClipPlane(this->fields.middleCamera, 0LL);
      if ( middleCameraDefaultClipRange_k__BackingField )
      {
        if ( !middleCameraDefaultClipRange_k__BackingField->max_length )
          goto LABEL_32;
        middleCameraDefaultClipRange_k__BackingField->m_Items[1] = v67;
        cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.middleCamera;
        if ( cameraFsmDictionary )
        {
          v68 = UnityEngine_Camera__get_farClipPlane((UnityEngine_Camera_o *)cameraFsmDictionary, 0LL);
          if ( middleCameraDefaultClipRange_k__BackingField->max_length > 1 )
          {
            middleCameraDefaultClipRange_k__BackingField->m_Items[2] = v68;
            goto LABEL_29;
          }
LABEL_32:
          sub_1C2E390(cameraFsmDictionary, inPerf);
        }
      }
    }
    goto LABEL_31;
  }
LABEL_29:
  this->fields._middleCameraDefaultClipRange_k__BackingField = middleCameraDefaultClipRange_k__BackingField;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._middleCameraDefaultClipRange_k__BackingField,
    (int64_t)middleCameraDefaultClipRange_k__BackingField,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  BattleActionCamera__InitFieldCameraList(this, v69);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__RegisterFieldCameraFsm(
        BattleActionCamera_o *this,
        int32_t cameraId,
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
  System_String_o *v14; // x21
  BaseMonoBehaviour_o *perf; // x21
  Il2CppObject *v16; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v18; // x1
  UnityEngine_Object_o *Object; // x21
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  const MethodInfo *v24; // x2
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 klass_low; // x10
  __int64 v34; // x8
  __int64 v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  int32_t v38; // [xsp+Ch] [xbp-44h] BYREF
  Il2CppObject *component; // [xsp+10h] [xbp-40h] BYREF
  Il2CppObject *data; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4BFFA60 & 1) == 0 )
  {
    sub_1C2E12C(&Method_AssetManager_TryGetAssetObject_GameObject___, *(_QWORD *)&cameraId);
    sub_1C2E12C(&AssetManager_TypeInfo, v5);
    sub_1C2E12C(&BattleDataDefine_TypeInfo, v6);
    sub_1C2E12C(&Method_GameObjectExtensions_HasComponent_PlayMakerFSM___, v7);
    sub_1C2E12C(&Method_UnityEngine_GameObject_TryGetComponent_PlayMakerFSM___, v8);
    sub_1C2E12C(&int_TypeInfo, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_PlayMakerFSM__Add__, v11);
    sub_1C2E12C(&StringLiteral_15322/*"UniqueCameraPrefab"*/, v12);
    sub_1C2E12C(&StringLiteral_2275/*"AddUniqueCameraPrefab{0}"*/, v13);
    byte_4BFFA60 = 1;
  }
  component = 0LL;
  data = 0LL;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  v14 = BattleDataDefine__AddUniqueCameraPath(cameraId, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__TryGetAssetObject_object_(
         &data,
         v14,
         (System_String_o *)StringLiteral_15322/*"UniqueCameraPrefab"*/,
         (const MethodInfo_2FB3734 *)Method_AssetManager_TryGetAssetObject_GameObject___)
    && GameObjectExtensions__HasComponent_object_(
         (UnityEngine_GameObject_o *)data,
         (const MethodInfo_302442C *)Method_GameObjectExtensions_HasComponent_PlayMakerFSM___) )
  {
    perf = (BaseMonoBehaviour_o *)this->fields.perf;
    v16 = data;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_24;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
    if ( !perf )
      goto LABEL_24;
    Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                       perf,
                                       (UnityEngine_GameObject_o *)v16,
                                       (UnityEngine_Transform_o *)gameObject,
                                       0LL,
                                       0LL);
    v38 = cameraId;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v20, v21, v22);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_2275/*"AddUniqueCameraPrefab{0}"*/, v23, 0LL);
    if ( !Object )
      goto LABEL_24;
    UnityEngine_Object__set_name(Object, (System_String_o *)gameObject, 0LL);
    if ( !UnityEngine_GameObject__TryGetComponent_object_(
            (UnityEngine_GameObject_o *)Object,
            &component,
            (const MethodInfo_3023D9C *)Method_UnityEngine_GameObject_TryGetComponent_PlayMakerFSM___) )
      return;
    BattleActionCamera__initializeRegisterFsm(this, (PlayMakerFSM_o *)component, v24);
    gameObject = (UnityEngine_GameObject_o *)this->fields.fieldCameraFsmList;
    if ( !gameObject )
      goto LABEL_24;
    v18 = component;
    v31 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
    v32 = Method_System_Collections_Generic_List_PlayMakerFSM__Add__;
    ++HIDWORD(gameObject[1].klass);
    if ( !v31 )
      goto LABEL_24;
    klass_low = SLODWORD(gameObject[1].klass);
    if ( (unsigned int)klass_low >= *(_DWORD *)(v31 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)gameObject,
        v18,
        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = v31 + 8 * klass_low;
      LODWORD(gameObject[1].klass) = klass_low + 1;
      *(_QWORD *)(v34 + 32) = v18;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v34 + 32), (int64_t)v18, v25, v26, v27, v28, v29, v30);
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields._FieldCameraIdList_k__BackingField;
    if ( !gameObject
      || (v35 = *(_QWORD *)&gameObject->fields.m_CachedPtr,
          v36 = Method_System_Collections_Generic_List_int__Add__,
          ++HIDWORD(gameObject[1].klass),
          !v35) )
    {
LABEL_24:
      sub_1C2E388(gameObject, v18);
    }
    v37 = SLODWORD(gameObject[1].klass);
    if ( (unsigned int)v37 >= *(_DWORD *)(v35 + 24) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        (System_Collections_Generic_List_int__o *)gameObject,
        cameraId,
        *(const MethodInfo_364E888 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      LODWORD(gameObject[1].klass) = v37 + 1;
      *(_DWORD *)(v35 + 4 * v37 + 32) = cameraId;
    }
  }
}


void __fastcall BattleActionCamera__ResetAllCameraEvent(BattleActionCamera_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleActionCamera___c_c *v9; // x0
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *cameraFsmDictionary; // x20
  System_Func_T__TResult__o *_9__46_0; // x21
  Il2CppObject *v12; // x22
  struct BattleActionCamera___c_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  BattleActionCamera___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_T__o *v22; // x20
  System_Action_T__o *_9__46_1; // x21
  Il2CppObject *v24; // x22
  struct BattleActionCamera___c_StaticFields *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  const MethodInfo *v32; // x1

  if ( (byte_4BFFA58 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_KeyValuePair_int__PlayMakerFSM___TypeInfo, method);
    sub_1C2E12C(&Method_BasicHelper_ForEach_KeyValuePair_int__PlayMakerFSM____, v3);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Where_KeyValuePair_int__PlayMakerFSM____, v4);
    sub_1C2E12C(&System_Func_KeyValuePair_int__PlayMakerFSM___bool__TypeInfo, v5);
    sub_1C2E12C(&Method_BattleActionCamera___c__ResetAllCameraEvent_b__46_0__, v6);
    sub_1C2E12C(&Method_BattleActionCamera___c__ResetAllCameraEvent_b__46_1__, v7);
    sub_1C2E12C(&BattleActionCamera___c_TypeInfo, v8);
    byte_4BFFA58 = 1;
  }
  v9 = BattleActionCamera___c_TypeInfo;
  cameraFsmDictionary = this->fields.cameraFsmDictionary;
  if ( !BattleActionCamera___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionCamera___c_TypeInfo);
    v9 = BattleActionCamera___c_TypeInfo;
  }
  _9__46_0 = (System_Func_T__TResult__o *)v9->static_fields->__9__46_0;
  if ( !_9__46_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = BattleActionCamera___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__46_0 = (System_Func_T__TResult__o *)sub_1C2E378(System_Func_KeyValuePair_int__PlayMakerFSM___bool__TypeInfo);
    System_Func_KeyValuePair_int__object___bool____ctor(
      _9__46_0,
      v12,
      Method_BattleActionCamera___c__ResetAllCameraEvent_b__46_0__,
      0LL);
    static_fields = BattleActionCamera___c_TypeInfo->static_fields;
    static_fields->__9__46_0 = (struct System_Func_KeyValuePair_int__PlayMakerFSM___bool__o *)_9__46_0;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&static_fields->__9__46_0,
      (int64_t)_9__46_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = System_Linq_Enumerable__Where_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)cameraFsmDictionary,
          (System_Func_TSource__bool__o *)_9__46_0,
          (const MethodInfo_3010630 *)Method_System_Linq_Enumerable_Where_KeyValuePair_int__PlayMakerFSM____);
  v21 = BattleActionCamera___c_TypeInfo;
  v22 = (System_Collections_Generic_IEnumerable_T__o *)v20;
  if ( !BattleActionCamera___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionCamera___c_TypeInfo);
    v21 = BattleActionCamera___c_TypeInfo;
  }
  _9__46_1 = (System_Action_T__o *)v21->static_fields->__9__46_1;
  if ( !_9__46_1 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = BattleActionCamera___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__46_1 = (System_Action_T__o *)sub_1C2E378(System_Action_KeyValuePair_int__PlayMakerFSM___TypeInfo);
    System_Action_KeyValuePair_int__object_____ctor(
      _9__46_1,
      v24,
      Method_BattleActionCamera___c__ResetAllCameraEvent_b__46_1__,
      0LL);
    v25 = BattleActionCamera___c_TypeInfo->static_fields;
    v25->__9__46_1 = (struct System_Action_KeyValuePair_int__PlayMakerFSM___o *)_9__46_1;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v25->__9__46_1, (int64_t)_9__46_1, v26, v27, v28, v29, v30, v31);
  }
  BasicHelper__ForEach_KeyValuePair_int__object__(
    v22,
    _9__46_1,
    (const MethodInfo_2FBCFF0 *)Method_BasicHelper_ForEach_KeyValuePair_int__PlayMakerFSM____);
  BattleActionCamera__ResetFieldCameraEvent(this, v32);
}


void __fastcall BattleActionCamera__ResetFieldCameraEvent(BattleActionCamera_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_PlayMakerFSM__o *NotNullFieldCameraFsmEnumerable; // x0
  BattleActionCamera___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_T__o *v8; // x19
  System_Action_object__o *_9__47_0; // x20
  Il2CppObject *v10; // x21
  struct BattleActionCamera___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BFFA59 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_PlayMakerFSM__TypeInfo, method);
    sub_1C2E12C(&Method_BasicHelper_ForEach_PlayMakerFSM___, v3);
    sub_1C2E12C(&Method_BattleActionCamera___c__ResetFieldCameraEvent_b__47_0__, v4);
    sub_1C2E12C(&BattleActionCamera___c_TypeInfo, v5);
    byte_4BFFA59 = 1;
  }
  NotNullFieldCameraFsmEnumerable = BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(this, method);
  v7 = BattleActionCamera___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_T__o *)NotNullFieldCameraFsmEnumerable;
  if ( !BattleActionCamera___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionCamera___c_TypeInfo);
    v7 = BattleActionCamera___c_TypeInfo;
  }
  _9__47_0 = (System_Action_object__o *)v7->static_fields->__9__47_0;
  if ( !_9__47_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleActionCamera___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__47_0 = (System_Action_object__o *)sub_1C2E378(System_Action_PlayMakerFSM__TypeInfo);
    System_Action_object____ctor(_9__47_0, v10, Method_BattleActionCamera___c__ResetFieldCameraEvent_b__47_0__, 0LL);
    static_fields = BattleActionCamera___c_TypeInfo->static_fields;
    static_fields->__9__47_0 = (struct System_Action_PlayMakerFSM__o *)_9__47_0;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&static_fields->__9__47_0,
      (int64_t)_9__47_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  BasicHelper__ForEach_object_(
    v8,
    (System_Action_T__o *)_9__47_0,
    (const MethodInfo_2FBE538 *)Method_BasicHelper_ForEach_PlayMakerFSM___);
}


bool __fastcall BattleActionCamera__SendFieldEvent(
        BattleActionCamera_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_String_o **v18; // x20
  const MethodInfo *v19; // x1
  System_Collections_Generic_IEnumerable_PlayMakerFSM__o *NotNullFieldCameraFsmEnumerable; // x21
  System_Func_object__bool__o *v21; // x23
  Il2CppObject *v22; // x21
  const MethodInfo *v23; // x1
  bool v24; // w22
  const MethodInfo *v25; // x2

  if ( (byte_4BFFA57 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_FirstOrDefault_PlayMakerFSM___, eventName);
    sub_1C2E12C(&System_Func_PlayMakerFSM__bool__TypeInfo, v5);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v6);
    sub_1C2E12C(&Method_BattleActionCamera___c__DisplayClass45_0__SendFieldEvent_b__0__, v7);
    sub_1C2E12C(&BattleActionCamera___c__DisplayClass45_0_TypeInfo, v8);
    byte_4BFFA57 = 1;
  }
  v9 = sub_1C2E378(BattleActionCamera___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 16) = eventName;
  v18 = (System_String_o **)(v9 + 16);
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)eventName, v12, v13, v14, v15, v16, v17);
  NotNullFieldCameraFsmEnumerable = BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(this, v19);
  v21 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_PlayMakerFSM__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v9,
    Method_BattleActionCamera___c__DisplayClass45_0__SendFieldEvent_b__0__,
    0LL);
  v22 = System_Linq_Enumerable__FirstOrDefault_object__50289116(
          (System_Collections_Generic_IEnumerable_TSource__o *)NotNullFieldCameraFsmEnumerable,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_2FF59DC *)Method_System_Linq_Enumerable_FirstOrDefault_PlayMakerFSM___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v24 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v22, 0LL, 0LL);
  if ( !v24 )
  {
    BattleActionCamera__ResetAllCameraEvent(this, v23);
    BattleActionCamera__SetSharedObjectCommonToTarget(this, (PlayMakerFSM_o *)v22, v25);
    if ( v22 )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)v22, *v18, 0LL);
      return !v24;
    }
LABEL_10:
    sub_1C2E388(v10, v11);
  }
  return !v24;
}


void __fastcall BattleActionCamera__SetGameObjectToField(
        BattleActionCamera_o *this,
        UnityEngine_GameObject_o *obj,
        System_String_o *varName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UnityEngine_Object_o *v26; // x21
  const MethodInfo *v27; // x1
  System_Collections_Generic_IEnumerable_T__o *NotNullFieldCameraFsmEnumerable; // x21
  System_Action_object__o *v29; // x22

  if ( (byte_4BFFA5B & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_PlayMakerFSM__TypeInfo, obj);
    sub_1C2E12C(&Method_BasicHelper_ForEach_PlayMakerFSM___, v7);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v8);
    sub_1C2E12C(&Method_BattleActionCamera___c__DisplayClass49_0__SetGameObjectToField_b__0__, v9);
    sub_1C2E12C(&BattleActionCamera___c__DisplayClass49_0_TypeInfo, v10);
    byte_4BFFA5B = 1;
  }
  v11 = sub_1C2E378(BattleActionCamera___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1C2E388(v12, v13);
  *(_QWORD *)(v11 + 16) = varName;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)varName, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = obj;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)obj, v20, v21, v22, v23, v24, v25);
  v26 = *(UnityEngine_Object_o **)(v11 + 24);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v26, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(*(System_String_o **)(v11 + 16), 0LL) )
  {
    NotNullFieldCameraFsmEnumerable = (System_Collections_Generic_IEnumerable_T__o *)BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(
                                                                                       this,
                                                                                       v27);
    v29 = (System_Action_object__o *)sub_1C2E378(System_Action_PlayMakerFSM__TypeInfo);
    System_Action_object____ctor(
      v29,
      (Il2CppObject *)v11,
      Method_BattleActionCamera___c__DisplayClass49_0__SetGameObjectToField_b__0__,
      0LL);
    BasicHelper__ForEach_object_(
      NotNullFieldCameraFsmEnumerable,
      (System_Action_T__o *)v29,
      (const MethodInfo_2FBE538 *)Method_BasicHelper_ForEach_PlayMakerFSM___);
    HutongGames_PlayMaker_PlayMakerFSMHelper__SetFsmGameObject(
      this->fields.mainFsm,
      *(System_String_o **)(v11 + 16),
      *(UnityEngine_GameObject_o **)(v11 + 24),
      0LL);
  }
}


void __fastcall BattleActionCamera__SetSharedObjectCommonToTarget(
        BattleActionCamera_o *this,
        PlayMakerFSM_o *targetFsm,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *cameraFsmDictionary; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_IEnumerable_T__o *sharedObjectNameArray; // x19
  System_Action_object__o *v19; // x20

  if ( (byte_4BFFA4F & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_string__TypeInfo, targetFsm);
    sub_1C2E12C(&Method_BasicHelper_ForEach_string___, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__TryGetValue__, v6);
    sub_1C2E12C(&Method_BattleActionCamera___c__DisplayClass30_0__SetSharedObjectCommonToTarget_b__0__, v7);
    sub_1C2E12C(&BattleActionCamera___c__DisplayClass30_0_TypeInfo, v8);
    byte_4BFFA4F = 1;
  }
  v9 = sub_1C2E378(BattleActionCamera___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = targetFsm,
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)targetFsm, v12, v13, v14, v15, v16, v17),
        (cameraFsmDictionary = this->fields.cameraFsmDictionary) == 0LL) )
  {
    sub_1C2E388(cameraFsmDictionary, v11);
  }
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)cameraFsmDictionary,
         0,
         (Il2CppObject **)(v9 + 24),
         (const MethodInfo_32D6660 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__TryGetValue__) )
  {
    sharedObjectNameArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.sharedObjectNameArray;
    v19 = (System_Action_object__o *)sub_1C2E378(System_Action_string__TypeInfo);
    System_Action_object____ctor(
      v19,
      (Il2CppObject *)v9,
      Method_BattleActionCamera___c__DisplayClass30_0__SetSharedObjectCommonToTarget_b__0__,
      0LL);
    BasicHelper__ForEach_object_(
      sharedObjectNameArray,
      (System_Action_T__o *)v19,
      (const MethodInfo_2FBE538 *)Method_BasicHelper_ForEach_string___);
  }
}


void __fastcall BattleActionCamera__SetSharedVariableNameInfo(
        BattleActionCamera_o *this,
        PlayMakerFSM_o *rootCameraFsm,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_array *FsmStringArray; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  long double inited; // q0
  struct System_String_array *klass; // x1
  _QWORD *v15; // x20
  __int64 v16; // x8
  __int64 v17; // x0

  if ( (byte_4BFFA4E & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Array_Empty_string___, rootCameraFsm);
    sub_1C2E12C(&StringLiteral_12997/*"SharedObjectNameArray"*/, v5);
    byte_4BFFA4E = 1;
  }
  FsmStringArray = HutongGames_PlayMaker_PlayMakerFSMHelper__GetFsmStringArray(
                     rootCameraFsm,
                     (System_String_o *)StringLiteral_12997/*"SharedObjectNameArray"*/,
                     0LL);
  klass = FsmStringArray;
  if ( !FsmStringArray )
  {
    v15 = Method_System_Array_Empty_string___;
    v16 = *((_QWORD *)Method_System_Array_Empty_string___ + 7);
    if ( !v16 )
    {
      sub_1C80064(Method_System_Array_Empty_string___);
      v16 = v15[7];
    }
    v17 = *(_QWORD *)(v16 + 16);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1C80008(inited);
    if ( !*(_DWORD *)(v17 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v17);
    FsmStringArray = *(System_String_array **)(v15[7] + 16LL);
    if ( (BYTE5(FsmStringArray->m_Items[34]) & 1) == 0 )
      FsmStringArray = (System_String_array *)sub_1C80008(inited);
    klass = (struct System_String_array *)FsmStringArray->m_Items[19]->klass;
  }
  if ( !this )
    sub_1C2E388(FsmStringArray, klass);
  this->fields.sharedObjectNameArray = klass;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.sharedObjectNameArray,
    (int64_t)klass,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
  __int64 v3; // x1
  float ShakeTime; // s8
  float v5; // s0
  float v6; // s9
  float v7; // s1
  float Epsilon; // s3
  int v9; // w8
  int v10; // w21
  float v11; // s0
  int v12; // w8
  float v13; // s8
  float v14; // s9
  float v15; // s10
  UnityEngine_Transform_o *transform; // x0
  __int64 v17; // x1
  UnityEngine_Transform_o *v18; // x20
  UnityEngine_Object_o *perf; // x20
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BFFA61 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    sub_1C2E12C(&StringLiteral_12204/*"SHAKE"*/, v3);
    byte_4BFFA61 = 1;
  }
  if ( this->fields.Shaking )
  {
    ShakeTime = this->fields.ShakeTime;
    if ( !byte_4BF7D95 )
    {
      sub_1C2E12C(&UnityEngine_Mathf_TypeInfo, method);
      byte_4BF7D95 = 1;
    }
    v5 = fmaxf(fabsf(ShakeTime), 0.0) * 0.000001;
    v6 = this->fields.ShakeTime;
    v7 = vabds_f32(0.0, ShakeTime);
    Epsilon = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon;
    if ( v5 <= (float)(Epsilon * 8.0) )
      v5 = Epsilon * 8.0;
    v9 = (int)(float)(v6 * 30.0);
    if ( (float)(v6 * 30.0) == INFINITY )
      v9 = 0x80000000;
    if ( v7 < v5 )
      v10 = -1;
    else
      v10 = v9;
    v11 = v6 + UnityEngine_Time__get_deltaTime(0LL);
    v12 = (int)(float)(v11 * 30.0);
    if ( (float)(v11 * 30.0) == INFINITY )
      v12 = 0x80000000;
    this->fields.ShakeTime = v11;
    if ( v10 < v12 )
    {
      v13 = UnityEngine_Random__Range(
              this->fields.ShakeRange.fields.x * -0.5,
              this->fields.ShakeRange.fields.x * 0.5,
              0LL);
      v14 = UnityEngine_Random__Range(
              this->fields.ShakeRange.fields.y * -0.5,
              this->fields.ShakeRange.fields.y * 0.5,
              0LL);
      v15 = UnityEngine_Random__Range(
              this->fields.ShakeRange.fields.z * -0.5,
              this->fields.ShakeRange.fields.z * 0.5,
              0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform )
        goto LABEL_28;
      v20.fields.x = v13;
      v20.fields.y = v14;
      v20.fields.z = v15;
      UnityEngine_Transform__set_localPosition(transform, v20, 0LL);
      if ( this->fields.ShakeTime >= this->fields.ShakeTargetTime )
      {
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        v18 = transform;
        if ( !byte_4BF7D91 )
        {
          transform = (UnityEngine_Transform_o *)sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v17);
          byte_4BF7D91 = 1;
        }
        if ( !v18 )
          goto LABEL_28;
        UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        this->fields.Shaking = 0;
      }
      perf = (UnityEngine_Object_o *)this->fields.perf;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(perf, 0LL, 0LL) )
      {
        transform = (UnityEngine_Transform_o *)this->fields.perf;
        if ( transform )
        {
          BattlePerformance__sendLocalEventFieldMotion(
            (BattlePerformance_o *)transform,
            (System_String_o *)StringLiteral_12204/*"SHAKE"*/,
            0LL);
          return;
        }
LABEL_28:
        sub_1C2E388(transform, v17);
      }
    }
  }
}


void __fastcall BattleActionCamera__UpdateFieldUniqueCameraFsm(
        BattleActionCamera_o *this,
        System_Int32_array *cameraIds,
        bool isInitFieldCamera,
        const MethodInfo *method)
{
  long double inited; // q0
  System_Collections_Generic_IEnumerable_T__o *v6; // x21
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  _QWORD *v12; // x21
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0
  const MethodInfo *v16; // x1
  System_Action_int__o *v17; // x20

  v6 = (System_Collections_Generic_IEnumerable_T__o *)cameraIds;
  if ( (byte_4BFFA5F & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_int__TypeInfo, cameraIds);
    sub_1C2E12C(&Method_System_Array_Empty_int___, v8);
    sub_1C2E12C(&Method_BasicHelper_ForEach_int___, v9);
    sub_1C2E12C(&Method_BattleActionCamera_RegisterFieldCameraFsm__, v10);
    sub_1C2E12C(&Method_System_Linq_Enumerable_SequenceEqual_int___, v11);
    byte_4BFFA5F = 1;
  }
  if ( !v6 )
  {
    v12 = Method_System_Array_Empty_int___;
    v13 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v13 )
    {
      sub_1C80064(Method_System_Array_Empty_int___);
      v13 = v12[7];
    }
    v14 = *(_QWORD *)(v13 + 16);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C80008(inited);
    if ( !*(_DWORD *)(v14 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v14);
    v15 = *(_QWORD *)(v12[7] + 16LL);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C80008(inited);
    v6 = **(System_Collections_Generic_IEnumerable_T__o ***)(v15 + 184);
  }
  if ( !System_Linq_Enumerable__SequenceEqual_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._FieldCameraIdList_k__BackingField,
          (System_Collections_Generic_IEnumerable_TSource__o *)v6,
          (const MethodInfo_30067E0 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
  {
    if ( isInitFieldCamera )
      BattleActionCamera__InitFieldCameraList(this, v16);
    v17 = (System_Action_int__o *)sub_1C2E378(System_Action_int__TypeInfo);
    System_Action_int____ctor(v17, (Il2CppObject *)this, Method_BattleActionCamera_RegisterFieldCameraFsm__, 0LL);
    BasicHelper__ForEach_int_(
      v6,
      (System_Action_T__o *)v17,
      (const MethodInfo_2FBDC20 *)Method_BasicHelper_ForEach_int___);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_Dictionary_int__int__o *cameraTargetDictionary; // x0
  char v18; // w23
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *cameraFsmDictionary; // x8
  UnityEngine_Object_o *v20; // x20
  UnityEngine_Object_o *gameObject; // x19
  __int128 v22[2]; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v23; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BFFA5E & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, *(_QWORD *)&uniqueId);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Remove__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v15);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v16);
    byte_4BFFA5E = 1;
  }
  memset(&v23, 0, 32);
  if ( cameraId )
  {
    cameraTargetDictionary = this->fields.cameraTargetDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_25;
    if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
           cameraTargetDictionary,
           uniqueId,
           (const MethodInfo_32CC5F0 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    {
      cameraTargetDictionary = this->fields.cameraTargetDictionary;
      if ( !cameraTargetDictionary )
        goto LABEL_25;
      System_Collections_Generic_Dictionary_int__int___Remove(
        cameraTargetDictionary,
        uniqueId,
        (const MethodInfo_32CD7BC *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    }
    cameraTargetDictionary = this->fields.cameraTargetDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_25;
    System_Collections_Generic_Dictionary_int__int___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v22,
      cameraTargetDictionary,
      (const MethodInfo_32CC7DC *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    v18 = 1;
    *(_OWORD *)&v23.fields._dictionary = v22[0];
    v23.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v22[1];
    while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
              &v23,
              (const MethodInfo_3421DEC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
      v18 &= HIDWORD(v23.fields._current.fields.key) != cameraId;
    System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
      &v23,
      (const MethodInfo_3421EEC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    if ( (v18 & 1) == 0 )
      return;
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_25;
    if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
            (System_Collections_Generic_Dictionary_int__object__o *)cameraTargetDictionary,
            cameraId,
            (const MethodInfo_32D50C8 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__) )
      return;
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
    if ( !cameraTargetDictionary
      || (cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                          (System_Collections_Generic_Dictionary_int__object__o *)cameraTargetDictionary,
                                                                                          cameraId,
                                                                                          (const MethodInfo_32D4E34 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__),
          (cameraFsmDictionary = this->fields.cameraFsmDictionary) == 0LL) )
    {
LABEL_25:
      sub_1C2E388(cameraTargetDictionary, *(_QWORD *)&uniqueId);
    }
    v20 = (UnityEngine_Object_o *)cameraTargetDictionary;
    System_Collections_Generic_Dictionary_int__object___Remove(
      (System_Collections_Generic_Dictionary_int__object__o *)cameraFsmDictionary,
      cameraId,
      (const MethodInfo_32D635C *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Remove__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)UnityEngine_Object__op_Inequality(
                                                                                    v20,
                                                                                    0LL,
                                                                                    0LL);
    if ( ((unsigned __int8)cameraTargetDictionary & 1) != 0 )
    {
      if ( v20 )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v20, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70989720(gameObject, 0LL);
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
  return BattleActionCamera__getUniqueFsm_43751384(this, uniqueId, &cameraId, v3);
}


// local variable allocation has failed, the output may be wrong!
PlayMakerFSM_o *__fastcall BattleActionCamera__getUniqueFsm_43751384(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        int32_t *cameraId,
        const MethodInfo *method)
{
  int32_t v5; // w21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_int__int__o *cameraTargetDictionary; // x0
  unsigned int Item; // w0
  Il2CppObject *v12; // x19

  v5 = uniqueId;
  if ( (byte_4BFFA5C & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, *(_QWORD *)&uniqueId);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__, v8);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v9);
    byte_4BFFA5C = 1;
  }
  *cameraId = 0;
  cameraTargetDictionary = this->fields.cameraTargetDictionary;
  if ( !cameraTargetDictionary )
    goto LABEL_12;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          cameraTargetDictionary,
          v5,
          (const MethodInfo_32CC5F0 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0LL;
  cameraTargetDictionary = this->fields.cameraTargetDictionary;
  if ( !cameraTargetDictionary
    || (Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 cameraTargetDictionary,
                 v5,
                 (const MethodInfo_32CC368 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__),
        *cameraId = Item,
        *(_QWORD *)&uniqueId = Item,
        (cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary) == 0LL) )
  {
LABEL_12:
    sub_1C2E388(cameraTargetDictionary, *(_QWORD *)&uniqueId);
  }
  v12 = System_Collections_Generic_Dictionary_int__object___get_Item(
          (System_Collections_Generic_Dictionary_int__object__o *)cameraTargetDictionary,
          uniqueId,
          (const MethodInfo_32D4E34 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL) )
    return 0LL;
  return (PlayMakerFSM_o *)v12;
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
  if ( (byte_4BFFA4B & 1) == 0 )
  {
    sub_1C2E12C(&Method_BasicHelper_ExcludeNull_PlayMakerFSM___, method);
    byte_4BFFA4B = 1;
  }
  return (System_Collections_Generic_IEnumerable_PlayMakerFSM__o *)BasicHelper__ExcludeNull_object_(
                                                                     (System_Collections_Generic_IEnumerable_T__o *)this->fields.fieldCameraFsmList,
                                                                     (const MethodInfo_2FBCB90 *)Method_BasicHelper_ExcludeNull_PlayMakerFSM___);
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
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v7; // x1
  HutongGames_PlayMaker_FsmGameObject_o *v8; // x21
  PlayMakerFSM_o *mainFsm; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v10; // x19

  if ( (byte_4BFFA53 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_4058/*"Camera"*/, targetFsm);
    sub_1C2E12C(&StringLiteral_4067/*"Camera_obj"*/, v5);
    byte_4BFFA53 = 1;
  }
  BattleActionCamera__InitCommonRegisterFsm(this, targetFsm, method);
  if ( !targetFsm )
    goto LABEL_15;
  Fsm = PlayMakerFSM__get_Fsm(targetFsm, 0LL);
  if ( !Fsm )
    goto LABEL_15;
  Fsm = (HutongGames_PlayMaker_Fsm_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                         Fsm,
                                         (System_String_o *)StringLiteral_4058/*"Camera"*/,
                                         0LL);
  if ( !this->fields.mainFsm )
    goto LABEL_15;
  v8 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
  Fsm = PlayMakerFSM__get_Fsm(this->fields.mainFsm, 0LL);
  if ( !Fsm )
    goto LABEL_15;
  Fsm = (HutongGames_PlayMaker_Fsm_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                         Fsm,
                                         (System_String_o *)StringLiteral_4058/*"Camera"*/,
                                         0LL);
  if ( !Fsm )
    goto LABEL_15;
  Fsm = (HutongGames_PlayMaker_Fsm_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                         (HutongGames_PlayMaker_FsmGameObject_o *)Fsm,
                                         0LL);
  if ( !v8 )
    goto LABEL_15;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v8, (UnityEngine_GameObject_o *)Fsm, 0LL);
  Fsm = PlayMakerFSM__get_Fsm(targetFsm, 0LL);
  if ( !Fsm
    || (Fsm = (HutongGames_PlayMaker_Fsm_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                               Fsm,
                                               (System_String_o *)StringLiteral_4067/*"Camera_obj"*/,
                                               0LL),
        (mainFsm = this->fields.mainFsm) == 0LL)
    || (v10 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm, (Fsm = PlayMakerFSM__get_Fsm(mainFsm, 0LL)) == 0LL)
    || (Fsm = (HutongGames_PlayMaker_Fsm_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                               Fsm,
                                               (System_String_o *)StringLiteral_4067/*"Camera_obj"*/,
                                               0LL)) == 0LL
    || (Fsm = (HutongGames_PlayMaker_Fsm_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                               (HutongGames_PlayMaker_FsmGameObject_o *)Fsm,
                                               0LL),
        !v10) )
  {
LABEL_15:
    sub_1C2E388(Fsm, v7);
  }
  HutongGames_PlayMaker_FsmGameObject__set_Value(v10, (UnityEngine_GameObject_o *)Fsm, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1

  if ( (byte_4BFFA52 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BattleActionCamera_loadEffectStatus_Bloom___, targetCamera);
    sub_1C2E12C(&Method_BattleActionCamera_loadEffectStatus_GrayscaleEffect___, v7);
    sub_1C2E12C(&Method_BattleActionCamera_loadEffectStatus_MotionBlur___, v8);
    sub_1C2E12C(&Method_BattleActionCamera_loadEffectStatus_Vignetting___, v9);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v10);
    byte_4BFFA52 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetCamera, 0LL, 0LL) )
  {
    BattleActionCamera__loadEffectStatus_object_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_2FC1920 *)Method_BattleActionCamera_loadEffectStatus_Bloom___);
    BattleActionCamera__loadEffectStatus_object_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_2FC1920 *)Method_BattleActionCamera_loadEffectStatus_MotionBlur___);
    BattleActionCamera__loadEffectStatus_object_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_2FC1920 *)Method_BattleActionCamera_loadEffectStatus_Vignetting___);
    BattleActionCamera__loadEffectStatus_object_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_2FC1920 *)Method_BattleActionCamera_loadEffectStatus_GrayscaleEffect___);
  }
}


void __fastcall BattleActionCamera__loadEffectStatus_object_(
        BattleActionCamera_o *this,
        UnityEngine_Camera_o *cam,
        System_Collections_Generic_Dictionary_string__bool__o *stat,
        const MethodInfo_2FC1920 *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Component_object; // x20
  Il2CppObject *v10; // x0
  bool Item; // w1

  if ( !method->rgctx_data )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__, cam);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__bool__get_Item__, v7);
    this = (BattleActionCamera_o *)sub_1C2E12C(&UnityEngine_Object_TypeInfo, v8);
    if ( !method->rgctx_data )
      this = (BattleActionCamera_o *)sub_1C80064(method);
  }
  if ( !cam )
    goto LABEL_15;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)cam,
                       (const MethodInfo_2FC82D4 *)method->rgctx_data->_0_UnityEngine_Component_GetComponent_T_);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
           (const MethodInfo_3320E88 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__) )
    {
      this = (BattleActionCamera_o *)System_Object__GetType(Component_object, 0LL);
      if ( this )
      {
        v10 = (Il2CppObject *)((__int64 (__fastcall *)(BattleActionCamera_o *, Il2CppClass *))this->klass[1]._1.castClass)(
                                this,
                                this->klass[1]._1.declaringType);
        Item = System_Collections_Generic_Dictionary_object__bool___get_Item(
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)stat,
                 v10,
                 (const MethodInfo_3320BF4 *)Method_System_Collections_Generic_Dictionary_string__bool__get_Item__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, Item, 0LL);
        return;
      }
LABEL_15:
      sub_1C2E388(this, cam);
    }
  }
}


void __fastcall BattleActionCamera__playCameraAnimation(
        BattleActionCamera_o *this,
        System_String_o *animName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  Il2CppObject *Component_object; // x20
  Il2CppObject *v11; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v13; // x21
  __int64 v14; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v16; // x0
  UnityEngine_TrackedReference_o *Item; // x0

  if ( (byte_4BFFA62 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_Animation___, animName);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v6);
    sub_1C2E12C(&SimpleAnimation_State_TypeInfo, v7);
    byte_4BFFA62 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  v11 = UnityEngine_GameObject__GetComponent_object_(
          gameObject,
          (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
      return;
    if ( v11 )
    {
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)v11,
                                                 animName,
                                                 0LL);
      if ( !UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
        return;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)v11,
                                                 animName,
                                                 0LL);
      if ( gameObject )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
        UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v11, 0LL);
        UnityEngine_Animation__Play_70734128((UnityEngine_Animation_o *)v11, animName, 0LL);
        return;
      }
    }
LABEL_26:
    sub_1C2E388(gameObject, v9);
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
  v13 = gameObject;
  v14 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v14;
      p_offset += 2;
      if ( !v14 )
        goto LABEL_15;
    }
    v16 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_15:
    v16 = sub_1C8010C(gameObject, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v16)(v13, *(_QWORD *)(v16 + 8), 0.0);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_object, 0LL);
  SimpleAnimation__Play_65373960((SimpleAnimation_o *)Component_object, animName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__registerCamera(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        int32_t cameraId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_Dictionary_int__int__o *cameraTargetDictionary; // x0
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Object_o *Manager__loadCameraAction; // x20
  System_String_o *v17; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v19; // x2
  int32_t key; // [xsp+Ch] [xbp-24h] BYREF

  key = cameraId;
  if ( (byte_4BFFA5D & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, *(_QWORD *)&uniqueId);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__, v9);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v10);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v11);
    sub_1C2E12C(&ServantAssetLoadManager_TypeInfo, v12);
    sub_1C2E12C(&StringLiteral_1/*""*/, v13);
    byte_4BFFA5D = 1;
  }
  if ( cameraId )
  {
    cameraTargetDictionary = this->fields.cameraTargetDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_26;
    if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
            cameraTargetDictionary,
            uniqueId,
            (const MethodInfo_32CC5F0 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    {
      cameraTargetDictionary = this->fields.cameraTargetDictionary;
      if ( !cameraTargetDictionary )
        goto LABEL_26;
      System_Collections_Generic_Dictionary_int__int___Add(
        cameraTargetDictionary,
        uniqueId,
        cameraId,
        (const MethodInfo_32CC404 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_26;
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           (System_Collections_Generic_Dictionary_int__object__o *)cameraTargetDictionary,
           cameraId,
           (const MethodInfo_32D50C8 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__) )
    {
      return;
    }
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)UnityEngine_Component__get_gameObject(
                                                                                    (UnityEngine_Component_o *)this,
                                                                                    0LL);
    if ( !cameraTargetDictionary )
LABEL_26:
      sub_1C2E388(cameraTargetDictionary, *(_QWORD *)&uniqueId);
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)cameraTargetDictionary, 0LL);
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    Manager__loadCameraAction = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCameraAction(
                                                          cameraId,
                                                          transform,
                                                          0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(Manager__loadCameraAction, 0LL, 0LL) )
    {
      cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)System_Int32__ToString(
                                                                                      (int32_t)&key,
                                                                                      0LL);
      if ( !Manager__loadCameraAction )
        goto LABEL_26;
      v17 = cameraTargetDictionary ? (System_String_o *)cameraTargetDictionary : (System_String_o *)StringLiteral_1/*""*/;
      UnityEngine_Object__set_name(Manager__loadCameraAction, v17, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Manager__loadCameraAction,
                           (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      {
        BattleActionCamera__initializeRegisterFsm(this, (PlayMakerFSM_o *)Component_object, v19);
        cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
        if ( cameraTargetDictionary )
        {
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)cameraTargetDictionary,
            key,
            Component_object,
            (const MethodInfo_32D4ED4 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__);
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
  sub_1C2E0D0(
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
  sub_1C2E0D0(
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v11; // x21

  if ( (byte_4BFFA51 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BattleActionCamera_saveEffectStatus_Bloom___, targetCamera);
    sub_1C2E12C(&Method_BattleActionCamera_saveEffectStatus_GrayscaleEffect___, v5);
    sub_1C2E12C(&Method_BattleActionCamera_saveEffectStatus_MotionBlur___, v6);
    sub_1C2E12C(&Method_BattleActionCamera_saveEffectStatus_Vignetting___, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__bool___ctor__, v8);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_string__bool__TypeInfo, v9);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v10);
    byte_4BFFA51 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetCamera, 0LL, 0LL) )
  {
    v11 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C2E378(System_Collections_Generic_Dictionary_string__bool__TypeInfo);
    System_Collections_Generic_Dictionary_object__bool____ctor(
      v11,
      (const MethodInfo_33202C0 *)Method_System_Collections_Generic_Dictionary_string__bool___ctor__);
    BattleActionCamera__saveEffectStatus_object_(
      this,
      targetCamera,
      (System_Collections_Generic_Dictionary_string__bool__o *)v11,
      (const MethodInfo_2FC1A54 *)Method_BattleActionCamera_saveEffectStatus_Bloom___);
    BattleActionCamera__saveEffectStatus_object_(
      this,
      targetCamera,
      (System_Collections_Generic_Dictionary_string__bool__o *)v11,
      (const MethodInfo_2FC1A54 *)Method_BattleActionCamera_saveEffectStatus_MotionBlur___);
    BattleActionCamera__saveEffectStatus_object_(
      this,
      targetCamera,
      (System_Collections_Generic_Dictionary_string__bool__o *)v11,
      (const MethodInfo_2FC1A54 *)Method_BattleActionCamera_saveEffectStatus_Vignetting___);
    BattleActionCamera__saveEffectStatus_object_(
      this,
      targetCamera,
      (System_Collections_Generic_Dictionary_string__bool__o *)v11,
      (const MethodInfo_2FC1A54 *)Method_BattleActionCamera_saveEffectStatus_GrayscaleEffect___);
  }
  return (System_Collections_Generic_Dictionary_string__bool__o *)v11;
}


void __fastcall BattleActionCamera__saveEffectStatus_object_(
        BattleActionCamera_o *this,
        UnityEngine_Camera_o *cam,
        System_Collections_Generic_Dictionary_string__bool__o *stat,
        const MethodInfo_2FC1A54 *method)
{
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20
  Il2CppObject *v9; // x21

  if ( !method->rgctx_data )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__bool__set_Item__, cam);
    this = (BattleActionCamera_o *)sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    if ( !method->rgctx_data )
      this = (BattleActionCamera_o *)sub_1C80064(method);
  }
  if ( !cam )
    goto LABEL_13;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)cam,
                       (const MethodInfo_2FC82D4 *)method->rgctx_data->_0_UnityEngine_Component_GetComponent_T_);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleActionCamera_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( Component_object )
    {
      this = (BattleActionCamera_o *)System_Object__GetType(Component_object, 0LL);
      if ( this )
      {
        v9 = (Il2CppObject *)((__int64 (__fastcall *)(BattleActionCamera_o *, Il2CppClass *))this->klass[1]._1.castClass)(
                               this,
                               this->klass[1]._1.declaringType);
        this = (BattleActionCamera_o *)UnityEngine_Behaviour__get_enabled(
                                         (UnityEngine_Behaviour_o *)Component_object,
                                         0LL);
        if ( stat )
        {
          System_Collections_Generic_Dictionary_object__bool___set_Item(
            (System_Collections_Generic_Dictionary_TKey__TValue__o *)stat,
            v9,
            (unsigned __int8)this & 1,
            (const MethodInfo_3320C68 *)Method_System_Collections_Generic_Dictionary_string__bool__set_Item__);
          return;
        }
      }
    }
LABEL_13:
    sub_1C2E388(this, cam);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *cameraFsmDictionary; // x0
  int key; // w27
  Il2CppObject *value; // x22
  _BOOL8 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v20; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v21; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4BFFA55 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__, *(_QWORD *)&cameraId);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__get_Current__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Key__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__, v11);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v12);
    sub_1C2E12C(&StringLiteral_3430/*"CAMERA_END"*/, v13);
    byte_4BFFA55 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  cameraFsmDictionary = this->fields.cameraFsmDictionary;
  if ( !cameraFsmDictionary )
    sub_1C2E388(0LL, *(_QWORD *)&cameraId);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v20,
    (System_Collections_Generic_Dictionary_int__object__o *)cameraFsmDictionary,
    (const MethodInfo_32D530C *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__);
  v21 = v20;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v21,
            (const MethodInfo_3423768 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__) )
  {
    key = (int)v21.fields._current.fields.key;
    value = v21.fields._current.fields.value;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v17 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, 0LL, 0LL);
    if ( !v17 )
    {
      if ( key == cameraId )
      {
        if ( !value )
          sub_1C2E388(v17, v18);
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)value, eventName, 0LL);
      }
      else
      {
        if ( !value )
          sub_1C2E388(v17, v18);
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)value, (System_String_o *)StringLiteral_3430/*"CAMERA_END"*/, 0LL);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v21,
    (const MethodInfo_342388C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__);
  BattleActionCamera__ResetFieldCameraEvent(this, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__sendEvent(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        System_String_o *eventName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *UniqueFsm_43751384; // x21
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  int32_t cameraId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BFFA56 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&uniqueId);
    byte_4BFFA56 = 1;
  }
  cameraId = 0;
  UniqueFsm_43751384 = (UnityEngine_Object_o *)BattleActionCamera__getUniqueFsm_43751384(
                                                 this,
                                                 uniqueId,
                                                 &cameraId,
                                                 method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(UniqueFsm_43751384, 0LL, 0LL)
    && HutongGames_PlayMaker_PlayMakerFSMHelper__checkFsmGlobalTransitions(
         (PlayMakerFSM_o *)UniqueFsm_43751384,
         eventName,
         0LL) )
  {
    BattleActionCamera__sendCameraEvent(this, cameraId, eventName, v9);
  }
  else
  {
    BattleActionCamera__sendMainEvent(this, eventName, v8);
  }
}


void __fastcall BattleActionCamera__sendMainEvent(
        BattleActionCamera_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3

  if ( !BattleActionCamera__SendFieldEvent(this, eventName, method) )
    BattleActionCamera__sendCameraEvent(this, 0, eventName, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__setGameObject(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        UnityEngine_GameObject_o *obj,
        System_String_o *nameStr,
        const MethodInfo *method)
{
  UnityEngine_Object_o *UniqueFsm_43751384; // x22
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  __int64 v11; // x1
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  int32_t cameraId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BFFA5A & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&uniqueId);
    byte_4BFFA5A = 1;
  }
  cameraId = 0;
  UniqueFsm_43751384 = (UnityEngine_Object_o *)BattleActionCamera__getUniqueFsm_43751384(
                                                 this,
                                                 uniqueId,
                                                 &cameraId,
                                                 (const MethodInfo *)nameStr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)UnityEngine_Object__op_Inequality(UniqueFsm_43751384, 0LL, 0LL);
  if ( ((unsigned __int8)FsmVariables & 1) != 0 )
  {
    if ( !UniqueFsm_43751384 )
      goto LABEL_18;
    FsmVariables = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)UniqueFsm_43751384, 0LL);
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
    sub_1C2E388(FsmVariables, v11);
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

  if ( (byte_4BFFA50 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, active);
    byte_4BFFA50 = 1;
  }
  frontcamera = (UnityEngine_Object_o *)this->fields.frontcamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C2E388(gameObject, v6);
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
  sub_1C2E0D0(
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
  sub_1C2E0D0(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20
  Il2CppObject *v8; // x21
  UnityEngine_Transform_o *v9; // x20
  UnityEngine_Transform_o *v10; // x20
  UnityEngine_Transform_o *v11; // x19

  if ( (byte_4BFFA63 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v3);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v4);
    byte_4BFFA63 = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_25;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_25;
  v8 = UnityEngine_GameObject__GetComponent_object_(
         (UnityEngine_GameObject_o *)gameObject,
         (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL);
    if ( (gameObject & 1) != 0 )
    {
      if ( !v8 )
        goto LABEL_25;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v8, 0LL);
    }
  }
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v9 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4BF7D91 )
  {
    gameObject = sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v6);
    byte_4BF7D91 = 1;
  }
  if ( !v9 )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(v9, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v10 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4BF7D96 )
  {
    gameObject = sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v6);
    byte_4BF7D96 = 1;
  }
  if ( !v10 )
    goto LABEL_25;
  UnityEngine_Transform__set_localScale(v10, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v11 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4BF7D91 )
  {
    gameObject = sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v6);
    byte_4BF7D91 = 1;
  }
  if ( !v11 )
LABEL_25:
    sub_1C2E388(gameObject, v6);
  UnityEngine_Transform__set_eulerAngles(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
}


void __fastcall BattleActionCamera___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFFA65 & 1) == 0 )
  {
    sub_1C2E12C(&BattleActionCamera___c_TypeInfo, v1);
    byte_4BFFA65 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(BattleActionCamera___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleActionCamera___c_TypeInfo->static_fields->__9 = (struct BattleActionCamera___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)BattleActionCamera___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall BattleActionCamera___c___ctor(BattleActionCamera___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionCamera___c___InitFieldCameraList_b__28_0(
        BattleActionCamera___c_o *this,
        PlayMakerFSM_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4BFFA66 & 1) == 0 )
  {
    this = (BattleActionCamera___c_o *)sub_1C2E12C(&UnityEngine_Object_TypeInfo, x);
    byte_4BFFA66 = 1;
  }
  if ( !x )
    sub_1C2E388(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70989720(gameObject, 0LL);
}


bool __fastcall BattleActionCamera___c___ResetAllCameraEvent_b__46_0(
        BattleActionCamera___c_o *this,
        System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__o pair,
        const MethodInfo *method)
{
  UnityEngine_Object_o *value; // x19
  __int64 v4; // x1

  value = (UnityEngine_Object_o *)pair.fields.value;
  if ( (byte_4BFFA67 & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__,
      *(_QWORD *)&pair.fields.key);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v4);
    byte_4BFFA67 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(value, 0LL, 0LL);
}


void __fastcall BattleActionCamera___c___ResetAllCameraEvent_b__46_1(
        BattleActionCamera___c_o *this,
        System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__o pair,
        const MethodInfo *method)
{
  PlayMakerFSM_o *value; // x19
  __int64 v4; // x1

  value = pair.fields.value;
  if ( (byte_4BFFA68 & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__,
      *(_QWORD *)&pair.fields.key);
    this = (BattleActionCamera___c_o *)sub_1C2E12C(&StringLiteral_3430/*"CAMERA_END"*/, v4);
    byte_4BFFA68 = 1;
  }
  if ( !value )
    sub_1C2E388(this, *(_QWORD *)&pair.fields.key);
  PlayMakerFSM__SendEvent(value, (System_String_o *)StringLiteral_3430/*"CAMERA_END"*/, 0LL);
}


void __fastcall BattleActionCamera___c___ResetFieldCameraEvent_b__47_0(
        BattleActionCamera___c_o *this,
        PlayMakerFSM_o *fsm,
        const MethodInfo *method)
{
  if ( (byte_4BFFA69 & 1) == 0 )
  {
    this = (BattleActionCamera___c_o *)sub_1C2E12C(&StringLiteral_3430/*"CAMERA_END"*/, fsm);
    byte_4BFFA69 = 1;
  }
  if ( !fsm )
    sub_1C2E388(this, fsm);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3430/*"CAMERA_END"*/, 0LL);
}


void __fastcall BattleActionCamera___c__DisplayClass30_0___ctor(
        BattleActionCamera___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionCamera___c__DisplayClass30_0___SetSharedObjectCommonToTarget_b__0(
        BattleActionCamera___c__DisplayClass30_0_o *this,
        System_String_o *varName,
        const MethodInfo *method)
{
  PlayMakerFSM_o *commonFsm; // x0
  PlayMakerFSM_o *targetFsm; // x20
  UnityEngine_GameObject_o *Value; // x2

  commonFsm = this->fields.commonFsm;
  if ( !commonFsm
    || (targetFsm = this->fields.targetFsm,
        (commonFsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(commonFsm, 0LL)) == 0LL)
    || (commonFsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                        (HutongGames_PlayMaker_FsmVariables_o *)commonFsm,
                                        varName,
                                        0LL)) == 0LL )
  {
    sub_1C2E388(commonFsm, varName);
  }
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)commonFsm, 0LL);
  HutongGames_PlayMaker_PlayMakerFSMHelper__SetFsmGameObject(targetFsm, varName, Value, 0LL);
}


void __fastcall BattleActionCamera___c__DisplayClass45_0___ctor(
        BattleActionCamera___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionCamera___c__DisplayClass45_0___SendFieldEvent_b__0(
        BattleActionCamera___c__DisplayClass45_0_o *this,
        PlayMakerFSM_o *fsm,
        const MethodInfo *method)
{
  return HutongGames_PlayMaker_PlayMakerFSMHelper__checkFsmGlobalTransitions(fsm, this->fields.eventName, 0LL);
}


void __fastcall BattleActionCamera___c__DisplayClass49_0___ctor(
        BattleActionCamera___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionCamera___c__DisplayClass49_0___SetGameObjectToField_b__0(
        BattleActionCamera___c__DisplayClass49_0_o *this,
        PlayMakerFSM_o *fsm,
        const MethodInfo *method)
{
  HutongGames_PlayMaker_PlayMakerFSMHelper__SetFsmGameObject(fsm, this->fields.varName, this->fields.obj, 0LL);
}