void __fastcall ServantCommentMaster___ctor(ServantCommentMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4215F32 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__, method);
    byte_4215F32 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    2,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommentMaster__DefaultProfileChangeDecideAction(
        int32_t svtId,
        int32_t limitCount,
        bool isDecide,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x20
  CommonUI_o *UserId; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x23
  CommonUI_o *v25; // x21
  WebViewManager_o *Instance; // x0
  UserServantCollectionEntity_o *v27; // x21
  CommonUI_o *v28; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  ServantStatusDialog_EndDelegate_o *v31; // x23
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4215F3F & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, *(_QWORD *)&limitCount);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9);
    sub_B0D8A4(&DataManager_TypeInfo, v10);
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, v11);
    sub_B0D8A4(&NetworkManager_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_B0D8A4(&Method_ServantCommentMaster___c__DisplayClass17_0__DefaultProfileChangeDecideAction_b__0__, v14);
    sub_B0D8A4(&ServantCommentMaster___c__DisplayClass17_0_TypeInfo, v15);
    byte_4215F3F = 1;
  }
  entity = 0LL;
  v16 = sub_B0D974(ServantCommentMaster___c__DisplayClass17_0_TypeInfo, *(_QWORD *)&limitCount, isDecide);
  ServantCommentMaster___c__DisplayClass17_0___ctor((ServantCommentMaster___c__DisplayClass17_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_23;
  *(_QWORD *)(v16 + 16) = endAction;
  sub_B0D840((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)endAction, v18, v19, v20, v21, v22, v23);
  if ( isDecide )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
      UserId = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v25 = UserId;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( v25 )
      {
        CommonUI__maskFadein(v25, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
        UserId = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( UserId )
        {
          CommonUI__CloseConfirmDialog(UserId, 0LL);
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v27 = entity;
          v28 = (CommonUI_o *)Instance;
          v31 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v29, v30);
          ServantStatusDialog_EndDelegate___ctor(
            v31,
            (Il2CppObject *)v16,
            Method_ServantCommentMaster___c__DisplayClass17_0__DefaultProfileChangeDecideAction_b__0__,
            0LL);
          if ( v28 )
          {
            CommonUI__OpenServantStatusDialog_17029272(v28, 33, v27, limitCount, v31, 0LL);
            return;
          }
        }
      }
LABEL_23:
      sub_B0D97C(UserId);
    }
  }
  UserId = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !UserId )
    goto LABEL_23;
  CommonUI__CloseConfirmDialog_17017160(UserId, *(System_Action_o **)(v16 + 16), 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantCommentEntity_o *__fastcall ServantCommentMaster__GetEntity(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_String_o *PK; // x1

  if ( (byte_4215F30 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    sub_B0D8A4(&ServantCommentEntity_TypeInfo, v9);
    byte_4215F30 = 1;
  }
  if ( (BYTE3(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
  }
  PK = ServantCommentEntity__CreatePK(svtId, id, priority, *(const MethodInfo **)&priority);
  return (ServantCommentEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                     (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_266A024 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__);
}


ServantCommentEntity_array *__fastcall ServantCommentMaster__GetEntityList(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t condType,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6

  return ServantCommentMaster__GetEntityList_27069560(this, svtId, -1, condType, 0, 0, v4);
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
  System_String_array *v18; // x25
  ServantCommentEntity_o *lookup; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x24
  const MethodInfo *v28; // x5
  const MethodInfo *v29; // x3
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x26
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x26
  System_String_o *v58; // x25
  ServantCommentEntity_c *klass; // x8
  ServantCommentEntity_o *v60; // x26
  unsigned __int64 v61; // x10
  int32_t *p_offset; // x11
  __int64 v63; // x0
  ServantCommentEntity_c *v64; // x8
  ServantCommentEntity_o *v65; // x26
  unsigned __int64 v66; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v67; // x11
  __int64 v68; // x0
  const MethodInfo *v69; // x1
  ServantCommentEntity_o *v70; // x25
  __int64 v71; // x10
  System_Int32_array *ImageLimit; // x0
  __int64 v73; // x9
  char v74; // w8
  __int64 v75; // x10
  int v76; // w11
  __int64 v77; // x12
  int32_t v78; // w8
  __int64 v80; // x0
  __int64 v81; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v84; // [xsp+8h] [xbp-68h]
  int32_t v85; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v86; // [xsp+18h] [xbp-58h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-54h] BYREF

  svtIda = svtId;
  if ( (byte_4215F34 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_int___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v8);
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v13);
    sub_B0D8A4(&ServantCommentEntity_TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B0D8A4(&string___TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v17);
    byte_4215F34 = 1;
  }
  v84 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                                                                  *(_QWORD *)&svtId,
                                                                                                  *(_QWORD *)&imageLimitCount);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v84,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v85 = 0;
  v86 = 1;
  v18 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
  lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&svtIda, 0LL);
  if ( !v18 )
    goto LABEL_70;
  v26 = (System_Int32_array **)lookup;
  v27 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v26 )
      {
        lookup = (ServantCommentEntity_o *)sub_B0D964(v26, v18->obj.klass->_1.element_class);
        if ( !lookup )
        {
LABEL_72:
          v81 = sub_B0D99C(lookup);
          sub_B0D948(v81, 0LL);
        }
      }
      if ( !v18->max_length )
        goto LABEL_71;
      v18->m_Items[0] = (System_String_o *)v26;
      sub_B0D840((BattleServantConfConponent_o *)v18->m_Items, v26, v20, v21, v22, v23, v24, v25);
      lookup = (ServantCommentEntity_o *)StringLiteral_1232/*":"*/;
      if ( StringLiteral_1232/*":"*/ )
      {
        lookup = (ServantCommentEntity_o *)sub_B0D964(StringLiteral_1232/*":"*/, v18->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_72;
        v36 = (System_Int32_array **)StringLiteral_1232/*":"*/;
      }
      else
      {
        v36 = 0LL;
      }
      if ( v18->max_length <= 1 )
        goto LABEL_71;
      v18->m_Items[1] = (System_String_o *)v36;
      sub_B0D840((BattleServantConfConponent_o *)&v18->m_Items[1], v36, v30, v31, v32, v33, v34, v35);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v86, 0LL);
      v43 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = (ServantCommentEntity_o *)sub_B0D964(lookup, v18->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_72;
      }
      if ( v18->max_length <= 2 )
        goto LABEL_71;
      v18->m_Items[2] = (System_String_o *)v43;
      sub_B0D840((BattleServantConfConponent_o *)&v18->m_Items[2], v43, v37, v38, v39, v40, v41, v42);
      lookup = (ServantCommentEntity_o *)StringLiteral_1232/*":"*/;
      if ( StringLiteral_1232/*":"*/ )
      {
        lookup = (ServantCommentEntity_o *)sub_B0D964(StringLiteral_1232/*":"*/, v18->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_72;
        v50 = (System_Int32_array **)StringLiteral_1232/*":"*/;
      }
      else
      {
        v50 = 0LL;
      }
      if ( v18->max_length <= 3 )
      {
LABEL_71:
        v80 = sub_B0D9A8(lookup);
        sub_B0D948(v80, 0LL);
      }
      v18->m_Items[3] = (System_String_o *)v50;
      sub_B0D840((BattleServantConfConponent_o *)&v18->m_Items[3], v50, v44, v45, v46, v47, v48, v49);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v85, 0LL);
      v57 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = (ServantCommentEntity_o *)sub_B0D964(lookup, v18->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_72;
      }
      if ( v18->max_length <= 4 )
        goto LABEL_71;
      v18->m_Items[4] = (System_String_o *)v57;
      sub_B0D840((BattleServantConfConponent_o *)&v18->m_Items[4], v57, v51, v52, v53, v54, v55, v56);
      v58 = System_String__Concat_43930028(v18, 0LL);
      lookup = (ServantCommentEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_70;
      klass = lookup->klass;
      v60 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v61 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v61;
          p_offset += 4;
          if ( v61 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_38;
        }
        v63 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_38:
        v63 = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v63)(
              v60,
              v58,
              *(_QWORD *)(v63 + 8)) & 1) == 0 )
        break;
      lookup = (ServantCommentEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_70;
      v64 = lookup->klass;
      v65 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v66 = 0LL;
        v67 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v64->_1.interfaceOffsets->offset;
        while ( *(v67 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v66;
          v67 += 2;
          if ( v66 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_46;
        }
        v68 = (__int64)(&v64->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v67);
      }
      else
      {
LABEL_46:
        v68 = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
      }
      lookup = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v68)(
                                           v65,
                                           v58,
                                           *(_QWORD *)(v68 + 8));
      if ( !lookup )
        goto LABEL_70;
      v70 = lookup;
      v71 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&lookup->klass->_2.bitflags2 + 1) < (unsigned int)v71
        || (ServantCommentEntity_c *)lookup->klass->_2.typeHierarchy[v71 - 1] != ServantCommentEntity_TypeInfo )
      {
        goto LABEL_70;
      }
      ImageLimit = ServantCommentEntity__GetImageLimit(lookup, v69);
      if ( ImageLimit )
      {
        v73 = *(_QWORD *)&ImageLimit->max_length;
        if ( v73 )
        {
          if ( (int)v73 >= 1 )
          {
            v74 = 0;
            v75 = 8LL;
            do
            {
              v76 = *((_DWORD *)&ImageLimit->obj.klass + v75);
              v77 = v75 - 7;
              ++v75;
              v74 |= v76 > 2;
            }
            while ( v77 < (int)v73 );
            if ( (v74 & 1) != 0
              && (System_Array__IndexOf_int_(
                    ImageLimit,
                    imageLimitCount,
                    (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
            {
              if ( !condType || v70->fields.condType == condType )
                goto LABEL_12;
              if ( addCheck )
              {
                lookup = (ServantCommentEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !lookup )
                  goto LABEL_70;
                lookup = (ServantCommentEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)lookup,
                                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
                if ( !lookup )
                  goto LABEL_70;
                if ( ServantCommentAddMaster__IsEntityListCondContain(
                       (ServantCommentAddMaster_o *)lookup,
                       svtIda,
                       v86,
                       v85,
                       condType,
                       v28) )
                {
LABEL_12:
                  if ( !v27 || ServantCommentEntity__IsOpen(v70, -1, 1, v29) )
                    v27 = (EventMissionProgressRequest_Argument_ProgressData_o *)v70;
                }
              }
            }
          }
        }
      }
      ++v85;
      v18 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&svtIda, 0LL);
      v26 = (System_Int32_array **)lookup;
      if ( !v18 )
        goto LABEL_70;
    }
    if ( v27 )
    {
      lookup = (ServantCommentEntity_o *)v84;
      if ( !v84 )
        goto LABEL_70;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v84,
        v27,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
      goto LABEL_64;
    }
    if ( !v85 )
      break;
LABEL_64:
    v78 = v86;
LABEL_65:
    v85 = 0;
    v86 = v78 + 1;
    v18 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
    lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&svtIda, 0LL);
    v26 = (System_Int32_array **)lookup;
    v27 = 0LL;
    if ( !v18 )
      goto LABEL_70;
  }
  v78 = v86;
  if ( v86 == 1 )
    goto LABEL_65;
  lookup = (ServantCommentEntity_o *)v84;
  if ( !v84 )
LABEL_70:
    sub_B0D97C(lookup);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v84,
                                         (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ServantCommentEntity_array *__fastcall ServantCommentMaster__GetEntityList_27069560(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t condType,
        bool addCheck,
        bool overLimit,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x24
  System_String_array *v21; // x26
  __int64 lookup; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x27
  EventMissionProgressRequest_Argument_ProgressData_o *v30; // x25
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x27
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x27
  System_String_o *v59; // x26
  __int64 v60; // x8
  __int64 v61; // x27
  unsigned __int64 v62; // x10
  int *v63; // x11
  __int64 v64; // x0
  __int64 v65; // x8
  __int64 v66; // x27
  unsigned __int64 v67; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v68; // x11
  __int64 v69; // x0
  int32_t v70; // w8
  const MethodInfo *v71; // x1
  ServantCommentEntity_o *v72; // x26
  __int64 v73; // x10
  System_Int32_array *ImageLimit; // x0
  const MethodInfo *v75; // x3
  __int64 v76; // x8
  __int64 v77; // x9
  const MethodInfo *v78; // x5
  __int64 v80; // x0
  __int64 v81; // x0
  int32_t v84; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v85; // [xsp+18h] [xbp-58h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-54h] BYREF

  svtIda = svtId;
  if ( (byte_4215F33 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_int___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v10);
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v15);
    sub_B0D8A4(&ServantCommentEntity_TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B0D8A4(&string___TypeInfo, v18);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v19);
    byte_4215F33 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                                                                  *(_QWORD *)&svtId,
                                                                                                  *(_QWORD *)&imageLimitCount);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v84 = 0;
  v85 = 1;
  v21 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
  lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
  if ( !v21 )
    goto LABEL_74;
  v29 = (System_Int32_array **)lookup;
  v30 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v29 )
      {
        lookup = sub_B0D964(v29, v21->obj.klass->_1.element_class);
        if ( !lookup )
        {
LABEL_75:
          v81 = sub_B0D99C(lookup);
          sub_B0D948(v81, 0LL);
        }
      }
      if ( !v21->max_length )
        goto LABEL_73;
      v21->m_Items[0] = (System_String_o *)v29;
      sub_B0D840((BattleServantConfConponent_o *)v21->m_Items, v29, v23, v24, v25, v26, v27, v28);
      lookup = StringLiteral_1232/*":"*/;
      if ( StringLiteral_1232/*":"*/ )
      {
        lookup = sub_B0D964(StringLiteral_1232/*":"*/, v21->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_75;
        v37 = (System_Int32_array **)StringLiteral_1232/*":"*/;
      }
      else
      {
        v37 = 0LL;
      }
      if ( v21->max_length <= 1 )
        goto LABEL_73;
      v21->m_Items[1] = (System_String_o *)v37;
      sub_B0D840((BattleServantConfConponent_o *)&v21->m_Items[1], v37, v31, v32, v33, v34, v35, v36);
      lookup = (__int64)System_Int32__ToString((int32_t)&v85, 0LL);
      v44 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = sub_B0D964(lookup, v21->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_75;
      }
      if ( v21->max_length <= 2 )
        goto LABEL_73;
      v21->m_Items[2] = (System_String_o *)v44;
      sub_B0D840((BattleServantConfConponent_o *)&v21->m_Items[2], v44, v38, v39, v40, v41, v42, v43);
      lookup = StringLiteral_1232/*":"*/;
      if ( StringLiteral_1232/*":"*/ )
      {
        lookup = sub_B0D964(StringLiteral_1232/*":"*/, v21->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_75;
        v51 = (System_Int32_array **)StringLiteral_1232/*":"*/;
      }
      else
      {
        v51 = 0LL;
      }
      if ( v21->max_length <= 3 )
      {
LABEL_73:
        v80 = sub_B0D9A8(lookup);
        sub_B0D948(v80, 0LL);
      }
      v21->m_Items[3] = (System_String_o *)v51;
      sub_B0D840((BattleServantConfConponent_o *)&v21->m_Items[3], v51, v45, v46, v47, v48, v49, v50);
      lookup = (__int64)System_Int32__ToString((int32_t)&v84, 0LL);
      v58 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = sub_B0D964(lookup, v21->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_75;
      }
      if ( v21->max_length <= 4 )
        goto LABEL_73;
      v21->m_Items[4] = (System_String_o *)v58;
      sub_B0D840((BattleServantConfConponent_o *)&v21->m_Items[4], v58, v52, v53, v54, v55, v56, v57);
      v59 = System_String__Concat_43930028(v21, 0LL);
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_74;
      v60 = *(_QWORD *)lookup;
      v61 = lookup;
      if ( *(_WORD *)(*(_QWORD *)lookup + 298LL) )
      {
        v62 = 0LL;
        v63 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v63 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v62;
          v63 += 4;
          if ( v62 >= *(unsigned __int16 *)(*(_QWORD *)lookup + 298LL) )
            goto LABEL_29;
        }
        v64 = v60 + 16LL * *v63 + 312;
      }
      else
      {
LABEL_29:
        v64 = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v64)(v61, v59, *(_QWORD *)(v64 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_74;
      v65 = *(_QWORD *)lookup;
      v66 = lookup;
      if ( *(_WORD *)(*(_QWORD *)lookup + 298LL) )
      {
        v67 = 0LL;
        v68 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v65 + 176) + 8LL);
        while ( *(v68 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v67;
          v68 += 2;
          if ( v67 >= *(unsigned __int16 *)(*(_QWORD *)lookup + 298LL) )
            goto LABEL_37;
        }
        v69 = v65 + 16LL * (*(_DWORD *)v68 + 2) + 312;
      }
      else
      {
LABEL_37:
        v69 = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v69)(v66, v59, *(_QWORD *)(v69 + 8));
      if ( !lookup )
        goto LABEL_74;
      v72 = (ServantCommentEntity_o *)lookup;
      v73 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)lookup + 300LL) < (unsigned int)v73
        || *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)lookup + 200LL) + 8 * v73 - 8) != ServantCommentEntity_TypeInfo )
      {
        goto LABEL_74;
      }
      ImageLimit = ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)lookup, v71);
      if ( imageLimitCount != -1 )
      {
        if ( ImageLimit )
        {
          v76 = *(_QWORD *)&ImageLimit->max_length;
          if ( v76 )
          {
            if ( overLimit )
            {
              if ( (int)v76 < 1 )
                goto LABEL_68;
              v77 = 0LL;
              while ( ImageLimit->m_Items[v77 + 1] > imageLimitCount )
              {
                if ( (int)++v77 >= (int)v76 )
                  goto LABEL_68;
              }
            }
            else if ( (System_Array__IndexOf_int_(
                         ImageLimit,
                         imageLimitCount,
                         (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___) & 0x80000000) != 0 )
            {
              goto LABEL_68;
            }
          }
        }
      }
      if ( !condType || v72->fields.condType == condType )
        goto LABEL_62;
      if ( addCheck )
      {
        lookup = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lookup )
          goto LABEL_74;
        lookup = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)lookup,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
        if ( !lookup )
          goto LABEL_74;
        if ( ServantCommentAddMaster__IsEntityListCondContain(
               (ServantCommentAddMaster_o *)lookup,
               svtIda,
               v85,
               v84,
               condType,
               v78) )
        {
LABEL_62:
          if ( !v30 || ServantCommentEntity__IsOpen(v72, -1, 1, v75) )
            v30 = (EventMissionProgressRequest_Argument_ProgressData_o *)v72;
        }
      }
LABEL_68:
      ++v84;
      v21 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
      lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
      v29 = (System_Int32_array **)lookup;
      if ( !v21 )
        goto LABEL_74;
    }
    if ( v30 )
    {
      if ( !v20 )
        goto LABEL_74;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v20,
        v30,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
      goto LABEL_42;
    }
    if ( !v84 )
      break;
LABEL_42:
    v70 = v85;
LABEL_43:
    v84 = 0;
    v85 = v70 + 1;
    v21 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
    lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
    v29 = (System_Int32_array **)lookup;
    v30 = 0LL;
    if ( !v21 )
      goto LABEL_74;
  }
  v70 = v85;
  if ( v85 == 1 )
    goto LABEL_43;
  if ( !v20 )
LABEL_74:
    sub_B0D97C(lookup);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                         (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


bool __fastcall ServantCommentMaster__GetNewList(
        ServantCommentMaster_o *this,
        System_Int32_array **idList,
        System_Int32_array **priorityList,
        int32_t svtId,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_int__o *v20; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_int__o *v23; // x22
  __int64 Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x25
  int32_t v26; // w24
  System_String_array *v27; // x26
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x27
  ServantCommentEntity_o *v35; // x25
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x27
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x27
  System_String_o *v64; // x26
  __int64 v65; // x8
  __int64 v66; // x27
  unsigned __int64 v67; // x10
  int *v68; // x11
  __int64 v69; // x0
  const MethodInfo *v70; // x1
  __int64 v71; // x8
  __int64 v72; // x27
  unsigned __int64 v73; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v74; // x11
  __int64 v75; // x0
  int v76; // w8
  const MethodInfo *v77; // x1
  ServantCommentEntity_o *v78; // x26
  __int64 v79; // x10
  const MethodInfo *v80; // x3
  __int64 v81; // x8
  int v82; // w8
  System_Int32_array **v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x0
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  __int64 v98; // x0
  __int64 v99; // x0
  BattleServantConfConponent_o *v100; // [xsp+0h] [xbp-80h]
  BattleServantConfConponent_o *v101; // [xsp+8h] [xbp-78h]
  int32_t ServantLimitCountSealAfter; // [xsp+14h] [xbp-6Ch]
  __int64 v103; // [xsp+18h] [xbp-68h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+20h] [xbp-60h] BYREF
  int32_t svtIda; // [xsp+2Ch] [xbp-54h] BYREF

  svtIda = svtId;
  if ( (byte_4215F39 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, idList);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_B0D8A4(&NetworkManager_TypeInfo, v15);
    sub_B0D8A4(&ServantCommentEntity_TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B0D8A4(&string___TypeInfo, v18);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v19);
    byte_4215F39 = 1;
  }
  v103 = 0LL;
  entity = 0LL;
  v20 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    idList,
                                                    priorityList);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v23 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v21, v22);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    v26 = entity->fields.maxLimitCount ? entity->fields.maxLimitCount : 1;
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_79;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Instance )
      goto LABEL_79;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   svtIda,
                                   v26,
                                   0LL);
  }
  v100 = (BattleServantConfConponent_o *)priorityList;
  v101 = (BattleServantConfConponent_o *)idList;
  v103 = 0x100000000LL;
  v27 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
  Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
  if ( !v27 )
    goto LABEL_79;
  v34 = (System_Int32_array **)Instance;
  v35 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v34 )
      {
        Instance = sub_B0D964(v34, v27->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_80:
          v99 = sub_B0D99C(Instance);
          sub_B0D948(v99, 0LL);
        }
      }
      if ( !v27->max_length )
        goto LABEL_78;
      v27->m_Items[0] = (System_String_o *)v34;
      sub_B0D840((BattleServantConfConponent_o *)v27->m_Items, v34, v28, v29, v30, v31, v32, v33);
      Instance = StringLiteral_1232/*":"*/;
      if ( StringLiteral_1232/*":"*/ )
      {
        Instance = sub_B0D964(StringLiteral_1232/*":"*/, v27->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_80;
        v42 = (System_Int32_array **)StringLiteral_1232/*":"*/;
      }
      else
      {
        v42 = 0LL;
      }
      if ( v27->max_length <= 1 )
        goto LABEL_78;
      v27->m_Items[1] = (System_String_o *)v42;
      sub_B0D840((BattleServantConfConponent_o *)&v27->m_Items[1], v42, v36, v37, v38, v39, v40, v41);
      Instance = (__int64)System_Int32__ToString((int32_t)&v103 + 4, 0LL);
      v49 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = sub_B0D964(Instance, v27->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_80;
      }
      if ( v27->max_length <= 2 )
        goto LABEL_78;
      v27->m_Items[2] = (System_String_o *)v49;
      sub_B0D840((BattleServantConfConponent_o *)&v27->m_Items[2], v49, v43, v44, v45, v46, v47, v48);
      Instance = StringLiteral_1232/*":"*/;
      if ( StringLiteral_1232/*":"*/ )
      {
        Instance = sub_B0D964(StringLiteral_1232/*":"*/, v27->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_80;
        v56 = (System_Int32_array **)StringLiteral_1232/*":"*/;
      }
      else
      {
        v56 = 0LL;
      }
      if ( v27->max_length <= 3 )
      {
LABEL_78:
        v98 = sub_B0D9A8(Instance);
        sub_B0D948(v98, 0LL);
      }
      v27->m_Items[3] = (System_String_o *)v56;
      sub_B0D840((BattleServantConfConponent_o *)&v27->m_Items[3], v56, v50, v51, v52, v53, v54, v55);
      Instance = (__int64)System_Int32__ToString((int32_t)&v103, 0LL);
      v63 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = sub_B0D964(Instance, v27->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_80;
      }
      if ( v27->max_length <= 4 )
        goto LABEL_78;
      v27->m_Items[4] = (System_String_o *)v63;
      sub_B0D840((BattleServantConfConponent_o *)&v27->m_Items[4], v63, v57, v58, v59, v60, v61, v62);
      v64 = System_String__Concat_43930028(v27, 0LL);
      Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        goto LABEL_79;
      v65 = *(_QWORD *)Instance;
      v66 = Instance;
      if ( *(_WORD *)(*(_QWORD *)Instance + 298LL) )
      {
        v67 = 0LL;
        v68 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v68 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v67;
          v68 += 4;
          if ( v67 >= *(unsigned __int16 *)(*(_QWORD *)Instance + 298LL) )
            goto LABEL_42;
        }
        v69 = v65 + 16LL * *v68 + 312;
      }
      else
      {
LABEL_42:
        v69 = sub_AA67A0(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v69)(v66, v64, *(_QWORD *)(v69 + 8));
      if ( (Instance & 1) == 0 )
        break;
      Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( Instance )
      {
        v71 = *(_QWORD *)Instance;
        v72 = Instance;
        if ( *(_WORD *)(*(_QWORD *)Instance + 298LL) )
        {
          v73 = 0LL;
          v74 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v71 + 176)
                                                                                            + 8LL);
          while ( *(v74 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            ++v73;
            v74 += 2;
            if ( v73 >= *(unsigned __int16 *)(*(_QWORD *)Instance + 298LL) )
              goto LABEL_50;
          }
          v75 = v71 + 16LL * (*(_DWORD *)v74 + 2) + 312;
        }
        else
        {
LABEL_50:
          v75 = sub_AA67A0(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL);
        }
        Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v75)(v72, v64, *(_QWORD *)(v75 + 8));
        if ( Instance )
        {
          v78 = (ServantCommentEntity_o *)Instance;
          v79 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v79
            && *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v79 - 8) == ServantCommentEntity_TypeInfo )
          {
            Instance = (__int64)ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)Instance, v77);
            if ( !Instance )
              goto LABEL_69;
            v81 = *(_QWORD *)(Instance + 24);
            if ( !v81 )
              goto LABEL_69;
            if ( !(_DWORD)v81 )
              goto LABEL_78;
            v82 = *(_DWORD *)(Instance + 32);
            if ( v82 < 3 || ServantLimitCountSealAfter >= v82 )
            {
LABEL_69:
              if ( ServantCommentEntity__IsOpen(v78, -1, 1, v80) )
                v35 = v78;
            }
            LODWORD(v103) = v103 + 1;
            v27 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
            Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
            v34 = (System_Int32_array **)Instance;
            if ( v27 )
              continue;
          }
        }
      }
      goto LABEL_79;
    }
    if ( v35 )
    {
      Instance = ServantCommentEntity__IsNew(v35, v70);
      if ( (Instance & 1) != 0 )
      {
        if ( !v20 )
          goto LABEL_79;
        System_Collections_Generic_List_int___Add(
          v20,
          v35->fields.id,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        if ( !v23 )
          goto LABEL_79;
        System_Collections_Generic_List_int___Add(
          v23,
          v35->fields.priority,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
      goto LABEL_57;
    }
    if ( !(_DWORD)v103 )
      break;
LABEL_57:
    v76 = HIDWORD(v103);
LABEL_58:
    LODWORD(v103) = 0;
    HIDWORD(v103) = v76 + 1;
    v27 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
    Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
    v34 = (System_Int32_array **)Instance;
    v35 = 0LL;
    if ( !v27 )
      goto LABEL_79;
  }
  v76 = HIDWORD(v103);
  if ( HIDWORD(v103) == 1 )
    goto LABEL_58;
  if ( !v20
    || (v83 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                       v20,
                                       (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__),
        v101->klass = (BattleServantConfConponent_c *)v83,
        sub_B0D840(v101, v83, v84, v85, v86, v87, v88, v89),
        !v23)
    || (v90 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                       v23,
                                       (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__),
        v100->klass = (BattleServantConfConponent_c *)v90,
        sub_B0D840(v100, v90, v91, v92, v93, v94, v95, v96),
        !v101->klass) )
  {
LABEL_79:
    sub_B0D97C(Instance);
  }
  return LODWORD(v101->klass->_1.namespaze) != 0;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantCommentEntity__o *__fastcall ServantCommentMaster__GetNewProfileEntities(
        ServantCommentMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  const MethodInfo *v12; // x4
  __int64 NewList; // x0
  System_Int32_array *v14; // x8
  unsigned __int64 v15; // x23
  System_String_array *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x1
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
  System_String_o *v52; // x21
  __int64 v53; // x8
  __int64 v54; // x22
  unsigned __int64 v55; // x10
  int *v56; // x11
  __int64 v57; // x0
  __int64 v58; // x8
  __int64 v59; // x22
  unsigned __int64 v60; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v61; // x11
  __int64 v62; // x0
  __int64 v63; // x10
  __int64 v65; // x0
  __int64 v66; // x0
  System_Int32_array *priorityList; // [xsp+8h] [xbp-68h] BYREF
  System_Int32_array *idList; // [xsp+10h] [xbp-60h] BYREF
  int32_t v69; // [xsp+1Ch] [xbp-54h] BYREF

  v69 = svtId;
  if ( (byte_4215F3C & 1) == 0 )
  {
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v7);
    sub_B0D8A4(&ServantCommentEntity_TypeInfo, v8);
    sub_B0D8A4(&string___TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v10);
    byte_4215F3C = 1;
  }
  priorityList = 0LL;
  idList = 0LL;
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                                                                  *(_QWORD *)&svtId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  NewList = ServantCommentMaster__GetNewList(this, &idList, &priorityList, svtId, v12);
  if ( (NewList & 1) != 0 )
  {
    v14 = idList;
    if ( !idList )
LABEL_52:
      sub_B0D97C(NewList);
    v15 = 0LL;
    while ( (__int64)v15 < (int)v14->max_length )
    {
      v16 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
      NewList = (__int64)System_Int32__ToString((int32_t)&v69, 0LL);
      if ( !v16 )
        goto LABEL_52;
      v23 = (System_Int32_array **)NewList;
      if ( NewList )
      {
        NewList = sub_B0D964(NewList, v16->obj.klass->_1.element_class);
        if ( !NewList )
        {
LABEL_55:
          v66 = sub_B0D99C(NewList);
          sub_B0D948(v66, 0LL);
        }
      }
      if ( !v16->max_length )
        goto LABEL_54;
      v16->m_Items[0] = (System_String_o *)v23;
      sub_B0D840((BattleServantConfConponent_o *)v16->m_Items, v23, v17, v18, v19, v20, v21, v22);
      NewList = StringLiteral_1232/*":"*/;
      if ( StringLiteral_1232/*":"*/ )
      {
        NewList = sub_B0D964(StringLiteral_1232/*":"*/, v16->obj.klass->_1.element_class);
        if ( !NewList )
          goto LABEL_55;
        v30 = (System_Int32_array **)StringLiteral_1232/*":"*/;
      }
      else
      {
        v30 = 0LL;
      }
      if ( v16->max_length <= 1 )
        goto LABEL_54;
      v16->m_Items[1] = (System_String_o *)v30;
      sub_B0D840((BattleServantConfConponent_o *)&v16->m_Items[1], v30, v24, v25, v26, v27, v28, v29);
      if ( !idList )
        goto LABEL_52;
      if ( v15 >= idList->max_length )
        goto LABEL_54;
      NewList = (__int64)System_Int32__ToString((int)idList + 4 * (int)v15 + 32, 0LL);
      v37 = (System_Int32_array **)NewList;
      if ( NewList )
      {
        NewList = sub_B0D964(NewList, v16->obj.klass->_1.element_class);
        if ( !NewList )
          goto LABEL_55;
      }
      if ( v16->max_length <= 2 )
        goto LABEL_54;
      v16->m_Items[2] = (System_String_o *)v37;
      sub_B0D840((BattleServantConfConponent_o *)&v16->m_Items[2], v37, v31, v32, v33, v34, v35, v36);
      NewList = StringLiteral_1232/*":"*/;
      if ( StringLiteral_1232/*":"*/ )
      {
        NewList = sub_B0D964(StringLiteral_1232/*":"*/, v16->obj.klass->_1.element_class);
        if ( !NewList )
          goto LABEL_55;
        v44 = (System_Int32_array **)StringLiteral_1232/*":"*/;
      }
      else
      {
        v44 = 0LL;
      }
      if ( v16->max_length <= 3 )
        goto LABEL_54;
      v16->m_Items[3] = (System_String_o *)v44;
      sub_B0D840((BattleServantConfConponent_o *)&v16->m_Items[3], v44, v38, v39, v40, v41, v42, v43);
      if ( !priorityList )
        goto LABEL_52;
      if ( v15 >= priorityList->max_length )
      {
LABEL_54:
        v65 = sub_B0D9A8(NewList);
        sub_B0D948(v65, 0LL);
      }
      NewList = (__int64)System_Int32__ToString((int)priorityList + 4 * (int)v15 + 32, 0LL);
      v51 = (System_Int32_array **)NewList;
      if ( NewList )
      {
        NewList = sub_B0D964(NewList, v16->obj.klass->_1.element_class);
        if ( !NewList )
          goto LABEL_55;
      }
      if ( v16->max_length <= 4 )
        goto LABEL_54;
      v16->m_Items[4] = (System_String_o *)v51;
      sub_B0D840((BattleServantConfConponent_o *)&v16->m_Items[4], v51, v45, v46, v47, v48, v49, v50);
      v52 = System_String__Concat_43930028(v16, 0LL);
      NewList = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( NewList )
      {
        v53 = *(_QWORD *)NewList;
        v54 = NewList;
        if ( *(_WORD *)(*(_QWORD *)NewList + 298LL) )
        {
          v55 = 0LL;
          v56 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
          while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v56 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            ++v55;
            v56 += 4;
            if ( v55 >= *(unsigned __int16 *)(*(_QWORD *)NewList + 298LL) )
              goto LABEL_36;
          }
          v57 = v53 + 16LL * *v56 + 312;
        }
        else
        {
LABEL_36:
          v57 = sub_AA67A0(
                  NewList,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  0LL);
        }
        NewList = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v57)(v54, v52, *(_QWORD *)(v57 + 8));
        if ( (NewList & 1) != 0 )
        {
          NewList = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
          if ( !NewList )
            goto LABEL_52;
          v58 = *(_QWORD *)NewList;
          v59 = NewList;
          if ( *(_WORD *)(*(_QWORD *)NewList + 298LL) )
          {
            v60 = 0LL;
            v61 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v58 + 176)
                                                                                              + 8LL);
            while ( *(v61 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
            {
              ++v60;
              v61 += 2;
              if ( v60 >= *(unsigned __int16 *)(*(_QWORD *)NewList + 298LL) )
                goto LABEL_44;
            }
            v62 = v58 + 16LL * (*(_DWORD *)v61 + 2) + 312;
          }
          else
          {
LABEL_44:
            v62 = sub_AA67A0(
                    NewList,
                    System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                    2LL);
          }
          NewList = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v62)(v59, v52, *(_QWORD *)(v62 + 8));
          if ( NewList )
          {
            v63 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)NewList + 300LL) >= (unsigned int)v63
              && *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)NewList + 200LL) + 8 * v63 - 8) == ServantCommentEntity_TypeInfo )
            {
              if ( !v11 )
                goto LABEL_52;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v11,
                (EventMissionProgressRequest_Argument_ProgressData_o *)NewList,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
            }
          }
        }
        v14 = idList;
        ++v15;
        if ( idList )
          continue;
      }
      goto LABEL_52;
    }
  }
  return (System_Collections_Generic_List_ServantCommentEntity__o *)v11;
}


// local variable allocation has failed, the output may be wrong!
ServantCommentEntity_array *__fastcall ServantCommentMaster__GetOpenEntitiyList(
        ServantCommentMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  System_String_array *v12; // x22
  __int64 lookup; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x23
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x23
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x23
  System_String_o *v50; // x22
  __int64 v51; // x8
  __int64 v52; // x23
  unsigned __int64 v53; // x10
  int *v54; // x11
  __int64 v55; // x0
  __int64 v56; // x8
  __int64 v57; // x23
  unsigned __int64 v58; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v59; // x11
  __int64 v60; // x0
  int v61; // w8
  const MethodInfo *v62; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v63; // x22
  __int64 v64; // x10
  __int64 v66; // x0
  __int64 v67; // x0
  int v68; // [xsp+4h] [xbp-5Ch] BYREF
  int v69; // [xsp+8h] [xbp-58h] BYREF
  int32_t v70; // [xsp+Ch] [xbp-54h] BYREF

  v70 = svtId;
  if ( (byte_4215F35 & 1) == 0 )
  {
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v7);
    sub_B0D8A4(&ServantCommentEntity_TypeInfo, v8);
    sub_B0D8A4(&string___TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v10);
    byte_4215F35 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                                                                  *(_QWORD *)&svtId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v68 = 0;
  v69 = 1;
  v12 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
  lookup = (__int64)System_Int32__ToString((int32_t)&v70, 0LL);
  if ( !v12 )
    goto LABEL_57;
  v20 = (System_Int32_array **)lookup;
  v21 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v20 )
      {
        lookup = sub_B0D964(v20, v12->obj.klass->_1.element_class);
        if ( !lookup )
        {
LABEL_58:
          v67 = sub_B0D99C(lookup);
          sub_B0D948(v67, 0LL);
        }
      }
      if ( !v12->max_length )
        goto LABEL_56;
      v12->m_Items[0] = (System_String_o *)v20;
      sub_B0D840((BattleServantConfConponent_o *)v12->m_Items, v20, v14, v15, v16, v17, v18, v19);
      lookup = StringLiteral_1232/*":"*/;
      if ( StringLiteral_1232/*":"*/ )
      {
        lookup = sub_B0D964(StringLiteral_1232/*":"*/, v12->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_58;
        v28 = (System_Int32_array **)StringLiteral_1232/*":"*/;
      }
      else
      {
        v28 = 0LL;
      }
      if ( v12->max_length <= 1 )
        goto LABEL_56;
      v12->m_Items[1] = (System_String_o *)v28;
      sub_B0D840((BattleServantConfConponent_o *)&v12->m_Items[1], v28, v22, v23, v24, v25, v26, v27);
      lookup = (__int64)System_Int32__ToString((int32_t)&v69, 0LL);
      v35 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = sub_B0D964(lookup, v12->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_58;
      }
      if ( v12->max_length <= 2 )
        goto LABEL_56;
      v12->m_Items[2] = (System_String_o *)v35;
      sub_B0D840((BattleServantConfConponent_o *)&v12->m_Items[2], v35, v29, v30, v31, v32, v33, v34);
      lookup = StringLiteral_1232/*":"*/;
      if ( StringLiteral_1232/*":"*/ )
      {
        lookup = sub_B0D964(StringLiteral_1232/*":"*/, v12->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_58;
        v42 = (System_Int32_array **)StringLiteral_1232/*":"*/;
      }
      else
      {
        v42 = 0LL;
      }
      if ( v12->max_length <= 3 )
      {
LABEL_56:
        v66 = sub_B0D9A8(lookup);
        sub_B0D948(v66, 0LL);
      }
      v12->m_Items[3] = (System_String_o *)v42;
      sub_B0D840((BattleServantConfConponent_o *)&v12->m_Items[3], v42, v36, v37, v38, v39, v40, v41);
      lookup = (__int64)System_Int32__ToString((int32_t)&v68, 0LL);
      v49 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = sub_B0D964(lookup, v12->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_58;
      }
      if ( v12->max_length <= 4 )
        goto LABEL_56;
      v12->m_Items[4] = (System_String_o *)v49;
      sub_B0D840((BattleServantConfConponent_o *)&v12->m_Items[4], v49, v43, v44, v45, v46, v47, v48);
      v50 = System_String__Concat_43930028(v12, 0LL);
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_57;
      v51 = *(_QWORD *)lookup;
      v52 = lookup;
      if ( *(_WORD *)(*(_QWORD *)lookup + 298LL) )
      {
        v53 = 0LL;
        v54 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v54 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v53;
          v54 += 4;
          if ( v53 >= *(unsigned __int16 *)(*(_QWORD *)lookup + 298LL) )
            goto LABEL_29;
        }
        v55 = v51 + 16LL * *v54 + 312;
      }
      else
      {
LABEL_29:
        v55 = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v55)(v52, v50, *(_QWORD *)(v55 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( lookup )
      {
        v56 = *(_QWORD *)lookup;
        v57 = lookup;
        if ( *(_WORD *)(*(_QWORD *)lookup + 298LL) )
        {
          v58 = 0LL;
          v59 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v56 + 176)
                                                                                            + 8LL);
          while ( *(v59 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            ++v58;
            v59 += 2;
            if ( v58 >= *(unsigned __int16 *)(*(_QWORD *)lookup + 298LL) )
              goto LABEL_37;
          }
          v60 = v56 + 16LL * (*(_DWORD *)v59 + 2) + 312;
        }
        else
        {
LABEL_37:
          v60 = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
        }
        lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v60)(v57, v50, *(_QWORD *)(v60 + 8));
        if ( lookup )
        {
          v63 = (EventMissionProgressRequest_Argument_ProgressData_o *)lookup;
          v64 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)lookup + 300LL) >= (unsigned int)v64
            && *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)lookup + 200LL) + 8 * v64 - 8) == ServantCommentEntity_TypeInfo )
          {
            if ( ServantCommentEntity__IsOpen((ServantCommentEntity_o *)lookup, -1, 1, v62) )
              v21 = v63;
            ++v68;
            v12 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
            lookup = (__int64)System_Int32__ToString((int32_t)&v70, 0LL);
            v20 = (System_Int32_array **)lookup;
            if ( v12 )
              continue;
          }
        }
      }
      goto LABEL_57;
    }
    if ( v21 )
    {
      if ( !v11 )
        goto LABEL_57;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        v21,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
      goto LABEL_42;
    }
    if ( !v68 )
      break;
LABEL_42:
    v61 = v69;
LABEL_43:
    v68 = 0;
    v69 = v61 + 1;
    v12 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
    lookup = (__int64)System_Int32__ToString((int32_t)&v70, 0LL);
    v20 = (System_Int32_array **)lookup;
    v21 = 0LL;
    if ( !v12 )
      goto LABEL_57;
  }
  v61 = v69;
  if ( v69 == 1 )
    goto LABEL_43;
  if ( !v11 )
LABEL_57:
    sub_B0D97C(lookup);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                         (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall ServantCommentMaster__GetServantListWithQuestClear(
        ServantCommentMaster_o *this,
        int32_t questId,
        int32_t questPhase,
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
  DataManager_o *Instance; // x0
  ServantCommentAddMaster_o *MasterData_WarQuestSelectionMaster; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_int__o *v21; // x23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  int32_t Count; // w0
  int32_t v24; // w26
  int32_t v25; // w27
  ServantCommentEntity_o *v26; // x28
  __int64 v27; // x9
  int32_t m_CachedPtr; // w24
  const MethodInfo *v29; // x1
  System_Int32_array *ImageLimit; // x0
  const MethodInfo *v31; // x3
  System_Int32_array *v32; // x22
  int64_t UserId; // x2
  int32_t ServantLimitCountSealAfter; // w0
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x7
  ServantCommentMaster_o *v38; // x0
  int32_t v39; // w1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  ServantLimitImageMaster_o *v42; // [xsp+8h] [xbp-78h]
  UserServantCollectionMaster_o *v43; // [xsp+10h] [xbp-70h]
  UserServantCollectionEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4215F3A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_int___, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B0D8A4(&NetworkManager_TypeInfo, v14);
    sub_B0D8A4(&ServantCommentEntity_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4215F3A = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_WarQuestSelectionMaster = (ServantCommentAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      Instance,
                                                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
  v21 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v19, v20);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v42 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             Instance,
                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
        v43 = (UserServantCollectionMaster_o *)Instance,
        !list) )
  {
LABEL_32:
    sub_B0D97C(Instance);
  }
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return v21;
  v24 = Count;
  v25 = 0;
  while ( 1 )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                  v25,
                                  (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_32;
    v26 = (ServantCommentEntity_o *)Instance;
    v27 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v27
      || (ServantCommentEntity_c *)Instance->klass->_2.typeHierarchy[v27 - 1] != ServantCommentEntity_TypeInfo )
    {
      break;
    }
    if ( !v21 )
      goto LABEL_32;
    m_CachedPtr = Instance->fields.m_CachedPtr;
    if ( !System_Collections_Generic_List_int___Contains(
            v21,
            m_CachedPtr,
            (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      ImageLimit = ServantCommentEntity__GetImageLimit(v26, v29);
      if ( !ImageLimit )
        goto LABEL_27;
      v32 = ImageLimit;
      if ( !*(_QWORD *)&ImageLimit->max_length )
        goto LABEL_27;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      Instance = (DataManager_o *)v43;
      if ( !v43 )
        goto LABEL_32;
      Instance = (DataManager_o *)UserServantCollectionMaster__TryGetEntity(v43, &entity, UserId, m_CachedPtr, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_27;
      if ( !entity )
        goto LABEL_32;
      Instance = (DataManager_o *)v42;
      if ( !v42 )
        goto LABEL_32;
      ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                     v42,
                                     m_CachedPtr,
                                     entity->fields.maxLimitCount,
                                     0LL);
      if ( (System_Array__IndexOf_int_(
              v32,
              ServantLimitCountSealAfter,
              (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
      {
LABEL_27:
        if ( ServantCommentEntity__IsOnlyOpenQuestCond(v26, questId, questPhase, v31) )
          goto LABEL_28;
        Instance = (DataManager_o *)MasterData_WarQuestSelectionMaster;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_32;
        if ( ServantCommentAddMaster__IsOnlyOpenQuestCond(
               MasterData_WarQuestSelectionMaster,
               m_CachedPtr,
               v26->fields.id,
               v26->fields.priority,
               1,
               questId,
               questPhase,
               v36) )
        {
LABEL_28:
          if ( ServantCommentEntity__IsOpen(v26, -1, 1, v35) )
            System_Collections_Generic_List_int___Add(
              v21,
              v26->fields.svtId,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
    }
    if ( ++v25 >= v24 )
      return v21;
  }
  v38 = (ServantCommentMaster_o *)sub_B0DC70(Instance);
  return (System_Collections_Generic_List_int__o *)ServantCommentMaster__GetServantListWithQuestClearAndImageLimit(
                                                     v38,
                                                     v39,
                                                     v40,
                                                     v41);
}


// local variable allocation has failed, the output may be wrong!
ServantCommentEntity_array *__fastcall ServantCommentMaster__GetServantListWithQuestClearAndImageLimit(
        ServantCommentMaster_o *this,
        int32_t questId,
        int32_t questPhase,
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
  ServantCommentAddMaster_o *Master_WarQuestSelectionMaster; // x22
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v20; // w24
  int32_t v21; // w25
  const MethodInfo *v22; // x3
  ServantCommentEntity_o *v23; // x26
  __int64 v24; // x9
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x7
  const MethodInfo *v27; // x1
  bool IsOpen; // w27
  ServantCommentMaster_o *v30; // x0
  int32_t v31; // w1
  const MethodInfo *v32; // x2

  if ( (byte_4215F3B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantCommentAddMaster___, v8);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v13);
    sub_B0D8A4(&ServantCommentEntity_TypeInfo, v14);
    byte_4215F3B = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantCommentAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list < 1 )
  {
LABEL_24:
    if ( v18 )
      return (ServantCommentEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                             (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
LABEL_26:
    sub_B0D97C(list);
  }
  v20 = (int)list;
  v21 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_26;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v21,
                                                                                         (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_26;
    v23 = (ServantCommentEntity_o *)list;
    v24 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v24
      || (ServantCommentEntity_c *)list->klass->_2.typeHierarchy[v24 - 1] != ServantCommentEntity_TypeInfo )
    {
      break;
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)ServantCommentEntity__IsOnlyOpenQuestCond(
                                                                                         (ServantCommentEntity_o *)list,
                                                                                         questId,
                                                                                         questPhase,
                                                                                         v22);
    if ( ((unsigned __int8)list & 1) != 0 )
      goto LABEL_16;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_26;
    if ( ServantCommentAddMaster__IsOnlyOpenQuestCond(
           Master_WarQuestSelectionMaster,
           v23->fields.svtId,
           v23->fields.id,
           v23->fields.priority,
           1,
           questId,
           questPhase,
           v26) )
    {
LABEL_16:
      IsOpen = ServantCommentEntity__IsOpen(v23, -1, 1, v25);
    }
    else
    {
      IsOpen = 0;
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)ServantCommentEntity__GetImageLimit(
                                                                                         v23,
                                                                                         v27);
    if ( list && IsOpen && list->fields._syncRoot )
    {
      if ( !v18 )
        goto LABEL_26;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v18,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    }
    if ( ++v21 >= v20 )
      goto LABEL_24;
  }
  v30 = (ServantCommentMaster_o *)sub_B0DC70(list);
  return (ServantCommentEntity_array *)ServantCommentMaster__GetNewProfileEntities(v30, v31, v32);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentMaster__IsNew(ServantCommentMaster_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_array *v7; // x21
  ServantCommentEntity_o *lookup; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **v15; // x22
  ServantCommentEntity_o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x22
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x22
  System_String_o *v45; // x21
  ServantCommentEntity_c *klass; // x8
  ServantCommentEntity_o *v47; // x22
  unsigned __int64 v48; // x10
  int32_t *p_offset; // x11
  __int64 v50; // x0
  const MethodInfo *v51; // x1
  ServantCommentEntity_c *v52; // x8
  ServantCommentEntity_o *v53; // x22
  unsigned __int64 v54; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v55; // x11
  __int64 v56; // x0
  int v57; // w8
  const MethodInfo *v58; // x3
  ServantCommentEntity_o *v59; // x21
  __int64 v60; // x10
  __int64 v62; // x0
  __int64 v63; // x0
  int v64; // [xsp+4h] [xbp-4Ch] BYREF
  int v65; // [xsp+8h] [xbp-48h] BYREF
  int32_t v66; // [xsp+Ch] [xbp-44h] BYREF

  v66 = svtId;
  if ( (byte_4215F38 & 1) == 0 )
  {
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&ServantCommentEntity_TypeInfo, v4);
    sub_B0D8A4(&string___TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v6);
    byte_4215F38 = 1;
  }
  v64 = 0;
  v65 = 1;
  v7 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
  lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v66, 0LL);
  if ( !v7 )
LABEL_56:
    sub_B0D97C(lookup);
  v15 = (System_Int32_array **)lookup;
  v16 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v15 )
      {
        lookup = (ServantCommentEntity_o *)sub_B0D964(v15, v7->obj.klass->_1.element_class);
        if ( !lookup )
        {
LABEL_57:
          v63 = sub_B0D99C(lookup);
          sub_B0D948(v63, 0LL);
        }
      }
      if ( !v7->max_length )
        goto LABEL_55;
      v7->m_Items[0] = (System_String_o *)v15;
      sub_B0D840((BattleServantConfConponent_o *)v7->m_Items, v15, v9, v10, v11, v12, v13, v14);
      lookup = (ServantCommentEntity_o *)StringLiteral_1232/*":"*/;
      if ( StringLiteral_1232/*":"*/ )
      {
        lookup = (ServantCommentEntity_o *)sub_B0D964(StringLiteral_1232/*":"*/, v7->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_57;
        v23 = (System_Int32_array **)StringLiteral_1232/*":"*/;
      }
      else
      {
        v23 = 0LL;
      }
      if ( v7->max_length <= 1 )
        goto LABEL_55;
      v7->m_Items[1] = (System_String_o *)v23;
      sub_B0D840((BattleServantConfConponent_o *)&v7->m_Items[1], v23, v17, v18, v19, v20, v21, v22);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v65, 0LL);
      v30 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = (ServantCommentEntity_o *)sub_B0D964(lookup, v7->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_57;
      }
      if ( v7->max_length <= 2 )
        goto LABEL_55;
      v7->m_Items[2] = (System_String_o *)v30;
      sub_B0D840((BattleServantConfConponent_o *)&v7->m_Items[2], v30, v24, v25, v26, v27, v28, v29);
      lookup = (ServantCommentEntity_o *)StringLiteral_1232/*":"*/;
      if ( StringLiteral_1232/*":"*/ )
      {
        lookup = (ServantCommentEntity_o *)sub_B0D964(StringLiteral_1232/*":"*/, v7->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_57;
        v37 = (System_Int32_array **)StringLiteral_1232/*":"*/;
      }
      else
      {
        v37 = 0LL;
      }
      if ( v7->max_length <= 3 )
      {
LABEL_55:
        v62 = sub_B0D9A8(lookup);
        sub_B0D948(v62, 0LL);
      }
      v7->m_Items[3] = (System_String_o *)v37;
      sub_B0D840((BattleServantConfConponent_o *)&v7->m_Items[3], v37, v31, v32, v33, v34, v35, v36);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v64, 0LL);
      v44 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = (ServantCommentEntity_o *)sub_B0D964(lookup, v7->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_57;
      }
      if ( v7->max_length <= 4 )
        goto LABEL_55;
      v7->m_Items[4] = (System_String_o *)v44;
      sub_B0D840((BattleServantConfConponent_o *)&v7->m_Items[4], v44, v38, v39, v40, v41, v42, v43);
      v45 = System_String__Concat_43930028(v7, 0LL);
      lookup = (ServantCommentEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_56;
      klass = lookup->klass;
      v47 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v48 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v48;
          p_offset += 4;
          if ( v48 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_29;
        }
        v50 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_29:
        v50 = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v50)(
              v47,
              v45,
              *(_QWORD *)(v50 + 8)) & 1) == 0 )
        break;
      lookup = (ServantCommentEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( lookup )
      {
        v52 = lookup->klass;
        v53 = lookup;
        if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
        {
          v54 = 0LL;
          v55 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v52->_1.interfaceOffsets->offset;
          while ( *(v55 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            ++v54;
            v55 += 2;
            if ( v54 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
              goto LABEL_37;
          }
          v56 = (__int64)(&v52->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v55);
        }
        else
        {
LABEL_37:
          v56 = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
        }
        lookup = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v56)(
                                             v53,
                                             v45,
                                             *(_QWORD *)(v56 + 8));
        if ( lookup )
        {
          v59 = lookup;
          v60 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&lookup->klass->_2.bitflags2 + 1) >= (unsigned int)v60
            && (ServantCommentEntity_c *)lookup->klass->_2.typeHierarchy[v60 - 1] == ServantCommentEntity_TypeInfo )
          {
            if ( ServantCommentEntity__IsOpen(lookup, -1, 1, v58) )
              v16 = v59;
            ++v64;
            v7 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
            lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v66, 0LL);
            v15 = (System_Int32_array **)lookup;
            if ( v7 )
              continue;
          }
        }
      }
      goto LABEL_56;
    }
    if ( v16 )
    {
      if ( ServantCommentEntity__IsNew(v16, v51) )
        return 1;
      goto LABEL_42;
    }
    if ( !v64 )
      break;
LABEL_42:
    v57 = v65;
LABEL_43:
    v64 = 0;
    v65 = v57 + 1;
    v7 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
    lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v66, 0LL);
    v15 = (System_Int32_array **)lookup;
    v16 = 0LL;
    if ( !v7 )
      goto LABEL_56;
  }
  v57 = v65;
  if ( v65 == 1 )
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  ServantCommentEntity_o *v25; // x0
  ServantCommentEntity_o *v26; // x22
  __int64 v27; // x9
  System_Int32_array *ImageLimit; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_IEnumerable_T__o *v31; // x24
  System_Collections_Generic_List_int__o *v32; // x23
  __int64 v33; // x0
  const MethodInfo *v34; // x3
  int v35; // w8
  bool v36; // w20
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0
  int v43; // [xsp+10h] [xbp-60h]

  if ( (byte_4215F3D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Sort__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor___67884944, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B0D8A4(&ServantCommentEntity_TypeInfo, v14);
    byte_4215F3D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list
    || (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
    sub_B0D97C(list);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_17:
      v24 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                      Enumerator,
                                      *(_QWORD *)(v24 + 8));
    v26 = v25;
    if ( !v25 )
      goto LABEL_45;
    v27 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v25->klass->_2.bitflags2 + 1) < (unsigned int)v27
      || (ServantCommentEntity_c *)v25->klass->_2.typeHierarchy[v27 - 1] != ServantCommentEntity_TypeInfo )
    {
      v25 = (ServantCommentEntity_o *)sub_B0DC70(v25);
LABEL_45:
      sub_B0D97C(v25);
    }
    if ( v25->fields.svtId == svtId )
    {
      ImageLimit = ServantCommentEntity__GetImageLimit(v25, (const MethodInfo *)ServantCommentEntity_TypeInfo);
      v31 = (System_Collections_Generic_IEnumerable_T__o *)ImageLimit;
      if ( ImageLimit )
      {
        if ( *(_QWORD *)&ImageLimit->max_length )
        {
          v32 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                            System_Collections_Generic_List_int__TypeInfo,
                                                            v29,
                                                            v30);
          System_Collections_Generic_List_int____ctor_50000796(
            v32,
            v31,
            (const MethodInfo_2FAF39C *)Method_System_Collections_Generic_List_int___ctor___67884944);
          if ( !v32 )
            sub_B0D97C(v33);
          System_Collections_Generic_List_int___Sort(
            v32,
            (const MethodInfo_2FB1E20 *)Method_System_Collections_Generic_List_int__Sort__);
          if ( !v32->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v35 = v32->fields._items->m_Items[1];
          if ( v35 >= 3 )
          {
            if ( !v32->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            if ( v35 == limitCount && ServantCommentEntity__IsOpen(v26, -1, 1, v34) )
            {
              v43 = 131;
              v36 = 1;
              goto LABEL_35;
            }
          }
        }
      }
    }
  }
  v36 = 0;
  v43 = 129;
LABEL_35:
  v37 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v38 = 0LL;
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      ++v38;
      v39 += 4;
      if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_39:
    v40 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  if ( v43 == 129 )
    return 0;
  return v36;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommentMaster__OpenSaintGraphProfileChange(
        int32_t svtId,
        int32_t limitCount,
        ServantCommentMaster_ProfileChangeDecideDelegate_o *decideAction,
        System_Action_o *endAction,
        const MethodInfo *method)
{
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
  __int64 v21; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_o *v35; // x20
  Il2CppObject *Name; // x0
  System_String_o *v37; // x20
  CommonUI_o *Instance; // x21
  System_String_o *v39; // x22
  System_String_o *v40; // x23
  __int64 v41; // x1
  __int64 v42; // x2
  CommonConfirmDialog_ClickDelegate_o *v43; // x24
  WarEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4215F3E & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&limitCount);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_B0D8A4(&DataManager_TypeInfo, v11);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v12);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B0D8A4(&Method_ServantCommentMaster___c__DisplayClass16_0__OpenSaintGraphProfileChange_b__0__, v15);
    sub_B0D8A4(&ServantCommentMaster___c__DisplayClass16_0_TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_10934/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/, v17);
    sub_B0D8A4(&StringLiteral_10933/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/, v18);
    sub_B0D8A4(&StringLiteral_1/*""*/, v19);
    sub_B0D8A4(&StringLiteral_10931/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/, v20);
    byte_4215F3E = 1;
  }
  entity = 0LL;
  v21 = sub_B0D974(ServantCommentMaster___c__DisplayClass16_0_TypeInfo, *(_QWORD *)&limitCount, decideAction);
  ServantCommentMaster___c__DisplayClass16_0___ctor((ServantCommentMaster___c__DisplayClass16_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_17;
  *(_QWORD *)(v21 + 16) = decideAction;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v21 + 16),
    (System_Int32_array **)decideAction,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  *(_QWORD *)(v21 + 32) = endAction;
  *(_DWORD *)(v21 + 24) = svtId;
  *(_DWORD *)(v21 + 28) = limitCount;
  sub_B0D840((BattleServantConfConponent_o *)(v21 + 32), (System_Int32_array **)endAction, v29, v30, v31, v32, v33, v34);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_17;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    Master_WarQuestSelectionMaster,
    &entity,
    *(_DWORD *)(v21 + 24),
    (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)LocalizationManager__Get(
                                                                                    (System_String_o *)StringLiteral_10934/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/,
                                                                                    0LL);
  if ( !entity )
    goto LABEL_17;
  v35 = (System_String_o *)Master_WarQuestSelectionMaster;
  Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)entity, *(_DWORD *)(v21 + 28), -1, 0LL);
  v37 = System_String__Format(v35, Name, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_10933/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/, 0LL);
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_10931/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/, 0LL);
  v43 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v41, v42);
  CommonConfirmDialog_ClickDelegate___ctor(
    v43,
    (Il2CppObject *)v21,
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
    sub_B0D97C(Master_WarQuestSelectionMaster);
  CommonUI__OpenConfirmDialogOnFade(
    Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v37,
    v39,
    v40,
    v43,
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
  if ( (byte_4215F36 & 1) == 0 )
  {
    sub_B0D8A4(&ServantCommentManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4215F36 = 1;
  }
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ServantCommentManager__IsOpen(svtId, svtCommentId, svtCommentPriority, *(const MethodInfo **)&svtCommentPriority);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommentMaster__SetOpen_27076460(
        ServantCommentMaster_o *this,
        int32_t svtId,
        System_Int32_array *svtCommentIdList,
        System_Int32_array *svtCommentPriorityList,
        const MethodInfo *method)
{
  if ( (byte_4215F37 & 1) == 0 )
  {
    sub_B0D8A4(&ServantCommentManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4215F37 = 1;
  }
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ServantCommentManager__SetOpen_27065912(
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
  __int64 v11; // x1
  System_String_o *PK; // x2

  if ( (byte_4215F31 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__, entity);
    sub_B0D8A4(&ServantCommentEntity_TypeInfo, v11);
    byte_4215F31 = 1;
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
           (const MethodInfo_266A07C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__);
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
  sub_B0D840(p_method, object);
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
  __int64 v12; // x1
  __int64 v14[5]; // [xsp+0h] [xbp-60h] BYREF
  char v15[4]; // [xsp+2Ch] [xbp-34h] BYREF
  int32_t v16; // [xsp+38h] [xbp-28h] BYREF
  int32_t v17; // [xsp+3Ch] [xbp-24h] BYREF

  v16 = limitCount;
  v17 = svtid;
  v15[0] = isDecide;
  if ( (byte_4212220 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, *(_QWORD *)&svtid);
    sub_B0D8A4(&int_TypeInfo, v12);
    byte_4212220 = 1;
  }
  v14[4] = 0LL;
  v14[0] = j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v14[2] = j_il2cpp_value_box_0(bool_TypeInfo, v15);
  v14[3] = (__int64)finishCallback;
  return (System_IAsyncResult_o *)sub_B0D848(this, v14, callback, object);
}


void __fastcall ServantCommentMaster_ProfileChangeDecideDelegate__EndInvoke(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
  __int64 v16; // x8
  unsigned __int64 v17; // x10
  _DWORD *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  void (__fastcall **v22)(__int64 *, _QWORD, _QWORD, bool, System_Action_o *, _QWORD); // x0
  ServantCommentMaster_ProfileChangeDecideDelegate_o *v23; // x8
  __int64 *v24; // x24
  __int64 v25; // x25
  void (__fastcall *v26)(_QWORD, _QWORD, bool, System_Action_o *, __int64); // x26
  char v27; // w26
  char v28; // w0
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  ServantCommentMaster_ProfileChangeDecideDelegate_o *v35; // [xsp+8h] [xbp-58h] BYREF

  v35 = this;
  v6 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v6 )
  {
    v12 = &v35;
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
      v23 = v12[v13];
      v24 = *(__int64 **)&v23->fields.method;
      v25 = *(_QWORD *)&v23->fields.extra_arg;
      v26 = *(void (__fastcall **)(_QWORD, _QWORD, bool, System_Action_o *, __int64))&v23->fields.method_ptr;
      if ( *(__int16 *)(v25 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&svtid, *(_QWORD *)&limitCount, isDecide);
      if ( (sub_B0D8D4(v25) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v25 + 74) != 4 )
        goto LABEL_36;
      v26((unsigned int)svtid, (unsigned int)limitCount, isDecide, finishCallback, v25);
LABEL_37:
      if ( ++v13 == v11 )
        return;
    }
    if ( v24 && *(__int16 *)(v25 + 72) != -1 && (*(_BYTE *)(*v24 + 277) & 1) == 0 && this->fields.m_target )
    {
      v27 = sub_B0D8CC(v25);
      v28 = sub_B0DCD0(v25);
      if ( (v27 & 1) != 0 )
      {
        if ( (v28 & 1) != 0 )
        {
          v29 = *v24;
          v30 = *(_QWORD *)(v25 + 24);
          v31 = *(unsigned __int16 *)(v25 + 72);
          if ( *(_WORD *)(*v24 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_35;
            }
            v21 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v21 = sub_AA67A0(v24, v30, v31);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, bool, System_Action_o *, _QWORD))sub_B0D954(v20, v25);
        (*v22)(v24, (unsigned int)svtid, (unsigned int)limitCount, isDecide, finishCallback, v22);
      }
      else
      {
        v14 = *(unsigned __int16 *)(v25 + 72);
        if ( (v28 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v25);
          v16 = *v24;
          if ( *(_WORD *)(*v24 + 298) )
          {
            v17 = 0LL;
            v18 = (_DWORD *)(*(_QWORD *)(v16 + 176) + 8LL);
            while ( *((_QWORD *)v18 - 1) != class_0 )
            {
              ++v17;
              v18 += 4;
              if ( v17 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_11;
            }
            v19 = v16 + 16LL * (int)(*v18 + v14) + 312;
          }
          else
          {
LABEL_11:
            v19 = sub_AA67A0(v24, class_0, v14);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, bool, System_Action_o *, _QWORD))v19)(
            v24,
            (unsigned int)svtid,
            (unsigned int)limitCount,
            isDecide,
            finishCallback,
            *(_QWORD *)(v19 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, bool, System_Action_o *, _QWORD))(*v24
                                                                                             + 16LL
                                                                                             * *(unsigned __int16 *)(v25 + 72)
                                                                                             + 312))(
            v24,
            (unsigned int)svtid,
            (unsigned int)limitCount,
            isDecide,
            finishCallback,
            *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, bool, System_Action_o *, __int64))v26)(
      v24,
      (unsigned int)svtid,
      (unsigned int)limitCount,
      isDecide,
      finishCallback,
      v25);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommentMaster___c__DisplayClass17_0___DefaultProfileChangeDecideAction_b__0(
        ServantCommentMaster___c__DisplayClass17_0_o *this,
        bool isDcd,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  CommonUI_o *v10; // x20
  AvalonSceneManager_c *v11; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__1; // x21

  if ( (byte_421221E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDcd);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_ServantCommentMaster___c__DisplayClass17_0__DefaultProfileChangeDecideAction_b__1__, v6);
    byte_421221E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)Instance;
  v11 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantCommentMaster___c__DisplayClass17_0__DefaultProfileChangeDecideAction_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B0D840(&this->fields.__9__1, _9__1);
  }
  if ( !v10 )
    sub_B0D97C(Instance);
  CommonUI__maskFadeout(v10, 1, DEFAULT_FADE_TIME, _9__1, 0LL);
}


void __fastcall ServantCommentMaster___c__DisplayClass17_0___DefaultProfileChangeDecideAction_b__1(
        ServantCommentMaster___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  CommonUI_o *v5; // x20

  if ( (byte_421221F & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_421221F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v5 )
LABEL_9:
    sub_B0D97C(Instance);
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}