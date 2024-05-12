void __fastcall ServantCommentMaster___ctor(ServantCommentMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438C794 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__);
    byte_438C794 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    2,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__);
}


void __fastcall ServantCommentMaster__DefaultProfileChangeDecideAction(
        int32_t svtId,
        int32_t limitCount,
        bool isDecide,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v9; // x20
  CommonUI_o *UserId; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x23
  CommonUI_o *v19; // x21
  WebViewManager_o *Instance; // x0
  UserServantCollectionEntity_o *v21; // x21
  CommonUI_o *v22; // x22
  ServantStatusDialog_EndDelegate_o *v23; // x23
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438C7A1 & 1) == 0 )
  {
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_ServantCommentMaster___c__DisplayClass17_0__DefaultProfileChangeDecideAction_b__0__);
    sub_B775C4(&ServantCommentMaster___c__DisplayClass17_0_TypeInfo);
    byte_438C7A1 = 1;
  }
  entity = 0LL;
  v9 = sub_B77694(ServantCommentMaster___c__DisplayClass17_0_TypeInfo);
  ServantCommentMaster___c__DisplayClass17_0___ctor((ServantCommentMaster___c__DisplayClass17_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_23;
  *(_QWORD *)(v9 + 16) = endAction;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)endAction, v12, v13, v14, v15, v16, v17);
  if ( isDecide )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
      UserId = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v19 = UserId;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( v19 )
      {
        CommonUI__maskFadein(v19, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
        UserId = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( UserId )
        {
          CommonUI__CloseConfirmDialog(UserId, 0LL);
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v21 = entity;
          v22 = (CommonUI_o *)Instance;
          v23 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v23,
            (Il2CppObject *)v9,
            Method_ServantCommentMaster___c__DisplayClass17_0__DefaultProfileChangeDecideAction_b__0__,
            0LL);
          if ( v22 )
          {
            CommonUI__OpenServantStatusDialog_18068440(v22, 33, v21, limitCount, v23, 0LL);
            return;
          }
        }
      }
LABEL_23:
      sub_B7769C(UserId, v11);
    }
  }
  UserId = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !UserId )
    goto LABEL_23;
  CommonUI__CloseConfirmDialog_18056328(UserId, *(System_Action_o **)(v9 + 16), 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantCommentEntity_o *__fastcall ServantCommentMaster__GetEntity(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438C792 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__);
    sub_B775C4(&ServantCommentEntity_TypeInfo);
    byte_438C792 = 1;
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
                                     (const MethodInfo_21FBCE4 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__);
}


ServantCommentEntity_array *__fastcall ServantCommentMaster__GetEntityList(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t condType,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6

  return ServantCommentMaster__GetEntityList_27841512(this, svtId, -1, condType, 0, 0, v4);
}


ServantCommentEntity_array *__fastcall ServantCommentMaster__GetEntityListWithImageList(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t condType,
        bool addCheck,
        const MethodInfo *method)
{
  System_String_array *v8; // x25
  ServantCommentEntity_o *lookup; // x0
  const MethodInfo *v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x24
  const MethodInfo *v19; // x5
  const MethodInfo *v20; // x3
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x26
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x26
  System_String_o *v49; // x25
  ServantCommentEntity_c *klass; // x8
  ServantCommentEntity_o *v51; // x26
  unsigned __int64 v52; // x10
  int32_t *p_offset; // x11
  __int64 v54; // x0
  ServantCommentEntity_c *v55; // x8
  ServantCommentEntity_o *v56; // x26
  unsigned __int64 v57; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v58; // x11
  __int64 v59; // x0
  ServantCommentEntity_o *v60; // x25
  __int64 v61; // x10
  System_Int32_array *ImageLimit; // x0
  __int64 v63; // x9
  char v64; // w8
  __int64 v65; // x10
  int v66; // w11
  __int64 v67; // x12
  int32_t v68; // w8
  __int64 v70; // x0
  __int64 v71; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v74; // [xsp+8h] [xbp-68h]
  int32_t v75; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v76; // [xsp+18h] [xbp-58h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-54h] BYREF

  svtIda = svtId;
  if ( (byte_438C796 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_IndexOf_int___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantCommentAddMaster___);
    sub_B775C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_B775C4(&ServantCommentEntity_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&StringLiteral_1252/*":"*/);
    byte_438C796 = 1;
  }
  v74 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v74,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v75 = 0;
  v76 = 1;
  v8 = (System_String_array *)sub_B775DC(string___TypeInfo, 5LL);
  lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&svtIda, 0LL);
  if ( !v8 )
    goto LABEL_70;
  v17 = (System_Int32_array **)lookup;
  v18 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v17 )
      {
        lookup = (ServantCommentEntity_o *)sub_B77684(v17, v8->obj.klass->_1.element_class);
        if ( !lookup )
        {
LABEL_72:
          v71 = sub_B776BC(lookup);
          sub_B77668(v71, 0LL);
        }
      }
      if ( !v8->max_length )
        goto LABEL_71;
      v8->m_Items[0] = (System_String_o *)v17;
      sub_B77560((BattleServantConfConponent_o *)v8->m_Items, v17, v11, v12, v13, v14, v15, v16);
      lookup = (ServantCommentEntity_o *)StringLiteral_1252/*":"*/;
      if ( StringLiteral_1252/*":"*/ )
      {
        lookup = (ServantCommentEntity_o *)sub_B77684(StringLiteral_1252/*":"*/, v8->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_72;
        v27 = (System_Int32_array **)StringLiteral_1252/*":"*/;
      }
      else
      {
        v27 = 0LL;
      }
      if ( v8->max_length <= 1 )
        goto LABEL_71;
      v8->m_Items[1] = (System_String_o *)v27;
      sub_B77560((BattleServantConfConponent_o *)&v8->m_Items[1], v27, v21, v22, v23, v24, v25, v26);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v76, 0LL);
      v34 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = (ServantCommentEntity_o *)sub_B77684(lookup, v8->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_72;
      }
      if ( v8->max_length <= 2 )
        goto LABEL_71;
      v8->m_Items[2] = (System_String_o *)v34;
      sub_B77560((BattleServantConfConponent_o *)&v8->m_Items[2], v34, v28, v29, v30, v31, v32, v33);
      lookup = (ServantCommentEntity_o *)StringLiteral_1252/*":"*/;
      if ( StringLiteral_1252/*":"*/ )
      {
        lookup = (ServantCommentEntity_o *)sub_B77684(StringLiteral_1252/*":"*/, v8->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_72;
        v41 = (System_Int32_array **)StringLiteral_1252/*":"*/;
      }
      else
      {
        v41 = 0LL;
      }
      if ( v8->max_length <= 3 )
      {
LABEL_71:
        v70 = sub_B776C8(lookup);
        sub_B77668(v70, 0LL);
      }
      v8->m_Items[3] = (System_String_o *)v41;
      sub_B77560((BattleServantConfConponent_o *)&v8->m_Items[3], v41, v35, v36, v37, v38, v39, v40);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v75, 0LL);
      v48 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = (ServantCommentEntity_o *)sub_B77684(lookup, v8->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_72;
      }
      if ( v8->max_length <= 4 )
        goto LABEL_71;
      v8->m_Items[4] = (System_String_o *)v48;
      sub_B77560((BattleServantConfConponent_o *)&v8->m_Items[4], v48, v42, v43, v44, v45, v46, v47);
      v49 = System_String__Concat_44982964(v8, 0LL);
      lookup = (ServantCommentEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_70;
      klass = lookup->klass;
      v51 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v52 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v52;
          p_offset += 4;
          if ( v52 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_38;
        }
        v54 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_38:
        v54 = sub_B0F4C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v54)(
              v51,
              v49,
              *(_QWORD *)(v54 + 8)) & 1) == 0 )
        break;
      lookup = (ServantCommentEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_70;
      v55 = lookup->klass;
      v56 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v57 = 0LL;
        v58 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v55->_1.interfaceOffsets->offset;
        while ( *(v58 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v57;
          v58 += 2;
          if ( v57 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_46;
        }
        v59 = (__int64)(&v55->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v58);
      }
      else
      {
LABEL_46:
        v59 = sub_B0F4C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
      }
      lookup = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v59)(
                                           v56,
                                           v49,
                                           *(_QWORD *)(v59 + 8));
      if ( !lookup )
        goto LABEL_70;
      v60 = lookup;
      v61 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&lookup->klass->_2.bitflags2 + 1) < (unsigned int)v61
        || (ServantCommentEntity_c *)lookup->klass->_2.typeHierarchy[v61 - 1] != ServantCommentEntity_TypeInfo )
      {
        goto LABEL_70;
      }
      ImageLimit = ServantCommentEntity__GetImageLimit(lookup, v10);
      if ( ImageLimit )
      {
        v63 = *(_QWORD *)&ImageLimit->max_length;
        if ( v63 )
        {
          if ( (int)v63 >= 1 )
          {
            v64 = 0;
            v65 = 8LL;
            do
            {
              v66 = *((_DWORD *)&ImageLimit->obj.klass + v65);
              v67 = v65 - 7;
              ++v65;
              v64 |= v66 > 2;
            }
            while ( v67 < (int)v63 );
            if ( (v64 & 1) != 0
              && (System_Array__IndexOf_int_(
                    ImageLimit,
                    imageLimitCount,
                    (const MethodInfo_2005430 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
            {
              if ( !condType || v60->fields.condType == condType )
                goto LABEL_12;
              if ( addCheck )
              {
                lookup = (ServantCommentEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !lookup )
                  goto LABEL_70;
                lookup = (ServantCommentEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)lookup,
                                                     (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
                if ( !lookup )
                  goto LABEL_70;
                if ( ServantCommentAddMaster__IsEntityListCondContain(
                       (ServantCommentAddMaster_o *)lookup,
                       svtIda,
                       v76,
                       v75,
                       condType,
                       v19) )
                {
LABEL_12:
                  if ( !v18 || ServantCommentEntity__IsOpen(v60, -1, 1, v20) )
                    v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)v60;
                }
              }
            }
          }
        }
      }
      ++v75;
      v8 = (System_String_array *)sub_B775DC(string___TypeInfo, 5LL);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&svtIda, 0LL);
      v17 = (System_Int32_array **)lookup;
      if ( !v8 )
        goto LABEL_70;
    }
    if ( v18 )
    {
      lookup = (ServantCommentEntity_o *)v74;
      if ( !v74 )
        goto LABEL_70;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v74,
        v18,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
      goto LABEL_64;
    }
    if ( !v75 )
      break;
LABEL_64:
    v68 = v76;
LABEL_65:
    v75 = 0;
    v76 = v68 + 1;
    v8 = (System_String_array *)sub_B775DC(string___TypeInfo, 5LL);
    lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&svtIda, 0LL);
    v17 = (System_Int32_array **)lookup;
    v18 = 0LL;
    if ( !v8 )
      goto LABEL_70;
  }
  v68 = v76;
  if ( v76 == 1 )
    goto LABEL_65;
  lookup = (ServantCommentEntity_o *)v74;
  if ( !v74 )
LABEL_70:
    sub_B7769C(lookup, v10);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v74,
                                         (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


ServantCommentEntity_array *__fastcall ServantCommentMaster__GetEntityList_27841512(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t condType,
        bool addCheck,
        bool overLimit,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x24
  System_String_array *v11; // x26
  __int64 lookup; // x0
  const MethodInfo *v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x27
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x25
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
  System_Int32_array **v35; // x27
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
  System_String_o *v50; // x26
  __int64 v51; // x8
  __int64 v52; // x27
  unsigned __int64 v53; // x10
  int *v54; // x11
  __int64 v55; // x0
  __int64 v56; // x8
  __int64 v57; // x27
  unsigned __int64 v58; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v59; // x11
  __int64 v60; // x0
  int32_t v61; // w8
  ServantCommentEntity_o *v62; // x26
  __int64 v63; // x10
  System_Int32_array *ImageLimit; // x0
  const MethodInfo *v65; // x3
  __int64 v66; // x8
  __int64 v67; // x9
  const MethodInfo *v68; // x5
  __int64 v70; // x0
  __int64 v71; // x0
  int32_t v74; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v75; // [xsp+18h] [xbp-58h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-54h] BYREF

  svtIda = svtId;
  if ( (byte_438C795 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_IndexOf_int___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantCommentAddMaster___);
    sub_B775C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_B775C4(&ServantCommentEntity_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&StringLiteral_1252/*":"*/);
    byte_438C795 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v74 = 0;
  v75 = 1;
  v11 = (System_String_array *)sub_B775DC(string___TypeInfo, 5LL);
  lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
  if ( !v11 )
    goto LABEL_74;
  v20 = (System_Int32_array **)lookup;
  v21 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v20 )
      {
        lookup = sub_B77684(v20, v11->obj.klass->_1.element_class);
        if ( !lookup )
        {
LABEL_75:
          v71 = sub_B776BC(lookup);
          sub_B77668(v71, 0LL);
        }
      }
      if ( !v11->max_length )
        goto LABEL_73;
      v11->m_Items[0] = (System_String_o *)v20;
      sub_B77560((BattleServantConfConponent_o *)v11->m_Items, v20, v14, v15, v16, v17, v18, v19);
      lookup = StringLiteral_1252/*":"*/;
      if ( StringLiteral_1252/*":"*/ )
      {
        lookup = sub_B77684(StringLiteral_1252/*":"*/, v11->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_75;
        v28 = (System_Int32_array **)StringLiteral_1252/*":"*/;
      }
      else
      {
        v28 = 0LL;
      }
      if ( v11->max_length <= 1 )
        goto LABEL_73;
      v11->m_Items[1] = (System_String_o *)v28;
      sub_B77560((BattleServantConfConponent_o *)&v11->m_Items[1], v28, v22, v23, v24, v25, v26, v27);
      lookup = (__int64)System_Int32__ToString((int32_t)&v75, 0LL);
      v35 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = sub_B77684(lookup, v11->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_75;
      }
      if ( v11->max_length <= 2 )
        goto LABEL_73;
      v11->m_Items[2] = (System_String_o *)v35;
      sub_B77560((BattleServantConfConponent_o *)&v11->m_Items[2], v35, v29, v30, v31, v32, v33, v34);
      lookup = StringLiteral_1252/*":"*/;
      if ( StringLiteral_1252/*":"*/ )
      {
        lookup = sub_B77684(StringLiteral_1252/*":"*/, v11->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_75;
        v42 = (System_Int32_array **)StringLiteral_1252/*":"*/;
      }
      else
      {
        v42 = 0LL;
      }
      if ( v11->max_length <= 3 )
      {
LABEL_73:
        v70 = sub_B776C8(lookup);
        sub_B77668(v70, 0LL);
      }
      v11->m_Items[3] = (System_String_o *)v42;
      sub_B77560((BattleServantConfConponent_o *)&v11->m_Items[3], v42, v36, v37, v38, v39, v40, v41);
      lookup = (__int64)System_Int32__ToString((int32_t)&v74, 0LL);
      v49 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = sub_B77684(lookup, v11->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_75;
      }
      if ( v11->max_length <= 4 )
        goto LABEL_73;
      v11->m_Items[4] = (System_String_o *)v49;
      sub_B77560((BattleServantConfConponent_o *)&v11->m_Items[4], v49, v43, v44, v45, v46, v47, v48);
      v50 = System_String__Concat_44982964(v11, 0LL);
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_74;
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
        v55 = sub_B0F4C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v55)(v52, v50, *(_QWORD *)(v55 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_74;
      v56 = *(_QWORD *)lookup;
      v57 = lookup;
      if ( *(_WORD *)(*(_QWORD *)lookup + 298LL) )
      {
        v58 = 0LL;
        v59 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v56 + 176) + 8LL);
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
        v60 = sub_B0F4C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v60)(v57, v50, *(_QWORD *)(v60 + 8));
      if ( !lookup )
        goto LABEL_74;
      v62 = (ServantCommentEntity_o *)lookup;
      v63 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)lookup + 300LL) < (unsigned int)v63
        || *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)lookup + 200LL) + 8 * v63 - 8) != ServantCommentEntity_TypeInfo )
      {
        goto LABEL_74;
      }
      ImageLimit = ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)lookup, v13);
      if ( imageLimitCount != -1 )
      {
        if ( ImageLimit )
        {
          v66 = *(_QWORD *)&ImageLimit->max_length;
          if ( v66 )
          {
            if ( overLimit )
            {
              if ( (int)v66 < 1 )
                goto LABEL_68;
              v67 = 0LL;
              while ( ImageLimit->m_Items[v67 + 1] > imageLimitCount )
              {
                if ( (int)++v67 >= (int)v66 )
                  goto LABEL_68;
              }
            }
            else if ( (System_Array__IndexOf_int_(
                         ImageLimit,
                         imageLimitCount,
                         (const MethodInfo_2005430 *)Method_System_Array_IndexOf_int___) & 0x80000000) != 0 )
            {
              goto LABEL_68;
            }
          }
        }
      }
      if ( !condType || v62->fields.condType == condType )
        goto LABEL_62;
      if ( addCheck )
      {
        lookup = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lookup )
          goto LABEL_74;
        lookup = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)lookup,
                            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
        if ( !lookup )
          goto LABEL_74;
        if ( ServantCommentAddMaster__IsEntityListCondContain(
               (ServantCommentAddMaster_o *)lookup,
               svtIda,
               v75,
               v74,
               condType,
               v68) )
        {
LABEL_62:
          if ( !v21 || ServantCommentEntity__IsOpen(v62, -1, 1, v65) )
            v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)v62;
        }
      }
LABEL_68:
      ++v74;
      v11 = (System_String_array *)sub_B775DC(string___TypeInfo, 5LL);
      lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
      v20 = (System_Int32_array **)lookup;
      if ( !v11 )
        goto LABEL_74;
    }
    if ( v21 )
    {
      if ( !v10 )
        goto LABEL_74;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v10,
        v21,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
      goto LABEL_42;
    }
    if ( !v74 )
      break;
LABEL_42:
    v61 = v75;
LABEL_43:
    v74 = 0;
    v75 = v61 + 1;
    v11 = (System_String_array *)sub_B775DC(string___TypeInfo, 5LL);
    lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
    v20 = (System_Int32_array **)lookup;
    v21 = 0LL;
    if ( !v11 )
      goto LABEL_74;
  }
  v61 = v75;
  if ( v75 == 1 )
    goto LABEL_43;
  if ( !v10 )
LABEL_74:
    sub_B7769C(lookup, v13);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                         (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


bool __fastcall ServantCommentMaster__GetNewList(
        ServantCommentMaster_o *this,
        System_Int32_array **idList,
        System_Int32_array **priorityList,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v9; // x23
  System_Collections_Generic_List_int__o *v10; // x22
  __int64 Instance; // x0
  const MethodInfo *v12; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x25
  int32_t v14; // w24
  System_String_array *v15; // x26
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x27
  ServantCommentEntity_o *v23; // x25
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
  System_Int32_array **v37; // x27
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
  System_Int32_array **v51; // x27
  System_String_o *v52; // x26
  __int64 v53; // x8
  __int64 v54; // x27
  unsigned __int64 v55; // x10
  int *v56; // x11
  __int64 v57; // x0
  __int64 v58; // x8
  __int64 v59; // x27
  unsigned __int64 v60; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v61; // x11
  __int64 v62; // x0
  int v63; // w8
  ServantCommentEntity_o *v64; // x26
  __int64 v65; // x10
  const MethodInfo *v66; // x3
  __int64 v67; // x8
  int v68; // w8
  System_Int32_array **v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  __int64 v84; // x0
  __int64 v85; // x0
  BattleServantConfConponent_o *v86; // [xsp+0h] [xbp-80h]
  BattleServantConfConponent_o *v87; // [xsp+8h] [xbp-78h]
  int32_t ServantLimitCountSealAfter; // [xsp+14h] [xbp-6Ch]
  __int64 v89; // [xsp+18h] [xbp-68h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+20h] [xbp-60h] BYREF
  int32_t svtIda; // [xsp+2Ch] [xbp-54h] BYREF

  svtIda = svtId;
  if ( (byte_438C79B & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&ServantCommentEntity_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&StringLiteral_1252/*":"*/);
    byte_438C79B = 1;
  }
  v89 = 0LL;
  entity = 0LL;
  v9 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  v10 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    v14 = entity->fields.maxLimitCount ? entity->fields.maxLimitCount : 1;
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_79;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Instance )
      goto LABEL_79;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   svtIda,
                                   v14,
                                   0LL);
  }
  v86 = (BattleServantConfConponent_o *)priorityList;
  v87 = (BattleServantConfConponent_o *)idList;
  v89 = 0x100000000LL;
  v15 = (System_String_array *)sub_B775DC(string___TypeInfo, 5LL);
  Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
  if ( !v15 )
    goto LABEL_79;
  v22 = (System_Int32_array **)Instance;
  v23 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v22 )
      {
        Instance = sub_B77684(v22, v15->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_80:
          v85 = sub_B776BC(Instance);
          sub_B77668(v85, 0LL);
        }
      }
      if ( !v15->max_length )
        goto LABEL_78;
      v15->m_Items[0] = (System_String_o *)v22;
      sub_B77560((BattleServantConfConponent_o *)v15->m_Items, v22, v16, v17, v18, v19, v20, v21);
      Instance = StringLiteral_1252/*":"*/;
      if ( StringLiteral_1252/*":"*/ )
      {
        Instance = sub_B77684(StringLiteral_1252/*":"*/, v15->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_80;
        v30 = (System_Int32_array **)StringLiteral_1252/*":"*/;
      }
      else
      {
        v30 = 0LL;
      }
      if ( v15->max_length <= 1 )
        goto LABEL_78;
      v15->m_Items[1] = (System_String_o *)v30;
      sub_B77560((BattleServantConfConponent_o *)&v15->m_Items[1], v30, v24, v25, v26, v27, v28, v29);
      Instance = (__int64)System_Int32__ToString((int32_t)&v89 + 4, 0LL);
      v37 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = sub_B77684(Instance, v15->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_80;
      }
      if ( v15->max_length <= 2 )
        goto LABEL_78;
      v15->m_Items[2] = (System_String_o *)v37;
      sub_B77560((BattleServantConfConponent_o *)&v15->m_Items[2], v37, v31, v32, v33, v34, v35, v36);
      Instance = StringLiteral_1252/*":"*/;
      if ( StringLiteral_1252/*":"*/ )
      {
        Instance = sub_B77684(StringLiteral_1252/*":"*/, v15->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_80;
        v44 = (System_Int32_array **)StringLiteral_1252/*":"*/;
      }
      else
      {
        v44 = 0LL;
      }
      if ( v15->max_length <= 3 )
      {
LABEL_78:
        v84 = sub_B776C8(Instance);
        sub_B77668(v84, 0LL);
      }
      v15->m_Items[3] = (System_String_o *)v44;
      sub_B77560((BattleServantConfConponent_o *)&v15->m_Items[3], v44, v38, v39, v40, v41, v42, v43);
      Instance = (__int64)System_Int32__ToString((int32_t)&v89, 0LL);
      v51 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = sub_B77684(Instance, v15->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_80;
      }
      if ( v15->max_length <= 4 )
        goto LABEL_78;
      v15->m_Items[4] = (System_String_o *)v51;
      sub_B77560((BattleServantConfConponent_o *)&v15->m_Items[4], v51, v45, v46, v47, v48, v49, v50);
      v52 = System_String__Concat_44982964(v15, 0LL);
      Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        goto LABEL_79;
      v53 = *(_QWORD *)Instance;
      v54 = Instance;
      if ( *(_WORD *)(*(_QWORD *)Instance + 298LL) )
      {
        v55 = 0LL;
        v56 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v56 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v55;
          v56 += 4;
          if ( v55 >= *(unsigned __int16 *)(*(_QWORD *)Instance + 298LL) )
            goto LABEL_42;
        }
        v57 = v53 + 16LL * *v56 + 312;
      }
      else
      {
LABEL_42:
        v57 = sub_B0F4C0(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v57)(v54, v52, *(_QWORD *)(v57 + 8));
      if ( (Instance & 1) == 0 )
        break;
      Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( Instance )
      {
        v58 = *(_QWORD *)Instance;
        v59 = Instance;
        if ( *(_WORD *)(*(_QWORD *)Instance + 298LL) )
        {
          v60 = 0LL;
          v61 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v58 + 176)
                                                                                            + 8LL);
          while ( *(v61 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            ++v60;
            v61 += 2;
            if ( v60 >= *(unsigned __int16 *)(*(_QWORD *)Instance + 298LL) )
              goto LABEL_50;
          }
          v62 = v58 + 16LL * (*(_DWORD *)v61 + 2) + 312;
        }
        else
        {
LABEL_50:
          v62 = sub_B0F4C0(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL);
        }
        Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v62)(v59, v52, *(_QWORD *)(v62 + 8));
        if ( Instance )
        {
          v64 = (ServantCommentEntity_o *)Instance;
          v65 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v65
            && *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v65 - 8) == ServantCommentEntity_TypeInfo )
          {
            Instance = (__int64)ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)Instance, v12);
            if ( !Instance )
              goto LABEL_69;
            v67 = *(_QWORD *)(Instance + 24);
            if ( !v67 )
              goto LABEL_69;
            if ( !(_DWORD)v67 )
              goto LABEL_78;
            v68 = *(_DWORD *)(Instance + 32);
            if ( v68 < 3 || ServantLimitCountSealAfter >= v68 )
            {
LABEL_69:
              if ( ServantCommentEntity__IsOpen(v64, -1, 1, v66) )
                v23 = v64;
            }
            LODWORD(v89) = v89 + 1;
            v15 = (System_String_array *)sub_B775DC(string___TypeInfo, 5LL);
            Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
            v22 = (System_Int32_array **)Instance;
            if ( v15 )
              continue;
          }
        }
      }
      goto LABEL_79;
    }
    if ( v23 )
    {
      Instance = ServantCommentEntity__IsNew(v23, v12);
      if ( (Instance & 1) != 0 )
      {
        if ( !v9 )
          goto LABEL_79;
        System_Collections_Generic_List_int___Add(
          v9,
          v23->fields.id,
          (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
        if ( !v10 )
          goto LABEL_79;
        System_Collections_Generic_List_int___Add(
          v10,
          v23->fields.priority,
          (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      goto LABEL_57;
    }
    if ( !(_DWORD)v89 )
      break;
LABEL_57:
    v63 = HIDWORD(v89);
LABEL_58:
    LODWORD(v89) = 0;
    HIDWORD(v89) = v63 + 1;
    v15 = (System_String_array *)sub_B775DC(string___TypeInfo, 5LL);
    Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
    v22 = (System_Int32_array **)Instance;
    v23 = 0LL;
    if ( !v15 )
      goto LABEL_79;
  }
  v63 = HIDWORD(v89);
  if ( HIDWORD(v89) == 1 )
    goto LABEL_58;
  if ( !v9
    || (v69 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                       v9,
                                       (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__),
        v87->klass = (BattleServantConfConponent_c *)v69,
        sub_B77560(v87, v69, v70, v71, v72, v73, v74, v75),
        !v10)
    || (v76 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                       v10,
                                       (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__),
        v86->klass = (BattleServantConfConponent_c *)v76,
        sub_B77560(v86, v76, v77, v78, v79, v80, v81, v82),
        !v87->klass) )
  {
LABEL_79:
    sub_B7769C(Instance, v12);
  }
  return LODWORD(v87->klass->_1.namespaze) != 0;
}


System_Collections_Generic_List_ServantCommentEntity__o *__fastcall ServantCommentMaster__GetNewProfileEntities(
        ServantCommentMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  const MethodInfo *v6; // x4
  __int64 NewList; // x0
  __int64 v8; // x1
  System_Int32_array *v9; // x8
  unsigned __int64 v10; // x23
  System_String_array *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x22
  System_String_o *v47; // x21
  __int64 v48; // x8
  __int64 v49; // x22
  unsigned __int64 v50; // x10
  int *v51; // x11
  __int64 v52; // x0
  __int64 v53; // x8
  __int64 v54; // x22
  unsigned __int64 v55; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v56; // x11
  __int64 v57; // x0
  __int64 v58; // x10
  __int64 v60; // x0
  __int64 v61; // x0
  System_Int32_array *priorityList; // [xsp+8h] [xbp-68h] BYREF
  System_Int32_array *idList; // [xsp+10h] [xbp-60h] BYREF
  int32_t v64; // [xsp+1Ch] [xbp-54h] BYREF

  v64 = svtId;
  if ( (byte_438C79E & 1) == 0 )
  {
    sub_B775C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_B775C4(&ServantCommentEntity_TypeInfo);
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&StringLiteral_1252/*":"*/);
    byte_438C79E = 1;
  }
  priorityList = 0LL;
  idList = 0LL;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  NewList = ServantCommentMaster__GetNewList(this, &idList, &priorityList, svtId, v6);
  if ( (NewList & 1) != 0 )
  {
    v9 = idList;
    if ( !idList )
LABEL_52:
      sub_B7769C(NewList, v8);
    v10 = 0LL;
    while ( (__int64)v10 < (int)v9->max_length )
    {
      v11 = (System_String_array *)sub_B775DC(string___TypeInfo, 5LL);
      NewList = (__int64)System_Int32__ToString((int32_t)&v64, 0LL);
      if ( !v11 )
        goto LABEL_52;
      v18 = (System_Int32_array **)NewList;
      if ( NewList )
      {
        NewList = sub_B77684(NewList, v11->obj.klass->_1.element_class);
        if ( !NewList )
        {
LABEL_55:
          v61 = sub_B776BC(NewList);
          sub_B77668(v61, 0LL);
        }
      }
      if ( !v11->max_length )
        goto LABEL_54;
      v11->m_Items[0] = (System_String_o *)v18;
      sub_B77560((BattleServantConfConponent_o *)v11->m_Items, v18, v12, v13, v14, v15, v16, v17);
      NewList = StringLiteral_1252/*":"*/;
      if ( StringLiteral_1252/*":"*/ )
      {
        NewList = sub_B77684(StringLiteral_1252/*":"*/, v11->obj.klass->_1.element_class);
        if ( !NewList )
          goto LABEL_55;
        v25 = (System_Int32_array **)StringLiteral_1252/*":"*/;
      }
      else
      {
        v25 = 0LL;
      }
      if ( v11->max_length <= 1 )
        goto LABEL_54;
      v11->m_Items[1] = (System_String_o *)v25;
      sub_B77560((BattleServantConfConponent_o *)&v11->m_Items[1], v25, v19, v20, v21, v22, v23, v24);
      if ( !idList )
        goto LABEL_52;
      if ( v10 >= idList->max_length )
        goto LABEL_54;
      NewList = (__int64)System_Int32__ToString((int)idList + 4 * (int)v10 + 32, 0LL);
      v32 = (System_Int32_array **)NewList;
      if ( NewList )
      {
        NewList = sub_B77684(NewList, v11->obj.klass->_1.element_class);
        if ( !NewList )
          goto LABEL_55;
      }
      if ( v11->max_length <= 2 )
        goto LABEL_54;
      v11->m_Items[2] = (System_String_o *)v32;
      sub_B77560((BattleServantConfConponent_o *)&v11->m_Items[2], v32, v26, v27, v28, v29, v30, v31);
      NewList = StringLiteral_1252/*":"*/;
      if ( StringLiteral_1252/*":"*/ )
      {
        NewList = sub_B77684(StringLiteral_1252/*":"*/, v11->obj.klass->_1.element_class);
        if ( !NewList )
          goto LABEL_55;
        v39 = (System_Int32_array **)StringLiteral_1252/*":"*/;
      }
      else
      {
        v39 = 0LL;
      }
      if ( v11->max_length <= 3 )
        goto LABEL_54;
      v11->m_Items[3] = (System_String_o *)v39;
      sub_B77560((BattleServantConfConponent_o *)&v11->m_Items[3], v39, v33, v34, v35, v36, v37, v38);
      if ( !priorityList )
        goto LABEL_52;
      if ( v10 >= priorityList->max_length )
      {
LABEL_54:
        v60 = sub_B776C8(NewList);
        sub_B77668(v60, 0LL);
      }
      NewList = (__int64)System_Int32__ToString((int)priorityList + 4 * (int)v10 + 32, 0LL);
      v46 = (System_Int32_array **)NewList;
      if ( NewList )
      {
        NewList = sub_B77684(NewList, v11->obj.klass->_1.element_class);
        if ( !NewList )
          goto LABEL_55;
      }
      if ( v11->max_length <= 4 )
        goto LABEL_54;
      v11->m_Items[4] = (System_String_o *)v46;
      sub_B77560((BattleServantConfConponent_o *)&v11->m_Items[4], v46, v40, v41, v42, v43, v44, v45);
      v47 = System_String__Concat_44982964(v11, 0LL);
      NewList = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( NewList )
      {
        v48 = *(_QWORD *)NewList;
        v49 = NewList;
        if ( *(_WORD *)(*(_QWORD *)NewList + 298LL) )
        {
          v50 = 0LL;
          v51 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
          while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v51 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            ++v50;
            v51 += 4;
            if ( v50 >= *(unsigned __int16 *)(*(_QWORD *)NewList + 298LL) )
              goto LABEL_36;
          }
          v52 = v48 + 16LL * *v51 + 312;
        }
        else
        {
LABEL_36:
          v52 = sub_B0F4C0(
                  NewList,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  0LL);
        }
        NewList = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v52)(v49, v47, *(_QWORD *)(v52 + 8));
        if ( (NewList & 1) != 0 )
        {
          NewList = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
          if ( !NewList )
            goto LABEL_52;
          v53 = *(_QWORD *)NewList;
          v54 = NewList;
          if ( *(_WORD *)(*(_QWORD *)NewList + 298LL) )
          {
            v55 = 0LL;
            v56 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v53 + 176)
                                                                                              + 8LL);
            while ( *(v56 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
            {
              ++v55;
              v56 += 2;
              if ( v55 >= *(unsigned __int16 *)(*(_QWORD *)NewList + 298LL) )
                goto LABEL_44;
            }
            v57 = v53 + 16LL * (*(_DWORD *)v56 + 2) + 312;
          }
          else
          {
LABEL_44:
            v57 = sub_B0F4C0(
                    NewList,
                    System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                    2LL);
          }
          NewList = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v57)(v54, v47, *(_QWORD *)(v57 + 8));
          if ( NewList )
          {
            v8 = NewList;
            v58 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)NewList + 300LL) >= (unsigned int)v58
              && *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)NewList + 200LL) + 8 * v58 - 8) == ServantCommentEntity_TypeInfo )
            {
              if ( !v5 )
                goto LABEL_52;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v5,
                (EventMissionProgressRequest_Argument_ProgressData_o *)NewList,
                (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
            }
          }
        }
        v9 = idList;
        ++v10;
        if ( idList )
          continue;
      }
      goto LABEL_52;
    }
  }
  return (System_Collections_Generic_List_ServantCommentEntity__o *)v5;
}


ServantCommentEntity_array *__fastcall ServantCommentMaster__GetOpenEntitiyList(
        ServantCommentMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array *v5; // x22
  __int64 lookup; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x23
  EventMissionProgressRequest_Argument_ProgressData_o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x23
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
  System_Int32_array **v43; // x23
  System_String_o *v44; // x22
  __int64 v45; // x8
  __int64 v46; // x23
  unsigned __int64 v47; // x10
  int *v48; // x11
  __int64 v49; // x0
  __int64 v50; // x8
  __int64 v51; // x23
  unsigned __int64 v52; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v53; // x11
  __int64 v54; // x0
  int v55; // w8
  const MethodInfo *v56; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v57; // x22
  __int64 v58; // x10
  __int64 v60; // x0
  __int64 v61; // x0
  int v62; // [xsp+4h] [xbp-5Ch] BYREF
  int v63; // [xsp+8h] [xbp-58h] BYREF
  int32_t v64; // [xsp+Ch] [xbp-54h] BYREF

  v64 = svtId;
  if ( (byte_438C797 & 1) == 0 )
  {
    sub_B775C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_B775C4(&ServantCommentEntity_TypeInfo);
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&StringLiteral_1252/*":"*/);
    byte_438C797 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v62 = 0;
  v63 = 1;
  v5 = (System_String_array *)sub_B775DC(string___TypeInfo, 5LL);
  lookup = (__int64)System_Int32__ToString((int32_t)&v64, 0LL);
  if ( !v5 )
    goto LABEL_57;
  v14 = (System_Int32_array **)lookup;
  v15 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v14 )
      {
        lookup = sub_B77684(v14, v5->obj.klass->_1.element_class);
        if ( !lookup )
        {
LABEL_58:
          v61 = sub_B776BC(lookup);
          sub_B77668(v61, 0LL);
        }
      }
      if ( !v5->max_length )
        goto LABEL_56;
      v5->m_Items[0] = (System_String_o *)v14;
      sub_B77560((BattleServantConfConponent_o *)v5->m_Items, v14, v8, v9, v10, v11, v12, v13);
      lookup = StringLiteral_1252/*":"*/;
      if ( StringLiteral_1252/*":"*/ )
      {
        lookup = sub_B77684(StringLiteral_1252/*":"*/, v5->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_58;
        v22 = (System_Int32_array **)StringLiteral_1252/*":"*/;
      }
      else
      {
        v22 = 0LL;
      }
      if ( v5->max_length <= 1 )
        goto LABEL_56;
      v5->m_Items[1] = (System_String_o *)v22;
      sub_B77560((BattleServantConfConponent_o *)&v5->m_Items[1], v22, v16, v17, v18, v19, v20, v21);
      lookup = (__int64)System_Int32__ToString((int32_t)&v63, 0LL);
      v29 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = sub_B77684(lookup, v5->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_58;
      }
      if ( v5->max_length <= 2 )
        goto LABEL_56;
      v5->m_Items[2] = (System_String_o *)v29;
      sub_B77560((BattleServantConfConponent_o *)&v5->m_Items[2], v29, v23, v24, v25, v26, v27, v28);
      lookup = StringLiteral_1252/*":"*/;
      if ( StringLiteral_1252/*":"*/ )
      {
        lookup = sub_B77684(StringLiteral_1252/*":"*/, v5->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_58;
        v36 = (System_Int32_array **)StringLiteral_1252/*":"*/;
      }
      else
      {
        v36 = 0LL;
      }
      if ( v5->max_length <= 3 )
      {
LABEL_56:
        v60 = sub_B776C8(lookup);
        sub_B77668(v60, 0LL);
      }
      v5->m_Items[3] = (System_String_o *)v36;
      sub_B77560((BattleServantConfConponent_o *)&v5->m_Items[3], v36, v30, v31, v32, v33, v34, v35);
      lookup = (__int64)System_Int32__ToString((int32_t)&v62, 0LL);
      v43 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = sub_B77684(lookup, v5->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_58;
      }
      if ( v5->max_length <= 4 )
        goto LABEL_56;
      v5->m_Items[4] = (System_String_o *)v43;
      sub_B77560((BattleServantConfConponent_o *)&v5->m_Items[4], v43, v37, v38, v39, v40, v41, v42);
      v44 = System_String__Concat_44982964(v5, 0LL);
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_57;
      v45 = *(_QWORD *)lookup;
      v46 = lookup;
      if ( *(_WORD *)(*(_QWORD *)lookup + 298LL) )
      {
        v47 = 0LL;
        v48 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v48 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v47;
          v48 += 4;
          if ( v47 >= *(unsigned __int16 *)(*(_QWORD *)lookup + 298LL) )
            goto LABEL_29;
        }
        v49 = v45 + 16LL * *v48 + 312;
      }
      else
      {
LABEL_29:
        v49 = sub_B0F4C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v49)(v46, v44, *(_QWORD *)(v49 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( lookup )
      {
        v50 = *(_QWORD *)lookup;
        v51 = lookup;
        if ( *(_WORD *)(*(_QWORD *)lookup + 298LL) )
        {
          v52 = 0LL;
          v53 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v50 + 176)
                                                                                            + 8LL);
          while ( *(v53 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            ++v52;
            v53 += 2;
            if ( v52 >= *(unsigned __int16 *)(*(_QWORD *)lookup + 298LL) )
              goto LABEL_37;
          }
          v54 = v50 + 16LL * (*(_DWORD *)v53 + 2) + 312;
        }
        else
        {
LABEL_37:
          v54 = sub_B0F4C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
        }
        lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v54)(v51, v44, *(_QWORD *)(v54 + 8));
        if ( lookup )
        {
          v57 = (EventMissionProgressRequest_Argument_ProgressData_o *)lookup;
          v58 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)lookup + 300LL) >= (unsigned int)v58
            && *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)lookup + 200LL) + 8 * v58 - 8) == ServantCommentEntity_TypeInfo )
          {
            if ( ServantCommentEntity__IsOpen((ServantCommentEntity_o *)lookup, -1, 1, v56) )
              v15 = v57;
            ++v62;
            v5 = (System_String_array *)sub_B775DC(string___TypeInfo, 5LL);
            lookup = (__int64)System_Int32__ToString((int32_t)&v64, 0LL);
            v14 = (System_Int32_array **)lookup;
            if ( v5 )
              continue;
          }
        }
      }
      goto LABEL_57;
    }
    if ( v15 )
    {
      if ( !v4 )
        goto LABEL_57;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v4,
        v15,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
      goto LABEL_42;
    }
    if ( !v62 )
      break;
LABEL_42:
    v55 = v63;
LABEL_43:
    v62 = 0;
    v63 = v55 + 1;
    v5 = (System_String_array *)sub_B775DC(string___TypeInfo, 5LL);
    lookup = (__int64)System_Int32__ToString((int32_t)&v64, 0LL);
    v14 = (System_Int32_array **)lookup;
    v15 = 0LL;
    if ( !v5 )
      goto LABEL_57;
  }
  v55 = v63;
  if ( v63 == 1 )
    goto LABEL_43;
  if ( !v4 )
LABEL_57:
    sub_B7769C(lookup, v7);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v4,
                                         (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall ServantCommentMaster__GetServantListWithQuestClear(
        ServantCommentMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  ServantCommentEntity_c *v6; // x1
  ServantCommentAddMaster_o *MasterData_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_int__o *v8; // x23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  int32_t Count; // w0
  int32_t v11; // w26
  int32_t v12; // w27
  ServantCommentEntity_o *v13; // x28
  __int64 v14; // x9
  int32_t m_CachedPtr; // w24
  System_Int32_array *ImageLimit; // x0
  const MethodInfo *v17; // x3
  System_Int32_array *v18; // x22
  int64_t UserId; // x2
  int32_t ServantLimitCountSealAfter; // w0
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x7
  ServantCommentMaster_o *v24; // x0
  int32_t v25; // w1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  ServantLimitImageMaster_o *v28; // [xsp+8h] [xbp-78h]
  UserServantCollectionMaster_o *v29; // [xsp+10h] [xbp-70h]
  UserServantCollectionEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_438C79C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_IndexOf_int___);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantCommentAddMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&ServantCommentEntity_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C79C = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_WarQuestSelectionMaster = (ServantCommentAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      Instance,
                                                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
  v8 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v28 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             Instance,
                                             (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
        v29 = (UserServantCollectionMaster_o *)Instance,
        !list) )
  {
LABEL_32:
    sub_B7769C(Instance, v6);
  }
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return v8;
  v11 = Count;
  v12 = 0;
  while ( 1 )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                  v12,
                                  (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_32;
    v6 = ServantCommentEntity_TypeInfo;
    v13 = (ServantCommentEntity_o *)Instance;
    v14 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v14
      || (ServantCommentEntity_c *)Instance->klass->_2.typeHierarchy[v14 - 1] != ServantCommentEntity_TypeInfo )
    {
      break;
    }
    if ( !v8 )
      goto LABEL_32;
    m_CachedPtr = Instance->fields.m_CachedPtr;
    if ( !System_Collections_Generic_List_int___Contains(
            v8,
            m_CachedPtr,
            (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      ImageLimit = ServantCommentEntity__GetImageLimit(v13, (const MethodInfo *)v6);
      if ( !ImageLimit )
        goto LABEL_27;
      v18 = ImageLimit;
      if ( !*(_QWORD *)&ImageLimit->max_length )
        goto LABEL_27;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      Instance = (DataManager_o *)v29;
      if ( !v29 )
        goto LABEL_32;
      Instance = (DataManager_o *)UserServantCollectionMaster__TryGetEntity(v29, &entity, UserId, m_CachedPtr, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_27;
      if ( !entity )
        goto LABEL_32;
      Instance = (DataManager_o *)v28;
      if ( !v28 )
        goto LABEL_32;
      ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                     v28,
                                     m_CachedPtr,
                                     entity->fields.maxLimitCount,
                                     0LL);
      if ( (System_Array__IndexOf_int_(
              v18,
              ServantLimitCountSealAfter,
              (const MethodInfo_2005430 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
      {
LABEL_27:
        if ( ServantCommentEntity__IsOnlyOpenQuestCond(v13, questId, questPhase, v17) )
          goto LABEL_28;
        Instance = (DataManager_o *)MasterData_WarQuestSelectionMaster;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_32;
        if ( ServantCommentAddMaster__IsOnlyOpenQuestCond(
               MasterData_WarQuestSelectionMaster,
               m_CachedPtr,
               v13->fields.id,
               v13->fields.priority,
               1,
               questId,
               questPhase,
               v22) )
        {
LABEL_28:
          if ( ServantCommentEntity__IsOpen(v13, -1, 1, v21) )
            System_Collections_Generic_List_int___Add(
              v8,
              v13->fields.svtId,
              (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
    }
    if ( ++v12 >= v11 )
      return v8;
  }
  v24 = (ServantCommentMaster_o *)sub_B77990(Instance);
  return (System_Collections_Generic_List_int__o *)ServantCommentMaster__GetServantListWithQuestClearAndImageLimit(
                                                     v24,
                                                     v25,
                                                     v26,
                                                     v27);
}


ServantCommentEntity_array *__fastcall ServantCommentMaster__GetServantListWithQuestClearAndImageLimit(
        ServantCommentMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  ServantCommentAddMaster_o *Master_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x23
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v11; // w24
  int32_t v12; // w25
  const MethodInfo *v13; // x3
  ServantCommentEntity_o *v14; // x26
  __int64 v15; // x9
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x7
  const MethodInfo *v18; // x1
  bool IsOpen; // w27
  ServantCommentMaster_o *v21; // x0
  int32_t v22; // w1
  const MethodInfo *v23; // x2

  if ( (byte_438C79D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMaster_ServantCommentAddMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_B775C4(&ServantCommentEntity_TypeInfo);
    byte_438C79D = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantCommentAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list < 1 )
  {
LABEL_24:
    if ( v8 )
      return (ServantCommentEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                             (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
LABEL_26:
    sub_B7769C(list, v9);
  }
  v11 = (int)list;
  v12 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_26;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v12,
                                                                                         (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_26;
    v14 = (ServantCommentEntity_o *)list;
    v15 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v15
      || (ServantCommentEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] != ServantCommentEntity_TypeInfo )
    {
      break;
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)ServantCommentEntity__IsOnlyOpenQuestCond(
                                                                                         (ServantCommentEntity_o *)list,
                                                                                         questId,
                                                                                         questPhase,
                                                                                         v13);
    if ( ((unsigned __int8)list & 1) != 0 )
      goto LABEL_16;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_26;
    if ( ServantCommentAddMaster__IsOnlyOpenQuestCond(
           Master_WarQuestSelectionMaster,
           v14->fields.svtId,
           v14->fields.id,
           v14->fields.priority,
           1,
           questId,
           questPhase,
           v17) )
    {
LABEL_16:
      IsOpen = ServantCommentEntity__IsOpen(v14, -1, 1, v16);
    }
    else
    {
      IsOpen = 0;
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)ServantCommentEntity__GetImageLimit(
                                                                                         v14,
                                                                                         v18);
    if ( list && IsOpen && list->fields._syncRoot )
    {
      if ( !v8 )
        goto LABEL_26;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v8,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    }
    if ( ++v12 >= v11 )
      goto LABEL_24;
  }
  v21 = (ServantCommentMaster_o *)sub_B77990(list);
  return (ServantCommentEntity_array *)ServantCommentMaster__GetNewProfileEntities(v21, v22, v23);
}


bool __fastcall ServantCommentMaster__IsNew(ServantCommentMaster_o *this, int32_t svtId, const MethodInfo *method)
{
  System_String_array *v4; // x21
  ServantCommentEntity_o *lookup; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **v13; // x22
  ServantCommentEntity_o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x22
  System_String_o *v43; // x21
  ServantCommentEntity_c *klass; // x8
  ServantCommentEntity_o *v45; // x22
  unsigned __int64 v46; // x10
  int32_t *p_offset; // x11
  __int64 v48; // x0
  const MethodInfo *v49; // x1
  ServantCommentEntity_c *v50; // x8
  ServantCommentEntity_o *v51; // x22
  unsigned __int64 v52; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v53; // x11
  __int64 v54; // x0
  int v55; // w8
  const MethodInfo *v56; // x3
  ServantCommentEntity_o *v57; // x21
  __int64 v58; // x10
  __int64 v60; // x0
  __int64 v61; // x0
  int v62; // [xsp+4h] [xbp-4Ch] BYREF
  int v63; // [xsp+8h] [xbp-48h] BYREF
  int32_t v64; // [xsp+Ch] [xbp-44h] BYREF

  v64 = svtId;
  if ( (byte_438C79A & 1) == 0 )
  {
    sub_B775C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B775C4(&ServantCommentEntity_TypeInfo);
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&StringLiteral_1252/*":"*/);
    byte_438C79A = 1;
  }
  v62 = 0;
  v63 = 1;
  v4 = (System_String_array *)sub_B775DC(string___TypeInfo, 5LL);
  lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v64, 0LL);
  if ( !v4 )
LABEL_56:
    sub_B7769C(lookup, v6);
  v13 = (System_Int32_array **)lookup;
  v14 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v13 )
      {
        lookup = (ServantCommentEntity_o *)sub_B77684(v13, v4->obj.klass->_1.element_class);
        if ( !lookup )
        {
LABEL_57:
          v61 = sub_B776BC(lookup);
          sub_B77668(v61, 0LL);
        }
      }
      if ( !v4->max_length )
        goto LABEL_55;
      v4->m_Items[0] = (System_String_o *)v13;
      sub_B77560((BattleServantConfConponent_o *)v4->m_Items, v13, v7, v8, v9, v10, v11, v12);
      lookup = (ServantCommentEntity_o *)StringLiteral_1252/*":"*/;
      if ( StringLiteral_1252/*":"*/ )
      {
        lookup = (ServantCommentEntity_o *)sub_B77684(StringLiteral_1252/*":"*/, v4->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_57;
        v21 = (System_Int32_array **)StringLiteral_1252/*":"*/;
      }
      else
      {
        v21 = 0LL;
      }
      if ( v4->max_length <= 1 )
        goto LABEL_55;
      v4->m_Items[1] = (System_String_o *)v21;
      sub_B77560((BattleServantConfConponent_o *)&v4->m_Items[1], v21, v15, v16, v17, v18, v19, v20);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v63, 0LL);
      v28 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = (ServantCommentEntity_o *)sub_B77684(lookup, v4->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_57;
      }
      if ( v4->max_length <= 2 )
        goto LABEL_55;
      v4->m_Items[2] = (System_String_o *)v28;
      sub_B77560((BattleServantConfConponent_o *)&v4->m_Items[2], v28, v22, v23, v24, v25, v26, v27);
      lookup = (ServantCommentEntity_o *)StringLiteral_1252/*":"*/;
      if ( StringLiteral_1252/*":"*/ )
      {
        lookup = (ServantCommentEntity_o *)sub_B77684(StringLiteral_1252/*":"*/, v4->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_57;
        v35 = (System_Int32_array **)StringLiteral_1252/*":"*/;
      }
      else
      {
        v35 = 0LL;
      }
      if ( v4->max_length <= 3 )
      {
LABEL_55:
        v60 = sub_B776C8(lookup);
        sub_B77668(v60, 0LL);
      }
      v4->m_Items[3] = (System_String_o *)v35;
      sub_B77560((BattleServantConfConponent_o *)&v4->m_Items[3], v35, v29, v30, v31, v32, v33, v34);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v62, 0LL);
      v42 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = (ServantCommentEntity_o *)sub_B77684(lookup, v4->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_57;
      }
      if ( v4->max_length <= 4 )
        goto LABEL_55;
      v4->m_Items[4] = (System_String_o *)v42;
      sub_B77560((BattleServantConfConponent_o *)&v4->m_Items[4], v42, v36, v37, v38, v39, v40, v41);
      v43 = System_String__Concat_44982964(v4, 0LL);
      lookup = (ServantCommentEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_56;
      klass = lookup->klass;
      v45 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v46 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v46;
          p_offset += 4;
          if ( v46 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_29;
        }
        v48 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_29:
        v48 = sub_B0F4C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v48)(
              v45,
              v43,
              *(_QWORD *)(v48 + 8)) & 1) == 0 )
        break;
      lookup = (ServantCommentEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( lookup )
      {
        v50 = lookup->klass;
        v51 = lookup;
        if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
        {
          v52 = 0LL;
          v53 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v50->_1.interfaceOffsets->offset;
          while ( *(v53 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            ++v52;
            v53 += 2;
            if ( v52 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
              goto LABEL_37;
          }
          v54 = (__int64)(&v50->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v53);
        }
        else
        {
LABEL_37:
          v54 = sub_B0F4C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
        }
        lookup = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v54)(
                                             v51,
                                             v43,
                                             *(_QWORD *)(v54 + 8));
        if ( lookup )
        {
          v57 = lookup;
          v58 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&lookup->klass->_2.bitflags2 + 1) >= (unsigned int)v58
            && (ServantCommentEntity_c *)lookup->klass->_2.typeHierarchy[v58 - 1] == ServantCommentEntity_TypeInfo )
          {
            if ( ServantCommentEntity__IsOpen(lookup, -1, 1, v56) )
              v14 = v57;
            ++v62;
            v4 = (System_String_array *)sub_B775DC(string___TypeInfo, 5LL);
            lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v64, 0LL);
            v13 = (System_Int32_array **)lookup;
            if ( v4 )
              continue;
          }
        }
      }
      goto LABEL_56;
    }
    if ( v14 )
    {
      if ( ServantCommentEntity__IsNew(v14, v49) )
        return 1;
      goto LABEL_42;
    }
    if ( !v62 )
      break;
LABEL_42:
    v55 = v63;
LABEL_43:
    v62 = 0;
    v63 = v55 + 1;
    v4 = (System_String_array *)sub_B775DC(string___TypeInfo, 5LL);
    lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v64, 0LL);
    v13 = (System_Int32_array **)lookup;
    v14 = 0LL;
    if ( !v4 )
      goto LABEL_56;
  }
  v55 = v63;
  if ( v63 == 1 )
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  ServantCommentEntity_o *v17; // x0
  __int64 v18; // x1
  ServantCommentEntity_o *v19; // x22
  __int64 v20; // x9
  System_Int32_array *ImageLimit; // x0
  System_Collections_Generic_IEnumerable_T__o *v22; // x24
  System_Collections_Generic_List_int__o *v23; // x23
  __int64 v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x3
  int v27; // w8
  bool v28; // w20
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  int v35; // [xsp+10h] [xbp-60h]

  if ( (byte_438C79F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&ServantCommentEntity_TypeInfo);
    byte_438C79F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list
    || (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
    sub_B7769C(list, *(_QWORD *)&svtId);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v10;
        p_offset += 4;
        if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v14;
        v15 += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_17:
      v16 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v17 = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                      Enumerator,
                                      *(_QWORD *)(v16 + 8));
    v19 = v17;
    if ( !v17 )
      goto LABEL_45;
    v20 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (ServantCommentEntity_c *)v17->klass->_2.typeHierarchy[v20 - 1] != ServantCommentEntity_TypeInfo )
    {
      v17 = (ServantCommentEntity_o *)sub_B77990(v17);
LABEL_45:
      sub_B7769C(v17, v18);
    }
    if ( v17->fields.svtId == svtId )
    {
      ImageLimit = ServantCommentEntity__GetImageLimit(v17, (const MethodInfo *)ServantCommentEntity_TypeInfo);
      v22 = (System_Collections_Generic_IEnumerable_T__o *)ImageLimit;
      if ( ImageLimit )
      {
        if ( *(_QWORD *)&ImageLimit->max_length )
        {
          v23 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor_51270276(
            v23,
            v22,
            (const MethodInfo_30E5284 *)Method_System_Collections_Generic_List_int___ctor__);
          if ( !v23 )
            sub_B7769C(v24, v25);
          System_Collections_Generic_List_int___Sort(
            v23,
            (const MethodInfo_30E7D08 *)Method_System_Collections_Generic_List_int__Sort__);
          if ( !v23->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          v27 = v23->fields._items->m_Items[1];
          if ( v27 >= 3 )
          {
            if ( !v23->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
            if ( v27 == limitCount && ServantCommentEntity__IsOpen(v19, -1, 1, v26) )
            {
              v35 = 131;
              v28 = 1;
              goto LABEL_35;
            }
          }
        }
      }
    }
  }
  v28 = 0;
  v35 = 129;
LABEL_35:
  v29 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      ++v30;
      v31 += 4;
      if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_39:
    v32 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  if ( v35 == 129 )
    return 0;
  return v28;
}


void __fastcall ServantCommentMaster__OpenSaintGraphProfileChange(
        int32_t svtId,
        int32_t limitCount,
        ServantCommentMaster_ProfileChangeDecideDelegate_o *decideAction,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v9; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_o *v24; // x20
  Il2CppObject *Name; // x0
  System_String_o *v26; // x20
  CommonUI_o *Instance; // x21
  System_String_o *v28; // x22
  System_String_o *v29; // x23
  CommonConfirmDialog_ClickDelegate_o *v30; // x24
  WarEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_438C7A0 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_ServantCommentMaster___c__DisplayClass16_0__OpenSaintGraphProfileChange_b__0__);
    sub_B775C4(&ServantCommentMaster___c__DisplayClass16_0_TypeInfo);
    sub_B775C4(&StringLiteral_11118/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/);
    sub_B775C4(&StringLiteral_11117/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_11115/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/);
    byte_438C7A0 = 1;
  }
  entity = 0LL;
  v9 = sub_B77694(ServantCommentMaster___c__DisplayClass16_0_TypeInfo);
  ServantCommentMaster___c__DisplayClass16_0___ctor((ServantCommentMaster___c__DisplayClass16_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_17;
  *(_QWORD *)(v9 + 16) = decideAction;
  sub_B77560(
    (BattleServantConfConponent_o *)(v9 + 16),
    (System_Int32_array **)decideAction,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  *(_QWORD *)(v9 + 32) = endAction;
  *(_DWORD *)(v9 + 24) = svtId;
  *(_DWORD *)(v9 + 28) = limitCount;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)endAction, v18, v19, v20, v21, v22, v23);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_17;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    Master_WarQuestSelectionMaster,
    &entity,
    *(_DWORD *)(v9 + 24),
    (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)LocalizationManager__Get(
                                                                                    (System_String_o *)StringLiteral_11118/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/,
                                                                                    0LL);
  if ( !entity )
    goto LABEL_17;
  v24 = (System_String_o *)Master_WarQuestSelectionMaster;
  Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)entity, *(_DWORD *)(v9 + 28), -1, 0LL);
  v26 = System_String__Format(v24, Name, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_11117/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/, 0LL);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11115/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/, 0LL);
  v30 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v30,
    (Il2CppObject *)v9,
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
    sub_B7769C(Master_WarQuestSelectionMaster, v11);
  CommonUI__OpenConfirmDialogOnFade(
    Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v26,
    v28,
    v29,
    v30,
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
  if ( (byte_438C798 & 1) == 0 )
  {
    sub_B775C4(&ServantCommentManager_TypeInfo);
    byte_438C798 = 1;
  }
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ServantCommentManager__IsOpen(svtId, svtCommentId, svtCommentPriority, *(const MethodInfo **)&svtCommentPriority);
}


void __fastcall ServantCommentMaster__SetOpen_27848412(
        ServantCommentMaster_o *this,
        int32_t svtId,
        System_Int32_array *svtCommentIdList,
        System_Int32_array *svtCommentPriorityList,
        const MethodInfo *method)
{
  if ( (byte_438C799 & 1) == 0 )
  {
    sub_B775C4(&ServantCommentManager_TypeInfo);
    byte_438C799 = 1;
  }
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ServantCommentManager__SetOpen_27837864(
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
  System_String_o *PK; // x2

  if ( (byte_438C793 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__);
    sub_B775C4(&ServantCommentEntity_TypeInfo);
    byte_438C793 = 1;
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
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__);
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
  sub_B77560(p_method);
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
  __int64 v12; // x2
  __int64 v13; // x2
  __int64 v15[5]; // [xsp+0h] [xbp-60h] BYREF
  char v16[4]; // [xsp+2Ch] [xbp-34h] BYREF
  int32_t v17; // [xsp+38h] [xbp-28h] BYREF
  int32_t v18; // [xsp+3Ch] [xbp-24h] BYREF

  v17 = limitCount;
  v18 = svtid;
  v16[0] = isDecide;
  if ( (byte_4388809 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    byte_4388809 = 1;
  }
  v15[4] = 0LL;
  v15[0] = j_il2cpp_value_box_0(int_TypeInfo, &v18, *(_QWORD *)&limitCount);
  v15[1] = j_il2cpp_value_box_0(int_TypeInfo, &v17, v12);
  v15[2] = j_il2cpp_value_box_0(bool_TypeInfo, v16, v13);
  v15[3] = (__int64)finishCallback;
  return (System_IAsyncResult_o *)sub_B77568(this, v15, callback, object);
}


void __fastcall ServantCommentMaster_ProfileChangeDecideDelegate__EndInvoke(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
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
        sub_B77680(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&svtid);
      if ( (sub_B775F4(v25) & 1) == 0 )
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
      v27 = sub_B775EC(v25);
      v28 = sub_B779F0(v25);
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
            v21 = sub_B0F4C0(v24, v30, v31);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, bool, System_Action_o *, _QWORD))sub_B77674(v20, v25);
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
            v19 = sub_B0F4C0(v24, class_0, v14);
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


void __fastcall ServantCommentMaster___c__DisplayClass17_0___DefaultProfileChangeDecideAction_b__0(
        ServantCommentMaster___c__DisplayClass17_0_o *this,
        bool isDcd,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20
  AvalonSceneManager_c *v7; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__1; // x21

  if ( (byte_4388807 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_ServantCommentMaster___c__DisplayClass17_0__DefaultProfileChangeDecideAction_b__1__);
    byte_4388807 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  v7 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantCommentMaster___c__DisplayClass17_0__DefaultProfileChangeDecideAction_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B77560(&this->fields.__9__1);
  }
  if ( !v6 )
    sub_B7769C(Instance, v5);
  CommonUI__maskFadeout(v6, 1, DEFAULT_FADE_TIME, _9__1, 0LL);
}


void __fastcall ServantCommentMaster___c__DisplayClass17_0___DefaultProfileChangeDecideAction_b__1(
        ServantCommentMaster___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20

  if ( (byte_4388808 & 1) == 0 )
  {
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4388808 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v5 )
LABEL_9:
    sub_B7769C(Instance, v4);
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}