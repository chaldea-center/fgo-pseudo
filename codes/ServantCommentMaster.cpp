void __fastcall ServantCommentMaster___ctor(ServantCommentMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9D25 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E9D25 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    2,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__);
}


void __fastcall ServantCommentMaster__DefaultProfileChangeDecideAction(
        int32_t svtId,
        int32_t limitCount,
        bool isDecide,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  __int64 v30; // x20
  CommonUI_o *UserId; // x0
  __int64 v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x23
  CommonUI_o *v40; // x21
  WebViewManager_o *Instance; // x0
  UserServantCollectionEntity_o *v42; // x21
  CommonUI_o *v43; // x22
  ServantStatusDialog_EndDelegate_o *v44; // x23
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E9D32 & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, limitCount, isDecide, endAction);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22, v23);
    sub_B5D5C4(
      &Method_ServantCommentMaster___c__DisplayClass17_0__DefaultProfileChangeDecideAction_b__0__,
      v24,
      v25,
      v26);
    sub_B5D5C4(&ServantCommentMaster___c__DisplayClass17_0_TypeInfo, v27, v28, v29);
    byte_42E9D32 = 1;
  }
  entity = 0LL;
  v30 = sub_B5D694(ServantCommentMaster___c__DisplayClass17_0_TypeInfo);
  ServantCommentMaster___c__DisplayClass17_0___ctor((ServantCommentMaster___c__DisplayClass17_0_o *)v30, 0LL);
  if ( !v30 )
    goto LABEL_23;
  *(_QWORD *)(v30 + 16) = endAction;
  sub_B5D560((BattleServantConfConponent_o *)(v30 + 16), (System_Int32_array **)endAction, v33, v34, v35, v36, v37, v38);
  if ( isDecide )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = (CommonUI_o *)NetworkManager__get_UserId(0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_23;
    if ( UserServantCollectionMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, (int64_t)UserId, svtId, 0LL) )
    {
      UserId = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v40 = UserId;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( v40 )
      {
        CommonUI__maskFadein(v40, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
        UserId = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( UserId )
        {
          CommonUI__CloseConfirmDialog(UserId, 0LL);
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v42 = entity;
          v43 = (CommonUI_o *)Instance;
          v44 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v44,
            (Il2CppObject *)v30,
            Method_ServantCommentMaster___c__DisplayClass17_0__DefaultProfileChangeDecideAction_b__0__,
            0LL);
          if ( v43 )
          {
            CommonUI__OpenServantStatusDialog_18214460(v43, 33, v42, limitCount, v44, 0LL);
            return;
          }
        }
      }
LABEL_23:
      sub_B5D69C(UserId, v32);
    }
  }
  UserId = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !UserId )
    goto LABEL_23;
  CommonUI__CloseConfirmDialog_18202348(UserId, *(System_Action_o **)(v30 + 16), 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantCommentEntity_o *__fastcall ServantCommentMaster__GetEntity(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *PK; // x1

  if ( (byte_42E9D23 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__,
      svtId,
      id,
      *(_QWORD *)&priority);
    sub_B5D5C4(&ServantCommentEntity_TypeInfo, v9, v10, v11);
    byte_42E9D23 = 1;
  }
  if ( (BYTE3(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
  }
  PK = ServantCommentEntity__CreatePK(svtId, id, priority, *(const MethodInfo **)&priority);
  return (ServantCommentEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                     (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_23FB260 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__);
}


ServantCommentEntity_array *__fastcall ServantCommentMaster__GetEntityList(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t condType,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6

  return ServantCommentMaster__GetEntityList_27550020(this, svtId, -1, condType, 0, 0, v4);
}


// local variable allocation has failed, the output may be wrong!
ServantCommentEntity_array *__fastcall ServantCommentMaster__GetEntityListWithImageList(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t condType,
        bool addCheck,
        const MethodInfo *method)
{
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  System_String_array *v38; // x25
  ServantCommentEntity_o *lookup; // x0
  const MethodInfo *v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v48; // x24
  const MethodInfo *v49; // x5
  const MethodInfo *v50; // x3
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x26
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **v71; // x1
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **v78; // x26
  System_String_o *v79; // x25
  __int64 v80; // x3
  ServantCommentEntity_c *klass; // x8
  ServantCommentEntity_o *v82; // x26
  unsigned __int64 v83; // x10
  int32_t *p_offset; // x11
  __int64 v85; // x0
  __int64 v86; // x3
  ServantCommentEntity_c *v87; // x8
  ServantCommentEntity_o *v88; // x26
  unsigned __int64 v89; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v90; // x11
  __int64 v91; // x0
  ServantCommentEntity_o *v92; // x25
  __int64 v93; // x10
  System_Int32_array *ImageLimit; // x0
  __int64 v95; // x9
  char v96; // w8
  __int64 v97; // x10
  int v98; // w11
  __int64 v99; // x12
  int32_t v100; // w8
  __int64 v102; // x0
  __int64 v103; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v106; // [xsp+8h] [xbp-68h]
  int32_t v107; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v108; // [xsp+18h] [xbp-58h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-54h] BYREF

  svtIda = svtId;
  if ( (byte_42E9D27 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, svtId, imageLimitCount, *(_QWORD *)&condType);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&ServantCommentEntity_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&string___TypeInfo, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v35, v36, v37);
    byte_42E9D27 = 1;
  }
  v106 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v106,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v107 = 0;
  v108 = 1;
  v38 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
  lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&svtIda, 0LL);
  if ( !v38 )
    goto LABEL_70;
  v47 = (System_Int32_array **)lookup;
  v48 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v47 )
      {
        lookup = (ServantCommentEntity_o *)sub_B5D684(v47, v38->obj.klass->_1.element_class);
        if ( !lookup )
        {
LABEL_72:
          v103 = sub_B5D6BC(lookup);
          sub_B5D668(v103, 0LL);
        }
      }
      if ( !v38->max_length )
        goto LABEL_71;
      v38->m_Items[0] = (System_String_o *)v47;
      sub_B5D560((BattleServantConfConponent_o *)v38->m_Items, v47, v41, v42, v43, v44, v45, v46);
      lookup = (ServantCommentEntity_o *)StringLiteral_1245/*":"*/;
      if ( StringLiteral_1245/*":"*/ )
      {
        lookup = (ServantCommentEntity_o *)sub_B5D684(StringLiteral_1245/*":"*/, v38->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_72;
        v57 = (System_Int32_array **)StringLiteral_1245/*":"*/;
      }
      else
      {
        v57 = 0LL;
      }
      if ( v38->max_length <= 1 )
        goto LABEL_71;
      v38->m_Items[1] = (System_String_o *)v57;
      sub_B5D560((BattleServantConfConponent_o *)&v38->m_Items[1], v57, v51, v52, v53, v54, v55, v56);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v108, 0LL);
      v64 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = (ServantCommentEntity_o *)sub_B5D684(lookup, v38->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_72;
      }
      if ( v38->max_length <= 2 )
        goto LABEL_71;
      v38->m_Items[2] = (System_String_o *)v64;
      sub_B5D560((BattleServantConfConponent_o *)&v38->m_Items[2], v64, v58, v59, v60, v61, v62, v63);
      lookup = (ServantCommentEntity_o *)StringLiteral_1245/*":"*/;
      if ( StringLiteral_1245/*":"*/ )
      {
        lookup = (ServantCommentEntity_o *)sub_B5D684(StringLiteral_1245/*":"*/, v38->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_72;
        v71 = (System_Int32_array **)StringLiteral_1245/*":"*/;
      }
      else
      {
        v71 = 0LL;
      }
      if ( v38->max_length <= 3 )
      {
LABEL_71:
        v102 = sub_B5D6C8(lookup);
        sub_B5D668(v102, 0LL);
      }
      v38->m_Items[3] = (System_String_o *)v71;
      sub_B5D560((BattleServantConfConponent_o *)&v38->m_Items[3], v71, v65, v66, v67, v68, v69, v70);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v107, 0LL);
      v78 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = (ServantCommentEntity_o *)sub_B5D684(lookup, v38->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_72;
      }
      if ( v38->max_length <= 4 )
        goto LABEL_71;
      v38->m_Items[4] = (System_String_o *)v78;
      sub_B5D560((BattleServantConfConponent_o *)&v38->m_Items[4], v78, v72, v73, v74, v75, v76, v77);
      v79 = System_String__Concat_44657912(v38, 0LL);
      lookup = (ServantCommentEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_70;
      klass = lookup->klass;
      v82 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v83 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v83;
          p_offset += 4;
          if ( v83 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_38;
        }
        v85 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_38:
        v85 = sub_AF54C0(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL,
                v80);
      }
      if ( ((*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v85)(
              v82,
              v79,
              *(_QWORD *)(v85 + 8)) & 1) == 0 )
        break;
      lookup = (ServantCommentEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_70;
      v87 = lookup->klass;
      v88 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v89 = 0LL;
        v90 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v87->_1.interfaceOffsets->offset;
        while ( *(v90 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v89;
          v90 += 2;
          if ( v89 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_46;
        }
        v91 = (__int64)(&v87->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v90);
      }
      else
      {
LABEL_46:
        v91 = sub_AF54C0(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL,
                v86);
      }
      lookup = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v91)(
                                           v88,
                                           v79,
                                           *(_QWORD *)(v91 + 8));
      if ( !lookup )
        goto LABEL_70;
      v92 = lookup;
      v93 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&lookup->klass->_2.bitflags2 + 1) < (unsigned int)v93
        || (ServantCommentEntity_c *)lookup->klass->_2.typeHierarchy[v93 - 1] != ServantCommentEntity_TypeInfo )
      {
        goto LABEL_70;
      }
      ImageLimit = ServantCommentEntity__GetImageLimit(lookup, v40);
      if ( ImageLimit )
      {
        v95 = *(_QWORD *)&ImageLimit->max_length;
        if ( v95 )
        {
          if ( (int)v95 >= 1 )
          {
            v96 = 0;
            v97 = 8LL;
            do
            {
              v98 = *((_DWORD *)&ImageLimit->obj.klass + v97);
              v99 = v97 - 7;
              ++v97;
              v96 |= v98 > 2;
            }
            while ( v99 < (int)v95 );
            if ( (v96 & 1) != 0
              && (System_Array__IndexOf_int_(
                    ImageLimit,
                    imageLimitCount,
                    (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
            {
              if ( !condType || v92->fields.condType == condType )
                goto LABEL_12;
              if ( addCheck )
              {
                lookup = (ServantCommentEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !lookup )
                  goto LABEL_70;
                lookup = (ServantCommentEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)lookup,
                                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
                if ( !lookup )
                  goto LABEL_70;
                if ( ServantCommentAddMaster__IsEntityListCondContain(
                       (ServantCommentAddMaster_o *)lookup,
                       svtIda,
                       v108,
                       v107,
                       condType,
                       v49) )
                {
LABEL_12:
                  if ( !v48 || ServantCommentEntity__IsOpen(v92, -1, 1, v50) )
                    v48 = (EventMissionProgressRequest_Argument_ProgressData_o *)v92;
                }
              }
            }
          }
        }
      }
      ++v107;
      v38 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&svtIda, 0LL);
      v47 = (System_Int32_array **)lookup;
      if ( !v38 )
        goto LABEL_70;
    }
    if ( v48 )
    {
      lookup = (ServantCommentEntity_o *)v106;
      if ( !v106 )
        goto LABEL_70;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v106,
        v48,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
      goto LABEL_64;
    }
    if ( !v107 )
      break;
LABEL_64:
    v100 = v108;
LABEL_65:
    v107 = 0;
    v108 = v100 + 1;
    v38 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
    lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&svtIda, 0LL);
    v47 = (System_Int32_array **)lookup;
    v48 = 0LL;
    if ( !v38 )
      goto LABEL_70;
  }
  v100 = v108;
  if ( v108 == 1 )
    goto LABEL_65;
  lookup = (ServantCommentEntity_o *)v106;
  if ( !v106 )
LABEL_70:
    sub_B5D69C(lookup, v40);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v106,
                                         (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ServantCommentEntity_array *__fastcall ServantCommentMaster__GetEntityList_27550020(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t condType,
        bool addCheck,
        bool overLimit,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x24
  System_String_array *v41; // x26
  __int64 lookup; // x0
  const MethodInfo *v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x27
  EventMissionProgressRequest_Argument_ProgressData_o *v51; // x25
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x27
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x1
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x27
  System_String_o *v80; // x26
  __int64 v81; // x3
  __int64 v82; // x8
  __int64 v83; // x27
  unsigned __int64 v84; // x10
  int *v85; // x11
  __int64 v86; // x0
  __int64 v87; // x3
  __int64 v88; // x8
  __int64 v89; // x27
  unsigned __int64 v90; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v91; // x11
  __int64 v92; // x0
  int32_t v93; // w8
  ServantCommentEntity_o *v94; // x26
  __int64 v95; // x10
  System_Int32_array *ImageLimit; // x0
  const MethodInfo *v97; // x3
  __int64 v98; // x8
  __int64 v99; // x9
  const MethodInfo *v100; // x5
  __int64 v102; // x0
  __int64 v103; // x0
  int32_t v106; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v107; // [xsp+18h] [xbp-58h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-54h] BYREF

  svtIda = svtId;
  if ( (byte_42E9D26 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, svtId, imageLimitCount, *(_QWORD *)&condType);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&ServantCommentEntity_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32, v33);
    sub_B5D5C4(&string___TypeInfo, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v37, v38, v39);
    byte_42E9D26 = 1;
  }
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v106 = 0;
  v107 = 1;
  v41 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
  lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
  if ( !v41 )
    goto LABEL_74;
  v50 = (System_Int32_array **)lookup;
  v51 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v50 )
      {
        lookup = sub_B5D684(v50, v41->obj.klass->_1.element_class);
        if ( !lookup )
        {
LABEL_75:
          v103 = sub_B5D6BC(lookup);
          sub_B5D668(v103, 0LL);
        }
      }
      if ( !v41->max_length )
        goto LABEL_73;
      v41->m_Items[0] = (System_String_o *)v50;
      sub_B5D560((BattleServantConfConponent_o *)v41->m_Items, v50, v44, v45, v46, v47, v48, v49);
      lookup = StringLiteral_1245/*":"*/;
      if ( StringLiteral_1245/*":"*/ )
      {
        lookup = sub_B5D684(StringLiteral_1245/*":"*/, v41->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_75;
        v58 = (System_Int32_array **)StringLiteral_1245/*":"*/;
      }
      else
      {
        v58 = 0LL;
      }
      if ( v41->max_length <= 1 )
        goto LABEL_73;
      v41->m_Items[1] = (System_String_o *)v58;
      sub_B5D560((BattleServantConfConponent_o *)&v41->m_Items[1], v58, v52, v53, v54, v55, v56, v57);
      lookup = (__int64)System_Int32__ToString((int32_t)&v107, 0LL);
      v65 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = sub_B5D684(lookup, v41->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_75;
      }
      if ( v41->max_length <= 2 )
        goto LABEL_73;
      v41->m_Items[2] = (System_String_o *)v65;
      sub_B5D560((BattleServantConfConponent_o *)&v41->m_Items[2], v65, v59, v60, v61, v62, v63, v64);
      lookup = StringLiteral_1245/*":"*/;
      if ( StringLiteral_1245/*":"*/ )
      {
        lookup = sub_B5D684(StringLiteral_1245/*":"*/, v41->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_75;
        v72 = (System_Int32_array **)StringLiteral_1245/*":"*/;
      }
      else
      {
        v72 = 0LL;
      }
      if ( v41->max_length <= 3 )
      {
LABEL_73:
        v102 = sub_B5D6C8(lookup);
        sub_B5D668(v102, 0LL);
      }
      v41->m_Items[3] = (System_String_o *)v72;
      sub_B5D560((BattleServantConfConponent_o *)&v41->m_Items[3], v72, v66, v67, v68, v69, v70, v71);
      lookup = (__int64)System_Int32__ToString((int32_t)&v106, 0LL);
      v79 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = sub_B5D684(lookup, v41->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_75;
      }
      if ( v41->max_length <= 4 )
        goto LABEL_73;
      v41->m_Items[4] = (System_String_o *)v79;
      sub_B5D560((BattleServantConfConponent_o *)&v41->m_Items[4], v79, v73, v74, v75, v76, v77, v78);
      v80 = System_String__Concat_44657912(v41, 0LL);
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_74;
      v82 = *(_QWORD *)lookup;
      v83 = lookup;
      if ( *(_WORD *)(*(_QWORD *)lookup + 298LL) )
      {
        v84 = 0LL;
        v85 = (int *)(*(_QWORD *)(v82 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v85 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v84;
          v85 += 4;
          if ( v84 >= *(unsigned __int16 *)(*(_QWORD *)lookup + 298LL) )
            goto LABEL_29;
        }
        v86 = v82 + 16LL * *v85 + 312;
      }
      else
      {
LABEL_29:
        v86 = sub_AF54C0(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL,
                v81);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v86)(v83, v80, *(_QWORD *)(v86 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_74;
      v88 = *(_QWORD *)lookup;
      v89 = lookup;
      if ( *(_WORD *)(*(_QWORD *)lookup + 298LL) )
      {
        v90 = 0LL;
        v91 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v88 + 176) + 8LL);
        while ( *(v91 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v90;
          v91 += 2;
          if ( v90 >= *(unsigned __int16 *)(*(_QWORD *)lookup + 298LL) )
            goto LABEL_37;
        }
        v92 = v88 + 16LL * (*(_DWORD *)v91 + 2) + 312;
      }
      else
      {
LABEL_37:
        v92 = sub_AF54C0(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL,
                v87);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v92)(v89, v80, *(_QWORD *)(v92 + 8));
      if ( !lookup )
        goto LABEL_74;
      v94 = (ServantCommentEntity_o *)lookup;
      v95 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)lookup + 300LL) < (unsigned int)v95
        || *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)lookup + 200LL) + 8 * v95 - 8) != ServantCommentEntity_TypeInfo )
      {
        goto LABEL_74;
      }
      ImageLimit = ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)lookup, v43);
      if ( imageLimitCount != -1 )
      {
        if ( ImageLimit )
        {
          v98 = *(_QWORD *)&ImageLimit->max_length;
          if ( v98 )
          {
            if ( overLimit )
            {
              if ( (int)v98 < 1 )
                goto LABEL_68;
              v99 = 0LL;
              while ( ImageLimit->m_Items[v99 + 1] > imageLimitCount )
              {
                if ( (int)++v99 >= (int)v98 )
                  goto LABEL_68;
              }
            }
            else if ( (System_Array__IndexOf_int_(
                         ImageLimit,
                         imageLimitCount,
                         (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___) & 0x80000000) != 0 )
            {
              goto LABEL_68;
            }
          }
        }
      }
      if ( !condType || v94->fields.condType == condType )
        goto LABEL_62;
      if ( addCheck )
      {
        lookup = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lookup )
          goto LABEL_74;
        lookup = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)lookup,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
        if ( !lookup )
          goto LABEL_74;
        if ( ServantCommentAddMaster__IsEntityListCondContain(
               (ServantCommentAddMaster_o *)lookup,
               svtIda,
               v107,
               v106,
               condType,
               v100) )
        {
LABEL_62:
          if ( !v51 || ServantCommentEntity__IsOpen(v94, -1, 1, v97) )
            v51 = (EventMissionProgressRequest_Argument_ProgressData_o *)v94;
        }
      }
LABEL_68:
      ++v106;
      v41 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
      lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
      v50 = (System_Int32_array **)lookup;
      if ( !v41 )
        goto LABEL_74;
    }
    if ( v51 )
    {
      if ( !v40 )
        goto LABEL_74;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v40,
        v51,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
      goto LABEL_42;
    }
    if ( !v106 )
      break;
LABEL_42:
    v93 = v107;
LABEL_43:
    v106 = 0;
    v107 = v93 + 1;
    v41 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
    lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
    v50 = (System_Int32_array **)lookup;
    v51 = 0LL;
    if ( !v41 )
      goto LABEL_74;
  }
  v93 = v107;
  if ( v107 == 1 )
    goto LABEL_43;
  if ( !v40 )
LABEL_74:
    sub_B5D69C(lookup, v43);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v40,
                                         (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentMaster__GetNewList(
        ServantCommentMaster_o *this,
        System_Int32_array **idList,
        System_Int32_array **priorityList,
        int32_t svtId,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_int__o *v42; // x23
  System_Collections_Generic_List_int__o *v43; // x22
  __int64 Instance; // x0
  const MethodInfo *v45; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x25
  int32_t v47; // w24
  System_String_array *v48; // x26
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x27
  ServantCommentEntity_o *v56; // x25
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x1
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x27
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x1
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x27
  System_String_o *v85; // x26
  __int64 v86; // x3
  __int64 v87; // x8
  __int64 v88; // x27
  unsigned __int64 v89; // x10
  int *v90; // x11
  __int64 v91; // x0
  __int64 v92; // x3
  __int64 v93; // x8
  __int64 v94; // x27
  unsigned __int64 v95; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v96; // x11
  __int64 v97; // x0
  int v98; // w8
  ServantCommentEntity_o *v99; // x26
  __int64 v100; // x10
  const MethodInfo *v101; // x3
  __int64 v102; // x8
  int v103; // w8
  System_Int32_array **v104; // x0
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Int32_array **v111; // x0
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  __int64 v119; // x0
  __int64 v120; // x0
  BattleServantConfConponent_o *v121; // [xsp+0h] [xbp-80h]
  BattleServantConfConponent_o *v122; // [xsp+8h] [xbp-78h]
  int32_t ServantLimitCountSealAfter; // [xsp+14h] [xbp-6Ch]
  __int64 v124; // [xsp+18h] [xbp-68h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+20h] [xbp-60h] BYREF
  int32_t svtIda; // [xsp+2Ch] [xbp-54h] BYREF

  svtIda = svtId;
  if ( (byte_42E9D2C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantLimitImageMaster___,
      (_DWORD)idList,
      (_DWORD)priorityList,
      *(_QWORD *)&svtId);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&NetworkManager_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&ServantCommentEntity_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34, v35);
    sub_B5D5C4(&string___TypeInfo, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v39, v40, v41);
    byte_42E9D2C = 1;
  }
  v124 = 0LL;
  entity = 0LL;
  v42 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v43 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v43,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_79;
  Instance = UserServantCollectionMaster__TryGetEntity(
               MasterData_WarQuestSelectionMaster,
               &entity,
               Instance,
               svtId,
               0LL);
  ServantLimitCountSealAfter = 1;
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_79;
    v47 = entity->fields.maxLimitCount ? entity->fields.maxLimitCount : 1;
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_79;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Instance )
      goto LABEL_79;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   svtIda,
                                   v47,
                                   0LL);
  }
  v121 = (BattleServantConfConponent_o *)priorityList;
  v122 = (BattleServantConfConponent_o *)idList;
  v124 = 0x100000000LL;
  v48 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
  Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
  if ( !v48 )
    goto LABEL_79;
  v55 = (System_Int32_array **)Instance;
  v56 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v55 )
      {
        Instance = sub_B5D684(v55, v48->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_80:
          v120 = sub_B5D6BC(Instance);
          sub_B5D668(v120, 0LL);
        }
      }
      if ( !v48->max_length )
        goto LABEL_78;
      v48->m_Items[0] = (System_String_o *)v55;
      sub_B5D560((BattleServantConfConponent_o *)v48->m_Items, v55, v49, v50, v51, v52, v53, v54);
      Instance = StringLiteral_1245/*":"*/;
      if ( StringLiteral_1245/*":"*/ )
      {
        Instance = sub_B5D684(StringLiteral_1245/*":"*/, v48->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_80;
        v63 = (System_Int32_array **)StringLiteral_1245/*":"*/;
      }
      else
      {
        v63 = 0LL;
      }
      if ( v48->max_length <= 1 )
        goto LABEL_78;
      v48->m_Items[1] = (System_String_o *)v63;
      sub_B5D560((BattleServantConfConponent_o *)&v48->m_Items[1], v63, v57, v58, v59, v60, v61, v62);
      Instance = (__int64)System_Int32__ToString((int32_t)&v124 + 4, 0LL);
      v70 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = sub_B5D684(Instance, v48->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_80;
      }
      if ( v48->max_length <= 2 )
        goto LABEL_78;
      v48->m_Items[2] = (System_String_o *)v70;
      sub_B5D560((BattleServantConfConponent_o *)&v48->m_Items[2], v70, v64, v65, v66, v67, v68, v69);
      Instance = StringLiteral_1245/*":"*/;
      if ( StringLiteral_1245/*":"*/ )
      {
        Instance = sub_B5D684(StringLiteral_1245/*":"*/, v48->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_80;
        v77 = (System_Int32_array **)StringLiteral_1245/*":"*/;
      }
      else
      {
        v77 = 0LL;
      }
      if ( v48->max_length <= 3 )
      {
LABEL_78:
        v119 = sub_B5D6C8(Instance);
        sub_B5D668(v119, 0LL);
      }
      v48->m_Items[3] = (System_String_o *)v77;
      sub_B5D560((BattleServantConfConponent_o *)&v48->m_Items[3], v77, v71, v72, v73, v74, v75, v76);
      Instance = (__int64)System_Int32__ToString((int32_t)&v124, 0LL);
      v84 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = sub_B5D684(Instance, v48->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_80;
      }
      if ( v48->max_length <= 4 )
        goto LABEL_78;
      v48->m_Items[4] = (System_String_o *)v84;
      sub_B5D560((BattleServantConfConponent_o *)&v48->m_Items[4], v84, v78, v79, v80, v81, v82, v83);
      v85 = System_String__Concat_44657912(v48, 0LL);
      Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        goto LABEL_79;
      v87 = *(_QWORD *)Instance;
      v88 = Instance;
      if ( *(_WORD *)(*(_QWORD *)Instance + 298LL) )
      {
        v89 = 0LL;
        v90 = (int *)(*(_QWORD *)(v87 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v90 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v89;
          v90 += 4;
          if ( v89 >= *(unsigned __int16 *)(*(_QWORD *)Instance + 298LL) )
            goto LABEL_42;
        }
        v91 = v87 + 16LL * *v90 + 312;
      }
      else
      {
LABEL_42:
        v91 = sub_AF54C0(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL,
                v86);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v91)(v88, v85, *(_QWORD *)(v91 + 8));
      if ( (Instance & 1) == 0 )
        break;
      Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( Instance )
      {
        v93 = *(_QWORD *)Instance;
        v94 = Instance;
        if ( *(_WORD *)(*(_QWORD *)Instance + 298LL) )
        {
          v95 = 0LL;
          v96 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v93 + 176)
                                                                                            + 8LL);
          while ( *(v96 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            ++v95;
            v96 += 2;
            if ( v95 >= *(unsigned __int16 *)(*(_QWORD *)Instance + 298LL) )
              goto LABEL_50;
          }
          v97 = v93 + 16LL * (*(_DWORD *)v96 + 2) + 312;
        }
        else
        {
LABEL_50:
          v97 = sub_AF54C0(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL,
                  v92);
        }
        Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v97)(v94, v85, *(_QWORD *)(v97 + 8));
        if ( Instance )
        {
          v99 = (ServantCommentEntity_o *)Instance;
          v100 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v100
            && *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v100 - 8) == ServantCommentEntity_TypeInfo )
          {
            Instance = (__int64)ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)Instance, v45);
            if ( !Instance )
              goto LABEL_69;
            v102 = *(_QWORD *)(Instance + 24);
            if ( !v102 )
              goto LABEL_69;
            if ( !(_DWORD)v102 )
              goto LABEL_78;
            v103 = *(_DWORD *)(Instance + 32);
            if ( v103 < 3 || ServantLimitCountSealAfter >= v103 )
            {
LABEL_69:
              if ( ServantCommentEntity__IsOpen(v99, -1, 1, v101) )
                v56 = v99;
            }
            LODWORD(v124) = v124 + 1;
            v48 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
            Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
            v55 = (System_Int32_array **)Instance;
            if ( v48 )
              continue;
          }
        }
      }
      goto LABEL_79;
    }
    if ( v56 )
    {
      Instance = ServantCommentEntity__IsNew(v56, v45);
      if ( (Instance & 1) != 0 )
      {
        if ( !v42 )
          goto LABEL_79;
        System_Collections_Generic_List_int___Add(
          v42,
          v56->fields.id,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        if ( !v43 )
          goto LABEL_79;
        System_Collections_Generic_List_int___Add(
          v43,
          v56->fields.priority,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      goto LABEL_57;
    }
    if ( !(_DWORD)v124 )
      break;
LABEL_57:
    v98 = HIDWORD(v124);
LABEL_58:
    LODWORD(v124) = 0;
    HIDWORD(v124) = v98 + 1;
    v48 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
    Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
    v55 = (System_Int32_array **)Instance;
    v56 = 0LL;
    if ( !v48 )
      goto LABEL_79;
  }
  v98 = HIDWORD(v124);
  if ( HIDWORD(v124) == 1 )
    goto LABEL_58;
  if ( !v42
    || (v104 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                        v42,
                                        (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__),
        v122->klass = (BattleServantConfConponent_c *)v104,
        sub_B5D560(v122, v104, v105, v106, v107, v108, v109, v110),
        !v43)
    || (v111 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                        v43,
                                        (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__),
        v121->klass = (BattleServantConfConponent_c *)v111,
        sub_B5D560(v121, v111, v112, v113, v114, v115, v116, v117),
        !v122->klass) )
  {
LABEL_79:
    sub_B5D69C(Instance, v45);
  }
  return LODWORD(v122->klass->_1.namespaze) != 0;
}


System_Collections_Generic_List_ServantCommentEntity__o *__fastcall ServantCommentMaster__GetNewProfileEntities(
        ServantCommentMaster_o *this,
        int32_t svtId,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  const MethodInfo *v25; // x4
  __int64 NewList; // x0
  __int64 v27; // x1
  System_Int32_array *v28; // x8
  unsigned __int64 v29; // x23
  System_String_array *v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x22
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x22
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x22
  System_String_o *v66; // x21
  __int64 v67; // x3
  __int64 v68; // x8
  __int64 v69; // x22
  unsigned __int64 v70; // x10
  int *v71; // x11
  __int64 v72; // x0
  __int64 v73; // x3
  __int64 v74; // x8
  __int64 v75; // x22
  unsigned __int64 v76; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v77; // x11
  __int64 v78; // x0
  __int64 v79; // x10
  __int64 v81; // x0
  __int64 v82; // x0
  System_Int32_array *priorityList; // [xsp+8h] [xbp-68h] BYREF
  System_Int32_array *idList; // [xsp+10h] [xbp-60h] BYREF
  int32_t v85; // [xsp+1Ch] [xbp-54h] BYREF

  v85 = svtId;
  if ( (byte_42E9D2F & 1) == 0 )
  {
    sub_B5D5C4(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      svtId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&ServantCommentEntity_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&string___TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v21, v22, v23);
    byte_42E9D2F = 1;
  }
  priorityList = 0LL;
  idList = 0LL;
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  NewList = ServantCommentMaster__GetNewList(this, &idList, &priorityList, svtId, v25);
  if ( (NewList & 1) != 0 )
  {
    v28 = idList;
    if ( !idList )
LABEL_52:
      sub_B5D69C(NewList, v27);
    v29 = 0LL;
    while ( (__int64)v29 < (int)v28->max_length )
    {
      v30 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
      NewList = (__int64)System_Int32__ToString((int32_t)&v85, 0LL);
      if ( !v30 )
        goto LABEL_52;
      v37 = (System_Int32_array **)NewList;
      if ( NewList )
      {
        NewList = sub_B5D684(NewList, v30->obj.klass->_1.element_class);
        if ( !NewList )
        {
LABEL_55:
          v82 = sub_B5D6BC(NewList);
          sub_B5D668(v82, 0LL);
        }
      }
      if ( !v30->max_length )
        goto LABEL_54;
      v30->m_Items[0] = (System_String_o *)v37;
      sub_B5D560((BattleServantConfConponent_o *)v30->m_Items, v37, v31, v32, v33, v34, v35, v36);
      NewList = StringLiteral_1245/*":"*/;
      if ( StringLiteral_1245/*":"*/ )
      {
        NewList = sub_B5D684(StringLiteral_1245/*":"*/, v30->obj.klass->_1.element_class);
        if ( !NewList )
          goto LABEL_55;
        v44 = (System_Int32_array **)StringLiteral_1245/*":"*/;
      }
      else
      {
        v44 = 0LL;
      }
      if ( v30->max_length <= 1 )
        goto LABEL_54;
      v30->m_Items[1] = (System_String_o *)v44;
      sub_B5D560((BattleServantConfConponent_o *)&v30->m_Items[1], v44, v38, v39, v40, v41, v42, v43);
      if ( !idList )
        goto LABEL_52;
      if ( v29 >= idList->max_length )
        goto LABEL_54;
      NewList = (__int64)System_Int32__ToString((int)idList + 4 * (int)v29 + 32, 0LL);
      v51 = (System_Int32_array **)NewList;
      if ( NewList )
      {
        NewList = sub_B5D684(NewList, v30->obj.klass->_1.element_class);
        if ( !NewList )
          goto LABEL_55;
      }
      if ( v30->max_length <= 2 )
        goto LABEL_54;
      v30->m_Items[2] = (System_String_o *)v51;
      sub_B5D560((BattleServantConfConponent_o *)&v30->m_Items[2], v51, v45, v46, v47, v48, v49, v50);
      NewList = StringLiteral_1245/*":"*/;
      if ( StringLiteral_1245/*":"*/ )
      {
        NewList = sub_B5D684(StringLiteral_1245/*":"*/, v30->obj.klass->_1.element_class);
        if ( !NewList )
          goto LABEL_55;
        v58 = (System_Int32_array **)StringLiteral_1245/*":"*/;
      }
      else
      {
        v58 = 0LL;
      }
      if ( v30->max_length <= 3 )
        goto LABEL_54;
      v30->m_Items[3] = (System_String_o *)v58;
      sub_B5D560((BattleServantConfConponent_o *)&v30->m_Items[3], v58, v52, v53, v54, v55, v56, v57);
      if ( !priorityList )
        goto LABEL_52;
      if ( v29 >= priorityList->max_length )
      {
LABEL_54:
        v81 = sub_B5D6C8(NewList);
        sub_B5D668(v81, 0LL);
      }
      NewList = (__int64)System_Int32__ToString((int)priorityList + 4 * (int)v29 + 32, 0LL);
      v65 = (System_Int32_array **)NewList;
      if ( NewList )
      {
        NewList = sub_B5D684(NewList, v30->obj.klass->_1.element_class);
        if ( !NewList )
          goto LABEL_55;
      }
      if ( v30->max_length <= 4 )
        goto LABEL_54;
      v30->m_Items[4] = (System_String_o *)v65;
      sub_B5D560((BattleServantConfConponent_o *)&v30->m_Items[4], v65, v59, v60, v61, v62, v63, v64);
      v66 = System_String__Concat_44657912(v30, 0LL);
      NewList = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( NewList )
      {
        v68 = *(_QWORD *)NewList;
        v69 = NewList;
        if ( *(_WORD *)(*(_QWORD *)NewList + 298LL) )
        {
          v70 = 0LL;
          v71 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
          while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v71 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            ++v70;
            v71 += 4;
            if ( v70 >= *(unsigned __int16 *)(*(_QWORD *)NewList + 298LL) )
              goto LABEL_36;
          }
          v72 = v68 + 16LL * *v71 + 312;
        }
        else
        {
LABEL_36:
          v72 = sub_AF54C0(
                  NewList,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  0LL,
                  v67);
        }
        NewList = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v72)(v69, v66, *(_QWORD *)(v72 + 8));
        if ( (NewList & 1) != 0 )
        {
          NewList = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
          if ( !NewList )
            goto LABEL_52;
          v74 = *(_QWORD *)NewList;
          v75 = NewList;
          if ( *(_WORD *)(*(_QWORD *)NewList + 298LL) )
          {
            v76 = 0LL;
            v77 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v74 + 176)
                                                                                              + 8LL);
            while ( *(v77 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
            {
              ++v76;
              v77 += 2;
              if ( v76 >= *(unsigned __int16 *)(*(_QWORD *)NewList + 298LL) )
                goto LABEL_44;
            }
            v78 = v74 + 16LL * (*(_DWORD *)v77 + 2) + 312;
          }
          else
          {
LABEL_44:
            v78 = sub_AF54C0(
                    NewList,
                    System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                    2LL,
                    v73);
          }
          NewList = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v78)(v75, v66, *(_QWORD *)(v78 + 8));
          if ( NewList )
          {
            v27 = NewList;
            v79 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)NewList + 300LL) >= (unsigned int)v79
              && *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)NewList + 200LL) + 8 * v79 - 8) == ServantCommentEntity_TypeInfo )
            {
              if ( !v24 )
                goto LABEL_52;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v24,
                (EventMissionProgressRequest_Argument_ProgressData_o *)NewList,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
            }
          }
        }
        v28 = idList;
        ++v29;
        if ( idList )
          continue;
      }
      goto LABEL_52;
    }
  }
  return (System_Collections_Generic_List_ServantCommentEntity__o *)v24;
}


ServantCommentEntity_array *__fastcall ServantCommentMaster__GetOpenEntitiyList(
        ServantCommentMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  System_String_array *v27; // x22
  __int64 lookup; // x0
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x23
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x23
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x23
  System_String_o *v66; // x22
  __int64 v67; // x3
  __int64 v68; // x8
  __int64 v69; // x23
  unsigned __int64 v70; // x10
  int *v71; // x11
  __int64 v72; // x0
  __int64 v73; // x3
  __int64 v74; // x8
  __int64 v75; // x23
  unsigned __int64 v76; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v77; // x11
  __int64 v78; // x0
  int v79; // w8
  const MethodInfo *v80; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v81; // x22
  __int64 v82; // x10
  __int64 v84; // x0
  __int64 v85; // x0
  int v86; // [xsp+4h] [xbp-5Ch] BYREF
  int v87; // [xsp+8h] [xbp-58h] BYREF
  int32_t v88; // [xsp+Ch] [xbp-54h] BYREF

  v88 = svtId;
  if ( (byte_42E9D28 & 1) == 0 )
  {
    sub_B5D5C4(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      svtId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&ServantCommentEntity_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&string___TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v23, v24, v25);
    byte_42E9D28 = 1;
  }
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v86 = 0;
  v87 = 1;
  v27 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
  lookup = (__int64)System_Int32__ToString((int32_t)&v88, 0LL);
  if ( !v27 )
    goto LABEL_57;
  v36 = (System_Int32_array **)lookup;
  v37 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v36 )
      {
        lookup = sub_B5D684(v36, v27->obj.klass->_1.element_class);
        if ( !lookup )
        {
LABEL_58:
          v85 = sub_B5D6BC(lookup);
          sub_B5D668(v85, 0LL);
        }
      }
      if ( !v27->max_length )
        goto LABEL_56;
      v27->m_Items[0] = (System_String_o *)v36;
      sub_B5D560((BattleServantConfConponent_o *)v27->m_Items, v36, v30, v31, v32, v33, v34, v35);
      lookup = StringLiteral_1245/*":"*/;
      if ( StringLiteral_1245/*":"*/ )
      {
        lookup = sub_B5D684(StringLiteral_1245/*":"*/, v27->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_58;
        v44 = (System_Int32_array **)StringLiteral_1245/*":"*/;
      }
      else
      {
        v44 = 0LL;
      }
      if ( v27->max_length <= 1 )
        goto LABEL_56;
      v27->m_Items[1] = (System_String_o *)v44;
      sub_B5D560((BattleServantConfConponent_o *)&v27->m_Items[1], v44, v38, v39, v40, v41, v42, v43);
      lookup = (__int64)System_Int32__ToString((int32_t)&v87, 0LL);
      v51 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = sub_B5D684(lookup, v27->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_58;
      }
      if ( v27->max_length <= 2 )
        goto LABEL_56;
      v27->m_Items[2] = (System_String_o *)v51;
      sub_B5D560((BattleServantConfConponent_o *)&v27->m_Items[2], v51, v45, v46, v47, v48, v49, v50);
      lookup = StringLiteral_1245/*":"*/;
      if ( StringLiteral_1245/*":"*/ )
      {
        lookup = sub_B5D684(StringLiteral_1245/*":"*/, v27->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_58;
        v58 = (System_Int32_array **)StringLiteral_1245/*":"*/;
      }
      else
      {
        v58 = 0LL;
      }
      if ( v27->max_length <= 3 )
      {
LABEL_56:
        v84 = sub_B5D6C8(lookup);
        sub_B5D668(v84, 0LL);
      }
      v27->m_Items[3] = (System_String_o *)v58;
      sub_B5D560((BattleServantConfConponent_o *)&v27->m_Items[3], v58, v52, v53, v54, v55, v56, v57);
      lookup = (__int64)System_Int32__ToString((int32_t)&v86, 0LL);
      v65 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = sub_B5D684(lookup, v27->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_58;
      }
      if ( v27->max_length <= 4 )
        goto LABEL_56;
      v27->m_Items[4] = (System_String_o *)v65;
      sub_B5D560((BattleServantConfConponent_o *)&v27->m_Items[4], v65, v59, v60, v61, v62, v63, v64);
      v66 = System_String__Concat_44657912(v27, 0LL);
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_57;
      v68 = *(_QWORD *)lookup;
      v69 = lookup;
      if ( *(_WORD *)(*(_QWORD *)lookup + 298LL) )
      {
        v70 = 0LL;
        v71 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v71 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v70;
          v71 += 4;
          if ( v70 >= *(unsigned __int16 *)(*(_QWORD *)lookup + 298LL) )
            goto LABEL_29;
        }
        v72 = v68 + 16LL * *v71 + 312;
      }
      else
      {
LABEL_29:
        v72 = sub_AF54C0(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL,
                v67);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v72)(v69, v66, *(_QWORD *)(v72 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( lookup )
      {
        v74 = *(_QWORD *)lookup;
        v75 = lookup;
        if ( *(_WORD *)(*(_QWORD *)lookup + 298LL) )
        {
          v76 = 0LL;
          v77 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v74 + 176)
                                                                                            + 8LL);
          while ( *(v77 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            ++v76;
            v77 += 2;
            if ( v76 >= *(unsigned __int16 *)(*(_QWORD *)lookup + 298LL) )
              goto LABEL_37;
          }
          v78 = v74 + 16LL * (*(_DWORD *)v77 + 2) + 312;
        }
        else
        {
LABEL_37:
          v78 = sub_AF54C0(
                  lookup,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL,
                  v73);
        }
        lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v78)(v75, v66, *(_QWORD *)(v78 + 8));
        if ( lookup )
        {
          v81 = (EventMissionProgressRequest_Argument_ProgressData_o *)lookup;
          v82 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)lookup + 300LL) >= (unsigned int)v82
            && *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)lookup + 200LL) + 8 * v82 - 8) == ServantCommentEntity_TypeInfo )
          {
            if ( ServantCommentEntity__IsOpen((ServantCommentEntity_o *)lookup, -1, 1, v80) )
              v37 = v81;
            ++v86;
            v27 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
            lookup = (__int64)System_Int32__ToString((int32_t)&v88, 0LL);
            v36 = (System_Int32_array **)lookup;
            if ( v27 )
              continue;
          }
        }
      }
      goto LABEL_57;
    }
    if ( v37 )
    {
      if ( !v26 )
        goto LABEL_57;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v26,
        v37,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
      goto LABEL_42;
    }
    if ( !v86 )
      break;
LABEL_42:
    v79 = v87;
LABEL_43:
    v86 = 0;
    v87 = v79 + 1;
    v27 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
    lookup = (__int64)System_Int32__ToString((int32_t)&v88, 0LL);
    v36 = (System_Int32_array **)lookup;
    v37 = 0LL;
    if ( !v27 )
      goto LABEL_57;
  }
  v79 = v87;
  if ( v87 == 1 )
    goto LABEL_43;
  if ( !v26 )
LABEL_57:
    sub_B5D69C(lookup, v29);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v26,
                                         (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall ServantCommentMaster__GetServantListWithQuestClear(
        ServantCommentMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  DataManager_o *Instance; // x0
  ServantCommentEntity_c *v42; // x1
  ServantCommentAddMaster_o *MasterData_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_int__o *v44; // x23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  int32_t Count; // w0
  int32_t v47; // w26
  int32_t v48; // w27
  ServantCommentEntity_o *v49; // x28
  __int64 v50; // x9
  int32_t m_CachedPtr; // w24
  System_Int32_array *ImageLimit; // x0
  const MethodInfo *v53; // x3
  System_Int32_array *v54; // x22
  int64_t UserId; // x2
  int32_t ServantLimitCountSealAfter; // w0
  const MethodInfo *v57; // x3
  const MethodInfo *v58; // x7
  ServantCommentMaster_o *v60; // x0
  int32_t v61; // w1
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  ServantLimitImageMaster_o *v64; // [xsp+8h] [xbp-78h]
  UserServantCollectionMaster_o *v65; // [xsp+10h] [xbp-70h]
  UserServantCollectionEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_42E9D2D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, questId, questPhase, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&NetworkManager_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&ServantCommentEntity_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38, v39, v40);
    byte_42E9D2D = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_WarQuestSelectionMaster = (ServantCommentAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      Instance,
                                                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
  v44 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v44,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v64 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             Instance,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
        v65 = (UserServantCollectionMaster_o *)Instance,
        !list) )
  {
LABEL_32:
    sub_B5D69C(Instance, v42);
  }
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return v44;
  v47 = Count;
  v48 = 0;
  while ( 1 )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                  v48,
                                  (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_32;
    v42 = ServantCommentEntity_TypeInfo;
    v49 = (ServantCommentEntity_o *)Instance;
    v50 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v50
      || (ServantCommentEntity_c *)Instance->klass->_2.typeHierarchy[v50 - 1] != ServantCommentEntity_TypeInfo )
    {
      break;
    }
    if ( !v44 )
      goto LABEL_32;
    m_CachedPtr = Instance->fields.m_CachedPtr;
    if ( !System_Collections_Generic_List_int___Contains(
            v44,
            m_CachedPtr,
            (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      ImageLimit = ServantCommentEntity__GetImageLimit(v49, (const MethodInfo *)v42);
      if ( !ImageLimit )
        goto LABEL_27;
      v54 = ImageLimit;
      if ( !*(_QWORD *)&ImageLimit->max_length )
        goto LABEL_27;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      Instance = (DataManager_o *)v65;
      if ( !v65 )
        goto LABEL_32;
      Instance = (DataManager_o *)UserServantCollectionMaster__TryGetEntity(v65, &entity, UserId, m_CachedPtr, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_27;
      if ( !entity )
        goto LABEL_32;
      Instance = (DataManager_o *)v64;
      if ( !v64 )
        goto LABEL_32;
      ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                     v64,
                                     m_CachedPtr,
                                     entity->fields.maxLimitCount,
                                     0LL);
      if ( (System_Array__IndexOf_int_(
              v54,
              ServantLimitCountSealAfter,
              (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
      {
LABEL_27:
        if ( ServantCommentEntity__IsOnlyOpenQuestCond(v49, questId, questPhase, v53) )
          goto LABEL_28;
        Instance = (DataManager_o *)MasterData_WarQuestSelectionMaster;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_32;
        if ( ServantCommentAddMaster__IsOnlyOpenQuestCond(
               MasterData_WarQuestSelectionMaster,
               m_CachedPtr,
               v49->fields.id,
               v49->fields.priority,
               1,
               questId,
               questPhase,
               v58) )
        {
LABEL_28:
          if ( ServantCommentEntity__IsOpen(v49, -1, 1, v57) )
            System_Collections_Generic_List_int___Add(
              v44,
              v49->fields.svtId,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
    }
    if ( ++v48 >= v47 )
      return v44;
  }
  v60 = (ServantCommentMaster_o *)sub_B5D990(Instance);
  return (System_Collections_Generic_List_int__o *)ServantCommentMaster__GetServantListWithQuestClearAndImageLimit(
                                                     v60,
                                                     v61,
                                                     v62,
                                                     v63);
}


ServantCommentEntity_array *__fastcall ServantCommentMaster__GetServantListWithQuestClearAndImageLimit(
        ServantCommentMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  ServantCommentAddMaster_o *Master_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x23
  __int64 v33; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v35; // w24
  int32_t v36; // w25
  const MethodInfo *v37; // x3
  ServantCommentEntity_o *v38; // x26
  __int64 v39; // x9
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x7
  const MethodInfo *v42; // x1
  bool IsOpen; // w27
  ServantCommentMaster_o *v45; // x0
  int32_t v46; // w1
  const MethodInfo *v47; // x2

  if ( (byte_42E9D2E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      questId,
      questPhase,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantCommentAddMaster___, v10, v11, v12);
    sub_B5D5C4(&DataManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&ServantCommentEntity_TypeInfo, v28, v29, v30);
    byte_42E9D2E = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantCommentAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list < 1 )
  {
LABEL_24:
    if ( v32 )
      return (ServantCommentEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v32,
                                             (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
LABEL_26:
    sub_B5D69C(list, v33);
  }
  v35 = (int)list;
  v36 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_26;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v36,
                                                                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_26;
    v38 = (ServantCommentEntity_o *)list;
    v39 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v39
      || (ServantCommentEntity_c *)list->klass->_2.typeHierarchy[v39 - 1] != ServantCommentEntity_TypeInfo )
    {
      break;
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)ServantCommentEntity__IsOnlyOpenQuestCond(
                                                                                         (ServantCommentEntity_o *)list,
                                                                                         questId,
                                                                                         questPhase,
                                                                                         v37);
    if ( ((unsigned __int8)list & 1) != 0 )
      goto LABEL_16;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_26;
    if ( ServantCommentAddMaster__IsOnlyOpenQuestCond(
           Master_WarQuestSelectionMaster,
           v38->fields.svtId,
           v38->fields.id,
           v38->fields.priority,
           1,
           questId,
           questPhase,
           v41) )
    {
LABEL_16:
      IsOpen = ServantCommentEntity__IsOpen(v38, -1, 1, v40);
    }
    else
    {
      IsOpen = 0;
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)ServantCommentEntity__GetImageLimit(
                                                                                         v38,
                                                                                         v42);
    if ( list && IsOpen && list->fields._syncRoot )
    {
      if ( !v32 )
        goto LABEL_26;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v32,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    }
    if ( ++v36 >= v35 )
      goto LABEL_24;
  }
  v45 = (ServantCommentMaster_o *)sub_B5D990(list);
  return (ServantCommentEntity_array *)ServantCommentMaster__GetNewProfileEntities(v45, v46, v47);
}


bool __fastcall ServantCommentMaster__IsNew(ServantCommentMaster_o *this, int32_t svtId, const MethodInfo *method)
{
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
  System_String_array *v14; // x21
  ServantCommentEntity_o *lookup; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x22
  ServantCommentEntity_o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x22
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x22
  System_String_o *v53; // x21
  __int64 v54; // x3
  ServantCommentEntity_c *klass; // x8
  ServantCommentEntity_o *v56; // x22
  unsigned __int64 v57; // x10
  int32_t *p_offset; // x11
  __int64 v59; // x0
  const MethodInfo *v60; // x1
  __int64 v61; // x3
  ServantCommentEntity_c *v62; // x8
  ServantCommentEntity_o *v63; // x22
  unsigned __int64 v64; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v65; // x11
  __int64 v66; // x0
  int v67; // w8
  const MethodInfo *v68; // x3
  ServantCommentEntity_o *v69; // x21
  __int64 v70; // x10
  __int64 v72; // x0
  __int64 v73; // x0
  int v74; // [xsp+4h] [xbp-4Ch] BYREF
  int v75; // [xsp+8h] [xbp-48h] BYREF
  int32_t v76; // [xsp+Ch] [xbp-44h] BYREF

  v76 = svtId;
  if ( (byte_42E9D2B & 1) == 0 )
  {
    sub_B5D5C4(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      svtId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&ServantCommentEntity_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&string___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v11, v12, v13);
    byte_42E9D2B = 1;
  }
  v74 = 0;
  v75 = 1;
  v14 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
  lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v76, 0LL);
  if ( !v14 )
LABEL_56:
    sub_B5D69C(lookup, v16);
  v23 = (System_Int32_array **)lookup;
  v24 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v23 )
      {
        lookup = (ServantCommentEntity_o *)sub_B5D684(v23, v14->obj.klass->_1.element_class);
        if ( !lookup )
        {
LABEL_57:
          v73 = sub_B5D6BC(lookup);
          sub_B5D668(v73, 0LL);
        }
      }
      if ( !v14->max_length )
        goto LABEL_55;
      v14->m_Items[0] = (System_String_o *)v23;
      sub_B5D560((BattleServantConfConponent_o *)v14->m_Items, v23, v17, v18, v19, v20, v21, v22);
      lookup = (ServantCommentEntity_o *)StringLiteral_1245/*":"*/;
      if ( StringLiteral_1245/*":"*/ )
      {
        lookup = (ServantCommentEntity_o *)sub_B5D684(StringLiteral_1245/*":"*/, v14->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_57;
        v31 = (System_Int32_array **)StringLiteral_1245/*":"*/;
      }
      else
      {
        v31 = 0LL;
      }
      if ( v14->max_length <= 1 )
        goto LABEL_55;
      v14->m_Items[1] = (System_String_o *)v31;
      sub_B5D560((BattleServantConfConponent_o *)&v14->m_Items[1], v31, v25, v26, v27, v28, v29, v30);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v75, 0LL);
      v38 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = (ServantCommentEntity_o *)sub_B5D684(lookup, v14->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_57;
      }
      if ( v14->max_length <= 2 )
        goto LABEL_55;
      v14->m_Items[2] = (System_String_o *)v38;
      sub_B5D560((BattleServantConfConponent_o *)&v14->m_Items[2], v38, v32, v33, v34, v35, v36, v37);
      lookup = (ServantCommentEntity_o *)StringLiteral_1245/*":"*/;
      if ( StringLiteral_1245/*":"*/ )
      {
        lookup = (ServantCommentEntity_o *)sub_B5D684(StringLiteral_1245/*":"*/, v14->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_57;
        v45 = (System_Int32_array **)StringLiteral_1245/*":"*/;
      }
      else
      {
        v45 = 0LL;
      }
      if ( v14->max_length <= 3 )
      {
LABEL_55:
        v72 = sub_B5D6C8(lookup);
        sub_B5D668(v72, 0LL);
      }
      v14->m_Items[3] = (System_String_o *)v45;
      sub_B5D560((BattleServantConfConponent_o *)&v14->m_Items[3], v45, v39, v40, v41, v42, v43, v44);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v74, 0LL);
      v52 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = (ServantCommentEntity_o *)sub_B5D684(lookup, v14->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_57;
      }
      if ( v14->max_length <= 4 )
        goto LABEL_55;
      v14->m_Items[4] = (System_String_o *)v52;
      sub_B5D560((BattleServantConfConponent_o *)&v14->m_Items[4], v52, v46, v47, v48, v49, v50, v51);
      v53 = System_String__Concat_44657912(v14, 0LL);
      lookup = (ServantCommentEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_56;
      klass = lookup->klass;
      v56 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v57 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v57;
          p_offset += 4;
          if ( v57 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_29;
        }
        v59 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_29:
        v59 = sub_AF54C0(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL,
                v54);
      }
      if ( ((*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v59)(
              v56,
              v53,
              *(_QWORD *)(v59 + 8)) & 1) == 0 )
        break;
      lookup = (ServantCommentEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( lookup )
      {
        v62 = lookup->klass;
        v63 = lookup;
        if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
        {
          v64 = 0LL;
          v65 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v62->_1.interfaceOffsets->offset;
          while ( *(v65 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            ++v64;
            v65 += 2;
            if ( v64 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
              goto LABEL_37;
          }
          v66 = (__int64)(&v62->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v65);
        }
        else
        {
LABEL_37:
          v66 = sub_AF54C0(
                  lookup,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL,
                  v61);
        }
        lookup = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v66)(
                                             v63,
                                             v53,
                                             *(_QWORD *)(v66 + 8));
        if ( lookup )
        {
          v69 = lookup;
          v70 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&lookup->klass->_2.bitflags2 + 1) >= (unsigned int)v70
            && (ServantCommentEntity_c *)lookup->klass->_2.typeHierarchy[v70 - 1] == ServantCommentEntity_TypeInfo )
          {
            if ( ServantCommentEntity__IsOpen(lookup, -1, 1, v68) )
              v24 = v69;
            ++v74;
            v14 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
            lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v76, 0LL);
            v23 = (System_Int32_array **)lookup;
            if ( v14 )
              continue;
          }
        }
      }
      goto LABEL_56;
    }
    if ( v24 )
    {
      if ( ServantCommentEntity__IsNew(v24, v60) )
        return 1;
      goto LABEL_42;
    }
    if ( !v74 )
      break;
LABEL_42:
    v67 = v75;
LABEL_43:
    v74 = 0;
    v75 = v67 + 1;
    v14 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
    lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v76, 0LL);
    v23 = (System_Int32_array **)lookup;
    v24 = 0LL;
    if ( !v14 )
      goto LABEL_56;
  }
  v67 = v75;
  if ( v75 == 1 )
    goto LABEL_43;
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentMaster__IsOpenImageLimitProfile(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v38; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0
  ServantCommentEntity_o *v45; // x0
  __int64 v46; // x1
  ServantCommentEntity_o *v47; // x22
  __int64 v48; // x9
  System_Int32_array *ImageLimit; // x0
  System_Collections_Generic_IEnumerable_T__o *v50; // x24
  System_Collections_Generic_List_int__o *v51; // x23
  __int64 v52; // x0
  __int64 v53; // x1
  int v54; // w8
  bool v55; // w20
  System_Collections_Generic_IEnumerator_T__c *v56; // x8
  unsigned __int64 v57; // x10
  int32_t *v58; // x11
  __int64 v59; // x0
  int v62; // [xsp+10h] [xbp-60h]

  if ( (byte_42E9D30 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      svtId,
      limitCount,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6, v7, v8);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Sort__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&ServantCommentEntity_TypeInfo, v30, v31, v32);
    byte_42E9D30 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list
    || (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
    sub_B5D69C(list, *(_QWORD *)&svtId);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v34);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v38 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v38;
        p_offset += 4;
        if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v35);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v41 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v42 = 0LL;
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v43 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v44 = (__int64)&v41->vtable[*v43].method;
    }
    else
    {
LABEL_17:
      v44 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v35);
    }
    v45 = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
                                      Enumerator,
                                      *(_QWORD *)(v44 + 8));
    v47 = v45;
    if ( !v45 )
      goto LABEL_45;
    v48 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v45->klass->_2.bitflags2 + 1) < (unsigned int)v48
      || (ServantCommentEntity_c *)v45->klass->_2.typeHierarchy[v48 - 1] != ServantCommentEntity_TypeInfo )
    {
      v45 = (ServantCommentEntity_o *)sub_B5D990(v45);
LABEL_45:
      sub_B5D69C(v45, v46);
    }
    if ( v45->fields.svtId == svtId )
    {
      ImageLimit = ServantCommentEntity__GetImageLimit(v45, (const MethodInfo *)ServantCommentEntity_TypeInfo);
      v50 = (System_Collections_Generic_IEnumerable_T__o *)ImageLimit;
      if ( ImageLimit )
      {
        if ( *(_QWORD *)&ImageLimit->max_length )
        {
          v51 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor_50870440(
            v51,
            v50,
            (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
          if ( !v51 )
            sub_B5D69C(v52, v53);
          System_Collections_Generic_List_int___Sort(
            v51,
            (const MethodInfo_308632C *)Method_System_Collections_Generic_List_int__Sort__);
          if ( !v51->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v54 = v51->fields._items->m_Items[1];
          if ( v54 >= 3 )
          {
            if ( !v51->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            if ( v54 == limitCount && ServantCommentEntity__IsOpen(v47, -1, 1, v35) )
            {
              v62 = 131;
              v55 = 1;
              goto LABEL_35;
            }
          }
        }
      }
    }
  }
  v55 = 0;
  v62 = 129;
LABEL_35:
  v56 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v57 = 0LL;
    v58 = &v56->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
    {
      ++v57;
      v58 += 4;
      if ( v57 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v59 = (__int64)&v56->vtable[*v58].method;
  }
  else
  {
LABEL_39:
    v59 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v35);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v59)(Enumerator, *(_QWORD *)(v59 + 8));
  if ( v62 == 129 )
    return 0;
  return v55;
}


void __fastcall ServantCommentMaster__OpenSaintGraphProfileChange(
        int32_t svtId,
        int32_t limitCount,
        ServantCommentMaster_ProfileChangeDecideDelegate_o *decideAction,
        System_Action_o *endAction,
        const MethodInfo *method)
{
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
  __int64 v45; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_o *v60; // x20
  Il2CppObject *Name; // x0
  System_String_o *v62; // x20
  CommonUI_o *Instance; // x21
  System_String_o *v64; // x22
  System_String_o *v65; // x23
  CommonConfirmDialog_ClickDelegate_o *v66; // x24
  WarEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42E9D31 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, limitCount, (_DWORD)decideAction, endAction);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v12, v13, v14);
    sub_B5D5C4(&DataManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v18, v19, v20);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&Method_ServantCommentMaster___c__DisplayClass16_0__OpenSaintGraphProfileChange_b__0__, v27, v28, v29);
    sub_B5D5C4(&ServantCommentMaster___c__DisplayClass16_0_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_11038/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_11037/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_1/*""*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_11035/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/, v42, v43, v44);
    byte_42E9D31 = 1;
  }
  entity = 0LL;
  v45 = sub_B5D694(ServantCommentMaster___c__DisplayClass16_0_TypeInfo);
  ServantCommentMaster___c__DisplayClass16_0___ctor((ServantCommentMaster___c__DisplayClass16_0_o *)v45, 0LL);
  if ( !v45 )
    goto LABEL_17;
  *(_QWORD *)(v45 + 16) = decideAction;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v45 + 16),
    (System_Int32_array **)decideAction,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  *(_QWORD *)(v45 + 32) = endAction;
  *(_DWORD *)(v45 + 24) = svtId;
  *(_DWORD *)(v45 + 28) = limitCount;
  sub_B5D560((BattleServantConfConponent_o *)(v45 + 32), (System_Int32_array **)endAction, v54, v55, v56, v57, v58, v59);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_17;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    Master_WarQuestSelectionMaster,
    &entity,
    *(_DWORD *)(v45 + 24),
    (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)LocalizationManager__Get(
                                                                                    (System_String_o *)StringLiteral_11038/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/,
                                                                                    0LL);
  if ( !entity )
    goto LABEL_17;
  v60 = (System_String_o *)Master_WarQuestSelectionMaster;
  Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)entity, *(_DWORD *)(v45 + 28), -1, 0LL);
  v62 = System_String__Format(v60, Name, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_11037/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/, 0LL);
  v65 = LocalizationManager__Get((System_String_o *)StringLiteral_11035/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/, 0LL);
  v66 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v66,
    (Il2CppObject *)v45,
    Method_ServantCommentMaster___c__DisplayClass16_0__OpenSaintGraphProfileChange_b__0__,
    0LL);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !Instance )
LABEL_17:
    sub_B5D69C(Master_WarQuestSelectionMaster, v47);
  CommonUI__OpenConfirmDialogOnFade(
    Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v62,
    v64,
    v65,
    v66,
    0,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    42.0,
    0,
    0,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommentMaster__SetOpen(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t svtCommentId,
        int32_t svtCommentPriority,
        const MethodInfo *method)
{
  if ( (byte_42E9D29 & 1) == 0 )
  {
    sub_B5D5C4(&ServantCommentManager_TypeInfo, svtId, svtCommentId, *(_QWORD *)&svtCommentPriority);
    byte_42E9D29 = 1;
  }
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ServantCommentManager__IsOpen(svtId, svtCommentId, svtCommentPriority, *(const MethodInfo **)&svtCommentPriority);
}


void __fastcall ServantCommentMaster__SetOpen_27556920(
        ServantCommentMaster_o *this,
        int32_t svtId,
        System_Int32_array *svtCommentIdList,
        System_Int32_array *svtCommentPriorityList,
        const MethodInfo *method)
{
  if ( (byte_42E9D2A & 1) == 0 )
  {
    sub_B5D5C4(&ServantCommentManager_TypeInfo, svtId, (_DWORD)svtCommentIdList, svtCommentPriorityList);
    byte_42E9D2A = 1;
  }
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ServantCommentManager__SetOpen_27546372(
    svtId,
    svtCommentIdList,
    svtCommentPriorityList,
    (const MethodInfo *)svtCommentPriorityList);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentMaster__TryGetEntity(
        ServantCommentMaster_o *this,
        ServantCommentEntity_o **entity,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_String_o *PK; // x2

  if ( (byte_42E9D24 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__,
      (_DWORD)entity,
      svtId,
      *(_QWORD *)&id);
    sub_B5D5C4(&ServantCommentEntity_TypeInfo, v11, v12, v13);
    byte_42E9D24 = 1;
  }
  if ( (BYTE3(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
  }
  PK = ServantCommentEntity__CreatePK(svtId, id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommentMaster_ProfileChangeDecideDelegate___ctor(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantCommentMaster_ProfileChangeDecideDelegate__BeginInvoke(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        int32_t svtid,
        int32_t limitCount,
        bool isDecide,
        System_Action_o *finishCallback,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v16[5]; // [xsp+0h] [xbp-60h] BYREF
  char v17[4]; // [xsp+2Ch] [xbp-34h] BYREF
  int32_t v18; // [xsp+38h] [xbp-28h] BYREF
  int32_t v19; // [xsp+3Ch] [xbp-24h] BYREF

  v18 = limitCount;
  v19 = svtid;
  v17[0] = isDecide;
  if ( (byte_42E5D49 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, svtid, limitCount, isDecide);
    sub_B5D5C4(&int_TypeInfo, v12, v13, v14);
    byte_42E5D49 = 1;
  }
  v16[4] = 0LL;
  v16[0] = j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v16[1] = j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v16[2] = j_il2cpp_value_box_0(bool_TypeInfo, v17);
  v16[3] = (__int64)finishCallback;
  return (System_IAsyncResult_o *)sub_B5D568(this, v16, callback, object);
}


void __fastcall ServantCommentMaster_ProfileChangeDecideDelegate__EndInvoke(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommentMaster_ProfileChangeDecideDelegate__Invoke(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        int32_t svtid,
        int32_t limitCount,
        bool isDecide,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v6; // x8
  __int64 v11; // x27
  ServantCommentMaster_ProfileChangeDecideDelegate_o **v12; // x28
  __int64 v13; // x22
  unsigned int v14; // w26
  __int64 class_0; // x0
  __int64 v16; // x3
  __int64 v17; // x8
  unsigned __int64 v18; // x10
  _DWORD *v19; // x11
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x0
  void (__fastcall **v23)(__int64 *, _QWORD, _QWORD, bool, System_Action_o *, _QWORD); // x0
  ServantCommentMaster_ProfileChangeDecideDelegate_o *v24; // x8
  __int64 *v25; // x24
  __int64 v26; // x25
  void (__fastcall *v27)(_QWORD, _QWORD, bool, System_Action_o *, __int64); // x26
  char v28; // w26
  char v29; // w0
  __int64 v30; // x3
  __int64 v31; // x8
  __int64 v32; // x1
  __int64 v33; // x2
  unsigned __int64 v34; // x10
  _DWORD *v35; // x11
  ServantCommentMaster_ProfileChangeDecideDelegate_o *v37; // [xsp+8h] [xbp-58h] BYREF

  v37 = this;
  v6 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v6 )
  {
    v12 = &v37;
    v11 = 1LL;
    goto LABEL_5;
  }
  v11 = *(_QWORD *)(v6 + 24);
  if ( v11 )
  {
    v12 = (ServantCommentMaster_ProfileChangeDecideDelegate_o **)(v6 + 32);
LABEL_5:
    v13 = 0LL;
    while ( 1 )
    {
      v24 = v12[v13];
      v25 = *(__int64 **)&v24->fields.method;
      v26 = *(_QWORD *)&v24->fields.extra_arg;
      v27 = *(void (__fastcall **)(_QWORD, _QWORD, bool, System_Action_o *, __int64))&v24->fields.method_ptr;
      if ( *(__int16 *)(v26 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v24->fields.extra_arg, *(_QWORD *)&svtid, *(_QWORD *)&limitCount);
      if ( (sub_B5D5F4(v26) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v26 + 74) != 4 )
        goto LABEL_36;
      v27((unsigned int)svtid, (unsigned int)limitCount, isDecide, finishCallback, v26);
LABEL_37:
      if ( ++v13 == v11 )
        return;
    }
    if ( v25 && *(__int16 *)(v26 + 72) != -1 && (*(_BYTE *)(*v25 + 277) & 1) == 0 && this->fields.m_target )
    {
      v28 = sub_B5D5EC(v26);
      v29 = sub_B5D9F0(v26);
      if ( (v28 & 1) != 0 )
      {
        if ( (v29 & 1) != 0 )
        {
          v31 = *v25;
          v32 = *(_QWORD *)(v26 + 24);
          v33 = *(unsigned __int16 *)(v26 + 72);
          if ( *(_WORD *)(*v25 + 298) )
          {
            v34 = 0LL;
            v35 = (_DWORD *)(*(_QWORD *)(v31 + 176) + 8LL);
            while ( *((_QWORD *)v35 - 1) != v32 )
            {
              ++v34;
              v35 += 4;
              if ( v34 >= *(unsigned __int16 *)(*v25 + 298) )
                goto LABEL_35;
            }
            v22 = v31 + 16LL * (*v35 + (int)v33) + 312;
          }
          else
          {
LABEL_35:
            v22 = sub_AF54C0(v25, v32, v33, v30);
          }
          v21 = *(_QWORD *)(v22 + 8);
        }
        else
        {
          v21 = *(_QWORD *)(*v25 + 16LL * *(unsigned __int16 *)(v26 + 72) + 320);
        }
        v23 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, bool, System_Action_o *, _QWORD))sub_B5D674(v21, v26);
        (*v23)(v25, (unsigned int)svtid, (unsigned int)limitCount, isDecide, finishCallback, v23);
      }
      else
      {
        v14 = *(unsigned __int16 *)(v26 + 72);
        if ( (v29 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v26);
          v17 = *v25;
          if ( *(_WORD *)(*v25 + 298) )
          {
            v18 = 0LL;
            v19 = (_DWORD *)(*(_QWORD *)(v17 + 176) + 8LL);
            while ( *((_QWORD *)v19 - 1) != class_0 )
            {
              ++v18;
              v19 += 4;
              if ( v18 >= *(unsigned __int16 *)(*v25 + 298) )
                goto LABEL_11;
            }
            v20 = v17 + 16LL * (int)(*v19 + v14) + 312;
          }
          else
          {
LABEL_11:
            v20 = sub_AF54C0(v25, class_0, v14, v16);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, bool, System_Action_o *, _QWORD))v20)(
            v25,
            (unsigned int)svtid,
            (unsigned int)limitCount,
            isDecide,
            finishCallback,
            *(_QWORD *)(v20 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, bool, System_Action_o *, _QWORD))(*v25
                                                                                             + 16LL
                                                                                             * *(unsigned __int16 *)(v26 + 72)
                                                                                             + 312))(
            v25,
            (unsigned int)svtid,
            (unsigned int)limitCount,
            isDecide,
            finishCallback,
            *(_QWORD *)(*v25 + 16LL * *(unsigned __int16 *)(v26 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, bool, System_Action_o *, __int64))v27)(
      v25,
      (unsigned int)svtid,
      (unsigned int)limitCount,
      isDecide,
      finishCallback,
      v26);
    goto LABEL_37;
  }
}


void __fastcall ServantCommentMaster___c__DisplayClass16_0___ctor(
        ServantCommentMaster___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantCommentMaster___c__DisplayClass16_0___OpenSaintGraphProfileChange_b__0(
        ServantCommentMaster___c__DisplayClass16_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  ServantCommentMaster_ProfileChangeDecideDelegate_o *decideAction; // x0
  int32_t limitCount; // w2
  int32_t svtId; // w8
  System_Action_o *endAction; // x4

  decideAction = this->fields.decideAction;
  svtId = this->fields.svtId;
  limitCount = this->fields.limitCount;
  endAction = this->fields.endAction;
  if ( decideAction )
    ServantCommentMaster_ProfileChangeDecideDelegate__Invoke(decideAction, svtId, limitCount, isDecide, endAction, v3);
  else
    ServantCommentMaster__DefaultProfileChangeDecideAction(svtId, limitCount, isDecide, endAction, 0LL);
}


void __fastcall ServantCommentMaster___c__DisplayClass17_0___ctor(
        ServantCommentMaster___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantCommentMaster___c__DisplayClass17_0___DefaultProfileChangeDecideAction_b__0(
        ServantCommentMaster___c__DisplayClass17_0_o *this,
        bool isDcd,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  __int64 v15; // x1
  CommonUI_o *v16; // x20
  AvalonSceneManager_c *v17; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__1; // x21

  if ( (byte_42E5D47 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDcd, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(
      &Method_ServantCommentMaster___c__DisplayClass17_0__DefaultProfileChangeDecideAction_b__1__,
      v11,
      v12,
      v13);
    byte_42E5D47 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (CommonUI_o *)Instance;
  v17 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v17 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantCommentMaster___c__DisplayClass17_0__DefaultProfileChangeDecideAction_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B5D560(&this->fields.__9__1);
  }
  if ( !v16 )
    sub_B5D69C(Instance, v15);
  CommonUI__maskFadeout(v16, 1, DEFAULT_FADE_TIME, _9__1, 0LL);
}


void __fastcall ServantCommentMaster___c__DisplayClass17_0___DefaultProfileChangeDecideAction_b__1(
        ServantCommentMaster___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CommonUI_o *Instance; // x0
  __int64 v9; // x1
  CommonUI_o *v10; // x20

  if ( (byte_42E5D48 & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    byte_42E5D48 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v10 )
LABEL_9:
    sub_B5D69C(Instance, v9);
  CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}