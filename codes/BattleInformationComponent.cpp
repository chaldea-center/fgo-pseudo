void __fastcall BattleInformationComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1

  if ( (byte_4BB7649 & 1) == 0 )
  {
    sub_1C13D24(&BattleInformationComponent_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_9678/*"NoFlags"*/, v8);
    byte_4BB7649 = 1;
  }
  BattleInformationComponent_TypeInfo->static_fields->NobleInfoAnimPrefix = (struct System_String_o *)StringLiteral_9678/*"NoFlags"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)BattleInformationComponent_TypeInfo->static_fields,
    StringLiteral_9678/*"NoFlags"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleInformationComponent___ctor(BattleInformationComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  Il2CppObject *v16; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x20
  int64_t v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct UnityEngine_GameObject_array *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct System_Boolean_array *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  struct System_Single_array *v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int64_t v73; // x20
  int v74; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  System_Collections_Generic_List_object__o *v77; // x20
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  int64_t v90; // x20
  int64_t v91; // x1
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  int64_t v98; // x1
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  int64_t v105; // x1
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  int64_t v112; // x1
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7

  if ( (byte_4BB7648 & 1) == 0 )
  {
    sub_1C13D24(&BaseBattleInfoPosData_TypeInfo, method);
    sub_1C13D24(&bool___TypeInfo, v3);
    sub_1C13D24(&UnityEngine_GameObject___TypeInfo, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject___ctor__, v5);
    sub_1C13D24(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    sub_1C13D24(&float___TypeInfo, v7);
    sub_1C13D24(&string___TypeInfo, v8);
    sub_1C13D24(&UnityEngine_Vector3___TypeInfo, v9);
    sub_1C13D24(&StringLiteral_25503/*"{0}:{1}:{2}"*/, v10);
    sub_1C13D24(&StringLiteral_1491/*"3des"*/, v11);
    sub_1C13D24(&StringLiteral_22737/*"outArray"*/, v12);
    sub_1C13D24(&StringLiteral_1411/*"1B2FA5"*/, v13);
    sub_1C13D24(&StringLiteral_1472/*"2bba0607-14d5-4afe-b9a0-e0210bf20c40"*/, v14);
    sub_1C13D24(&StringLiteral_22736/*"out"*/, v15);
    byte_4BB7648 = 1;
  }
  v16 = (Il2CppObject *)sub_1C13F70(BaseBattleInfoPosData_TypeInfo);
  System_Object___ctor(v16, 0LL);
  this->fields.infoPosData = (struct BaseBattleInfoPosData_o *)v16;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.infoPosData, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  v23 = sub_1C13DCC(string___TypeInfo, 2LL);
  if ( !v23 )
    goto LABEL_18;
  v31 = v23;
  if ( !*(_DWORD *)(v23 + 24)
    || (v32 = StringLiteral_22737/*"outArray"*/,
        *(_QWORD *)(v23 + 32) = StringLiteral_22737/*"outArray"*/,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 32), v32, v25, v26, v27, v28, v29, v30),
        *(_DWORD *)(v31 + 24) <= 1u) )
  {
LABEL_17:
    sub_1C13F88(v23, v24);
  }
  v39 = StringLiteral_22736/*"out"*/;
  *(_QWORD *)(v31 + 40) = StringLiteral_22736/*"out"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v31 + 40), v39, v33, v34, v35, v36, v37, v38);
  this->fields.overLabel = (struct System_String_array *)v31;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.overLabel, v31, v40, v41, v42, v43, v44, v45);
  v46 = (struct UnityEngine_GameObject_array *)sub_1C13DCC(UnityEngine_GameObject___TypeInfo, 2LL);
  this->fields.overObjectList = v46;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.overObjectList, (int64_t)v46, v47, v48, v49, v50, v51, v52);
  v53 = (struct System_Boolean_array *)sub_1C13DCC(bool___TypeInfo, 2LL);
  this->fields.isAlreadyOverKill = v53;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.isAlreadyOverKill, (int64_t)v53, v54, v55, v56, v57, v58, v59);
  v60 = (struct System_Single_array *)sub_1C13DCC(float___TypeInfo, 2LL);
  this->fields.timeStartOverKill = v60;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.timeStartOverKill, (int64_t)v60, v61, v62, v63, v64, v65, v66);
  v23 = sub_1C13DCC(UnityEngine_Vector3___TypeInfo, 2LL);
  v73 = v23;
  if ( !byte_4BAEDA1 )
  {
    v23 = sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v24);
    byte_4BAEDA1 = 1;
  }
  if ( !v73 )
LABEL_18:
    sub_1C13F80(v23, v24);
  v74 = *(_DWORD *)(v73 + 24);
  if ( !v74 )
    goto LABEL_17;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)(v73 + 32) = *(_QWORD *)&static_fields->zeroVector.fields.x;
  *(float *)(v73 + 40) = z;
  if ( v74 == 1 )
    goto LABEL_17;
  *(_DWORD *)(v73 + 52) = 0;
  *(_QWORD *)(v73 + 44) = 0xC24C000000000000LL;
  this->fields.showPositions = (struct UnityEngine_Vector3_array *)v73;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.showPositions, v73, v67, v68, v69, v70, v71, v72);
  v77 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v77,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.motionMessageObjList = (struct System_Collections_Generic_List_GameObject__o *)v77;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.motionMessageObjList,
    (int64_t)v77,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  v23 = sub_1C13DCC(string___TypeInfo, 4LL);
  if ( !v23 )
    goto LABEL_18;
  v90 = v23;
  if ( !*(_DWORD *)(v23 + 24) )
    goto LABEL_17;
  v91 = StringLiteral_1411/*"1B2FA5"*/;
  *(_QWORD *)(v23 + 32) = StringLiteral_1411/*"1B2FA5"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 32), v91, v84, v85, v86, v87, v88, v89);
  if ( *(_DWORD *)(v90 + 24) <= 1u )
    goto LABEL_17;
  v98 = StringLiteral_1472/*"2bba0607-14d5-4afe-b9a0-e0210bf20c40"*/;
  *(_QWORD *)(v90 + 40) = StringLiteral_1472/*"2bba0607-14d5-4afe-b9a0-e0210bf20c40"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v90 + 40), v98, v92, v93, v94, v95, v96, v97);
  if ( *(_DWORD *)(v90 + 24) <= 2u )
    goto LABEL_17;
  v105 = StringLiteral_1491/*"3des"*/;
  *(_QWORD *)(v90 + 48) = StringLiteral_1491/*"3des"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v90 + 48), v105, v99, v100, v101, v102, v103, v104);
  if ( *(_DWORD *)(v90 + 24) <= 3u )
    goto LABEL_17;
  v112 = StringLiteral_25503/*"{0}:{1}:{2}"*/;
  *(_QWORD *)(v90 + 56) = StringLiteral_25503/*"{0}:{1}:{2}"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v90 + 56), v112, v106, v107, v108, v109, v110, v111);
  this->fields.attackCount = (struct System_String_array *)v90;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.attackCount, v90, v113, v114, v115, v116, v117, v118);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleInformationComponent__AddMotionMessageObject(
        BattleInformationComponent_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  bool v6; // w0
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_List_object__o *motionMessageObjList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8

  if ( (byte_4BB7643 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__Add__, obj);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v5);
    byte_4BB7643 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  BattleInformationComponent__DestroyDisplayingMessage(this, v6, v7);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    motionMessageObjList = (System_Collections_Generic_List_object__o *)this->fields.motionMessageObjList;
    if ( !motionMessageObjList
      || (items = motionMessageObjList->fields._items,
          v17 = Method_System_Collections_Generic_List_GameObject__Add__,
          ++motionMessageObjList->fields._version,
          !items) )
    {
      sub_1C13F80(motionMessageObjList, v8);
    }
    size = motionMessageObjList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        motionMessageObjList,
        (Il2CppObject *)obj,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v19 = &items->obj.klass + size;
      motionMessageObjList->fields._size = size + 1;
      v19[4] = (Il2CppClass *)obj;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v19 + 4), (int64_t)obj, v9, v10, v11, v12, v13, v14);
    }
  }
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__CreateBattleMessage(
        BattleInformationComponent_o *this,
        System_String_array *messages,
        int32_t messageType,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v8; // x4
  UnityEngine_Object_o *BattleMessageObject; // x19
  _BOOL8 v10; // x0
  __int64 v11; // x1

  if ( (byte_4BB7644 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, messages);
    byte_4BB7644 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)messages, 0LL);
  BattleMessageObject = 0LL;
  if ( !IsNullOrEmpty )
  {
    BattleMessageObject = (UnityEngine_Object_o *)BattleInformationComponent__CreateBattleMessageObject(
                                                    (BattleInformationComponent_o *)IsNullOrEmpty,
                                                    messages,
                                                    messageType,
                                                    this->fields.skillInfoRoot,
                                                    v8);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__op_Inequality(BattleMessageObject, 0LL, 0LL);
    if ( v10 )
    {
      if ( !BattleMessageObject )
        sub_1C13F80(v10, v11);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BattleMessageObject, 1, 0LL);
    }
  }
  return (UnityEngine_GameObject_o *)BattleMessageObject;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleInformationComponent__CreateBattleMessageObject(
        BattleInformationComponent_o *this,
        System_String_array *messages,
        int32_t messageType,
        UnityEngine_Transform_o *parentTransform,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *MessageObjectAssetName; // x21
  __int64 v11; // x22
  _QWORD *EffectAssetName; // x0
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
  int64_t v26; // x1
  BattleInformationComponent_o *v27; // x0
  const MethodInfo *v28; // x3
  BattleInformationComponent_o *TargetPrefab; // x0
  const MethodInfo *v30; // x4

  if ( (byte_4BB7635 & 1) == 0 )
  {
    sub_1C13D24(&BattleDataDefine_TypeInfo, messages);
    sub_1C13D24(&BattleEffectUtility_TypeInfo, v8);
    this = (BattleInformationComponent_o *)sub_1C13D24(&string___TypeInfo, v9);
    byte_4BB7635 = 1;
  }
  MessageObjectAssetName = BattleInformationComponent__GetMessageObjectAssetName(
                             this,
                             messageType,
                             *(const MethodInfo **)&messageType);
  v11 = sub_1C13DCC(string___TypeInfo, 2LL);
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectAssetName = BattleEffectUtility__get_EffectAssetName(0LL);
  if ( !v11 )
    sub_1C13F80(EffectAssetName, v13);
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_11;
  *(_QWORD *)(v11 + 32) = EffectAssetName;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 32), (int64_t)EffectAssetName, v14, v15, v16, v17, v18, v19);
  EffectAssetName = &BattleDataDefine_TypeInfo->_1.image;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    EffectAssetName = &BattleDataDefine_TypeInfo->_1.image;
  }
  if ( *(_DWORD *)(v11 + 24) <= 1u )
LABEL_11:
    sub_1C13F88(EffectAssetName, v13);
  v26 = *(_QWORD *)(EffectAssetName[23] + 40LL);
  *(_QWORD *)(v11 + 40) = v26;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 40), v26, v20, v21, v22, v23, v24, v25);
  TargetPrefab = (BattleInformationComponent_o *)BattleInformationComponent__GetTargetPrefab(
                                                   v27,
                                                   MessageObjectAssetName,
                                                   (System_String_array *)v11,
                                                   v28);
  return BattleInformationComponent__CreateBattleMessageObject_45046436(
           TargetPrefab,
           messages,
           (UnityEngine_GameObject_o *)TargetPrefab,
           parentTransform,
           v30);
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__CreateBattleMessageObject_45046436(
        BattleInformationComponent_o *this,
        System_String_array *messages,
        UnityEngine_GameObject_o *msgPrefab,
        UnityEngine_Transform_o *parentTransform,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x22
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v14; // x2

  if ( (byte_4BB7636 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelMessageComponent___, messages);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject____77555680, v8);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v9);
    byte_4BB7636 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)msgPrefab, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__Instantiate_object__50417328(
            (Il2CppObject *)msgPrefab,
            parentTransform,
            (const MethodInfo_3014EB0 *)Method_UnityEngine_Object_Instantiate_GameObject____77555680);
    if ( !v11 )
      goto LABEL_13;
    v10 = (UnityEngine_GameObject_o *)v11;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v11,
                         (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelMessageComponent___);
    v11 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)v11 & 1) != 0 )
    {
      if ( Component_object )
      {
        BattleConcatLabelMessageComponent__SetTexts(
          (BattleConcatLabelMessageComponent_o *)Component_object,
          messages,
          v14);
        return v10;
      }
LABEL_13:
      sub_1C13F80(v11, v12);
    }
  }
  return v10;
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__CreateDefaultBattleMessageObject(
        BattleInformationComponent_o *this,
        System_String_o *message,
        UnityEngine_Transform_o *parentTransform,
        float lifeTime,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleInformationComponent_o *v12; // x0
  const MethodInfo *v13; // x2
  BattleLogic_o *logic; // x0
  System_String_array *v15; // x20
  System_String_o *MessageObjectAssetName; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  BattleDataDefine_c *v23; // x8
  BattleLogic_o *v24; // x22
  int64_t ASSET_BATTLE_COMMON; // x1
  BattleInformationComponent_o *v26; // x0
  const MethodInfo *v27; // x3
  BattleInformationComponent_o *TargetPrefab; // x0
  const MethodInfo *v29; // x4
  UnityEngine_GameObject_o *v30; // x19

  if ( (byte_4BB7634 & 1) == 0 )
  {
    sub_1C13D24(&BattleDataDefine_TypeInfo, message);
    sub_1C13D24(&Method_UnityEngine_GameObject_AddComponent_CommonEffectComponent___, v9);
    sub_1C13D24(&string___TypeInfo, v10);
    byte_4BB7634 = 1;
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
  {
    v12 = (BattleInformationComponent_o *)sub_1C13DCC(string___TypeInfo, 0LL);
  }
  else
  {
    logic = this->fields.logic;
    if ( !logic )
      goto LABEL_15;
    logic = (BattleLogic_o *)BattleLogic__get_ParseBattleMsg(logic, 0LL);
    if ( !logic )
      goto LABEL_15;
    v12 = (BattleInformationComponent_o *)ParseBattleMessage__Replace((ParseBattleMessage_o *)logic, message, 0LL);
  }
  v15 = (System_String_array *)v12;
  MessageObjectAssetName = BattleInformationComponent__GetMessageObjectAssetName(v12, 0, v13);
  logic = (BattleLogic_o *)sub_1C13DCC(string___TypeInfo, 1LL);
  v23 = BattleDataDefine_TypeInfo;
  v24 = logic;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v23 = BattleDataDefine_TypeInfo;
  }
  if ( !v24 )
    goto LABEL_15;
  if ( !LODWORD(v24->fields.m_CancellationTokenSource) )
    sub_1C13F88(logic, v11);
  ASSET_BATTLE_COMMON = (int64_t)v23->static_fields->ASSET_BATTLE_COMMON;
  v24->fields.fsm = (struct PlayMakerFSM_o *)ASSET_BATTLE_COMMON;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v24->fields.fsm, ASSET_BATTLE_COMMON, v17, v18, v19, v20, v21, v22);
  TargetPrefab = (BattleInformationComponent_o *)BattleInformationComponent__GetTargetPrefab(
                                                   v26,
                                                   MessageObjectAssetName,
                                                   (System_String_array *)v24,
                                                   v27);
  logic = (BattleLogic_o *)BattleInformationComponent__CreateBattleMessageObject_45046436(
                             TargetPrefab,
                             v15,
                             (UnityEngine_GameObject_o *)TargetPrefab,
                             parentTransform,
                             v29);
  if ( !logic
    || (v30 = (UnityEngine_GameObject_o *)logic,
        (logic = (BattleLogic_o *)UnityEngine_GameObject__AddComponent_object_(
                                    (UnityEngine_GameObject_o *)logic,
                                    (const MethodInfo_2FDF914 *)Method_UnityEngine_GameObject_AddComponent_CommonEffectComponent___)) == 0LL) )
  {
LABEL_15:
    sub_1C13F80(logic, v11);
  }
  CommonEffectComponent__SetTime((CommonEffectComponent_o *)logic, lifeTime, 0.0, 0LL);
  return v30;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleInformationComponent__CreateDefaultSkillMessageObject(
        BattleInformationComponent_o *this,
        bool isPlayer,
        System_String_o *message,
        bool showSkillSprite,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x8
  UnityEngine_GameObject_o *Object; // x0
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x19
  const MethodInfo *v14; // x2
  UnityEngine_GameObject_o *v15; // x22
  UnityEngine_Object_o *klass; // x20

  if ( (byte_4BB7637 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, isPlayer);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v9);
    byte_4BB7637 = 1;
  }
  v10 = 136LL;
  if ( isPlayer )
    v10 = 128LL;
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             *(UnityEngine_GameObject_o **)((char *)&this->klass + v10),
             this->fields.skillInfoRoot,
             0LL,
             0LL);
  if ( !Object )
    goto LABEL_15;
  v13 = Object;
  Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                         Object,
                                         (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
  if ( !Object )
    goto LABEL_15;
  v15 = Object;
  BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)Object, message, v14);
  if ( !showSkillSprite )
  {
    klass = (UnityEngine_Object_o *)v15[3].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
    {
      Object = (UnityEngine_GameObject_o *)v15[3].klass;
      if ( Object )
      {
        Object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object, 0LL);
        if ( Object )
        {
          UnityEngine_GameObject__SetActive(Object, 0, 0LL);
          return v13;
        }
      }
LABEL_15:
      sub_1C13F80(Object, v12);
    }
  }
  return v13;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleInformationComponent__CreateOverWriteSkillInfoObject(
        BattleInformationComponent_o *this,
        int32_t overWriteSkillInfoId,
        System_String_o *message,
        bool isPlayer,
        int32_t skillLevel,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x19
  UnityEngine_GameObject_o *skillInfoPrefab; // x1
  UnityEngine_GameObject_o *Object; // x0
  System_String_o *v17; // x19
  Il2CppObject *v18; // x0
  UnityEngine_Component_o *gameObject; // x0
  __int64 v20; // x1
  UnityEngine_Object_o *Component_object; // x20
  UnityEngine_Object_o *klass; // x21
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF

  v24 = skillLevel;
  if ( (byte_4BB7638 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___,
      *(_QWORD *)&overWriteSkillInfoId);
    sub_1C13D24(&LocalizationManager_TypeInfo, v11);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v12);
    sub_1C13D24(&StringLiteral_3023/*"BATTLE_SKILL_CONF_TITLE"*/, v13);
    byte_4BB7638 = 1;
  }
  v14 = 0LL;
  switch ( overWriteSkillInfoId )
  {
    case 0:
      return v14;
    case 1:
      skillInfoPrefab = this->fields.skillInfoPrefab;
      goto LABEL_6;
    case 2:
      skillInfoPrefab = this->fields.skillInfoEnemyPrefab;
LABEL_6:
      Object = BaseMonoBehaviour__createObject(
                 (BaseMonoBehaviour_o *)this,
                 skillInfoPrefab,
                 this->fields.skillInfoRoot,
                 0LL,
                 0LL);
      goto LABEL_13;
    case 3:
      if ( skillLevel >= 1 && isPlayer )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3023/*"BATTLE_SKILL_CONF_TITLE"*/, 0LL);
        v18 = (Il2CppObject *)System_Int32__ToString((int32_t)&v24, 0LL);
        message = System_String__Format_62982316(v17, (Il2CppObject *)message, v18, 0LL);
      }
      Object = BattleInformationComponent__CreateDefaultBattleMessageObject(
                 this,
                 message,
                 this->fields.skillInfoRoot,
                 2.0,
                 (const MethodInfo *)isPlayer);
LABEL_13:
      v14 = Object;
      break;
    default:
      break;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v14 )
      goto LABEL_29;
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 v14,
                                                 (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_29;
      klass = (UnityEngine_Object_o *)Component_object[3].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)Component_object[3].klass;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
            return v14;
          }
        }
LABEL_29:
        sub_1C13F80(gameObject, v20);
      }
    }
  }
  return v14;
}


void __fastcall BattleInformationComponent__CreateSkillSkip(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *skillSkipRoot; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *infoPosData; // x0
  UnityEngine_GameObject_o *v6; // x20
  const MethodInfo *v7; // x1
  UnityEngine_GameObject_o *skillSkipPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  struct UnityEngine_GameObject_o **p_skillSkipObj; // x19
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  UnityEngine_Object_o *v18; // x20
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BB7646 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB7646 = 1;
  }
  skillSkipRoot = (UnityEngine_Object_o *)this->fields.skillSkipRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillSkipRoot, 0LL, 0LL) )
  {
    infoPosData = (UnityEngine_GameObject_o *)this->fields.infoPosData;
    if ( !infoPosData )
      goto LABEL_14;
    v6 = this->fields.skillSkipRoot;
    v19.fields.x = ((float (__fastcall *)(UnityEngine_GameObject_o *, const char *))infoPosData->klass[1]._1.gc_desc)(
                     infoPosData,
                     infoPosData->klass[1]._1.name);
    GameObjectExtensions__SetLocalPosition(v6, v19, 0LL);
    BattleInformationComponent__DeleteSkillSkip(this, v7);
    infoPosData = this->fields.skillSkipRoot;
    if ( !infoPosData )
      goto LABEL_14;
    skillSkipPrefab = this->fields.skillSkipPrefab;
    transform = UnityEngine_GameObject__get_transform(infoPosData, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, skillSkipPrefab, transform, 0LL, 0LL);
    this->fields.skillSkipObj = Object;
    p_skillSkipObj = &this->fields.skillSkipObj;
    sub_1C13CC8((PartyOrganizationUtility_o *)p_skillSkipObj, (int64_t)Object, v12, v13, v14, v15, v16, v17);
    v18 = (UnityEngine_Object_o *)*p_skillSkipObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
    {
      infoPosData = *p_skillSkipObj;
      if ( *p_skillSkipObj )
      {
        UnityEngine_GameObject__SetActive(infoPosData, 1, 0LL);
        return;
      }
LABEL_14:
      sub_1C13F80(infoPosData, v4);
    }
  }
}


void __fastcall BattleInformationComponent__DeleteSkillSkip(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_skillSkipObj; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *skillSkipObj; // t1
  UnityEngine_Object_o *klass; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BB7647 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB7647 = 1;
  }
  skillSkipObj = this->fields.skillSkipObj;
  p_skillSkipObj = (PartyOrganizationUtility_o *)&this->fields.skillSkipObj;
  v4 = (UnityEngine_Object_o *)skillSkipObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_skillSkipObj->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70721988(klass, 0LL);
    p_skillSkipObj->klass = 0LL;
    sub_1C13CC8(p_skillSkipObj, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleInformationComponent__DestroyDisplayingMessage(
        BattleInformationComponent_o *this,
        bool isDisplayNextMessage,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *motionMessageObjList; // x0
  Il2CppObject *current; // x21
  struct System_Collections_Generic_List_GameObject__o *v12; // x8
  int32_t size; // w2
  int v14; // w9
  __int64 v15; // x8
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BB763E & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, isDisplayNextMessage);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__Clear__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v9);
    byte_4BB763E = 1;
  }
  memset(&v17, 0, sizeof(v17));
  motionMessageObjList = (System_Collections_Generic_List_object__o *)this->fields.motionMessageObjList;
  if ( !motionMessageObjList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    motionMessageObjList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70721988((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v12 = this->fields.motionMessageObjList;
  if ( !v12 )
    goto LABEL_21;
  size = v12->fields._size;
  v14 = v12->fields._version + 1;
  v12->fields._size = 0;
  v12->fields._version = v14;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v12->fields._items, 0, size, 0LL);
  motionMessageObjList = (System_Collections_Generic_List_object__o *)this->fields.perf;
  if ( !motionMessageObjList )
    goto LABEL_21;
  motionMessageObjList = (System_Collections_Generic_List_object__o *)BattlePerformance__get_MultiMessageDisplay(
                                                                        (BattlePerformance_o *)motionMessageObjList,
                                                                        0LL);
  if ( !motionMessageObjList )
    goto LABEL_21;
  if ( isDisplayNextMessage )
  {
    BattleMultiMessageDisplay__ReleaseMessage_45070636(
      (BattleMultiMessageDisplay_o *)motionMessageObjList,
      (const MethodInfo *)isDisplayNextMessage);
    motionMessageObjList = (System_Collections_Generic_List_object__o *)this->fields.perf;
    if ( motionMessageObjList )
    {
      BattlePerformance__DestroySkillCutInMessage((BattlePerformance_o *)motionMessageObjList, 0LL);
      return;
    }
LABEL_21:
    sub_1C13F80(motionMessageObjList, isDisplayNextMessage);
  }
  v15 = *(_QWORD *)&motionMessageObjList->fields._size;
  if ( !v15 || !*(_BYTE *)(v15 + 21) )
    BattleMultiMessageDisplay__ReleaseMessage_45070636(
      (BattleMultiMessageDisplay_o *)motionMessageObjList,
      (const MethodInfo *)isDisplayNextMessage);
}


void __fastcall BattleInformationComponent__DestroyNonMotionMessage(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nonMotionMessageObject; // x20
  PartyOrganizationUtility_o *p_nonMotionMessageObject; // x19
  UnityEngine_Object_o *klass; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BB763F & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB763F = 1;
  }
  nonMotionMessageObject = (UnityEngine_Object_o *)this->fields.nonMotionMessageObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nonMotionMessageObject, 0LL, 0LL) )
  {
    p_nonMotionMessageObject = (PartyOrganizationUtility_o *)&this->fields.nonMotionMessageObject;
    klass = (UnityEngine_Object_o *)p_nonMotionMessageObject->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70721988(klass, 0LL);
    p_nonMotionMessageObject->klass = 0LL;
    sub_1C13CC8(p_nonMotionMessageObject, 0LL, v6, v7, v8, v9, v10, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleInformationComponent__GetMessageObjectAssetName(
        BattleInformationComponent_o *this,
        int32_t messageType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BB7633 & 1) == 0 )
  {
    sub_1C13D24(&int_TypeInfo, *(_QWORD *)&messageType);
    sub_1C13D24(&StringLiteral_17388/*"battleId"*/, v6);
    byte_4BB7633 = 1;
  }
  v9 = messageType;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, method, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_17388/*"battleId"*/, v7, 0LL);
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__GetTargetPrefab(
        BattleInformationComponent_o *this,
        System_String_o *prefabName,
        System_String_array *assetNames,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x8
  unsigned __int64 v9; // x22
  System_String_o *v10; // x21
  Il2CppObject *Object_object__49747248; // x21

  if ( (byte_4BB7645 & 1) == 0 )
  {
    sub_1C13D24(&Method_AssetData_GetObject_GameObject____77466800, prefabName);
    sub_1C13D24(&AssetManager_TypeInfo, v6);
    this = (BattleInformationComponent_o *)sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    byte_4BB7645 = 1;
  }
  if ( !assetNames )
    goto LABEL_18;
  v8 = *(_QWORD *)&assetNames->max_length;
  if ( (int)v8 >= 1 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)v8 )
        sub_1C13F88(this, prefabName);
      v10 = assetNames->m_Items[v9];
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (BattleInformationComponent_o *)AssetManager__getAssetStorage(v10, 0LL);
      if ( !this )
        break;
      Object_object__49747248 = AssetData__GetObject_object__49747248(
                                  (AssetData_o *)this,
                                  prefabName,
                                  (const MethodInfo_2F71530 *)Method_AssetData_GetObject_GameObject____77466800);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Object_object__49747248,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        LODWORD(v8) = assetNames->max_length;
        if ( (__int64)++v9 < (int)v8 )
          continue;
      }
      return (UnityEngine_GameObject_o *)Object_object__49747248;
    }
LABEL_18:
    sub_1C13F80(this, prefabName);
  }
  return 0LL;
}


void __fastcall BattleInformationComponent__Initialize(
        BattleInformationComponent_o *this,
        BattlePerformance_o *inperf,
        BattleData_o *indata,
        BattleLogic_o *inlogic,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
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
  UnityEngine_Object_o *playerAttackInfoPrefab; // x20
  __int64 v31; // x1
  int64_t overRoot; // x0
  UnityEngine_Transform_o *transform; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct UnityEngine_GameObject_array *overObjectList; // x8
  struct UnityEngine_GameObject_array *v41; // x8
  struct System_Boolean_array *isAlreadyOverKill; // x8
  struct System_Single_array *timeStartOverKill; // x8
  AssetData_o *v44; // x20
  struct UnityEngine_GameObject_array *v45; // x21
  UnityEngine_GameObject_o *v46; // x22
  UnityEngine_Transform_o *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct UnityEngine_GameObject_array *v54; // x8
  struct System_Boolean_array *v55; // x8
  struct System_Single_array *v56; // x8
  Il2CppObject *Object_object__49747248; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  UnityEngine_Object_o *fieldParam; // x20
  struct BattleData_o *data; // x8

  if ( (byte_4BB762E & 1) == 0 )
  {
    sub_1C13D24(&Method_AssetData_GetObject_GameObject____77466800, inperf);
    sub_1C13D24(&AssetManager_TypeInfo, v12);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v13);
    sub_1C13D24(&StringLiteral_19140/*"ef_exercise_01"*/, v14);
    sub_1C13D24(&StringLiteral_3244/*"Battle"*/, v15);
    sub_1C13D24(&StringLiteral_19147/*"ef_hit_slash01_M"*/, v16);
    sub_1C13D24(&StringLiteral_19196/*"effect/ef_cardcombo_3a"*/, v17);
    byte_4BB762E = 1;
  }
  this->fields.perf = inperf;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.perf,
    (int64_t)inperf,
    (int64_t)indata,
    (int32_t)inlogic,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.data = indata;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.data, (int64_t)indata, v18, v19, v20, v21, v22, v23);
  this->fields.logic = inlogic;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.logic, (int64_t)inlogic, v24, v25, v26, v27, v28, v29);
  playerAttackInfoPrefab = (UnityEngine_Object_o *)this->fields.playerAttackInfoPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(playerAttackInfoPrefab, 0LL, 0LL) )
  {
    overRoot = (int64_t)this->fields.playerAttackInfoPrefab;
    if ( !overRoot )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)overRoot, 0, 0LL);
  }
  overRoot = (int64_t)this->fields.overRoot;
  if ( !overRoot
    || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)overRoot, 0LL),
        overRoot = (int64_t)BaseMonoBehaviour__createObject_39385652(
                              (BaseMonoBehaviour_o *)this,
                              (System_String_o *)StringLiteral_19196/*"effect/ef_cardcombo_3a"*/,
                              transform,
                              0LL,
                              0LL),
        (overObjectList = this->fields.overObjectList) == 0LL) )
  {
LABEL_38:
    sub_1C13F80(overRoot, v31);
  }
  if ( !overObjectList->max_length )
    goto LABEL_39;
  overObjectList->m_Items[0] = (UnityEngine_GameObject_o *)overRoot;
  sub_1C13CC8((PartyOrganizationUtility_o *)overObjectList->m_Items, overRoot, v34, v35, v36, v37, v38, v39);
  v41 = this->fields.overObjectList;
  if ( !v41 )
    goto LABEL_38;
  if ( !v41->max_length )
    goto LABEL_39;
  overRoot = (int64_t)v41->m_Items[0];
  if ( !overRoot )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)overRoot, 0, 0LL);
  isAlreadyOverKill = this->fields.isAlreadyOverKill;
  if ( !isAlreadyOverKill )
    goto LABEL_38;
  if ( !isAlreadyOverKill->max_length )
    goto LABEL_39;
  isAlreadyOverKill->m_Items[4] = 0;
  timeStartOverKill = this->fields.timeStartOverKill;
  if ( !timeStartOverKill )
    goto LABEL_38;
  if ( !timeStartOverKill->max_length )
    goto LABEL_39;
  timeStartOverKill->m_Items[1] = 0.0;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  overRoot = (int64_t)AssetManager__getAssetStorage((System_String_o *)StringLiteral_3244/*"Battle"*/, 0LL);
  if ( !overRoot )
    goto LABEL_38;
  v44 = (AssetData_o *)overRoot;
  overRoot = (int64_t)AssetData__GetObject_object__49747248(
                        (AssetData_o *)overRoot,
                        (System_String_o *)StringLiteral_19140/*"ef_exercise_01"*/,
                        (const MethodInfo_2F71530 *)Method_AssetData_GetObject_GameObject____77466800);
  if ( !this->fields.overRoot )
    goto LABEL_38;
  v45 = this->fields.overObjectList;
  v46 = (UnityEngine_GameObject_o *)overRoot;
  v47 = UnityEngine_GameObject__get_transform(this->fields.overRoot, 0LL);
  overRoot = (int64_t)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v46, v47, 0LL, 0LL);
  if ( !v45 )
    goto LABEL_38;
  if ( v45->max_length <= 1 )
    goto LABEL_39;
  v45->m_Items[1] = (UnityEngine_GameObject_o *)overRoot;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v45->m_Items[1], overRoot, v48, v49, v50, v51, v52, v53);
  v54 = this->fields.overObjectList;
  if ( !v54 )
    goto LABEL_38;
  if ( v54->max_length <= 1 )
    goto LABEL_39;
  overRoot = (int64_t)v54->m_Items[1];
  if ( !overRoot )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)overRoot, 0, 0LL);
  v55 = this->fields.isAlreadyOverKill;
  if ( !v55 )
    goto LABEL_38;
  if ( v55->max_length <= 1 )
    goto LABEL_39;
  v55->m_Items[5] = 0;
  v56 = this->fields.timeStartOverKill;
  if ( !v56 )
    goto LABEL_38;
  if ( v56->max_length <= 1 )
LABEL_39:
    sub_1C13F88(overRoot, v31);
  v56->m_Items[2] = 0.0;
  Object_object__49747248 = AssetData__GetObject_object__49747248(
                              v44,
                              (System_String_o *)StringLiteral_19147/*"ef_hit_slash01_M"*/,
                              (const MethodInfo_2F71530 *)Method_AssetData_GetObject_GameObject____77466800);
  this->fields.skillSkipPrefab = (struct UnityEngine_GameObject_o *)Object_object__49747248;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.skillSkipPrefab,
    (int64_t)Object_object__49747248,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  GameObjectExtensions__SafeSetParent_34717732(this->fields.overRoot, this->fields.fsOffsetRoot, 0LL);
  fieldParam = (UnityEngine_Object_o *)this->fields.fieldParam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  overRoot = UnityEngine_Object__op_Inequality(fieldParam, 0LL, 0LL);
  if ( (overRoot & 1) != 0 )
  {
    data = this->fields.data;
    if ( data )
    {
      overRoot = (int64_t)this->fields.fieldParam;
      if ( overRoot )
      {
        (*(void (__fastcall **)(int64_t, struct BattleFieldEnvironmentData_o *, _QWORD))(*(_QWORD *)overRoot + 376LL))(
          overRoot,
          data->fields._FieldEnvData_k__BackingField,
          *(_QWORD *)(*(_QWORD *)overRoot + 384LL));
        return;
      }
    }
    goto LABEL_38;
  }
}


void __fastcall BattleInformationComponent__InitializeEachWave(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  struct BaseBattleInfoPosData_o *BattleInfoPosData; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  UnityEngine_Object_o *fieldParam; // x20
  const MethodInfo *v11; // x1
  BattleFieldParamComponent_o *v12; // x0

  if ( (byte_4BB762F & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB762F = 1;
  }
  BattleInfoPosData = BattleInformationComponent__MakeBattleInfoPosData(this, method);
  this->fields.infoPosData = BattleInfoPosData;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.infoPosData,
    (int64_t)BattleInfoPosData,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  fieldParam = (UnityEngine_Object_o *)this->fields.fieldParam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fieldParam, 0LL, 0LL) )
  {
    v12 = this->fields.fieldParam;
    if ( !v12 )
      sub_1C13F80(0LL, v11);
    BattleFieldParamComponent__UpdateView(v12, v11);
  }
}


BaseBattleInfoPosData_o *__fastcall BattleInformationComponent__MakeBattleInfoPosData(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleData_o *data; // x0
  int v6; // w20
  __int64 v7; // x20
  __int64 v8; // x0
  __int128 v9; // q0
  __int64 v11; // d1

  if ( (byte_4BB7630 & 1) == 0 )
  {
    sub_1C13D24(&NormalRaidTypeBossBattleInfoPosData_TypeInfo, method);
    sub_1C13D24(&PosCountNormalBattleInfoPosData_TypeInfo, v3);
    sub_1C13D24(&PosCountSpBattleInfoPosData_TypeInfo, v4);
    byte_4BB7630 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  data = (BattleData_o *)BattleData__GetRaidType(data, 0LL);
  if ( !this->fields.data )
    goto LABEL_15;
  v6 = (int)data;
  if ( !BattleData__get_IsEnemyPosCountNormal(this->fields.data, 0LL) )
  {
    v8 = sub_1C13F70(PosCountSpBattleInfoPosData_TypeInfo);
    v9 = xmmword_BF6840;
    v11 = 1127153664LL;
    goto LABEL_13;
  }
  if ( v6 )
  {
    data = this->fields.data;
    if ( data )
    {
      data = (BattleData_o *)BattleData__getStageEntity(data, 0LL);
      if ( data )
      {
        if ( StageEntity__IsForceSetNormalEnemyStatusUI((StageEntity_o *)data, 0LL) )
          goto LABEL_10;
        v8 = sub_1C13F70(NormalRaidTypeBossBattleInfoPosData_TypeInfo);
        v9 = xmmword_BF6CB0;
        v11 = 1112801280LL;
LABEL_13:
        v7 = v8;
        *(_OWORD *)(v8 + 24) = v9;
        *(_QWORD *)(v8 + 40) = v11;
        goto LABEL_14;
      }
    }
LABEL_15:
    sub_1C13F80(data, method);
  }
LABEL_10:
  v7 = sub_1C13F70(PosCountNormalBattleInfoPosData_TypeInfo);
  *(_DWORD *)(v7 + 32) = 0;
  *(_QWORD *)(v7 + 24) = 0x43070000C3FA0000LL;
LABEL_14:
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  (*(void (__fastcall **)(__int64, struct BattlePerformance_o *, _QWORD))(*(_QWORD *)v7 + 408LL))(
    v7,
    this->fields.perf,
    *(_QWORD *)(*(_QWORD *)v7 + 416LL));
  return (BaseBattleInfoPosData_o *)v7;
}


void __fastcall BattleInformationComponent__SerializeFieldNotNullCheck(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleInformationComponent__ShowActionMessage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleInformationComponent_o *v3; // x19
  bool isPlayerID; // w0
  const MethodInfo *v6; // x5
  UnityEngine_GameObject_o *v7; // x1
  const MethodInfo *v8; // x2

  if ( !actionData || (v3 = this, (this = (BattleInformationComponent_o *)this->fields.data) == 0LL) )
    sub_1C13F80(this, actionData);
  isPlayerID = BattleData__isPlayerID((BattleData_o *)this, actionData->fields.actorId, 0LL);
  v7 = BattleInformationComponent__showSkillName(
         v3,
         isPlayerID,
         actionData->fields.skillMessage,
         0,
         actionData->fields.skillInfo,
         v6);
  BattleInformationComponent__AddMotionMessageObject(v3, v7, v8);
}


void __fastcall BattleInformationComponent__ShowBattleMessage(
        BattleInformationComponent_o *this,
        System_String_array *messages,
        int32_t messageType,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *BattleMessage; // x1
  const MethodInfo *v6; // x2

  BattleMessage = BattleInformationComponent__CreateBattleMessage(this, messages, messageType, method);
  BattleInformationComponent__AddMotionMessageObject(this, BattleMessage, v6);
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__ShowCommandCardMessage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleActionData_o *v3; // x19
  BattleInformationComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t type; // w21
  int32_t v15; // w23
  BattleInformationComponent_o *v16; // x21
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  __int64 v19; // x4
  __int64 actionIndex; // x8
  struct System_String_array *attackCount; // x9
  BattleInfoMessageComponent_o *v22; // x22
  System_String_o *v23; // x24
  Il2CppObject *v24; // x0
  BattleInformationComponent_o *v25; // x8
  __int64 *v26; // x8
  System_String_o *v27; // x2
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *BattleCommandCardObject; // x23
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v31; // x3
  int v33; // [xsp+Ch] [xbp-34h] BYREF

  v3 = actionData;
  v4 = this;
  if ( (byte_4BB763D & 1) == 0 )
  {
    sub_1C13D24(&BattleCommand_TypeInfo, actionData);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v5);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, v6);
    sub_1C13D24(&int_TypeInfo, v7);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v8);
    sub_1C13D24(&StringLiteral_3406/*"BulletinBoardMessageState"*/, v9);
    sub_1C13D24(&StringLiteral_11126/*"QuestMessageAdd"*/, v10);
    sub_1C13D24(&StringLiteral_2508/*"Arts"*/, v11);
    sub_1C13D24(&StringLiteral_1/*""*/, v12);
    this = (BattleInformationComponent_o *)sub_1C13D24(&StringLiteral_6501/*"External component has thrown an exception."*/, v13);
    byte_4BB763D = 1;
  }
  if ( !v3 )
    goto LABEL_40;
  type = v3->fields.type;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  v15 = BattleCommand__getType(type, 0LL);
  this = (BattleInformationComponent_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)v4,
                                           v4->fields.playerAttackInfoPrefab,
                                           v4->fields.attackMessageRoot,
                                           0LL,
                                           0LL);
  if ( !this )
    goto LABEL_40;
  v16 = this;
  this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
  actionIndex = v3->fields.actionIndex;
  attackCount = v4->fields.attackCount;
  v22 = (BattleInfoMessageComponent_o *)this;
  if ( (int)actionIndex < 3 )
  {
    if ( !attackCount )
      goto LABEL_40;
    if ( (unsigned int)actionIndex < attackCount->max_length )
    {
      actionData = (BattleActionData_o *)attackCount->m_Items[actionIndex];
      goto LABEL_14;
    }
LABEL_41:
    sub_1C13F88(this, actionData);
  }
  if ( !attackCount )
    goto LABEL_40;
  if ( attackCount->max_length <= 3 )
    goto LABEL_41;
  v23 = attackCount->m_Items[3];
  v33 = actionIndex + 1;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v17, v18, v19);
  this = (BattleInformationComponent_o *)System_String__Format(v23, v24, 0LL);
  actionData = (BattleActionData_o *)this;
LABEL_14:
  if ( v15 == 3 )
    v25 = 0LL;
  else
    v25 = v16;
  if ( v15 == 3 )
  {
    v26 = &StringLiteral_11126/*"QuestMessageAdd"*/;
    goto LABEL_22;
  }
  if ( v15 == 2 )
  {
    v27 = (System_String_o *)StringLiteral_3406/*"BulletinBoardMessageState"*/;
    goto LABEL_28;
  }
  if ( v15 != 1 )
  {
    if ( v15 == 4 )
      v27 = (System_String_o *)StringLiteral_6501/*"External component has thrown an exception."*/;
    else
      v27 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_28:
    v16 = v25;
    if ( !v22 )
      goto LABEL_40;
    goto LABEL_29;
  }
  v26 = &StringLiteral_2508/*"Arts"*/;
LABEL_22:
  v27 = (System_String_o *)*v26;
  if ( !v22 )
    goto LABEL_40;
LABEL_29:
  BattleInfoMessageComponent__setText_45040628(v22, (System_String_o *)actionData, v27, v18);
  perf = v4->fields.perf;
  if ( !perf )
    goto LABEL_40;
  this = (BattleInformationComponent_o *)perf->fields.commandPerf;
  if ( !this )
    goto LABEL_40;
  BattleCommandCardObject = (UnityEngine_Object_o *)BattlePerformanceCommandCard__getBattleCommandCardObject(
                                                      (BattlePerformanceCommandCard_o *)this,
                                                      v3->fields.actionIndex,
                                                      0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(BattleCommandCardObject, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (BattleInformationComponent_o *)v4->fields.data;
    if ( this )
    {
      ServantData = BattleData__getServantData((BattleData_o *)this, v3->fields.targetId, 0LL);
      BattleInfoMessageComponent__setCommandObject(
        v22,
        (UnityEngine_GameObject_o *)BattleCommandCardObject,
        ServantData,
        v31);
      if ( BattleCommandCardObject )
      {
        this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)BattleCommandCardObject,
                                                 (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
        if ( this )
        {
          BattleCommandComponent__hideOutCard((BattleCommandComponent_o *)this, 0LL);
          goto LABEL_38;
        }
      }
    }
LABEL_40:
    sub_1C13F80(this, actionData);
  }
LABEL_38:
  if ( !v16 )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v16, 1, 0LL);
  return (UnityEngine_GameObject_o *)v16;
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__ShowMotionMessage(
        BattleInformationComponent_o *this,
        System_String_o *motionMessage,
        int32_t actorId,
        int32_t messageType,
        const MethodInfo *method)
{
  BattleInformationComponent_o *v8; // x19
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
  Il2CppObject *current; // x23
  struct System_Collections_Generic_List_GameObject__o *motionMessageObjList; // x8
  int32_t size; // w2
  int v24; // w9
  bool HasRubyFormat; // w24
  const MethodInfo *v26; // x3
  BattleInformationComponent_o *v27; // x23
  BattleInformationComponent_o *v28; // x21
  const MethodInfo *v29; // x2
  bool isPlayerID; // w0
  const MethodInfo *v31; // x4
  BattleEffectUtility_c *v33; // x0
  System_String_o *v34; // x0
  System_String_o *v35; // x20
  AssetData_o *v36; // x20
  Il2CppObject *Object_object__49747248; // x20
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-70h] BYREF

  v8 = this;
  if ( (byte_4BB7642 & 1) == 0 )
  {
    sub_1C13D24(&Method_AssetData_GetObject_GameObject____77466800, motionMessage);
    sub_1C13D24(&AssetManager_TypeInfo, v9);
    sub_1C13D24(&BattleEffectUtility_TypeInfo, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v13);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, v14);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__Clear__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v18);
    sub_1C13D24(&StringLiteral_17399/*"battle_bg"*/, v19);
    this = (BattleInformationComponent_o *)sub_1C13D24(&StringLiteral_3249/*"Battle/DropEffect/1"*/, v20);
    byte_4BB7642 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  if ( !motionMessage )
    goto LABEL_44;
  if ( motionMessage->fields._stringLength < 1 )
    return 0LL;
  this = (BattleInformationComponent_o *)v8->fields.motionMessageObjList;
  if ( !this )
    goto LABEL_44;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v39 = v38;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v39.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70721988((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  motionMessageObjList = v8->fields.motionMessageObjList;
  if ( !motionMessageObjList )
    goto LABEL_44;
  size = motionMessageObjList->fields._size;
  v24 = motionMessageObjList->fields._version + 1;
  motionMessageObjList->fields._size = 0;
  motionMessageObjList->fields._version = v24;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)motionMessageObjList->fields._items, 0, size, 0LL);
  HasRubyFormat = ScriptLineMessage__HasRubyFormat(motionMessage, 0LL);
  this = (BattleInformationComponent_o *)System_String__Split(motionMessage, 0x3Au, 0, 0LL);
  if ( HasRubyFormat )
    goto LABEL_17;
  v27 = this;
  if ( !this )
    goto LABEL_44;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) < 2 )
  {
LABEL_17:
    if ( messageType == 2 )
    {
      this = (BattleInformationComponent_o *)v8->fields.data;
      if ( !this )
        goto LABEL_44;
      isPlayerID = BattleData__isPlayerID((BattleData_o *)this, actorId, 0LL);
      this = (BattleInformationComponent_o *)BattleInformationComponent__CreateDefaultSkillMessageObject(
                                               v8,
                                               isPlayerID,
                                               motionMessage,
                                               0,
                                               v31);
      if ( !this )
        goto LABEL_44;
    }
    else
    {
      if ( messageType == 1 )
      {
        this = (BattleInformationComponent_o *)BaseMonoBehaviour__createObject(
                                                 (BaseMonoBehaviour_o *)v8,
                                                 v8->fields.commonLabelPrefab,
                                                 v8->fields.commonMessageRoot,
                                                 0LL,
                                                 0LL);
        if ( this )
        {
          v28 = this;
          this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
          if ( this )
          {
            BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)this, motionMessage, v29);
LABEL_28:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v28, 1, 0LL);
            return (UnityEngine_GameObject_o *)v28;
          }
        }
LABEL_44:
        sub_1C13F80(this, motionMessage);
      }
      this = (BattleInformationComponent_o *)BattleInformationComponent__CreateDefaultBattleMessageObject(
                                               v8,
                                               motionMessage,
                                               v8->fields.skillInfoRoot,
                                               1.5,
                                               v26);
      if ( !this )
        goto LABEL_44;
    }
    v28 = this;
    goto LABEL_28;
  }
  this = (BattleInformationComponent_o *)v8->fields.perf;
  if ( !this )
    goto LABEL_44;
  BattlePerformance__setStateString((BattlePerformance_o *)this, actorId, motionMessage, 0LL);
  v33 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v33 = BattleEffectUtility_TypeInfo;
  }
  v34 = System_Int32__ToString((unsigned int)v33->static_fields + 24, 0LL);
  v35 = System_String__Concat_62967944((System_String_o *)StringLiteral_3249/*"Battle/DropEffect/1"*/, v34, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (BattleInformationComponent_o *)AssetManager__getAssetStorage(v35, 0LL);
  if ( !LODWORD(v27->fields.m_CancellationTokenSource) )
LABEL_45:
    sub_1C13F88(this, motionMessage);
  v36 = (AssetData_o *)this;
  this = (BattleInformationComponent_o *)System_String__Concat_62967944(
                                           (System_String_o *)StringLiteral_17399/*"battle_bg"*/,
                                           (System_String_o *)v27->fields.perf,
                                           0LL);
  if ( !v36 )
    goto LABEL_44;
  Object_object__49747248 = AssetData__GetObject_object__49747248(
                              v36,
                              (System_String_o *)this,
                              (const MethodInfo_2F71530 *)Method_AssetData_GetObject_GameObject____77466800);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v28 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49747248, 0LL, 0LL) )
  {
    this = (BattleInformationComponent_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v8,
                                             (UnityEngine_GameObject_o *)Object_object__49747248,
                                             v8->fields.commonMessageRoot,
                                             0LL,
                                             0LL);
    if ( !this )
      goto LABEL_44;
    v28 = this;
    this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    if ( LODWORD(v27->fields.m_CancellationTokenSource) > 1 )
    {
      if ( this )
      {
        EffectComponent__setLabel((EffectComponent_o *)this, (System_String_o *)v27->fields.data, 0LL);
        goto LABEL_28;
      }
      goto LABEL_44;
    }
    goto LABEL_45;
  }
  return (UnityEngine_GameObject_o *)v28;
}


void __fastcall BattleInformationComponent__SwitchPopupFullScreen(
        BattleInformationComponent_o *this,
        bool isFullScreen,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *fsOffsetRoot; // x1

  if ( isFullScreen )
    fsOffsetRoot = this->fields.fsOffsetRoot;
  else
    fsOffsetRoot = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_34717732(this->fields.overRoot, fsOffsetRoot, 0LL);
}


System_Collections_Generic_List_GameObject__o *__fastcall BattleInformationComponent__get_MotionMessageObjList(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.motionMessageObjList;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleInformationComponent__hideOverBase(
        BattleInformationComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  BattleInformationComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Boolean_array *isAlreadyOverKill; // x8
  struct UnityEngine_GameObject_array *overObjectList; // x8
  struct UnityEngine_GameObject_array *v10; // x8
  UnityEngine_Object_o *v11; // x21
  Il2CppObject *Component_object; // x22
  struct System_String_array *overLabel; // x8
  System_String_o *v14; // x0
  struct System_String_array *v15; // x8
  System_String_o *v16; // x0
  struct System_Boolean_array *v17; // x8

  v4 = this;
  if ( (byte_4BB7641 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_Animation___, *(_QWORD *)&type);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v6);
    this = (BattleInformationComponent_o *)sub_1C13D24(&StringLiteral_22718/*"orange"*/, v7);
    byte_4BB7641 = 1;
  }
  isAlreadyOverKill = v4->fields.isAlreadyOverKill;
  if ( !isAlreadyOverKill )
    goto LABEL_30;
  if ( isAlreadyOverKill->max_length <= type )
    goto LABEL_31;
  if ( !isAlreadyOverKill->m_Items[type + 4] )
    return;
  overObjectList = v4->fields.overObjectList;
  if ( !overObjectList )
    goto LABEL_30;
  if ( overObjectList->max_length <= type )
    goto LABEL_31;
  this = (BattleInformationComponent_o *)overObjectList->m_Items[type];
  if ( !this )
    goto LABEL_30;
  this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v10 = v4->fields.overObjectList;
  if ( !v10 )
    goto LABEL_30;
  if ( v10->max_length <= type )
    goto LABEL_31;
  v11 = (UnityEngine_Object_o *)this;
  this = (BattleInformationComponent_o *)v10->m_Items[type];
  if ( !this )
    goto LABEL_30;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v11 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v11, 0, 0LL);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v11, 1, 0LL);
      overLabel = v4->fields.overLabel;
      if ( overLabel )
      {
        if ( overLabel->max_length <= type )
          goto LABEL_31;
        v14 = System_String__Concat_62967944(overLabel->m_Items[type], (System_String_o *)StringLiteral_22718/*"orange"*/, 0LL);
        this = (BattleInformationComponent_o *)SimpleAnimation__Play_65106228((SimpleAnimation_o *)v11, v14, 0LL);
        goto LABEL_26;
      }
    }
LABEL_30:
    sub_1C13F80(this, *(_QWORD *)&type);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_26;
  if ( !Component_object )
    goto LABEL_30;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0LL);
  v15 = v4->fields.overLabel;
  if ( !v15 )
    goto LABEL_30;
  if ( v15->max_length <= type )
    goto LABEL_31;
  v16 = System_String__Concat_62967944(v15->m_Items[type], (System_String_o *)StringLiteral_22718/*"orange"*/, 0LL);
  this = (BattleInformationComponent_o *)UnityEngine_Animation__Play_70466396(
                                           (UnityEngine_Animation_o *)Component_object,
                                           v16,
                                           0LL);
LABEL_26:
  v17 = v4->fields.isAlreadyOverKill;
  if ( !v17 )
    goto LABEL_30;
  if ( v17->max_length <= type )
LABEL_31:
    sub_1C13F88(this, *(_QWORD *)&type);
  v17->m_Items[type + 4] = 0;
}


void __fastcall BattleInformationComponent__hideOverGaugeMessage(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleInformationComponent__hideOverBase(this, 1, v2);
}


void __fastcall BattleInformationComponent__hideOverKillMessage(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleInformationComponent__hideOverBase(this, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleInformationComponent__shiftOverMessage(
        BattleInformationComponent_o *this,
        int32_t type,
        int32_t zureIndex,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *overObjectList; // x8
  BattleInformationComponent_o *v5; // x20
  struct UnityEngine_Vector3_array *showPositions; // x8

  overObjectList = this->fields.overObjectList;
  if ( !overObjectList )
    goto LABEL_8;
  if ( overObjectList->max_length <= type )
    goto LABEL_9;
  v5 = this;
  this = (BattleInformationComponent_o *)overObjectList->m_Items[type];
  if ( !this
    || (this = (BattleInformationComponent_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0LL),
        (showPositions = v5->fields.showPositions) == 0LL) )
  {
LABEL_8:
    sub_1C13F80(this, *(_QWORD *)&type);
  }
  if ( showPositions->max_length <= zureIndex )
LABEL_9:
    sub_1C13F88(this, *(_QWORD *)&type);
  if ( !this )
    goto LABEL_8;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)this,
    *(UnityEngine_Vector3_o *)&showPositions->m_Items[zureIndex].fields.y,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleInformationComponent__showBoostSkillName(
        BattleInformationComponent_o *this,
        int32_t imageId,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *Object; // x21
  Il2CppObject *Component_object; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  BattleInfoMessageComponent_o *v17; // x22
  const MethodInfo *v18; // x3
  UnityEngine_GameObject_o *result; // x0
  BattleInformationComponent_o *v20; // x0
  BattleActionData_o *v21; // x1
  const MethodInfo *v22; // x2

  if ( (byte_4BB763A & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, *(_QWORD *)&imageId);
    sub_1C13D24(&UnityEngine_GameObject_TypeInfo, v7);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v8);
    sub_1C13D24(&StringLiteral_19179/*"effect/"*/, v9);
    byte_4BB763A = 1;
  }
  if ( !message || message->fields._stringLength < 1 )
    return 0LL;
  v10 = UnityEngine_Resources__Load((System_String_o *)StringLiteral_19179/*"effect/"*/, 0LL);
  v11 = (UnityEngine_GameObject_o *)v10;
  if ( !v10 || (UnityEngine_GameObject_c *)v10->klass == UnityEngine_GameObject_TypeInfo )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                       (BaseMonoBehaviour_o *)this,
                                       v11,
                                       transform,
                                       0LL,
                                       0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(Object, 0LL, 0LL);
    if ( ((unsigned __int8)Component_object & 1) != 0 )
    {
      if ( !Object
        || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Object,
                                 (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___)) == 0LL )
      {
        sub_1C13F80(Component_object, v15);
      }
      v17 = (BattleInfoMessageComponent_o *)Component_object;
      BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)Component_object, message, v16);
      BattleInfoMessageComponent__setItemSprite(v17, imageId, 0, v18);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, 1, 0LL);
    }
    return (UnityEngine_GameObject_o *)Object;
  }
  sub_1C14240(v10);
  BattleInformationComponent__showSpecialName(v20, v21, v22);
  return result;
}


void __fastcall BattleInformationComponent__showCommonMessage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleActionData_o *v3; // x20
  BattleInformationComponent_o *v4; // x19
  int32_t type; // w21
  const MethodInfo *v6; // x4
  const MethodInfo *v7; // x2
  UnityEngine_GameObject_o *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x2
  System_String_o *motionMessage; // x1
  BattleActionData_o *v17; // x0
  bool IsGimmick; // w0
  struct BattleSkillInfoData_o *skillInfo; // x8
  int32_t v20; // w9
  int32_t skilllv; // w21
  const MethodInfo *v22; // x3
  struct BattleSkillInfoData_o *v23; // x8
  bool isPlayerID; // w0
  const MethodInfo *v25; // x5
  System_String_o *skillMessage; // x2
  BattleSkillInfoData_o *v27; // x4
  bool v28; // w1
  BattleInformationComponent_o *v29; // x0
  int32_t v30; // w3
  bool v31; // w0

  v3 = actionData;
  v4 = this;
  if ( (byte_4BB763C & 1) == 0 )
  {
    this = (BattleInformationComponent_o *)sub_1C13D24(&BattleCommand_TypeInfo, actionData);
    byte_4BB763C = 1;
  }
  if ( !v3 )
    goto LABEL_33;
  if ( v3->fields.IsDontUpdateMessage )
    return;
  BattleInformationComponent__DestroyNonMotionMessage(v4, (const MethodInfo *)actionData);
  type = v3->fields.type;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  if ( !BattleCommand__isShowCommandAction(type, 0LL) )
    goto LABEL_12;
  this = (BattleInformationComponent_o *)v4->fields.data;
  if ( !this )
    goto LABEL_33;
  if ( !BattleData__isPlayerID((BattleData_o *)this, v3->fields.actorId, 0LL) )
  {
LABEL_12:
    motionMessage = v3->fields.motionMessage;
    if ( motionMessage )
    {
      v17 = (BattleActionData_o *)BattleInformationComponent__ShowMotionMessage(
                                    v4,
                                    motionMessage,
                                    v3->fields.actorId,
                                    v3->fields._MessageType_k__BackingField,
                                    v6);
LABEL_14:
      actionData = v17;
      goto LABEL_26;
    }
    IsGimmick = BattleActionData__IsGimmick(v3, 0LL);
    actionData = 0LL;
    if ( IsGimmick )
      goto LABEL_26;
    this = (BattleInformationComponent_o *)BattleActionData__isSkill(v3, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      skillInfo = v3->fields.skillInfo;
      if ( skillInfo )
      {
        v20 = skillInfo->fields.type;
        if ( v20 == 11 || v20 == 1 )
          skilllv = skillInfo->fields.skilllv;
        else
          skilllv = 0;
        this = (BattleInformationComponent_o *)v4->fields.data;
        if ( this )
        {
          isPlayerID = BattleData__isPlayerID((BattleData_o *)this, v3->fields.actorId, 0LL);
          skillMessage = v3->fields.skillMessage;
          v27 = v3->fields.skillInfo;
          v28 = isPlayerID;
          v29 = v4;
          v30 = skilllv;
LABEL_30:
          v17 = (BattleActionData_o *)BattleInformationComponent__showSkillName(v29, v28, skillMessage, v30, v27, v25);
          goto LABEL_14;
        }
      }
    }
    else
    {
      this = (BattleInformationComponent_o *)BattleActionData__isBoostSkill(v3, 0LL);
      actionData = 0LL;
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_26;
      if ( v3->fields.noOperation )
        goto LABEL_11;
      v23 = v3->fields.skillInfo;
      if ( v23 )
      {
        if ( v23->fields.itemImageId != -1 )
        {
          v17 = (BattleActionData_o *)BattleInformationComponent__showBoostSkillName(
                                        v4,
                                        v3->fields.imageId,
                                        v3->fields.skillMessage,
                                        v22);
          goto LABEL_14;
        }
        this = (BattleInformationComponent_o *)v4->fields.data;
        if ( this )
        {
          v31 = BattleData__isPlayerID((BattleData_o *)this, v3->fields.actorId, 0LL);
          skillMessage = v3->fields.skillMessage;
          v27 = v3->fields.skillInfo;
          v28 = v31;
          v29 = v4;
          v30 = 0;
          goto LABEL_30;
        }
      }
    }
LABEL_33:
    sub_1C13F80(this, actionData);
  }
  v8 = BattleInformationComponent__ShowCommandCardMessage(v4, v3, v7);
  v4->fields.nonMotionMessageObject = v8;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v4->fields.nonMotionMessageObject,
    (int64_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
LABEL_11:
  actionData = 0LL;
LABEL_26:
  BattleInformationComponent__AddMotionMessageObject(v4, (UnityEngine_GameObject_o *)actionData, v15);
}


void __fastcall BattleInformationComponent__showCommonMessage_45054528(
        BattleInformationComponent_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleInformationComponent__showNoblePhantasmInfo(
        BattleInformationComponent_o *this,
        int32_t tresureDeviceId,
        int32_t treasureDeviceLevel,
        int32_t treasureDevicePer,
        bool isHideInfo,
        System_String_array *overrideTd,
        const MethodInfo *method)
{
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  DataManager_o *Instance; // x0
  __int64 v29; // x1
  Il2CppObject *Entity; // x0
  Il2CppObject *v31; // x26
  UnityEngine_GameObject_o *v32; // x21
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x23
  UnityEngine_Transform_o *v35; // x0
  Il2CppObject *v36; // x28
  UnityEngine_Transform_o *v37; // x0
  Il2CppObject *v38; // x27
  UnityEngine_Transform_o *v39; // x0
  Il2CppObject *v40; // x24
  UnityEngine_Transform_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x25
  __int64 v43; // x0
  __int64 v44; // x1
  System_String_o *monitor; // x26
  il2cpp_array_size_t max_length; // w8
  System_String_o *v47; // x1
  System_String_o *v48; // x1
  System_String_o *v49; // x22
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  Il2CppObject *v53; // x0
  int v54; // w8
  Il2CppObject *v55; // x20
  Il2CppObject *v56; // x19
  BattleInformationComponent_c *v57; // x0
  System_String_o *NobleInfoAnimPrefix; // x19
  System_String_o *v59; // x0
  BattleInformationComponent_c *v60; // x0
  System_String_o *v61; // x20
  System_String_o *v62; // x0
  int v63; // [xsp+Ch] [xbp-64h] BYREF
  int v64; // [xsp+18h] [xbp-58h] BYREF
  int32_t v65; // [xsp+1Ch] [xbp-54h] BYREF

  v65 = treasureDeviceLevel;
  if ( (byte_4BB7632 & 1) == 0 )
  {
    sub_1C13D24(&BattleInformationComponent_TypeInfo, *(_QWORD *)&tresureDeviceId);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UILabel___, v12);
    sub_1C13D24(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v13);
    sub_1C13D24(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v14);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_Animation___, v15);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v16);
    sub_1C13D24(&int_TypeInfo, v17);
    sub_1C13D24(&LocalizationManager_TypeInfo, v18);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v19);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1C13D24(&StringLiteral_9424/*"NEXT_TOTAL_LOGIN_BONUS_DAYS"*/, v21);
    sub_1C13D24(&StringLiteral_23367/*"root_master"*/, v22);
    sub_1C13D24(&StringLiteral_10786/*"PaymentOk"*/, v23);
    sub_1C13D24(&StringLiteral_8549/*"LessThan"*/, v24);
    sub_1C13D24(&StringLiteral_1/*""*/, v25);
    sub_1C13D24(&StringLiteral_9754/*"NoticeRarity"*/, v26);
    sub_1C13D24(&StringLiteral_21600/*"m_isAuthenticated"*/, v27);
    byte_4BB7632 = 1;
  }
  v64 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_52;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             tresureDeviceId,
             (const MethodInfo_3238624 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( Entity )
  {
    v31 = Entity;
    Instance = (DataManager_o *)BaseMonoBehaviour__createObject(
                                  (BaseMonoBehaviour_o *)this,
                                  this->fields.nobleInfoPrefab,
                                  this->fields.nobleInfoRoot,
                                  0LL,
                                  0LL);
    if ( !Instance )
      goto LABEL_52;
    v32 = (UnityEngine_GameObject_o *)Instance;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(
                                  transform,
                                  (System_String_o *)StringLiteral_21600/*"m_isAuthenticated"*/,
                                  0,
                                  0LL);
    if ( !Instance )
      goto LABEL_52;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)Instance,
                         (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v35 = UnityEngine_GameObject__get_transform(v32, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v35, (System_String_o *)StringLiteral_23367/*"root_master"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_52;
    v36 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v37 = UnityEngine_GameObject__get_transform(v32, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v37, (System_String_o *)StringLiteral_8549/*"LessThan"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_52;
    v38 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v39 = UnityEngine_GameObject__get_transform(v32, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v39, (System_String_o *)StringLiteral_10786/*"PaymentOk"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_52;
    v40 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v41 = UnityEngine_GameObject__get_transform(v32, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v41, (System_String_o *)StringLiteral_9754/*"NoticeRarity"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_52;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !v36 )
      goto LABEL_52;
    v42 = (UnityEngine_GameObject_o *)Instance;
    UILabel__set_text((UILabel_o *)v36, (System_String_o *)v31[2].klass, 0LL);
    monitor = (System_String_o *)v31[1].monitor;
    if ( overrideTd )
    {
      max_length = overrideTd->max_length;
      if ( !max_length )
        goto LABEL_53;
      if ( overrideTd->m_Items[0] )
        monitor = overrideTd->m_Items[0];
      if ( max_length == 1 )
LABEL_53:
        sub_1C13F88(v43, v44);
      v47 = overrideTd->m_Items[1];
      if ( v47 )
        UILabel__set_text((UILabel_o *)v36, v47, 0LL);
    }
    Instance = (DataManager_o *)System_String__IsNullOrEmpty(monitor, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject(v32, 0LL);
      if ( !Instance )
        goto LABEL_52;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    }
    if ( !Component_object )
      goto LABEL_52;
    UILabel__set_text((UILabel_o *)Component_object, monitor, 0LL);
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v65, 0LL);
    if ( !v38 )
      goto LABEL_52;
    if ( Instance )
      v48 = (System_String_o *)Instance;
    else
      v48 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)v38, v48, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v49 = LocalizationManager__Get((System_String_o *)StringLiteral_9424/*"NEXT_TOTAL_LOGIN_BONUS_DAYS"*/, 0LL);
    v63 = 100 * (treasureDevicePer / 100);
    v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63, v50, v51, v52);
    Instance = (DataManager_o *)System_String__Format(v49, v53, 0LL);
    if ( !v40 || (UILabel__set_text((UILabel_o *)v40, (System_String_o *)Instance, 0LL), !v42) )
LABEL_52:
      sub_1C13F80(Instance, v29);
    UnityEngine_GameObject__SetActive(v42, !isHideInfo, 0LL);
    if ( treasureDevicePer / 100 >= 5 )
      v54 = 5;
    else
      v54 = treasureDevicePer / 100;
    if ( treasureDevicePer < 100 || isHideInfo )
      v54 = 1;
    v64 = v54;
    v55 = UnityEngine_GameObject__GetComponent_object_(
            v32,
            (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    v56 = UnityEngine_GameObject__GetComponent_object_(
            v32,
            (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v55, 0LL, 0LL) )
    {
      v57 = BattleInformationComponent_TypeInfo;
      if ( !BattleInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInformationComponent_TypeInfo);
        v57 = BattleInformationComponent_TypeInfo;
      }
      NobleInfoAnimPrefix = v57->static_fields->NobleInfoAnimPrefix;
      v59 = System_Int32__ToString((int32_t)&v64, 0LL);
      Instance = (DataManager_o *)System_String__Concat_62967944(NobleInfoAnimPrefix, v59, 0LL);
      if ( v55 )
      {
        SimpleAnimation__Play_65106228((SimpleAnimation_o *)v55, (System_String_o *)Instance, 0LL);
        return;
      }
      goto LABEL_52;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v56, 0LL, 0LL) )
    {
      v60 = BattleInformationComponent_TypeInfo;
      if ( !BattleInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInformationComponent_TypeInfo);
        v60 = BattleInformationComponent_TypeInfo;
      }
      v61 = v60->static_fields->NobleInfoAnimPrefix;
      v62 = System_Int32__ToString((int32_t)&v64, 0LL);
      Instance = (DataManager_o *)System_String__Concat_62967944(v61, v62, 0LL);
      if ( !v56 )
        goto LABEL_52;
      UnityEngine_Animation__Play_70466396((UnityEngine_Animation_o *)v56, (System_String_o *)Instance, 0LL);
    }
  }
}


void __fastcall BattleInformationComponent__showOverGaugeMessage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_Boolean_array *isAlreadyOverKill; // x8

  isAlreadyOverKill = this->fields.isAlreadyOverKill;
  if ( !isAlreadyOverKill )
    sub_1C13F80(this, actionData);
  if ( !isAlreadyOverKill->max_length )
    sub_1C13F88(this, actionData);
  if ( isAlreadyOverKill->m_Items[4] )
    BattleInformationComponent__shiftOverMessage(this, 0, 1, v3);
  BattleInformationComponent__showOverMessageBase(this, actionData, 1, v3);
}


void __fastcall BattleInformationComponent__showOverKillMessage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_Boolean_array *isAlreadyOverKill; // x8
  const MethodInfo *v7; // x3

  isAlreadyOverKill = this->fields.isAlreadyOverKill;
  if ( !isAlreadyOverKill )
    sub_1C13F80(this, actionData);
  if ( isAlreadyOverKill->max_length <= 1 )
    sub_1C13F88(this, actionData);
  BattleInformationComponent__shiftOverMessage(this, 0, isAlreadyOverKill->m_Items[5], v3);
  BattleInformationComponent__showOverMessageBase(this, actionData, 0, v7);
}


void __fastcall BattleInformationComponent__showOverMessageBase(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        int32_t inOverType,
        const MethodInfo *method)
{
  BattleInformationComponent_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *overRoot; // x21
  UnityEngine_GameObject_o *v12; // x21
  float v13; // s0
  struct UnityEngine_GameObject_array *overObjectList; // x8
  struct UnityEngine_GameObject_array *v15; // x8
  struct UnityEngine_GameObject_array *v16; // x8
  UnityEngine_Object_o *v17; // x22
  Il2CppObject *Component_object; // x21
  UnityEngine_Behaviour_o *v19; // x23
  struct System_Boolean_array *isAlreadyOverKill; // x8
  float v21; // s0
  struct System_Single_array *v22; // x8
  struct System_String_array *v23; // x8
  struct System_String_array *overLabel; // x8
  struct System_String_array *v25; // x8
  struct System_Boolean_array *v26; // x8
  struct System_Single_array *timeStartOverKill; // x20
  float time; // s0
  struct System_String_array *v29; // x8

  v6 = this;
  if ( (byte_4BB7640 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_Animation___, actionData);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v7);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v8);
    sub_1C13D24(&StringLiteral_20943/*"img_txt_special_limit"*/, v9);
    this = (BattleInformationComponent_o *)sub_1C13D24(&StringLiteral_19764/*"fixMainSupportDeckIds"*/, v10);
    byte_4BB7640 = 1;
  }
  if ( !actionData )
    goto LABEL_70;
  this = (BattleInformationComponent_o *)v6->fields.data;
  if ( !this )
    goto LABEL_70;
  if ( !BattleData__isPlayerID((BattleData_o *)this, actionData->fields.actorId, 0LL) )
    return;
  overRoot = (UnityEngine_Object_o *)v6->fields.overRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(overRoot, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (BattleInformationComponent_o *)v6->fields.infoPosData;
    if ( !this )
      goto LABEL_70;
    v12 = v6->fields.overRoot;
    v13 = ((float (__fastcall *)(BattleInformationComponent_o *, void *))this->klass[1]._1.namespaze)(
            this,
            this->klass[1]._1.byval_arg.data);
    GameObjectExtensions__SetLocalPositionY(v12, v13, 0LL);
  }
  overObjectList = v6->fields.overObjectList;
  if ( !overObjectList )
    goto LABEL_70;
  if ( overObjectList->max_length <= inOverType )
    goto LABEL_71;
  this = (BattleInformationComponent_o *)overObjectList->m_Items[inOverType];
  if ( !this )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v15 = v6->fields.overObjectList;
  if ( !v15 )
    goto LABEL_70;
  if ( v15->max_length <= inOverType )
    goto LABEL_71;
  this = (BattleInformationComponent_o *)v15->m_Items[inOverType];
  if ( !this
    || (this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___),
        (v16 = v6->fields.overObjectList) == 0LL) )
  {
LABEL_70:
    sub_1C13F80(this, actionData);
  }
  if ( v16->max_length <= inOverType )
    goto LABEL_71;
  v17 = (UnityEngine_Object_o *)this;
  this = (BattleInformationComponent_o *)v16->m_Items[inOverType];
  if ( !this )
    goto LABEL_70;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v19 = (UnityEngine_Behaviour_o *)v17;
    if ( !v17 )
      goto LABEL_70;
    goto LABEL_29;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v19 = (UnityEngine_Behaviour_o *)Component_object;
    if ( !Component_object )
      goto LABEL_70;
LABEL_29:
    UnityEngine_Behaviour__set_enabled(v19, 0, 0LL);
    UnityEngine_Behaviour__set_enabled(v19, 1, 0LL);
  }
  isAlreadyOverKill = v6->fields.isAlreadyOverKill;
  if ( !isAlreadyOverKill )
    goto LABEL_70;
  if ( isAlreadyOverKill->max_length <= inOverType )
    goto LABEL_71;
  if ( !isAlreadyOverKill->m_Items[inOverType + 4] )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      overLabel = v6->fields.overLabel;
      if ( !overLabel )
        goto LABEL_70;
      if ( overLabel->max_length <= inOverType )
        goto LABEL_71;
      this = (BattleInformationComponent_o *)System_String__Concat_62967944(
                                               overLabel->m_Items[inOverType],
                                               (System_String_o *)StringLiteral_20943/*"img_txt_special_limit"*/,
                                               0LL);
      if ( !v17 )
        goto LABEL_70;
      this = (BattleInformationComponent_o *)SimpleAnimation__Play_65106228(
                                               (SimpleAnimation_o *)v17,
                                               (System_String_o *)this,
                                               0LL);
    }
    else
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v25 = v6->fields.overLabel;
        if ( !v25 )
          goto LABEL_70;
        if ( v25->max_length <= inOverType )
          goto LABEL_71;
        this = (BattleInformationComponent_o *)System_String__Concat_62967944(
                                                 v25->m_Items[inOverType],
                                                 (System_String_o *)StringLiteral_20943/*"img_txt_special_limit"*/,
                                                 0LL);
        if ( !Component_object )
          goto LABEL_70;
        this = (BattleInformationComponent_o *)UnityEngine_Animation__Play_70466396(
                                                 (UnityEngine_Animation_o *)Component_object,
                                                 (System_String_o *)this,
                                                 0LL);
      }
    }
    v26 = v6->fields.isAlreadyOverKill;
    if ( !v26 )
      goto LABEL_70;
    if ( v26->max_length > inOverType )
    {
      v26->m_Items[inOverType + 4] = 1;
      timeStartOverKill = v6->fields.timeStartOverKill;
      time = UnityEngine_Time__get_time(0LL);
      if ( !timeStartOverKill )
        goto LABEL_70;
      if ( timeStartOverKill->max_length > inOverType )
      {
        timeStartOverKill->m_Items[inOverType + 1] = time;
        return;
      }
    }
LABEL_71:
    sub_1C13F88(this, actionData);
  }
  v21 = UnityEngine_Time__get_time(0LL);
  v22 = v6->fields.timeStartOverKill;
  if ( !v22 )
    goto LABEL_70;
  if ( v22->max_length <= inOverType )
    goto LABEL_71;
  if ( (float)(v21 - v22->m_Items[inOverType + 1]) <= 0.2 )
    return;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v23 = v6->fields.overLabel;
    if ( !v23 )
      goto LABEL_70;
    if ( v23->max_length > inOverType )
    {
      this = (BattleInformationComponent_o *)System_String__Concat_62967944(
                                               v23->m_Items[inOverType],
                                               (System_String_o *)StringLiteral_19764/*"fixMainSupportDeckIds"*/,
                                               0LL);
      if ( !v17 )
        goto LABEL_70;
      SimpleAnimation__Play_65106228((SimpleAnimation_o *)v17, (System_String_o *)this, 0LL);
      return;
    }
    goto LABEL_71;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  v29 = v6->fields.overLabel;
  if ( !v29 )
    goto LABEL_70;
  if ( v29->max_length <= inOverType )
    goto LABEL_71;
  this = (BattleInformationComponent_o *)System_String__Concat_62967944(
                                           v29->m_Items[inOverType],
                                           (System_String_o *)StringLiteral_19764/*"fixMainSupportDeckIds"*/,
                                           0LL);
  if ( !Component_object )
    goto LABEL_70;
  UnityEngine_Animation__Play_70466396((UnityEngine_Animation_o *)Component_object, (System_String_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleInformationComponent__showSkillName(
        BattleInformationComponent_o *this,
        bool isPlayer,
        System_String_o *message,
        int32_t skillLevel,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Master_object; // x24
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  int32_t v18; // w0
  const MethodInfo *v19; // x5
  __int64 v20; // x8
  Il2CppObject *Component_object; // x22
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BB7639 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_SkillMaster___, isPlayer);
    sub_1C13D24(&DataManager_TypeInfo, v11);
    sub_1C13D24(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v12);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, v13);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v14);
    byte_4BB7639 = 1;
  }
  entity = 0LL;
  if ( !message || message->fields._stringLength < 1 )
    return 0LL;
  if ( skillInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_SkillMaster___);
    v16 = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                            skillInfo,
                            skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !Master_object )
      goto LABEL_34;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           (int32_t)v16,
           (const MethodInfo_3238670 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      v16 = entity;
      if ( !entity )
        goto LABEL_34;
      v18 = SkillEntity__GetOverWriteSkillInfoId((SkillEntity_o *)entity, 0LL);
      skillInfo = (BattleSkillInfoData_o *)BattleInformationComponent__CreateOverWriteSkillInfoObject(
                                             this,
                                             v18,
                                             message,
                                             isPlayer,
                                             skillLevel,
                                             v19);
    }
    else
    {
      skillInfo = 0LL;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)skillInfo, 0LL, 0LL) )
  {
    v20 = 136LL;
    if ( isPlayer )
      v20 = 128LL;
    skillInfo = (BattleSkillInfoData_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)this,
                                           *(UnityEngine_GameObject_o **)((char *)&this->klass + v20),
                                           this->fields.skillInfoRoot,
                                           0LL,
                                           0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)skillInfo, 0LL, 0LL);
  if ( ((unsigned __int8)v16 & 1) != 0 )
  {
    if ( skillInfo )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)skillInfo,
                           (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v16 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( ((unsigned __int8)v16 & 1) == 0 )
        goto LABEL_32;
      if ( Component_object )
      {
        if ( skillLevel >= 1 && isPlayer )
          BattleInfoMessageComponent__setSkillText(
            (BattleInfoMessageComponent_o *)Component_object,
            message,
            skillLevel,
            v23);
        else
          BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)Component_object, message, v22);
LABEL_32:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillInfo, 1, 0LL);
        return (UnityEngine_GameObject_o *)skillInfo;
      }
    }
LABEL_34:
    sub_1C13F80(v16, v17);
  }
  return (UnityEngine_GameObject_o *)skillInfo;
}


void __fastcall BattleInformationComponent__showSpecialName(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x0
  Il2CppObject *v12; // x22
  bool isPlayerID; // w0
  __int64 v14; // x8
  UnityEngine_GameObject_o *v15; // x21
  BattleInfoMessageComponent_o *v16; // x23
  UnityEngine_Object_o *saveDataMapList; // x24
  System_String_o *monitor; // x22
  System_String_o *OverrideTDName; // x0
  System_String_o *v20; // x20
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2

  if ( (byte_4BB763B & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_TreasureDvcMaster___, actionData);
    sub_1C13D24(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v5);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, v6);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4BB763B = 1;
  }
  if ( actionData )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   actionData->fields.treasureDvcId,
                   (const MethodInfo_3238624 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
        if ( !Entity )
          return;
        v12 = Entity;
        Instance = (DataManager_o *)this->fields.data;
        if ( Instance )
        {
          isPlayerID = BattleData__isPlayerID((BattleData_o *)Instance, actionData->fields.actorId, 0LL);
          v14 = 136LL;
          if ( isPlayerID )
            v14 = 128LL;
          Instance = (DataManager_o *)BaseMonoBehaviour__createObject(
                                        (BaseMonoBehaviour_o *)this,
                                        *(UnityEngine_GameObject_o **)((char *)&this->klass + v14),
                                        this->fields.skillInfoRoot,
                                        0LL,
                                        0LL);
          if ( Instance )
          {
            v15 = (UnityEngine_GameObject_o *)Instance;
            Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)Instance,
                                          (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
            if ( Instance )
            {
              v16 = (BattleInfoMessageComponent_o *)Instance;
              saveDataMapList = (UnityEngine_Object_o *)Instance->fields.saveDataMapList;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(saveDataMapList, 0LL, 0LL) )
              {
                Instance = (DataManager_o *)v16->fields.skillSprite;
                if ( !Instance )
                  goto LABEL_27;
                Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Instance,
                                              0LL);
                if ( !Instance )
                  goto LABEL_27;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
              }
              Instance = (DataManager_o *)this->fields.data;
              if ( Instance )
              {
                monitor = (System_String_o *)v12[1].monitor;
                Instance = (DataManager_o *)BattleData__getServantData(
                                              (BattleData_o *)Instance,
                                              actionData->fields.actorId,
                                              0LL);
                if ( Instance )
                {
                  OverrideTDName = BattleServantData__getOverrideTDName((BattleServantData_o *)Instance, 0LL);
                  if ( OverrideTDName )
                    v20 = OverrideTDName;
                  else
                    v20 = monitor;
                  if ( System_String__IsNullOrEmpty(v20, 0LL) )
                  {
                    UnityEngine_GameObject__SetActive(v15, 0, 0LL);
                  }
                  else
                  {
                    BattleInfoMessageComponent__setText(v16, v20, v21);
                    UnityEngine_GameObject__SetActive(v15, 1, 0LL);
                    BattleInformationComponent__AddMotionMessageObject(this, v15, v22);
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_27:
    sub_1C13F80(Instance, v10);
  }
}


void __fastcall BattleInformationComponent__showTotalDamage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleInformationComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t TotalDamage; // w0
  int v10; // w19
  int m_CancellationTokenSource; // w8
  BattleInformationComponent_o *v12; // x20
  __int64 v13; // x22
  UILabel_o *v14; // x21
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  int v20; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_4BB7631 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___, actionData);
    sub_1C13D24(&int_TypeInfo, v5);
    sub_1C13D24(&StringLiteral_21457/*"lightslategrey"*/, v6);
    sub_1C13D24(&StringLiteral_14776/*"Too many sprite tiles on Image \""*/, v7);
    this = (BattleInformationComponent_o *)sub_1C13D24(&StringLiteral_21458/*"lightsteelblue"*/, v8);
    byte_4BB7631 = 1;
  }
  if ( !actionData )
    goto LABEL_20;
  TotalDamage = BattleActionData__getTotalDamage(actionData, 0LL);
  if ( TotalDamage >= 1 )
  {
    v10 = TotalDamage;
    this = (BattleInformationComponent_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v4,
                                             v4->fields.totalLabelPrefab,
                                             v4->fields.totalMessageRoot,
                                             0LL,
                                             0LL);
    if ( !this )
      goto LABEL_20;
    this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50202144(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_2FE0620 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___);
    if ( this )
    {
      m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
      v12 = this;
      if ( m_CancellationTokenSource >= 1 )
      {
        v13 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v13 >= m_CancellationTokenSource )
            sub_1C13F88(this, actionData);
          v14 = (UILabel_o *)*((_QWORD *)&v12->fields.perf + v13);
          if ( !v14 )
            break;
          this = (BattleInformationComponent_o *)UnityEngine_Component__get_gameObject(
                                                   *((UnityEngine_Component_o **)&v12->fields.perf + v13),
                                                   0LL);
          if ( !this )
            break;
          this = (BattleInformationComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          if ( !this )
            break;
          if ( System_String__Equals_62976260((System_String_o *)this, (System_String_o *)StringLiteral_21457/*"lightslategrey"*/, 0LL) )
          {
            v20 = v10;
            v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v15, v16, v17);
            v19 = System_String__Format((System_String_o *)StringLiteral_14776/*"Too many sprite tiles on Image \""*/, v18, 0LL);
            UILabel__set_text(v14, v19, 0LL);
          }
          else
          {
            this = (BattleInformationComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v14,
                                                     0LL);
            if ( !this )
              break;
            this = (BattleInformationComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            if ( !this )
              break;
            this = (BattleInformationComponent_o *)System_String__Equals_62976260(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_21458/*"lightsteelblue"*/,
                                                     0LL);
          }
          m_CancellationTokenSource = (int)v12->fields.m_CancellationTokenSource;
          if ( (int)++v13 >= m_CancellationTokenSource )
            return;
        }
LABEL_20:
        sub_1C13F80(this, actionData);
      }
    }
  }
}