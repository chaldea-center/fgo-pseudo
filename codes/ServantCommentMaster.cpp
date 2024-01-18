void __fastcall ServantCommentMaster___ctor(ServantCommentMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4189F0F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__, method);
    byte_4189F0F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    2,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__);
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
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x23
  CommonUI_o *v26; // x21
  WebViewManager_o *Instance; // x0
  UserServantCollectionEntity_o *v28; // x21
  CommonUI_o *v29; // x22
  ServantStatusDialog_EndDelegate_o *v30; // x23
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4189F1C & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, *(_QWORD *)&limitCount);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9);
    sub_B2C35C(&DataManager_TypeInfo, v10);
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, v11);
    sub_B2C35C(&NetworkManager_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_B2C35C(&Method_ServantCommentMaster___c__DisplayClass17_0__DefaultProfileChangeDecideAction_b__0__, v14);
    sub_B2C35C(&ServantCommentMaster___c__DisplayClass17_0_TypeInfo, v15);
    byte_4189F1C = 1;
  }
  entity = 0LL;
  v16 = sub_B2C42C(ServantCommentMaster___c__DisplayClass17_0_TypeInfo);
  ServantCommentMaster___c__DisplayClass17_0___ctor((ServantCommentMaster___c__DisplayClass17_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_23;
  *(_QWORD *)(v16 + 16) = endAction;
  sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)endAction, v19, v20, v21, v22, v23, v24);
  if ( isDecide )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
      UserId = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v26 = UserId;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( v26 )
      {
        CommonUI__maskFadein(v26, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
        UserId = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( UserId )
        {
          CommonUI__CloseConfirmDialog(UserId, 0LL);
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v28 = entity;
          v29 = (CommonUI_o *)Instance;
          v30 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v30,
            (Il2CppObject *)v16,
            Method_ServantCommentMaster___c__DisplayClass17_0__DefaultProfileChangeDecideAction_b__0__,
            0LL);
          if ( v29 )
          {
            CommonUI__OpenServantStatusDialog_17983580(v29, 33, v28, limitCount, v30, 0LL);
            return;
          }
        }
      }
LABEL_23:
      sub_B2C434(UserId, v18);
    }
  }
  UserId = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !UserId )
    goto LABEL_23;
  CommonUI__CloseConfirmDialog_17971588(UserId, *(System_Action_o **)(v16 + 16), 0LL);
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

  if ( (byte_4189F0D & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    sub_B2C35C(&ServantCommentEntity_TypeInfo, v9);
    byte_4189F0D = 1;
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
                                     (const MethodInfo_24E4520 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__);
}


ServantCommentEntity_array *__fastcall ServantCommentMaster__GetEntityList(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t condType,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6

  return ServantCommentMaster__GetEntityList_29249908(this, svtId, -1, condType, 0, 0, v4);
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
  const MethodInfo *v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x24
  const MethodInfo *v29; // x5
  const MethodInfo *v30; // x3
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
  System_Int32_array **v44; // x26
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
  System_Int32_array **v58; // x26
  System_String_o *v59; // x25
  __int64 v60; // x3
  ServantCommentEntity_c *klass; // x8
  ServantCommentEntity_o *v62; // x26
  unsigned __int64 v63; // x10
  int32_t *p_offset; // x11
  __int64 v65; // x0
  __int64 v66; // x3
  ServantCommentEntity_c *v67; // x8
  ServantCommentEntity_o *v68; // x26
  unsigned __int64 v69; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v70; // x11
  __int64 v71; // x0
  ServantCommentEntity_o *v72; // x25
  __int64 v73; // x10
  System_Int32_array *ImageLimit; // x0
  __int64 v75; // x9
  char v76; // w8
  __int64 v77; // x10
  int v78; // w11
  __int64 v79; // x12
  int32_t v80; // w8
  __int64 v82; // x0
  __int64 v83; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v86; // [xsp+8h] [xbp-68h]
  int32_t v87; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v88; // [xsp+18h] [xbp-58h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-54h] BYREF

  svtIda = svtId;
  if ( (byte_4189F11 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v8);
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v13);
    sub_B2C35C(&ServantCommentEntity_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&string___TypeInfo, v16);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v17);
    byte_4189F11 = 1;
  }
  v86 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v86,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v87 = 0;
  v88 = 1;
  v18 = (System_String_array *)sub_B2C374(string___TypeInfo, 5LL);
  lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&svtIda, 0LL);
  if ( !v18 )
    goto LABEL_70;
  v27 = (System_Int32_array **)lookup;
  v28 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v27 )
      {
        lookup = (ServantCommentEntity_o *)sub_B2C41C(v27, v18->obj.klass->_1.element_class);
        if ( !lookup )
        {
LABEL_72:
          v83 = sub_B2C454(lookup);
          sub_B2C400(v83, 0LL);
        }
      }
      if ( !v18->max_length )
        goto LABEL_71;
      v18->m_Items[0] = (System_String_o *)v27;
      sub_B2C2F8((BattleServantConfConponent_o *)v18->m_Items, v27, v21, v22, v23, v24, v25, v26);
      lookup = (ServantCommentEntity_o *)StringLiteral_1225/*":"*/;
      if ( StringLiteral_1225/*":"*/ )
      {
        lookup = (ServantCommentEntity_o *)sub_B2C41C(StringLiteral_1225/*":"*/, v18->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_72;
        v37 = (System_Int32_array **)StringLiteral_1225/*":"*/;
      }
      else
      {
        v37 = 0LL;
      }
      if ( v18->max_length <= 1 )
        goto LABEL_71;
      v18->m_Items[1] = (System_String_o *)v37;
      sub_B2C2F8((BattleServantConfConponent_o *)&v18->m_Items[1], v37, v31, v32, v33, v34, v35, v36);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v88, 0LL);
      v44 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = (ServantCommentEntity_o *)sub_B2C41C(lookup, v18->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_72;
      }
      if ( v18->max_length <= 2 )
        goto LABEL_71;
      v18->m_Items[2] = (System_String_o *)v44;
      sub_B2C2F8((BattleServantConfConponent_o *)&v18->m_Items[2], v44, v38, v39, v40, v41, v42, v43);
      lookup = (ServantCommentEntity_o *)StringLiteral_1225/*":"*/;
      if ( StringLiteral_1225/*":"*/ )
      {
        lookup = (ServantCommentEntity_o *)sub_B2C41C(StringLiteral_1225/*":"*/, v18->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_72;
        v51 = (System_Int32_array **)StringLiteral_1225/*":"*/;
      }
      else
      {
        v51 = 0LL;
      }
      if ( v18->max_length <= 3 )
      {
LABEL_71:
        v82 = sub_B2C460(lookup);
        sub_B2C400(v82, 0LL);
      }
      v18->m_Items[3] = (System_String_o *)v51;
      sub_B2C2F8((BattleServantConfConponent_o *)&v18->m_Items[3], v51, v45, v46, v47, v48, v49, v50);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v87, 0LL);
      v58 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = (ServantCommentEntity_o *)sub_B2C41C(lookup, v18->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_72;
      }
      if ( v18->max_length <= 4 )
        goto LABEL_71;
      v18->m_Items[4] = (System_String_o *)v58;
      sub_B2C2F8((BattleServantConfConponent_o *)&v18->m_Items[4], v58, v52, v53, v54, v55, v56, v57);
      v59 = System_String__Concat_44385656(v18, 0LL);
      lookup = (ServantCommentEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_70;
      klass = lookup->klass;
      v62 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v63 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v63;
          p_offset += 4;
          if ( v63 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_38;
        }
        v65 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_38:
        v65 = sub_AC5258(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL,
                v60);
      }
      if ( ((*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v65)(
              v62,
              v59,
              *(_QWORD *)(v65 + 8)) & 1) == 0 )
        break;
      lookup = (ServantCommentEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_70;
      v67 = lookup->klass;
      v68 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v69 = 0LL;
        v70 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v67->_1.interfaceOffsets->offset;
        while ( *(v70 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v69;
          v70 += 2;
          if ( v69 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_46;
        }
        v71 = (__int64)(&v67->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v70);
      }
      else
      {
LABEL_46:
        v71 = sub_AC5258(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL,
                v66);
      }
      lookup = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v71)(
                                           v68,
                                           v59,
                                           *(_QWORD *)(v71 + 8));
      if ( !lookup )
        goto LABEL_70;
      v72 = lookup;
      v73 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&lookup->klass->_2.bitflags2 + 1) < (unsigned int)v73
        || (ServantCommentEntity_c *)lookup->klass->_2.typeHierarchy[v73 - 1] != ServantCommentEntity_TypeInfo )
      {
        goto LABEL_70;
      }
      ImageLimit = ServantCommentEntity__GetImageLimit(lookup, v20);
      if ( ImageLimit )
      {
        v75 = *(_QWORD *)&ImageLimit->max_length;
        if ( v75 )
        {
          if ( (int)v75 >= 1 )
          {
            v76 = 0;
            v77 = 8LL;
            do
            {
              v78 = *((_DWORD *)&ImageLimit->obj.klass + v77);
              v79 = v77 - 7;
              ++v77;
              v76 |= v78 > 2;
            }
            while ( v79 < (int)v75 );
            if ( (v76 & 1) != 0
              && (System_Array__IndexOf_int_(
                    ImageLimit,
                    imageLimitCount,
                    (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
            {
              if ( !condType || v72->fields.condType == condType )
                goto LABEL_12;
              if ( addCheck )
              {
                lookup = (ServantCommentEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !lookup )
                  goto LABEL_70;
                lookup = (ServantCommentEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)lookup,
                                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
                if ( !lookup )
                  goto LABEL_70;
                if ( ServantCommentAddMaster__IsEntityListCondContain(
                       (ServantCommentAddMaster_o *)lookup,
                       svtIda,
                       v88,
                       v87,
                       condType,
                       v29) )
                {
LABEL_12:
                  if ( !v28 || ServantCommentEntity__IsOpen(v72, -1, 1, v30) )
                    v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)v72;
                }
              }
            }
          }
        }
      }
      ++v87;
      v18 = (System_String_array *)sub_B2C374(string___TypeInfo, 5LL);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&svtIda, 0LL);
      v27 = (System_Int32_array **)lookup;
      if ( !v18 )
        goto LABEL_70;
    }
    if ( v28 )
    {
      lookup = (ServantCommentEntity_o *)v86;
      if ( !v86 )
        goto LABEL_70;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v86,
        v28,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
      goto LABEL_64;
    }
    if ( !v87 )
      break;
LABEL_64:
    v80 = v88;
LABEL_65:
    v87 = 0;
    v88 = v80 + 1;
    v18 = (System_String_array *)sub_B2C374(string___TypeInfo, 5LL);
    lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&svtIda, 0LL);
    v27 = (System_Int32_array **)lookup;
    v28 = 0LL;
    if ( !v18 )
      goto LABEL_70;
  }
  v80 = v88;
  if ( v88 == 1 )
    goto LABEL_65;
  lookup = (ServantCommentEntity_o *)v86;
  if ( !v86 )
LABEL_70:
    sub_B2C434(lookup, v20);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v86,
                                         (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ServantCommentEntity_array *__fastcall ServantCommentMaster__GetEntityList_29249908(
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
  const MethodInfo *v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x27
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x25
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x27
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x1
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x27
  System_String_o *v60; // x26
  __int64 v61; // x3
  __int64 v62; // x8
  __int64 v63; // x27
  unsigned __int64 v64; // x10
  int *v65; // x11
  __int64 v66; // x0
  __int64 v67; // x3
  __int64 v68; // x8
  __int64 v69; // x27
  unsigned __int64 v70; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v71; // x11
  __int64 v72; // x0
  int32_t v73; // w8
  ServantCommentEntity_o *v74; // x26
  __int64 v75; // x10
  System_Int32_array *ImageLimit; // x0
  const MethodInfo *v77; // x3
  __int64 v78; // x8
  __int64 v79; // x9
  const MethodInfo *v80; // x5
  __int64 v82; // x0
  __int64 v83; // x0
  int32_t v86; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v87; // [xsp+18h] [xbp-58h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-54h] BYREF

  svtIda = svtId;
  if ( (byte_4189F10 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v10);
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v15);
    sub_B2C35C(&ServantCommentEntity_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&string___TypeInfo, v18);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v19);
    byte_4189F10 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v86 = 0;
  v87 = 1;
  v21 = (System_String_array *)sub_B2C374(string___TypeInfo, 5LL);
  lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
  if ( !v21 )
    goto LABEL_74;
  v30 = (System_Int32_array **)lookup;
  v31 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v30 )
      {
        lookup = sub_B2C41C(v30, v21->obj.klass->_1.element_class);
        if ( !lookup )
        {
LABEL_75:
          v83 = sub_B2C454(lookup);
          sub_B2C400(v83, 0LL);
        }
      }
      if ( !v21->max_length )
        goto LABEL_73;
      v21->m_Items[0] = (System_String_o *)v30;
      sub_B2C2F8((BattleServantConfConponent_o *)v21->m_Items, v30, v24, v25, v26, v27, v28, v29);
      lookup = StringLiteral_1225/*":"*/;
      if ( StringLiteral_1225/*":"*/ )
      {
        lookup = sub_B2C41C(StringLiteral_1225/*":"*/, v21->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_75;
        v38 = (System_Int32_array **)StringLiteral_1225/*":"*/;
      }
      else
      {
        v38 = 0LL;
      }
      if ( v21->max_length <= 1 )
        goto LABEL_73;
      v21->m_Items[1] = (System_String_o *)v38;
      sub_B2C2F8((BattleServantConfConponent_o *)&v21->m_Items[1], v38, v32, v33, v34, v35, v36, v37);
      lookup = (__int64)System_Int32__ToString((int32_t)&v87, 0LL);
      v45 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = sub_B2C41C(lookup, v21->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_75;
      }
      if ( v21->max_length <= 2 )
        goto LABEL_73;
      v21->m_Items[2] = (System_String_o *)v45;
      sub_B2C2F8((BattleServantConfConponent_o *)&v21->m_Items[2], v45, v39, v40, v41, v42, v43, v44);
      lookup = StringLiteral_1225/*":"*/;
      if ( StringLiteral_1225/*":"*/ )
      {
        lookup = sub_B2C41C(StringLiteral_1225/*":"*/, v21->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_75;
        v52 = (System_Int32_array **)StringLiteral_1225/*":"*/;
      }
      else
      {
        v52 = 0LL;
      }
      if ( v21->max_length <= 3 )
      {
LABEL_73:
        v82 = sub_B2C460(lookup);
        sub_B2C400(v82, 0LL);
      }
      v21->m_Items[3] = (System_String_o *)v52;
      sub_B2C2F8((BattleServantConfConponent_o *)&v21->m_Items[3], v52, v46, v47, v48, v49, v50, v51);
      lookup = (__int64)System_Int32__ToString((int32_t)&v86, 0LL);
      v59 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = sub_B2C41C(lookup, v21->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_75;
      }
      if ( v21->max_length <= 4 )
        goto LABEL_73;
      v21->m_Items[4] = (System_String_o *)v59;
      sub_B2C2F8((BattleServantConfConponent_o *)&v21->m_Items[4], v59, v53, v54, v55, v56, v57, v58);
      v60 = System_String__Concat_44385656(v21, 0LL);
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_74;
      v62 = *(_QWORD *)lookup;
      v63 = lookup;
      if ( *(_WORD *)(*(_QWORD *)lookup + 298LL) )
      {
        v64 = 0LL;
        v65 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v65 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v64;
          v65 += 4;
          if ( v64 >= *(unsigned __int16 *)(*(_QWORD *)lookup + 298LL) )
            goto LABEL_29;
        }
        v66 = v62 + 16LL * *v65 + 312;
      }
      else
      {
LABEL_29:
        v66 = sub_AC5258(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL,
                v61);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v66)(v63, v60, *(_QWORD *)(v66 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_74;
      v68 = *(_QWORD *)lookup;
      v69 = lookup;
      if ( *(_WORD *)(*(_QWORD *)lookup + 298LL) )
      {
        v70 = 0LL;
        v71 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v68 + 176) + 8LL);
        while ( *(v71 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v70;
          v71 += 2;
          if ( v70 >= *(unsigned __int16 *)(*(_QWORD *)lookup + 298LL) )
            goto LABEL_37;
        }
        v72 = v68 + 16LL * (*(_DWORD *)v71 + 2) + 312;
      }
      else
      {
LABEL_37:
        v72 = sub_AC5258(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL,
                v67);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v72)(v69, v60, *(_QWORD *)(v72 + 8));
      if ( !lookup )
        goto LABEL_74;
      v74 = (ServantCommentEntity_o *)lookup;
      v75 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)lookup + 300LL) < (unsigned int)v75
        || *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)lookup + 200LL) + 8 * v75 - 8) != ServantCommentEntity_TypeInfo )
      {
        goto LABEL_74;
      }
      ImageLimit = ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)lookup, v23);
      if ( imageLimitCount != -1 )
      {
        if ( ImageLimit )
        {
          v78 = *(_QWORD *)&ImageLimit->max_length;
          if ( v78 )
          {
            if ( overLimit )
            {
              if ( (int)v78 < 1 )
                goto LABEL_68;
              v79 = 0LL;
              while ( ImageLimit->m_Items[v79 + 1] > imageLimitCount )
              {
                if ( (int)++v79 >= (int)v78 )
                  goto LABEL_68;
              }
            }
            else if ( (System_Array__IndexOf_int_(
                         ImageLimit,
                         imageLimitCount,
                         (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___) & 0x80000000) != 0 )
            {
              goto LABEL_68;
            }
          }
        }
      }
      if ( !condType || v74->fields.condType == condType )
        goto LABEL_62;
      if ( addCheck )
      {
        lookup = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lookup )
          goto LABEL_74;
        lookup = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)lookup,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
        if ( !lookup )
          goto LABEL_74;
        if ( ServantCommentAddMaster__IsEntityListCondContain(
               (ServantCommentAddMaster_o *)lookup,
               svtIda,
               v87,
               v86,
               condType,
               v80) )
        {
LABEL_62:
          if ( !v31 || ServantCommentEntity__IsOpen(v74, -1, 1, v77) )
            v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)v74;
        }
      }
LABEL_68:
      ++v86;
      v21 = (System_String_array *)sub_B2C374(string___TypeInfo, 5LL);
      lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
      v30 = (System_Int32_array **)lookup;
      if ( !v21 )
        goto LABEL_74;
    }
    if ( v31 )
    {
      if ( !v20 )
        goto LABEL_74;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v20,
        v31,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
      goto LABEL_42;
    }
    if ( !v86 )
      break;
LABEL_42:
    v73 = v87;
LABEL_43:
    v86 = 0;
    v87 = v73 + 1;
    v21 = (System_String_array *)sub_B2C374(string___TypeInfo, 5LL);
    lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
    v30 = (System_Int32_array **)lookup;
    v31 = 0LL;
    if ( !v21 )
      goto LABEL_74;
  }
  v73 = v87;
  if ( v87 == 1 )
    goto LABEL_43;
  if ( !v20 )
LABEL_74:
    sub_B2C434(lookup, v23);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                         (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
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
  System_Collections_Generic_List_int__o *v21; // x22
  __int64 Instance; // x0
  const MethodInfo *v23; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x25
  int32_t v25; // w24
  System_String_array *v26; // x26
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x27
  ServantCommentEntity_o *v34; // x25
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
  System_Int32_array **v48; // x27
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x27
  System_String_o *v63; // x26
  __int64 v64; // x3
  __int64 v65; // x8
  __int64 v66; // x27
  unsigned __int64 v67; // x10
  int *v68; // x11
  __int64 v69; // x0
  __int64 v70; // x3
  __int64 v71; // x8
  __int64 v72; // x27
  unsigned __int64 v73; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v74; // x11
  __int64 v75; // x0
  int v76; // w8
  ServantCommentEntity_o *v77; // x26
  __int64 v78; // x10
  const MethodInfo *v79; // x3
  __int64 v80; // x8
  int v81; // w8
  System_Int32_array **v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  __int64 v97; // x0
  __int64 v98; // x0
  BattleServantConfConponent_o *v99; // [xsp+0h] [xbp-80h]
  BattleServantConfConponent_o *v100; // [xsp+8h] [xbp-78h]
  int32_t ServantLimitCountSealAfter; // [xsp+14h] [xbp-6Ch]
  __int64 v102; // [xsp+18h] [xbp-68h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+20h] [xbp-60h] BYREF
  int32_t svtIda; // [xsp+2Ch] [xbp-54h] BYREF

  svtIda = svtId;
  if ( (byte_4189F16 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, idList);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_B2C35C(&NetworkManager_TypeInfo, v15);
    sub_B2C35C(&ServantCommentEntity_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&string___TypeInfo, v18);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v19);
    byte_4189F16 = 1;
  }
  v102 = 0LL;
  entity = 0LL;
  v20 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  v21 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    v25 = entity->fields.maxLimitCount ? entity->fields.maxLimitCount : 1;
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_79;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Instance )
      goto LABEL_79;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   svtIda,
                                   v25,
                                   0LL);
  }
  v99 = (BattleServantConfConponent_o *)priorityList;
  v100 = (BattleServantConfConponent_o *)idList;
  v102 = 0x100000000LL;
  v26 = (System_String_array *)sub_B2C374(string___TypeInfo, 5LL);
  Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
  if ( !v26 )
    goto LABEL_79;
  v33 = (System_Int32_array **)Instance;
  v34 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v33 )
      {
        Instance = sub_B2C41C(v33, v26->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_80:
          v98 = sub_B2C454(Instance);
          sub_B2C400(v98, 0LL);
        }
      }
      if ( !v26->max_length )
        goto LABEL_78;
      v26->m_Items[0] = (System_String_o *)v33;
      sub_B2C2F8((BattleServantConfConponent_o *)v26->m_Items, v33, v27, v28, v29, v30, v31, v32);
      Instance = StringLiteral_1225/*":"*/;
      if ( StringLiteral_1225/*":"*/ )
      {
        Instance = sub_B2C41C(StringLiteral_1225/*":"*/, v26->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_80;
        v41 = (System_Int32_array **)StringLiteral_1225/*":"*/;
      }
      else
      {
        v41 = 0LL;
      }
      if ( v26->max_length <= 1 )
        goto LABEL_78;
      v26->m_Items[1] = (System_String_o *)v41;
      sub_B2C2F8((BattleServantConfConponent_o *)&v26->m_Items[1], v41, v35, v36, v37, v38, v39, v40);
      Instance = (__int64)System_Int32__ToString((int32_t)&v102 + 4, 0LL);
      v48 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = sub_B2C41C(Instance, v26->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_80;
      }
      if ( v26->max_length <= 2 )
        goto LABEL_78;
      v26->m_Items[2] = (System_String_o *)v48;
      sub_B2C2F8((BattleServantConfConponent_o *)&v26->m_Items[2], v48, v42, v43, v44, v45, v46, v47);
      Instance = StringLiteral_1225/*":"*/;
      if ( StringLiteral_1225/*":"*/ )
      {
        Instance = sub_B2C41C(StringLiteral_1225/*":"*/, v26->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_80;
        v55 = (System_Int32_array **)StringLiteral_1225/*":"*/;
      }
      else
      {
        v55 = 0LL;
      }
      if ( v26->max_length <= 3 )
      {
LABEL_78:
        v97 = sub_B2C460(Instance);
        sub_B2C400(v97, 0LL);
      }
      v26->m_Items[3] = (System_String_o *)v55;
      sub_B2C2F8((BattleServantConfConponent_o *)&v26->m_Items[3], v55, v49, v50, v51, v52, v53, v54);
      Instance = (__int64)System_Int32__ToString((int32_t)&v102, 0LL);
      v62 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = sub_B2C41C(Instance, v26->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_80;
      }
      if ( v26->max_length <= 4 )
        goto LABEL_78;
      v26->m_Items[4] = (System_String_o *)v62;
      sub_B2C2F8((BattleServantConfConponent_o *)&v26->m_Items[4], v62, v56, v57, v58, v59, v60, v61);
      v63 = System_String__Concat_44385656(v26, 0LL);
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
        v69 = sub_AC5258(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL,
                v64);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v69)(v66, v63, *(_QWORD *)(v69 + 8));
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
          v75 = sub_AC5258(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL,
                  v70);
        }
        Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v75)(v72, v63, *(_QWORD *)(v75 + 8));
        if ( Instance )
        {
          v77 = (ServantCommentEntity_o *)Instance;
          v78 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v78
            && *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v78 - 8) == ServantCommentEntity_TypeInfo )
          {
            Instance = (__int64)ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)Instance, v23);
            if ( !Instance )
              goto LABEL_69;
            v80 = *(_QWORD *)(Instance + 24);
            if ( !v80 )
              goto LABEL_69;
            if ( !(_DWORD)v80 )
              goto LABEL_78;
            v81 = *(_DWORD *)(Instance + 32);
            if ( v81 < 3 || ServantLimitCountSealAfter >= v81 )
            {
LABEL_69:
              if ( ServantCommentEntity__IsOpen(v77, -1, 1, v79) )
                v34 = v77;
            }
            LODWORD(v102) = v102 + 1;
            v26 = (System_String_array *)sub_B2C374(string___TypeInfo, 5LL);
            Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
            v33 = (System_Int32_array **)Instance;
            if ( v26 )
              continue;
          }
        }
      }
      goto LABEL_79;
    }
    if ( v34 )
    {
      Instance = ServantCommentEntity__IsNew(v34, v23);
      if ( (Instance & 1) != 0 )
      {
        if ( !v20 )
          goto LABEL_79;
        System_Collections_Generic_List_int___Add(
          v20,
          v34->fields.id,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        if ( !v21 )
          goto LABEL_79;
        System_Collections_Generic_List_int___Add(
          v21,
          v34->fields.priority,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      goto LABEL_57;
    }
    if ( !(_DWORD)v102 )
      break;
LABEL_57:
    v76 = HIDWORD(v102);
LABEL_58:
    LODWORD(v102) = 0;
    HIDWORD(v102) = v76 + 1;
    v26 = (System_String_array *)sub_B2C374(string___TypeInfo, 5LL);
    Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
    v33 = (System_Int32_array **)Instance;
    v34 = 0LL;
    if ( !v26 )
      goto LABEL_79;
  }
  v76 = HIDWORD(v102);
  if ( HIDWORD(v102) == 1 )
    goto LABEL_58;
  if ( !v20
    || (v82 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                       v20,
                                       (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__),
        v100->klass = (BattleServantConfConponent_c *)v82,
        sub_B2C2F8(v100, v82, v83, v84, v85, v86, v87, v88),
        !v21)
    || (v89 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                       v21,
                                       (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__),
        v99->klass = (BattleServantConfConponent_c *)v89,
        sub_B2C2F8(v99, v89, v90, v91, v92, v93, v94, v95),
        !v100->klass) )
  {
LABEL_79:
    sub_B2C434(Instance, v23);
  }
  return LODWORD(v100->klass->_1.namespaze) != 0;
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
  __int64 v14; // x1
  System_Int32_array *v15; // x8
  unsigned __int64 v16; // x23
  System_String_array *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x22
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
  __int64 v55; // x8
  __int64 v56; // x22
  unsigned __int64 v57; // x10
  int *v58; // x11
  __int64 v59; // x0
  __int64 v60; // x3
  __int64 v61; // x8
  __int64 v62; // x22
  unsigned __int64 v63; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v64; // x11
  __int64 v65; // x0
  __int64 v66; // x10
  __int64 v68; // x0
  __int64 v69; // x0
  System_Int32_array *priorityList; // [xsp+8h] [xbp-68h] BYREF
  System_Int32_array *idList; // [xsp+10h] [xbp-60h] BYREF
  int32_t v72; // [xsp+1Ch] [xbp-54h] BYREF

  v72 = svtId;
  if ( (byte_4189F19 & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v7);
    sub_B2C35C(&ServantCommentEntity_TypeInfo, v8);
    sub_B2C35C(&string___TypeInfo, v9);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v10);
    byte_4189F19 = 1;
  }
  priorityList = 0LL;
  idList = 0LL;
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  NewList = ServantCommentMaster__GetNewList(this, &idList, &priorityList, svtId, v12);
  if ( (NewList & 1) != 0 )
  {
    v15 = idList;
    if ( !idList )
LABEL_52:
      sub_B2C434(NewList, v14);
    v16 = 0LL;
    while ( (__int64)v16 < (int)v15->max_length )
    {
      v17 = (System_String_array *)sub_B2C374(string___TypeInfo, 5LL);
      NewList = (__int64)System_Int32__ToString((int32_t)&v72, 0LL);
      if ( !v17 )
        goto LABEL_52;
      v24 = (System_Int32_array **)NewList;
      if ( NewList )
      {
        NewList = sub_B2C41C(NewList, v17->obj.klass->_1.element_class);
        if ( !NewList )
        {
LABEL_55:
          v69 = sub_B2C454(NewList);
          sub_B2C400(v69, 0LL);
        }
      }
      if ( !v17->max_length )
        goto LABEL_54;
      v17->m_Items[0] = (System_String_o *)v24;
      sub_B2C2F8((BattleServantConfConponent_o *)v17->m_Items, v24, v18, v19, v20, v21, v22, v23);
      NewList = StringLiteral_1225/*":"*/;
      if ( StringLiteral_1225/*":"*/ )
      {
        NewList = sub_B2C41C(StringLiteral_1225/*":"*/, v17->obj.klass->_1.element_class);
        if ( !NewList )
          goto LABEL_55;
        v31 = (System_Int32_array **)StringLiteral_1225/*":"*/;
      }
      else
      {
        v31 = 0LL;
      }
      if ( v17->max_length <= 1 )
        goto LABEL_54;
      v17->m_Items[1] = (System_String_o *)v31;
      sub_B2C2F8((BattleServantConfConponent_o *)&v17->m_Items[1], v31, v25, v26, v27, v28, v29, v30);
      if ( !idList )
        goto LABEL_52;
      if ( v16 >= idList->max_length )
        goto LABEL_54;
      NewList = (__int64)System_Int32__ToString((int)idList + 4 * (int)v16 + 32, 0LL);
      v38 = (System_Int32_array **)NewList;
      if ( NewList )
      {
        NewList = sub_B2C41C(NewList, v17->obj.klass->_1.element_class);
        if ( !NewList )
          goto LABEL_55;
      }
      if ( v17->max_length <= 2 )
        goto LABEL_54;
      v17->m_Items[2] = (System_String_o *)v38;
      sub_B2C2F8((BattleServantConfConponent_o *)&v17->m_Items[2], v38, v32, v33, v34, v35, v36, v37);
      NewList = StringLiteral_1225/*":"*/;
      if ( StringLiteral_1225/*":"*/ )
      {
        NewList = sub_B2C41C(StringLiteral_1225/*":"*/, v17->obj.klass->_1.element_class);
        if ( !NewList )
          goto LABEL_55;
        v45 = (System_Int32_array **)StringLiteral_1225/*":"*/;
      }
      else
      {
        v45 = 0LL;
      }
      if ( v17->max_length <= 3 )
        goto LABEL_54;
      v17->m_Items[3] = (System_String_o *)v45;
      sub_B2C2F8((BattleServantConfConponent_o *)&v17->m_Items[3], v45, v39, v40, v41, v42, v43, v44);
      if ( !priorityList )
        goto LABEL_52;
      if ( v16 >= priorityList->max_length )
      {
LABEL_54:
        v68 = sub_B2C460(NewList);
        sub_B2C400(v68, 0LL);
      }
      NewList = (__int64)System_Int32__ToString((int)priorityList + 4 * (int)v16 + 32, 0LL);
      v52 = (System_Int32_array **)NewList;
      if ( NewList )
      {
        NewList = sub_B2C41C(NewList, v17->obj.klass->_1.element_class);
        if ( !NewList )
          goto LABEL_55;
      }
      if ( v17->max_length <= 4 )
        goto LABEL_54;
      v17->m_Items[4] = (System_String_o *)v52;
      sub_B2C2F8((BattleServantConfConponent_o *)&v17->m_Items[4], v52, v46, v47, v48, v49, v50, v51);
      v53 = System_String__Concat_44385656(v17, 0LL);
      NewList = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( NewList )
      {
        v55 = *(_QWORD *)NewList;
        v56 = NewList;
        if ( *(_WORD *)(*(_QWORD *)NewList + 298LL) )
        {
          v57 = 0LL;
          v58 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
          while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v58 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            ++v57;
            v58 += 4;
            if ( v57 >= *(unsigned __int16 *)(*(_QWORD *)NewList + 298LL) )
              goto LABEL_36;
          }
          v59 = v55 + 16LL * *v58 + 312;
        }
        else
        {
LABEL_36:
          v59 = sub_AC5258(
                  NewList,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  0LL,
                  v54);
        }
        NewList = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v59)(v56, v53, *(_QWORD *)(v59 + 8));
        if ( (NewList & 1) != 0 )
        {
          NewList = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
          if ( !NewList )
            goto LABEL_52;
          v61 = *(_QWORD *)NewList;
          v62 = NewList;
          if ( *(_WORD *)(*(_QWORD *)NewList + 298LL) )
          {
            v63 = 0LL;
            v64 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v61 + 176)
                                                                                              + 8LL);
            while ( *(v64 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
            {
              ++v63;
              v64 += 2;
              if ( v63 >= *(unsigned __int16 *)(*(_QWORD *)NewList + 298LL) )
                goto LABEL_44;
            }
            v65 = v61 + 16LL * (*(_DWORD *)v64 + 2) + 312;
          }
          else
          {
LABEL_44:
            v65 = sub_AC5258(
                    NewList,
                    System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                    2LL,
                    v60);
          }
          NewList = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v65)(v62, v53, *(_QWORD *)(v65 + 8));
          if ( NewList )
          {
            v14 = NewList;
            v66 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)NewList + 300LL) >= (unsigned int)v66
              && *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)NewList + 200LL) + 8 * v66 - 8) == ServantCommentEntity_TypeInfo )
            {
              if ( !v11 )
                goto LABEL_52;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v11,
                (EventMissionProgressRequest_Argument_ProgressData_o *)NewList,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
            }
          }
        }
        v15 = idList;
        ++v16;
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
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x23
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x23
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x23
  System_String_o *v51; // x22
  __int64 v52; // x3
  __int64 v53; // x8
  __int64 v54; // x23
  unsigned __int64 v55; // x10
  int *v56; // x11
  __int64 v57; // x0
  __int64 v58; // x3
  __int64 v59; // x8
  __int64 v60; // x23
  unsigned __int64 v61; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v62; // x11
  __int64 v63; // x0
  int v64; // w8
  const MethodInfo *v65; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v66; // x22
  __int64 v67; // x10
  __int64 v69; // x0
  __int64 v70; // x0
  int v71; // [xsp+4h] [xbp-5Ch] BYREF
  int v72; // [xsp+8h] [xbp-58h] BYREF
  int32_t v73; // [xsp+Ch] [xbp-54h] BYREF

  v73 = svtId;
  if ( (byte_4189F12 & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v7);
    sub_B2C35C(&ServantCommentEntity_TypeInfo, v8);
    sub_B2C35C(&string___TypeInfo, v9);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v10);
    byte_4189F12 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v71 = 0;
  v72 = 1;
  v12 = (System_String_array *)sub_B2C374(string___TypeInfo, 5LL);
  lookup = (__int64)System_Int32__ToString((int32_t)&v73, 0LL);
  if ( !v12 )
    goto LABEL_57;
  v21 = (System_Int32_array **)lookup;
  v22 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v21 )
      {
        lookup = sub_B2C41C(v21, v12->obj.klass->_1.element_class);
        if ( !lookup )
        {
LABEL_58:
          v70 = sub_B2C454(lookup);
          sub_B2C400(v70, 0LL);
        }
      }
      if ( !v12->max_length )
        goto LABEL_56;
      v12->m_Items[0] = (System_String_o *)v21;
      sub_B2C2F8((BattleServantConfConponent_o *)v12->m_Items, v21, v15, v16, v17, v18, v19, v20);
      lookup = StringLiteral_1225/*":"*/;
      if ( StringLiteral_1225/*":"*/ )
      {
        lookup = sub_B2C41C(StringLiteral_1225/*":"*/, v12->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_58;
        v29 = (System_Int32_array **)StringLiteral_1225/*":"*/;
      }
      else
      {
        v29 = 0LL;
      }
      if ( v12->max_length <= 1 )
        goto LABEL_56;
      v12->m_Items[1] = (System_String_o *)v29;
      sub_B2C2F8((BattleServantConfConponent_o *)&v12->m_Items[1], v29, v23, v24, v25, v26, v27, v28);
      lookup = (__int64)System_Int32__ToString((int32_t)&v72, 0LL);
      v36 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = sub_B2C41C(lookup, v12->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_58;
      }
      if ( v12->max_length <= 2 )
        goto LABEL_56;
      v12->m_Items[2] = (System_String_o *)v36;
      sub_B2C2F8((BattleServantConfConponent_o *)&v12->m_Items[2], v36, v30, v31, v32, v33, v34, v35);
      lookup = StringLiteral_1225/*":"*/;
      if ( StringLiteral_1225/*":"*/ )
      {
        lookup = sub_B2C41C(StringLiteral_1225/*":"*/, v12->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_58;
        v43 = (System_Int32_array **)StringLiteral_1225/*":"*/;
      }
      else
      {
        v43 = 0LL;
      }
      if ( v12->max_length <= 3 )
      {
LABEL_56:
        v69 = sub_B2C460(lookup);
        sub_B2C400(v69, 0LL);
      }
      v12->m_Items[3] = (System_String_o *)v43;
      sub_B2C2F8((BattleServantConfConponent_o *)&v12->m_Items[3], v43, v37, v38, v39, v40, v41, v42);
      lookup = (__int64)System_Int32__ToString((int32_t)&v71, 0LL);
      v50 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = sub_B2C41C(lookup, v12->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_58;
      }
      if ( v12->max_length <= 4 )
        goto LABEL_56;
      v12->m_Items[4] = (System_String_o *)v50;
      sub_B2C2F8((BattleServantConfConponent_o *)&v12->m_Items[4], v50, v44, v45, v46, v47, v48, v49);
      v51 = System_String__Concat_44385656(v12, 0LL);
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_57;
      v53 = *(_QWORD *)lookup;
      v54 = lookup;
      if ( *(_WORD *)(*(_QWORD *)lookup + 298LL) )
      {
        v55 = 0LL;
        v56 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v56 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v55;
          v56 += 4;
          if ( v55 >= *(unsigned __int16 *)(*(_QWORD *)lookup + 298LL) )
            goto LABEL_29;
        }
        v57 = v53 + 16LL * *v56 + 312;
      }
      else
      {
LABEL_29:
        v57 = sub_AC5258(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL,
                v52);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v57)(v54, v51, *(_QWORD *)(v57 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( lookup )
      {
        v59 = *(_QWORD *)lookup;
        v60 = lookup;
        if ( *(_WORD *)(*(_QWORD *)lookup + 298LL) )
        {
          v61 = 0LL;
          v62 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v59 + 176)
                                                                                            + 8LL);
          while ( *(v62 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            ++v61;
            v62 += 2;
            if ( v61 >= *(unsigned __int16 *)(*(_QWORD *)lookup + 298LL) )
              goto LABEL_37;
          }
          v63 = v59 + 16LL * (*(_DWORD *)v62 + 2) + 312;
        }
        else
        {
LABEL_37:
          v63 = sub_AC5258(
                  lookup,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL,
                  v58);
        }
        lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v63)(v60, v51, *(_QWORD *)(v63 + 8));
        if ( lookup )
        {
          v66 = (EventMissionProgressRequest_Argument_ProgressData_o *)lookup;
          v67 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)lookup + 300LL) >= (unsigned int)v67
            && *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)lookup + 200LL) + 8 * v67 - 8) == ServantCommentEntity_TypeInfo )
          {
            if ( ServantCommentEntity__IsOpen((ServantCommentEntity_o *)lookup, -1, 1, v65) )
              v22 = v66;
            ++v71;
            v12 = (System_String_array *)sub_B2C374(string___TypeInfo, 5LL);
            lookup = (__int64)System_Int32__ToString((int32_t)&v73, 0LL);
            v21 = (System_Int32_array **)lookup;
            if ( v12 )
              continue;
          }
        }
      }
      goto LABEL_57;
    }
    if ( v22 )
    {
      if ( !v11 )
        goto LABEL_57;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        v22,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
      goto LABEL_42;
    }
    if ( !v71 )
      break;
LABEL_42:
    v64 = v72;
LABEL_43:
    v71 = 0;
    v72 = v64 + 1;
    v12 = (System_String_array *)sub_B2C374(string___TypeInfo, 5LL);
    lookup = (__int64)System_Int32__ToString((int32_t)&v73, 0LL);
    v21 = (System_Int32_array **)lookup;
    v22 = 0LL;
    if ( !v12 )
      goto LABEL_57;
  }
  v64 = v72;
  if ( v72 == 1 )
    goto LABEL_43;
  if ( !v11 )
LABEL_57:
    sub_B2C434(lookup, v14);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                         (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
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
  ServantCommentEntity_c *v18; // x1
  ServantCommentAddMaster_o *MasterData_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_int__o *v20; // x23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  int32_t Count; // w0
  int32_t v23; // w26
  int32_t v24; // w27
  ServantCommentEntity_o *v25; // x28
  __int64 v26; // x9
  int32_t m_CachedPtr; // w24
  System_Int32_array *ImageLimit; // x0
  const MethodInfo *v29; // x3
  System_Int32_array *v30; // x22
  int64_t UserId; // x2
  int32_t ServantLimitCountSealAfter; // w0
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x7
  ServantCommentMaster_o *v36; // x0
  int32_t v37; // w1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  ServantLimitImageMaster_o *v40; // [xsp+8h] [xbp-78h]
  UserServantCollectionMaster_o *v41; // [xsp+10h] [xbp-70h]
  UserServantCollectionEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4189F17 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B2C35C(&NetworkManager_TypeInfo, v14);
    sub_B2C35C(&ServantCommentEntity_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4189F17 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_WarQuestSelectionMaster = (ServantCommentAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      Instance,
                                                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
  v20 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v40 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             Instance,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
        v41 = (UserServantCollectionMaster_o *)Instance,
        !list) )
  {
LABEL_32:
    sub_B2C434(Instance, v18);
  }
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return v20;
  v23 = Count;
  v24 = 0;
  while ( 1 )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                  v24,
                                  (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_32;
    v18 = ServantCommentEntity_TypeInfo;
    v25 = (ServantCommentEntity_o *)Instance;
    v26 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v26
      || (ServantCommentEntity_c *)Instance->klass->_2.typeHierarchy[v26 - 1] != ServantCommentEntity_TypeInfo )
    {
      break;
    }
    if ( !v20 )
      goto LABEL_32;
    m_CachedPtr = Instance->fields.m_CachedPtr;
    if ( !System_Collections_Generic_List_int___Contains(
            v20,
            m_CachedPtr,
            (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      ImageLimit = ServantCommentEntity__GetImageLimit(v25, (const MethodInfo *)v18);
      if ( !ImageLimit )
        goto LABEL_27;
      v30 = ImageLimit;
      if ( !*(_QWORD *)&ImageLimit->max_length )
        goto LABEL_27;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      Instance = (DataManager_o *)v41;
      if ( !v41 )
        goto LABEL_32;
      Instance = (DataManager_o *)UserServantCollectionMaster__TryGetEntity(v41, &entity, UserId, m_CachedPtr, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_27;
      if ( !entity )
        goto LABEL_32;
      Instance = (DataManager_o *)v40;
      if ( !v40 )
        goto LABEL_32;
      ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                     v40,
                                     m_CachedPtr,
                                     entity->fields.maxLimitCount,
                                     0LL);
      if ( (System_Array__IndexOf_int_(
              v30,
              ServantLimitCountSealAfter,
              (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
      {
LABEL_27:
        if ( ServantCommentEntity__IsOnlyOpenQuestCond(v25, questId, questPhase, v29) )
          goto LABEL_28;
        Instance = (DataManager_o *)MasterData_WarQuestSelectionMaster;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_32;
        if ( ServantCommentAddMaster__IsOnlyOpenQuestCond(
               MasterData_WarQuestSelectionMaster,
               m_CachedPtr,
               v25->fields.id,
               v25->fields.priority,
               1,
               questId,
               questPhase,
               v34) )
        {
LABEL_28:
          if ( ServantCommentEntity__IsOpen(v25, -1, 1, v33) )
            System_Collections_Generic_List_int___Add(
              v20,
              v25->fields.svtId,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
    }
    if ( ++v24 >= v23 )
      return v20;
  }
  sub_B2C728(Instance);
  return (System_Collections_Generic_List_int__o *)ServantCommentMaster__GetServantListWithQuestClearAndImageLimit(
                                                     v36,
                                                     v37,
                                                     v38,
                                                     v39);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x23
  __int64 v17; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v19; // w24
  int32_t v20; // w25
  const MethodInfo *v21; // x3
  ServantCommentEntity_o *v22; // x26
  __int64 v23; // x9
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x7
  const MethodInfo *v26; // x1
  bool IsOpen; // w27
  ServantCommentMaster_o *v29; // x0
  int32_t v30; // w1
  const MethodInfo *v31; // x2

  if ( (byte_4189F18 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantCommentAddMaster___, v8);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v13);
    sub_B2C35C(&ServantCommentEntity_TypeInfo, v14);
    byte_4189F18 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantCommentAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list < 1 )
  {
LABEL_24:
    if ( v16 )
      return (ServantCommentEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                             (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
LABEL_26:
    sub_B2C434(list, v17);
  }
  v19 = (int)list;
  v20 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_26;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v20,
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_26;
    v22 = (ServantCommentEntity_o *)list;
    v23 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v23
      || (ServantCommentEntity_c *)list->klass->_2.typeHierarchy[v23 - 1] != ServantCommentEntity_TypeInfo )
    {
      break;
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)ServantCommentEntity__IsOnlyOpenQuestCond(
                                                                                         (ServantCommentEntity_o *)list,
                                                                                         questId,
                                                                                         questPhase,
                                                                                         v21);
    if ( ((unsigned __int8)list & 1) != 0 )
      goto LABEL_16;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_26;
    if ( ServantCommentAddMaster__IsOnlyOpenQuestCond(
           Master_WarQuestSelectionMaster,
           v22->fields.svtId,
           v22->fields.id,
           v22->fields.priority,
           1,
           questId,
           questPhase,
           v25) )
    {
LABEL_16:
      IsOpen = ServantCommentEntity__IsOpen(v22, -1, 1, v24);
    }
    else
    {
      IsOpen = 0;
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)ServantCommentEntity__GetImageLimit(
                                                                                         v22,
                                                                                         v26);
    if ( list && IsOpen && list->fields._syncRoot )
    {
      if ( !v16 )
        goto LABEL_26;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v16,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    }
    if ( ++v20 >= v19 )
      goto LABEL_24;
  }
  sub_B2C728(list);
  return (ServantCommentEntity_array *)ServantCommentMaster__GetNewProfileEntities(v29, v30, v31);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentMaster__IsNew(ServantCommentMaster_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_array *v7; // x21
  ServantCommentEntity_o *lookup; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **v16; // x22
  ServantCommentEntity_o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x22
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x22
  System_String_o *v46; // x21
  __int64 v47; // x3
  ServantCommentEntity_c *klass; // x8
  ServantCommentEntity_o *v49; // x22
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  __int64 v52; // x0
  const MethodInfo *v53; // x1
  __int64 v54; // x3
  ServantCommentEntity_c *v55; // x8
  ServantCommentEntity_o *v56; // x22
  unsigned __int64 v57; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v58; // x11
  __int64 v59; // x0
  int v60; // w8
  const MethodInfo *v61; // x3
  ServantCommentEntity_o *v62; // x21
  __int64 v63; // x10
  __int64 v65; // x0
  __int64 v66; // x0
  int v67; // [xsp+4h] [xbp-4Ch] BYREF
  int v68; // [xsp+8h] [xbp-48h] BYREF
  int32_t v69; // [xsp+Ch] [xbp-44h] BYREF

  v69 = svtId;
  if ( (byte_4189F15 & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&ServantCommentEntity_TypeInfo, v4);
    sub_B2C35C(&string___TypeInfo, v5);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v6);
    byte_4189F15 = 1;
  }
  v67 = 0;
  v68 = 1;
  v7 = (System_String_array *)sub_B2C374(string___TypeInfo, 5LL);
  lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v69, 0LL);
  if ( !v7 )
LABEL_56:
    sub_B2C434(lookup, v9);
  v16 = (System_Int32_array **)lookup;
  v17 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v16 )
      {
        lookup = (ServantCommentEntity_o *)sub_B2C41C(v16, v7->obj.klass->_1.element_class);
        if ( !lookup )
        {
LABEL_57:
          v66 = sub_B2C454(lookup);
          sub_B2C400(v66, 0LL);
        }
      }
      if ( !v7->max_length )
        goto LABEL_55;
      v7->m_Items[0] = (System_String_o *)v16;
      sub_B2C2F8((BattleServantConfConponent_o *)v7->m_Items, v16, v10, v11, v12, v13, v14, v15);
      lookup = (ServantCommentEntity_o *)StringLiteral_1225/*":"*/;
      if ( StringLiteral_1225/*":"*/ )
      {
        lookup = (ServantCommentEntity_o *)sub_B2C41C(StringLiteral_1225/*":"*/, v7->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_57;
        v24 = (System_Int32_array **)StringLiteral_1225/*":"*/;
      }
      else
      {
        v24 = 0LL;
      }
      if ( v7->max_length <= 1 )
        goto LABEL_55;
      v7->m_Items[1] = (System_String_o *)v24;
      sub_B2C2F8((BattleServantConfConponent_o *)&v7->m_Items[1], v24, v18, v19, v20, v21, v22, v23);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v68, 0LL);
      v31 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = (ServantCommentEntity_o *)sub_B2C41C(lookup, v7->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_57;
      }
      if ( v7->max_length <= 2 )
        goto LABEL_55;
      v7->m_Items[2] = (System_String_o *)v31;
      sub_B2C2F8((BattleServantConfConponent_o *)&v7->m_Items[2], v31, v25, v26, v27, v28, v29, v30);
      lookup = (ServantCommentEntity_o *)StringLiteral_1225/*":"*/;
      if ( StringLiteral_1225/*":"*/ )
      {
        lookup = (ServantCommentEntity_o *)sub_B2C41C(StringLiteral_1225/*":"*/, v7->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_57;
        v38 = (System_Int32_array **)StringLiteral_1225/*":"*/;
      }
      else
      {
        v38 = 0LL;
      }
      if ( v7->max_length <= 3 )
      {
LABEL_55:
        v65 = sub_B2C460(lookup);
        sub_B2C400(v65, 0LL);
      }
      v7->m_Items[3] = (System_String_o *)v38;
      sub_B2C2F8((BattleServantConfConponent_o *)&v7->m_Items[3], v38, v32, v33, v34, v35, v36, v37);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v67, 0LL);
      v45 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = (ServantCommentEntity_o *)sub_B2C41C(lookup, v7->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_57;
      }
      if ( v7->max_length <= 4 )
        goto LABEL_55;
      v7->m_Items[4] = (System_String_o *)v45;
      sub_B2C2F8((BattleServantConfConponent_o *)&v7->m_Items[4], v45, v39, v40, v41, v42, v43, v44);
      v46 = System_String__Concat_44385656(v7, 0LL);
      lookup = (ServantCommentEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_56;
      klass = lookup->klass;
      v49 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v50 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v50;
          p_offset += 4;
          if ( v50 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_29;
        }
        v52 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_29:
        v52 = sub_AC5258(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL,
                v47);
      }
      if ( ((*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v52)(
              v49,
              v46,
              *(_QWORD *)(v52 + 8)) & 1) == 0 )
        break;
      lookup = (ServantCommentEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( lookup )
      {
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
              goto LABEL_37;
          }
          v59 = (__int64)(&v55->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v58);
        }
        else
        {
LABEL_37:
          v59 = sub_AC5258(
                  lookup,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL,
                  v54);
        }
        lookup = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v59)(
                                             v56,
                                             v46,
                                             *(_QWORD *)(v59 + 8));
        if ( lookup )
        {
          v62 = lookup;
          v63 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&lookup->klass->_2.bitflags2 + 1) >= (unsigned int)v63
            && (ServantCommentEntity_c *)lookup->klass->_2.typeHierarchy[v63 - 1] == ServantCommentEntity_TypeInfo )
          {
            if ( ServantCommentEntity__IsOpen(lookup, -1, 1, v61) )
              v17 = v62;
            ++v67;
            v7 = (System_String_array *)sub_B2C374(string___TypeInfo, 5LL);
            lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v69, 0LL);
            v16 = (System_Int32_array **)lookup;
            if ( v7 )
              continue;
          }
        }
      }
      goto LABEL_56;
    }
    if ( v17 )
    {
      if ( ServantCommentEntity__IsNew(v17, v53) )
        return 1;
      goto LABEL_42;
    }
    if ( !v67 )
      break;
LABEL_42:
    v60 = v68;
LABEL_43:
    v67 = 0;
    v68 = v60 + 1;
    v7 = (System_String_array *)sub_B2C374(string___TypeInfo, 5LL);
    lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v69, 0LL);
    v16 = (System_Int32_array **)lookup;
    v17 = 0LL;
    if ( !v7 )
      goto LABEL_56;
  }
  v60 = v68;
  if ( v68 == 1 )
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
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  ServantCommentEntity_o *v27; // x0
  __int64 v28; // x1
  ServantCommentEntity_o *v29; // x22
  __int64 v30; // x9
  System_Int32_array *ImageLimit; // x0
  System_Collections_Generic_IEnumerable_T__o *v32; // x24
  System_Collections_Generic_List_int__o *v33; // x23
  __int64 v34; // x0
  __int64 v35; // x1
  int v36; // w8
  bool v37; // w20
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  int v44; // [xsp+10h] [xbp-60h]

  if ( (byte_4189F1A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Sort__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311384, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B2C35C(&ServantCommentEntity_TypeInfo, v14);
    byte_4189F1A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list
    || (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
    sub_B2C434(list, *(_QWORD *)&svtId);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        p_offset += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v17);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_17:
      v26 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v17);
    }
    v27 = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                      Enumerator,
                                      *(_QWORD *)(v26 + 8));
    v29 = v27;
    if ( !v27 )
      goto LABEL_45;
    v30 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v30
      || (ServantCommentEntity_c *)v27->klass->_2.typeHierarchy[v30 - 1] != ServantCommentEntity_TypeInfo )
    {
      sub_B2C728(v27);
LABEL_45:
      sub_B2C434(v27, v28);
    }
    if ( v27->fields.svtId == svtId )
    {
      ImageLimit = ServantCommentEntity__GetImageLimit(v27, (const MethodInfo *)ServantCommentEntity_TypeInfo);
      v32 = (System_Collections_Generic_IEnumerable_T__o *)ImageLimit;
      if ( ImageLimit )
      {
        if ( *(_QWORD *)&ImageLimit->max_length )
        {
          v33 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor_49702036(
            v33,
            v32,
            (const MethodInfo_2F66494 *)Method_System_Collections_Generic_List_int___ctor___67311384);
          if ( !v33 )
            sub_B2C434(v34, v35);
          System_Collections_Generic_List_int___Sort(
            v33,
            (const MethodInfo_2F68F18 *)Method_System_Collections_Generic_List_int__Sort__);
          if ( !v33->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v36 = v33->fields._items->m_Items[1];
          if ( v36 >= 3 )
          {
            if ( !v33->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            if ( v36 == limitCount && ServantCommentEntity__IsOpen(v29, -1, 1, v17) )
            {
              v44 = 131;
              v37 = 1;
              goto LABEL_35;
            }
          }
        }
      }
    }
  }
  v37 = 0;
  v44 = 129;
LABEL_35:
  v38 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v39 = 0LL;
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      ++v39;
      v40 += 4;
      if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_39:
    v41 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v17);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(Enumerator, *(_QWORD *)(v41 + 8));
  if ( v44 == 129 )
    return 0;
  return v37;
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
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_o *v36; // x20
  Il2CppObject *Name; // x0
  System_String_o *v38; // x20
  CommonUI_o *Instance; // x21
  System_String_o *v40; // x22
  System_String_o *v41; // x23
  CommonConfirmDialog_ClickDelegate_o *v42; // x24
  WarEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4189F1B & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&limitCount);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_B2C35C(&DataManager_TypeInfo, v11);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v12);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B2C35C(&Method_ServantCommentMaster___c__DisplayClass16_0__OpenSaintGraphProfileChange_b__0__, v15);
    sub_B2C35C(&ServantCommentMaster___c__DisplayClass16_0_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_10908/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/, v17);
    sub_B2C35C(&StringLiteral_10907/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/, v18);
    sub_B2C35C(&StringLiteral_1/*""*/, v19);
    sub_B2C35C(&StringLiteral_10905/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/, v20);
    byte_4189F1B = 1;
  }
  entity = 0LL;
  v21 = sub_B2C42C(ServantCommentMaster___c__DisplayClass16_0_TypeInfo);
  ServantCommentMaster___c__DisplayClass16_0___ctor((ServantCommentMaster___c__DisplayClass16_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_17;
  *(_QWORD *)(v21 + 16) = decideAction;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v21 + 16),
    (System_Int32_array **)decideAction,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  *(_QWORD *)(v21 + 32) = endAction;
  *(_DWORD *)(v21 + 24) = svtId;
  *(_DWORD *)(v21 + 28) = limitCount;
  sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 32), (System_Int32_array **)endAction, v30, v31, v32, v33, v34, v35);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_17;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    Master_WarQuestSelectionMaster,
    &entity,
    *(_DWORD *)(v21 + 24),
    (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)LocalizationManager__Get(
                                                                                    (System_String_o *)StringLiteral_10908/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/,
                                                                                    0LL);
  if ( !entity )
    goto LABEL_17;
  v36 = (System_String_o *)Master_WarQuestSelectionMaster;
  Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)entity, *(_DWORD *)(v21 + 28), -1, 0LL);
  v38 = System_String__Format(v36, Name, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_10907/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/, 0LL);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_10905/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/, 0LL);
  v42 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v42,
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
    sub_B2C434(Master_WarQuestSelectionMaster, v23);
  CommonUI__OpenConfirmDialogOnFade(
    Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v38,
    v40,
    v41,
    v42,
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
  if ( (byte_4189F13 & 1) == 0 )
  {
    sub_B2C35C(&ServantCommentManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4189F13 = 1;
  }
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ServantCommentManager__IsOpen(svtId, svtCommentId, svtCommentPriority, *(const MethodInfo **)&svtCommentPriority);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommentMaster__SetOpen_29256808(
        ServantCommentMaster_o *this,
        int32_t svtId,
        System_Int32_array *svtCommentIdList,
        System_Int32_array *svtCommentPriorityList,
        const MethodInfo *method)
{
  if ( (byte_4189F14 & 1) == 0 )
  {
    sub_B2C35C(&ServantCommentManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4189F14 = 1;
  }
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ServantCommentManager__SetOpen_29246260(
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

  if ( (byte_4189F0E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__, entity);
    sub_B2C35C(&ServantCommentEntity_TypeInfo, v11);
    byte_4189F0E = 1;
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
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_41853D9 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, *(_QWORD *)&svtid);
    sub_B2C35C(&int_TypeInfo, v12);
    byte_41853D9 = 1;
  }
  v14[4] = 0LL;
  v14[0] = j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v14[2] = j_il2cpp_value_box_0(bool_TypeInfo, v15);
  v14[3] = (__int64)finishCallback;
  return (System_IAsyncResult_o *)sub_B2C300(this, v14, callback, object);
}


void __fastcall ServantCommentMaster_ProfileChangeDecideDelegate__EndInvoke(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
        sub_B2C418(*(_QWORD *)&v24->fields.extra_arg, *(_QWORD *)&svtid, *(_QWORD *)&limitCount, isDecide);
      if ( (sub_B2C38C(v26) & 1) == 0 )
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
      v28 = sub_B2C384(v26);
      v29 = sub_B2C788(v26);
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
            v22 = sub_AC5258(v25, v32, v33, v30);
          }
          v21 = *(_QWORD *)(v22 + 8);
        }
        else
        {
          v21 = *(_QWORD *)(*v25 + 16LL * *(unsigned __int16 *)(v26 + 72) + 320);
        }
        v23 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, bool, System_Action_o *, _QWORD))sub_B2C40C(v21, v26);
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
            v20 = sub_AC5258(v25, class_0, v14, v16);
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
  CommonUI_o *v9; // x20
  AvalonSceneManager_c *v10; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__1; // x21

  if ( (byte_41853D7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDcd);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_ServantCommentMaster___c__DisplayClass17_0__DefaultProfileChangeDecideAction_b__1__, v6);
    byte_41853D7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  v10 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantCommentMaster___c__DisplayClass17_0__DefaultProfileChangeDecideAction_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B2C2F8(&this->fields.__9__1, _9__1);
  }
  if ( !v9 )
    sub_B2C434(Instance, v8);
  CommonUI__maskFadeout(v9, 1, DEFAULT_FADE_TIME, _9__1, 0LL);
}


void __fastcall ServantCommentMaster___c__DisplayClass17_0___DefaultProfileChangeDecideAction_b__1(
        ServantCommentMaster___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20

  if ( (byte_41853D8 & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_41853D8 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v6 )
LABEL_9:
    sub_B2C434(Instance, v5);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}