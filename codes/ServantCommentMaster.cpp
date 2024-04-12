void __fastcall ServantCommentMaster___ctor(ServantCommentMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B1296 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__);
    byte_42B1296 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    2,
    (const MethodInfo_23E268C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__);
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

  if ( (byte_42B12A3 & 1) == 0 )
  {
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_ServantCommentMaster___c__DisplayClass17_0__DefaultProfileChangeDecideAction_b__0__);
    sub_B52984(&ServantCommentMaster___c__DisplayClass17_0_TypeInfo);
    byte_42B12A3 = 1;
  }
  entity = 0LL;
  v9 = sub_B52A54(ServantCommentMaster___c__DisplayClass17_0_TypeInfo);
  ServantCommentMaster___c__DisplayClass17_0___ctor((ServantCommentMaster___c__DisplayClass17_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_23;
  *(_QWORD *)(v9 + 16) = endAction;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)endAction, v12, v13, v14, v15, v16, v17);
  if ( isDecide )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
      UserId = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v19 = UserId;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( v19 )
      {
        CommonUI__maskFadein(v19, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
        UserId = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( UserId )
        {
          CommonUI__CloseConfirmDialog(UserId, 0LL);
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v21 = entity;
          v22 = (CommonUI_o *)Instance;
          v23 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v23,
            (Il2CppObject *)v9,
            Method_ServantCommentMaster___c__DisplayClass17_0__DefaultProfileChangeDecideAction_b__0__,
            0LL);
          if ( v22 )
          {
            CommonUI__OpenServantStatusDialog_18170524(v22, 33, v21, limitCount, v23, 0LL);
            return;
          }
        }
      }
LABEL_23:
      sub_B52A5C(UserId, v11);
    }
  }
  UserId = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !UserId )
    goto LABEL_23;
  CommonUI__CloseConfirmDialog_18158412(UserId, *(System_Action_o **)(v9 + 16), 0LL);
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

  if ( (byte_42B1294 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__);
    sub_B52984(&ServantCommentEntity_TypeInfo);
    byte_42B1294 = 1;
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
                                     (const MethodInfo_23E2728 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__);
}


ServantCommentEntity_array *__fastcall ServantCommentMaster__GetEntityList(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t condType,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6

  return ServantCommentMaster__GetEntityList_27236784(this, svtId, -1, condType, 0, 0, v4);
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
  __int64 v50; // x3
  ServantCommentEntity_c *klass; // x8
  ServantCommentEntity_o *v52; // x26
  unsigned __int64 v53; // x10
  int32_t *p_offset; // x11
  __int64 v55; // x0
  __int64 v56; // x3
  ServantCommentEntity_c *v57; // x8
  ServantCommentEntity_o *v58; // x26
  unsigned __int64 v59; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v60; // x11
  __int64 v61; // x0
  ServantCommentEntity_o *v62; // x25
  __int64 v63; // x10
  System_Int32_array *ImageLimit; // x0
  __int64 v65; // x9
  char v66; // w8
  __int64 v67; // x10
  int v68; // w11
  __int64 v69; // x12
  int32_t v70; // w8
  __int64 v72; // x0
  __int64 v73; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v76; // [xsp+8h] [xbp-68h]
  int32_t v77; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v78; // [xsp+18h] [xbp-58h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-54h] BYREF

  svtIda = svtId;
  if ( (byte_42B1298 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_IndexOf_int___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantCommentAddMaster___);
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_B52984(&ServantCommentEntity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_1240/*":"*/);
    byte_42B1298 = 1;
  }
  v76 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v76,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v77 = 0;
  v78 = 1;
  v8 = (System_String_array *)sub_B5299C(string___TypeInfo, 5LL);
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
        lookup = (ServantCommentEntity_o *)sub_B52A44(v17, v8->obj.klass->_1.element_class);
        if ( !lookup )
        {
LABEL_72:
          v73 = sub_B52A7C(lookup);
          sub_B52A28(v73, 0LL);
        }
      }
      if ( !v8->max_length )
        goto LABEL_71;
      v8->m_Items[0] = (System_String_o *)v17;
      sub_B52920((BattleServantConfConponent_o *)v8->m_Items, v17, v11, v12, v13, v14, v15, v16);
      lookup = (ServantCommentEntity_o *)StringLiteral_1240/*":"*/;
      if ( StringLiteral_1240/*":"*/ )
      {
        lookup = (ServantCommentEntity_o *)sub_B52A44(StringLiteral_1240/*":"*/, v8->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_72;
        v27 = (System_Int32_array **)StringLiteral_1240/*":"*/;
      }
      else
      {
        v27 = 0LL;
      }
      if ( v8->max_length <= 1 )
        goto LABEL_71;
      v8->m_Items[1] = (System_String_o *)v27;
      sub_B52920((BattleServantConfConponent_o *)&v8->m_Items[1], v27, v21, v22, v23, v24, v25, v26);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v78, 0LL);
      v34 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = (ServantCommentEntity_o *)sub_B52A44(lookup, v8->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_72;
      }
      if ( v8->max_length <= 2 )
        goto LABEL_71;
      v8->m_Items[2] = (System_String_o *)v34;
      sub_B52920((BattleServantConfConponent_o *)&v8->m_Items[2], v34, v28, v29, v30, v31, v32, v33);
      lookup = (ServantCommentEntity_o *)StringLiteral_1240/*":"*/;
      if ( StringLiteral_1240/*":"*/ )
      {
        lookup = (ServantCommentEntity_o *)sub_B52A44(StringLiteral_1240/*":"*/, v8->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_72;
        v41 = (System_Int32_array **)StringLiteral_1240/*":"*/;
      }
      else
      {
        v41 = 0LL;
      }
      if ( v8->max_length <= 3 )
      {
LABEL_71:
        v72 = sub_B52A88(lookup);
        sub_B52A28(v72, 0LL);
      }
      v8->m_Items[3] = (System_String_o *)v41;
      sub_B52920((BattleServantConfConponent_o *)&v8->m_Items[3], v41, v35, v36, v37, v38, v39, v40);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v77, 0LL);
      v48 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = (ServantCommentEntity_o *)sub_B52A44(lookup, v8->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_72;
      }
      if ( v8->max_length <= 4 )
        goto LABEL_71;
      v8->m_Items[4] = (System_String_o *)v48;
      sub_B52920((BattleServantConfConponent_o *)&v8->m_Items[4], v48, v42, v43, v44, v45, v46, v47);
      v49 = System_String__Concat_44648440(v8, 0LL);
      lookup = (ServantCommentEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_70;
      klass = lookup->klass;
      v52 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v53 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v53;
          p_offset += 4;
          if ( v53 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_38;
        }
        v55 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_38:
        v55 = sub_AEB880(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL,
                v50);
      }
      if ( ((*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v55)(
              v52,
              v49,
              *(_QWORD *)(v55 + 8)) & 1) == 0 )
        break;
      lookup = (ServantCommentEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_70;
      v57 = lookup->klass;
      v58 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v59 = 0LL;
        v60 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v57->_1.interfaceOffsets->offset;
        while ( *(v60 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v59;
          v60 += 2;
          if ( v59 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_46;
        }
        v61 = (__int64)(&v57->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v60);
      }
      else
      {
LABEL_46:
        v61 = sub_AEB880(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL,
                v56);
      }
      lookup = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v61)(
                                           v58,
                                           v49,
                                           *(_QWORD *)(v61 + 8));
      if ( !lookup )
        goto LABEL_70;
      v62 = lookup;
      v63 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&lookup->klass->_2.bitflags2 + 1) < (unsigned int)v63
        || (ServantCommentEntity_c *)lookup->klass->_2.typeHierarchy[v63 - 1] != ServantCommentEntity_TypeInfo )
      {
        goto LABEL_70;
      }
      ImageLimit = ServantCommentEntity__GetImageLimit(lookup, v10);
      if ( ImageLimit )
      {
        v65 = *(_QWORD *)&ImageLimit->max_length;
        if ( v65 )
        {
          if ( (int)v65 >= 1 )
          {
            v66 = 0;
            v67 = 8LL;
            do
            {
              v68 = *((_DWORD *)&ImageLimit->obj.klass + v67);
              v69 = v67 - 7;
              ++v67;
              v66 |= v68 > 2;
            }
            while ( v69 < (int)v65 );
            if ( (v66 & 1) != 0
              && (System_Array__IndexOf_int_(
                    ImageLimit,
                    imageLimitCount,
                    (const MethodInfo_201BBC8 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
            {
              if ( !condType || v62->fields.condType == condType )
                goto LABEL_12;
              if ( addCheck )
              {
                lookup = (ServantCommentEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !lookup )
                  goto LABEL_70;
                lookup = (ServantCommentEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)lookup,
                                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
                if ( !lookup )
                  goto LABEL_70;
                if ( ServantCommentAddMaster__IsEntityListCondContain(
                       (ServantCommentAddMaster_o *)lookup,
                       svtIda,
                       v78,
                       v77,
                       condType,
                       v19) )
                {
LABEL_12:
                  if ( !v18 || ServantCommentEntity__IsOpen(v62, -1, 1, v20) )
                    v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)v62;
                }
              }
            }
          }
        }
      }
      ++v77;
      v8 = (System_String_array *)sub_B5299C(string___TypeInfo, 5LL);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&svtIda, 0LL);
      v17 = (System_Int32_array **)lookup;
      if ( !v8 )
        goto LABEL_70;
    }
    if ( v18 )
    {
      lookup = (ServantCommentEntity_o *)v76;
      if ( !v76 )
        goto LABEL_70;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v76,
        v18,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
      goto LABEL_64;
    }
    if ( !v77 )
      break;
LABEL_64:
    v70 = v78;
LABEL_65:
    v77 = 0;
    v78 = v70 + 1;
    v8 = (System_String_array *)sub_B5299C(string___TypeInfo, 5LL);
    lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&svtIda, 0LL);
    v17 = (System_Int32_array **)lookup;
    v18 = 0LL;
    if ( !v8 )
      goto LABEL_70;
  }
  v70 = v78;
  if ( v78 == 1 )
    goto LABEL_65;
  lookup = (ServantCommentEntity_o *)v76;
  if ( !v76 )
LABEL_70:
    sub_B52A5C(lookup, v10);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v76,
                                         (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


ServantCommentEntity_array *__fastcall ServantCommentMaster__GetEntityList_27236784(
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
  __int64 v51; // x3
  __int64 v52; // x8
  __int64 v53; // x27
  unsigned __int64 v54; // x10
  int *v55; // x11
  __int64 v56; // x0
  __int64 v57; // x3
  __int64 v58; // x8
  __int64 v59; // x27
  unsigned __int64 v60; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v61; // x11
  __int64 v62; // x0
  int32_t v63; // w8
  ServantCommentEntity_o *v64; // x26
  __int64 v65; // x10
  System_Int32_array *ImageLimit; // x0
  const MethodInfo *v67; // x3
  __int64 v68; // x8
  __int64 v69; // x9
  const MethodInfo *v70; // x5
  __int64 v72; // x0
  __int64 v73; // x0
  int32_t v76; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v77; // [xsp+18h] [xbp-58h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-54h] BYREF

  svtIda = svtId;
  if ( (byte_42B1297 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_IndexOf_int___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantCommentAddMaster___);
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_B52984(&ServantCommentEntity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_1240/*":"*/);
    byte_42B1297 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v76 = 0;
  v77 = 1;
  v11 = (System_String_array *)sub_B5299C(string___TypeInfo, 5LL);
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
        lookup = sub_B52A44(v20, v11->obj.klass->_1.element_class);
        if ( !lookup )
        {
LABEL_75:
          v73 = sub_B52A7C(lookup);
          sub_B52A28(v73, 0LL);
        }
      }
      if ( !v11->max_length )
        goto LABEL_73;
      v11->m_Items[0] = (System_String_o *)v20;
      sub_B52920((BattleServantConfConponent_o *)v11->m_Items, v20, v14, v15, v16, v17, v18, v19);
      lookup = StringLiteral_1240/*":"*/;
      if ( StringLiteral_1240/*":"*/ )
      {
        lookup = sub_B52A44(StringLiteral_1240/*":"*/, v11->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_75;
        v28 = (System_Int32_array **)StringLiteral_1240/*":"*/;
      }
      else
      {
        v28 = 0LL;
      }
      if ( v11->max_length <= 1 )
        goto LABEL_73;
      v11->m_Items[1] = (System_String_o *)v28;
      sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[1], v28, v22, v23, v24, v25, v26, v27);
      lookup = (__int64)System_Int32__ToString((int32_t)&v77, 0LL);
      v35 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = sub_B52A44(lookup, v11->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_75;
      }
      if ( v11->max_length <= 2 )
        goto LABEL_73;
      v11->m_Items[2] = (System_String_o *)v35;
      sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[2], v35, v29, v30, v31, v32, v33, v34);
      lookup = StringLiteral_1240/*":"*/;
      if ( StringLiteral_1240/*":"*/ )
      {
        lookup = sub_B52A44(StringLiteral_1240/*":"*/, v11->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_75;
        v42 = (System_Int32_array **)StringLiteral_1240/*":"*/;
      }
      else
      {
        v42 = 0LL;
      }
      if ( v11->max_length <= 3 )
      {
LABEL_73:
        v72 = sub_B52A88(lookup);
        sub_B52A28(v72, 0LL);
      }
      v11->m_Items[3] = (System_String_o *)v42;
      sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[3], v42, v36, v37, v38, v39, v40, v41);
      lookup = (__int64)System_Int32__ToString((int32_t)&v76, 0LL);
      v49 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = sub_B52A44(lookup, v11->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_75;
      }
      if ( v11->max_length <= 4 )
        goto LABEL_73;
      v11->m_Items[4] = (System_String_o *)v49;
      sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[4], v49, v43, v44, v45, v46, v47, v48);
      v50 = System_String__Concat_44648440(v11, 0LL);
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_74;
      v52 = *(_QWORD *)lookup;
      v53 = lookup;
      if ( *(_WORD *)(*(_QWORD *)lookup + 298LL) )
      {
        v54 = 0LL;
        v55 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v55 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v54;
          v55 += 4;
          if ( v54 >= *(unsigned __int16 *)(*(_QWORD *)lookup + 298LL) )
            goto LABEL_29;
        }
        v56 = v52 + 16LL * *v55 + 312;
      }
      else
      {
LABEL_29:
        v56 = sub_AEB880(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL,
                v51);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v56)(v53, v50, *(_QWORD *)(v56 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_74;
      v58 = *(_QWORD *)lookup;
      v59 = lookup;
      if ( *(_WORD *)(*(_QWORD *)lookup + 298LL) )
      {
        v60 = 0LL;
        v61 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v58 + 176) + 8LL);
        while ( *(v61 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v60;
          v61 += 2;
          if ( v60 >= *(unsigned __int16 *)(*(_QWORD *)lookup + 298LL) )
            goto LABEL_37;
        }
        v62 = v58 + 16LL * (*(_DWORD *)v61 + 2) + 312;
      }
      else
      {
LABEL_37:
        v62 = sub_AEB880(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL,
                v57);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v62)(v59, v50, *(_QWORD *)(v62 + 8));
      if ( !lookup )
        goto LABEL_74;
      v64 = (ServantCommentEntity_o *)lookup;
      v65 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)lookup + 300LL) < (unsigned int)v65
        || *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)lookup + 200LL) + 8 * v65 - 8) != ServantCommentEntity_TypeInfo )
      {
        goto LABEL_74;
      }
      ImageLimit = ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)lookup, v13);
      if ( imageLimitCount != -1 )
      {
        if ( ImageLimit )
        {
          v68 = *(_QWORD *)&ImageLimit->max_length;
          if ( v68 )
          {
            if ( overLimit )
            {
              if ( (int)v68 < 1 )
                goto LABEL_68;
              v69 = 0LL;
              while ( ImageLimit->m_Items[v69 + 1] > imageLimitCount )
              {
                if ( (int)++v69 >= (int)v68 )
                  goto LABEL_68;
              }
            }
            else if ( (System_Array__IndexOf_int_(
                         ImageLimit,
                         imageLimitCount,
                         (const MethodInfo_201BBC8 *)Method_System_Array_IndexOf_int___) & 0x80000000) != 0 )
            {
              goto LABEL_68;
            }
          }
        }
      }
      if ( !condType || v64->fields.condType == condType )
        goto LABEL_62;
      if ( addCheck )
      {
        lookup = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lookup )
          goto LABEL_74;
        lookup = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)lookup,
                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
        if ( !lookup )
          goto LABEL_74;
        if ( ServantCommentAddMaster__IsEntityListCondContain(
               (ServantCommentAddMaster_o *)lookup,
               svtIda,
               v77,
               v76,
               condType,
               v70) )
        {
LABEL_62:
          if ( !v21 || ServantCommentEntity__IsOpen(v64, -1, 1, v67) )
            v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)v64;
        }
      }
LABEL_68:
      ++v76;
      v11 = (System_String_array *)sub_B5299C(string___TypeInfo, 5LL);
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
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
      goto LABEL_42;
    }
    if ( !v76 )
      break;
LABEL_42:
    v63 = v77;
LABEL_43:
    v76 = 0;
    v77 = v63 + 1;
    v11 = (System_String_array *)sub_B5299C(string___TypeInfo, 5LL);
    lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
    v20 = (System_Int32_array **)lookup;
    v21 = 0LL;
    if ( !v11 )
      goto LABEL_74;
  }
  v63 = v77;
  if ( v77 == 1 )
    goto LABEL_43;
  if ( !v10 )
LABEL_74:
    sub_B52A5C(lookup, v13);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                         (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
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
  __int64 v53; // x3
  __int64 v54; // x8
  __int64 v55; // x27
  unsigned __int64 v56; // x10
  int *v57; // x11
  __int64 v58; // x0
  __int64 v59; // x3
  __int64 v60; // x8
  __int64 v61; // x27
  unsigned __int64 v62; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v63; // x11
  __int64 v64; // x0
  int v65; // w8
  ServantCommentEntity_o *v66; // x26
  __int64 v67; // x10
  const MethodInfo *v68; // x3
  __int64 v69; // x8
  int v70; // w8
  System_Int32_array **v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **v78; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  __int64 v86; // x0
  __int64 v87; // x0
  BattleServantConfConponent_o *v88; // [xsp+0h] [xbp-80h]
  BattleServantConfConponent_o *v89; // [xsp+8h] [xbp-78h]
  int32_t ServantLimitCountSealAfter; // [xsp+14h] [xbp-6Ch]
  __int64 v91; // [xsp+18h] [xbp-68h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+20h] [xbp-60h] BYREF
  int32_t svtIda; // [xsp+2Ch] [xbp-54h] BYREF

  svtIda = svtId;
  if ( (byte_42B129D & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&ServantCommentEntity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_1240/*":"*/);
    byte_42B129D = 1;
  }
  v91 = 0LL;
  entity = 0LL;
  v9 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  v10 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_79;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Instance )
      goto LABEL_79;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   svtIda,
                                   v14,
                                   0LL);
  }
  v88 = (BattleServantConfConponent_o *)priorityList;
  v89 = (BattleServantConfConponent_o *)idList;
  v91 = 0x100000000LL;
  v15 = (System_String_array *)sub_B5299C(string___TypeInfo, 5LL);
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
        Instance = sub_B52A44(v22, v15->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_80:
          v87 = sub_B52A7C(Instance);
          sub_B52A28(v87, 0LL);
        }
      }
      if ( !v15->max_length )
        goto LABEL_78;
      v15->m_Items[0] = (System_String_o *)v22;
      sub_B52920((BattleServantConfConponent_o *)v15->m_Items, v22, v16, v17, v18, v19, v20, v21);
      Instance = StringLiteral_1240/*":"*/;
      if ( StringLiteral_1240/*":"*/ )
      {
        Instance = sub_B52A44(StringLiteral_1240/*":"*/, v15->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_80;
        v30 = (System_Int32_array **)StringLiteral_1240/*":"*/;
      }
      else
      {
        v30 = 0LL;
      }
      if ( v15->max_length <= 1 )
        goto LABEL_78;
      v15->m_Items[1] = (System_String_o *)v30;
      sub_B52920((BattleServantConfConponent_o *)&v15->m_Items[1], v30, v24, v25, v26, v27, v28, v29);
      Instance = (__int64)System_Int32__ToString((int32_t)&v91 + 4, 0LL);
      v37 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = sub_B52A44(Instance, v15->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_80;
      }
      if ( v15->max_length <= 2 )
        goto LABEL_78;
      v15->m_Items[2] = (System_String_o *)v37;
      sub_B52920((BattleServantConfConponent_o *)&v15->m_Items[2], v37, v31, v32, v33, v34, v35, v36);
      Instance = StringLiteral_1240/*":"*/;
      if ( StringLiteral_1240/*":"*/ )
      {
        Instance = sub_B52A44(StringLiteral_1240/*":"*/, v15->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_80;
        v44 = (System_Int32_array **)StringLiteral_1240/*":"*/;
      }
      else
      {
        v44 = 0LL;
      }
      if ( v15->max_length <= 3 )
      {
LABEL_78:
        v86 = sub_B52A88(Instance);
        sub_B52A28(v86, 0LL);
      }
      v15->m_Items[3] = (System_String_o *)v44;
      sub_B52920((BattleServantConfConponent_o *)&v15->m_Items[3], v44, v38, v39, v40, v41, v42, v43);
      Instance = (__int64)System_Int32__ToString((int32_t)&v91, 0LL);
      v51 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = sub_B52A44(Instance, v15->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_80;
      }
      if ( v15->max_length <= 4 )
        goto LABEL_78;
      v15->m_Items[4] = (System_String_o *)v51;
      sub_B52920((BattleServantConfConponent_o *)&v15->m_Items[4], v51, v45, v46, v47, v48, v49, v50);
      v52 = System_String__Concat_44648440(v15, 0LL);
      Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        goto LABEL_79;
      v54 = *(_QWORD *)Instance;
      v55 = Instance;
      if ( *(_WORD *)(*(_QWORD *)Instance + 298LL) )
      {
        v56 = 0LL;
        v57 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v57 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v56;
          v57 += 4;
          if ( v56 >= *(unsigned __int16 *)(*(_QWORD *)Instance + 298LL) )
            goto LABEL_42;
        }
        v58 = v54 + 16LL * *v57 + 312;
      }
      else
      {
LABEL_42:
        v58 = sub_AEB880(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL,
                v53);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v58)(v55, v52, *(_QWORD *)(v58 + 8));
      if ( (Instance & 1) == 0 )
        break;
      Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( Instance )
      {
        v60 = *(_QWORD *)Instance;
        v61 = Instance;
        if ( *(_WORD *)(*(_QWORD *)Instance + 298LL) )
        {
          v62 = 0LL;
          v63 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v60 + 176)
                                                                                            + 8LL);
          while ( *(v63 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            ++v62;
            v63 += 2;
            if ( v62 >= *(unsigned __int16 *)(*(_QWORD *)Instance + 298LL) )
              goto LABEL_50;
          }
          v64 = v60 + 16LL * (*(_DWORD *)v63 + 2) + 312;
        }
        else
        {
LABEL_50:
          v64 = sub_AEB880(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL,
                  v59);
        }
        Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v64)(v61, v52, *(_QWORD *)(v64 + 8));
        if ( Instance )
        {
          v66 = (ServantCommentEntity_o *)Instance;
          v67 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v67
            && *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v67 - 8) == ServantCommentEntity_TypeInfo )
          {
            Instance = (__int64)ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)Instance, v12);
            if ( !Instance )
              goto LABEL_69;
            v69 = *(_QWORD *)(Instance + 24);
            if ( !v69 )
              goto LABEL_69;
            if ( !(_DWORD)v69 )
              goto LABEL_78;
            v70 = *(_DWORD *)(Instance + 32);
            if ( v70 < 3 || ServantLimitCountSealAfter >= v70 )
            {
LABEL_69:
              if ( ServantCommentEntity__IsOpen(v66, -1, 1, v68) )
                v23 = v66;
            }
            LODWORD(v91) = v91 + 1;
            v15 = (System_String_array *)sub_B5299C(string___TypeInfo, 5LL);
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
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
        if ( !v10 )
          goto LABEL_79;
        System_Collections_Generic_List_int___Add(
          v10,
          v23->fields.priority,
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      goto LABEL_57;
    }
    if ( !(_DWORD)v91 )
      break;
LABEL_57:
    v65 = HIDWORD(v91);
LABEL_58:
    LODWORD(v91) = 0;
    HIDWORD(v91) = v65 + 1;
    v15 = (System_String_array *)sub_B5299C(string___TypeInfo, 5LL);
    Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
    v22 = (System_Int32_array **)Instance;
    v23 = 0LL;
    if ( !v15 )
      goto LABEL_79;
  }
  v65 = HIDWORD(v91);
  if ( HIDWORD(v91) == 1 )
    goto LABEL_58;
  if ( !v9
    || (v71 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                       v9,
                                       (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__),
        v89->klass = (BattleServantConfConponent_c *)v71,
        sub_B52920(v89, v71, v72, v73, v74, v75, v76, v77),
        !v10)
    || (v78 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                       v10,
                                       (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__),
        v88->klass = (BattleServantConfConponent_c *)v78,
        sub_B52920(v88, v78, v79, v80, v81, v82, v83, v84),
        !v89->klass) )
  {
LABEL_79:
    sub_B52A5C(Instance, v12);
  }
  return LODWORD(v89->klass->_1.namespaze) != 0;
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
  __int64 v48; // x3
  __int64 v49; // x8
  __int64 v50; // x22
  unsigned __int64 v51; // x10
  int *v52; // x11
  __int64 v53; // x0
  __int64 v54; // x3
  __int64 v55; // x8
  __int64 v56; // x22
  unsigned __int64 v57; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v58; // x11
  __int64 v59; // x0
  __int64 v60; // x10
  __int64 v62; // x0
  __int64 v63; // x0
  System_Int32_array *priorityList; // [xsp+8h] [xbp-68h] BYREF
  System_Int32_array *idList; // [xsp+10h] [xbp-60h] BYREF
  int32_t v66; // [xsp+1Ch] [xbp-54h] BYREF

  v66 = svtId;
  if ( (byte_42B12A0 & 1) == 0 )
  {
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_B52984(&ServantCommentEntity_TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_1240/*":"*/);
    byte_42B12A0 = 1;
  }
  priorityList = 0LL;
  idList = 0LL;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  NewList = ServantCommentMaster__GetNewList(this, &idList, &priorityList, svtId, v6);
  if ( (NewList & 1) != 0 )
  {
    v9 = idList;
    if ( !idList )
LABEL_52:
      sub_B52A5C(NewList, v8);
    v10 = 0LL;
    while ( (__int64)v10 < (int)v9->max_length )
    {
      v11 = (System_String_array *)sub_B5299C(string___TypeInfo, 5LL);
      NewList = (__int64)System_Int32__ToString((int32_t)&v66, 0LL);
      if ( !v11 )
        goto LABEL_52;
      v18 = (System_Int32_array **)NewList;
      if ( NewList )
      {
        NewList = sub_B52A44(NewList, v11->obj.klass->_1.element_class);
        if ( !NewList )
        {
LABEL_55:
          v63 = sub_B52A7C(NewList);
          sub_B52A28(v63, 0LL);
        }
      }
      if ( !v11->max_length )
        goto LABEL_54;
      v11->m_Items[0] = (System_String_o *)v18;
      sub_B52920((BattleServantConfConponent_o *)v11->m_Items, v18, v12, v13, v14, v15, v16, v17);
      NewList = StringLiteral_1240/*":"*/;
      if ( StringLiteral_1240/*":"*/ )
      {
        NewList = sub_B52A44(StringLiteral_1240/*":"*/, v11->obj.klass->_1.element_class);
        if ( !NewList )
          goto LABEL_55;
        v25 = (System_Int32_array **)StringLiteral_1240/*":"*/;
      }
      else
      {
        v25 = 0LL;
      }
      if ( v11->max_length <= 1 )
        goto LABEL_54;
      v11->m_Items[1] = (System_String_o *)v25;
      sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[1], v25, v19, v20, v21, v22, v23, v24);
      if ( !idList )
        goto LABEL_52;
      if ( v10 >= idList->max_length )
        goto LABEL_54;
      NewList = (__int64)System_Int32__ToString((int)idList + 4 * (int)v10 + 32, 0LL);
      v32 = (System_Int32_array **)NewList;
      if ( NewList )
      {
        NewList = sub_B52A44(NewList, v11->obj.klass->_1.element_class);
        if ( !NewList )
          goto LABEL_55;
      }
      if ( v11->max_length <= 2 )
        goto LABEL_54;
      v11->m_Items[2] = (System_String_o *)v32;
      sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[2], v32, v26, v27, v28, v29, v30, v31);
      NewList = StringLiteral_1240/*":"*/;
      if ( StringLiteral_1240/*":"*/ )
      {
        NewList = sub_B52A44(StringLiteral_1240/*":"*/, v11->obj.klass->_1.element_class);
        if ( !NewList )
          goto LABEL_55;
        v39 = (System_Int32_array **)StringLiteral_1240/*":"*/;
      }
      else
      {
        v39 = 0LL;
      }
      if ( v11->max_length <= 3 )
        goto LABEL_54;
      v11->m_Items[3] = (System_String_o *)v39;
      sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[3], v39, v33, v34, v35, v36, v37, v38);
      if ( !priorityList )
        goto LABEL_52;
      if ( v10 >= priorityList->max_length )
      {
LABEL_54:
        v62 = sub_B52A88(NewList);
        sub_B52A28(v62, 0LL);
      }
      NewList = (__int64)System_Int32__ToString((int)priorityList + 4 * (int)v10 + 32, 0LL);
      v46 = (System_Int32_array **)NewList;
      if ( NewList )
      {
        NewList = sub_B52A44(NewList, v11->obj.klass->_1.element_class);
        if ( !NewList )
          goto LABEL_55;
      }
      if ( v11->max_length <= 4 )
        goto LABEL_54;
      v11->m_Items[4] = (System_String_o *)v46;
      sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[4], v46, v40, v41, v42, v43, v44, v45);
      v47 = System_String__Concat_44648440(v11, 0LL);
      NewList = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( NewList )
      {
        v49 = *(_QWORD *)NewList;
        v50 = NewList;
        if ( *(_WORD *)(*(_QWORD *)NewList + 298LL) )
        {
          v51 = 0LL;
          v52 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
          while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v52 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            ++v51;
            v52 += 4;
            if ( v51 >= *(unsigned __int16 *)(*(_QWORD *)NewList + 298LL) )
              goto LABEL_36;
          }
          v53 = v49 + 16LL * *v52 + 312;
        }
        else
        {
LABEL_36:
          v53 = sub_AEB880(
                  NewList,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  0LL,
                  v48);
        }
        NewList = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v53)(v50, v47, *(_QWORD *)(v53 + 8));
        if ( (NewList & 1) != 0 )
        {
          NewList = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
          if ( !NewList )
            goto LABEL_52;
          v55 = *(_QWORD *)NewList;
          v56 = NewList;
          if ( *(_WORD *)(*(_QWORD *)NewList + 298LL) )
          {
            v57 = 0LL;
            v58 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v55 + 176)
                                                                                              + 8LL);
            while ( *(v58 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
            {
              ++v57;
              v58 += 2;
              if ( v57 >= *(unsigned __int16 *)(*(_QWORD *)NewList + 298LL) )
                goto LABEL_44;
            }
            v59 = v55 + 16LL * (*(_DWORD *)v58 + 2) + 312;
          }
          else
          {
LABEL_44:
            v59 = sub_AEB880(
                    NewList,
                    System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                    2LL,
                    v54);
          }
          NewList = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v59)(v56, v47, *(_QWORD *)(v59 + 8));
          if ( NewList )
          {
            v8 = NewList;
            v60 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)NewList + 300LL) >= (unsigned int)v60
              && *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)NewList + 200LL) + 8 * v60 - 8) == ServantCommentEntity_TypeInfo )
            {
              if ( !v5 )
                goto LABEL_52;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v5,
                (EventMissionProgressRequest_Argument_ProgressData_o *)NewList,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
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
  __int64 v45; // x3
  __int64 v46; // x8
  __int64 v47; // x23
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  __int64 v51; // x3
  __int64 v52; // x8
  __int64 v53; // x23
  unsigned __int64 v54; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v55; // x11
  __int64 v56; // x0
  int v57; // w8
  const MethodInfo *v58; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v59; // x22
  __int64 v60; // x10
  __int64 v62; // x0
  __int64 v63; // x0
  int v64; // [xsp+4h] [xbp-5Ch] BYREF
  int v65; // [xsp+8h] [xbp-58h] BYREF
  int32_t v66; // [xsp+Ch] [xbp-54h] BYREF

  v66 = svtId;
  if ( (byte_42B1299 & 1) == 0 )
  {
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_B52984(&ServantCommentEntity_TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_1240/*":"*/);
    byte_42B1299 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v64 = 0;
  v65 = 1;
  v5 = (System_String_array *)sub_B5299C(string___TypeInfo, 5LL);
  lookup = (__int64)System_Int32__ToString((int32_t)&v66, 0LL);
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
        lookup = sub_B52A44(v14, v5->obj.klass->_1.element_class);
        if ( !lookup )
        {
LABEL_58:
          v63 = sub_B52A7C(lookup);
          sub_B52A28(v63, 0LL);
        }
      }
      if ( !v5->max_length )
        goto LABEL_56;
      v5->m_Items[0] = (System_String_o *)v14;
      sub_B52920((BattleServantConfConponent_o *)v5->m_Items, v14, v8, v9, v10, v11, v12, v13);
      lookup = StringLiteral_1240/*":"*/;
      if ( StringLiteral_1240/*":"*/ )
      {
        lookup = sub_B52A44(StringLiteral_1240/*":"*/, v5->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_58;
        v22 = (System_Int32_array **)StringLiteral_1240/*":"*/;
      }
      else
      {
        v22 = 0LL;
      }
      if ( v5->max_length <= 1 )
        goto LABEL_56;
      v5->m_Items[1] = (System_String_o *)v22;
      sub_B52920((BattleServantConfConponent_o *)&v5->m_Items[1], v22, v16, v17, v18, v19, v20, v21);
      lookup = (__int64)System_Int32__ToString((int32_t)&v65, 0LL);
      v29 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = sub_B52A44(lookup, v5->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_58;
      }
      if ( v5->max_length <= 2 )
        goto LABEL_56;
      v5->m_Items[2] = (System_String_o *)v29;
      sub_B52920((BattleServantConfConponent_o *)&v5->m_Items[2], v29, v23, v24, v25, v26, v27, v28);
      lookup = StringLiteral_1240/*":"*/;
      if ( StringLiteral_1240/*":"*/ )
      {
        lookup = sub_B52A44(StringLiteral_1240/*":"*/, v5->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_58;
        v36 = (System_Int32_array **)StringLiteral_1240/*":"*/;
      }
      else
      {
        v36 = 0LL;
      }
      if ( v5->max_length <= 3 )
      {
LABEL_56:
        v62 = sub_B52A88(lookup);
        sub_B52A28(v62, 0LL);
      }
      v5->m_Items[3] = (System_String_o *)v36;
      sub_B52920((BattleServantConfConponent_o *)&v5->m_Items[3], v36, v30, v31, v32, v33, v34, v35);
      lookup = (__int64)System_Int32__ToString((int32_t)&v64, 0LL);
      v43 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = sub_B52A44(lookup, v5->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_58;
      }
      if ( v5->max_length <= 4 )
        goto LABEL_56;
      v5->m_Items[4] = (System_String_o *)v43;
      sub_B52920((BattleServantConfConponent_o *)&v5->m_Items[4], v43, v37, v38, v39, v40, v41, v42);
      v44 = System_String__Concat_44648440(v5, 0LL);
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_57;
      v46 = *(_QWORD *)lookup;
      v47 = lookup;
      if ( *(_WORD *)(*(_QWORD *)lookup + 298LL) )
      {
        v48 = 0LL;
        v49 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v49 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v48;
          v49 += 4;
          if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)lookup + 298LL) )
            goto LABEL_29;
        }
        v50 = v46 + 16LL * *v49 + 312;
      }
      else
      {
LABEL_29:
        v50 = sub_AEB880(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL,
                v45);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v50)(v47, v44, *(_QWORD *)(v50 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( lookup )
      {
        v52 = *(_QWORD *)lookup;
        v53 = lookup;
        if ( *(_WORD *)(*(_QWORD *)lookup + 298LL) )
        {
          v54 = 0LL;
          v55 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v52 + 176)
                                                                                            + 8LL);
          while ( *(v55 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            ++v54;
            v55 += 2;
            if ( v54 >= *(unsigned __int16 *)(*(_QWORD *)lookup + 298LL) )
              goto LABEL_37;
          }
          v56 = v52 + 16LL * (*(_DWORD *)v55 + 2) + 312;
        }
        else
        {
LABEL_37:
          v56 = sub_AEB880(
                  lookup,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL,
                  v51);
        }
        lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v56)(v53, v44, *(_QWORD *)(v56 + 8));
        if ( lookup )
        {
          v59 = (EventMissionProgressRequest_Argument_ProgressData_o *)lookup;
          v60 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)lookup + 300LL) >= (unsigned int)v60
            && *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)lookup + 200LL) + 8 * v60 - 8) == ServantCommentEntity_TypeInfo )
          {
            if ( ServantCommentEntity__IsOpen((ServantCommentEntity_o *)lookup, -1, 1, v58) )
              v15 = v59;
            ++v64;
            v5 = (System_String_array *)sub_B5299C(string___TypeInfo, 5LL);
            lookup = (__int64)System_Int32__ToString((int32_t)&v66, 0LL);
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
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
      goto LABEL_42;
    }
    if ( !v64 )
      break;
LABEL_42:
    v57 = v65;
LABEL_43:
    v64 = 0;
    v65 = v57 + 1;
    v5 = (System_String_array *)sub_B5299C(string___TypeInfo, 5LL);
    lookup = (__int64)System_Int32__ToString((int32_t)&v66, 0LL);
    v14 = (System_Int32_array **)lookup;
    v15 = 0LL;
    if ( !v5 )
      goto LABEL_57;
  }
  v57 = v65;
  if ( v65 == 1 )
    goto LABEL_43;
  if ( !v4 )
LABEL_57:
    sub_B52A5C(lookup, v7);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v4,
                                         (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
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

  if ( (byte_42B129E & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_IndexOf_int___);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_DataManager_GetMasterData_ServantCommentAddMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&ServantCommentEntity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B129E = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_WarQuestSelectionMaster = (ServantCommentAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      Instance,
                                                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
  v8 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v28 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             Instance,
                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
        v29 = (UserServantCollectionMaster_o *)Instance,
        !list) )
  {
LABEL_32:
    sub_B52A5C(Instance, v6);
  }
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                  (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
            (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__) )
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
              (const MethodInfo_201BBC8 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
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
              (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
    }
    if ( ++v12 >= v11 )
      return v8;
  }
  v24 = (ServantCommentMaster_o *)sub_B52D50(Instance);
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

  if ( (byte_42B129F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_DataManager_GetMaster_ServantCommentAddMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_B52984(&ServantCommentEntity_TypeInfo);
    byte_42B129F = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantCommentAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list < 1 )
  {
LABEL_24:
    if ( v8 )
      return (ServantCommentEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                             (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
LABEL_26:
    sub_B52A5C(list, v9);
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
                                                                                         (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    }
    if ( ++v12 >= v11 )
      goto LABEL_24;
  }
  v21 = (ServantCommentMaster_o *)sub_B52D50(list);
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
  __int64 v44; // x3
  ServantCommentEntity_c *klass; // x8
  ServantCommentEntity_o *v46; // x22
  unsigned __int64 v47; // x10
  int32_t *p_offset; // x11
  __int64 v49; // x0
  const MethodInfo *v50; // x1
  __int64 v51; // x3
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
  if ( (byte_42B129C & 1) == 0 )
  {
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&ServantCommentEntity_TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_1240/*":"*/);
    byte_42B129C = 1;
  }
  v64 = 0;
  v65 = 1;
  v4 = (System_String_array *)sub_B5299C(string___TypeInfo, 5LL);
  lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v66, 0LL);
  if ( !v4 )
LABEL_56:
    sub_B52A5C(lookup, v6);
  v13 = (System_Int32_array **)lookup;
  v14 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v13 )
      {
        lookup = (ServantCommentEntity_o *)sub_B52A44(v13, v4->obj.klass->_1.element_class);
        if ( !lookup )
        {
LABEL_57:
          v63 = sub_B52A7C(lookup);
          sub_B52A28(v63, 0LL);
        }
      }
      if ( !v4->max_length )
        goto LABEL_55;
      v4->m_Items[0] = (System_String_o *)v13;
      sub_B52920((BattleServantConfConponent_o *)v4->m_Items, v13, v7, v8, v9, v10, v11, v12);
      lookup = (ServantCommentEntity_o *)StringLiteral_1240/*":"*/;
      if ( StringLiteral_1240/*":"*/ )
      {
        lookup = (ServantCommentEntity_o *)sub_B52A44(StringLiteral_1240/*":"*/, v4->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_57;
        v21 = (System_Int32_array **)StringLiteral_1240/*":"*/;
      }
      else
      {
        v21 = 0LL;
      }
      if ( v4->max_length <= 1 )
        goto LABEL_55;
      v4->m_Items[1] = (System_String_o *)v21;
      sub_B52920((BattleServantConfConponent_o *)&v4->m_Items[1], v21, v15, v16, v17, v18, v19, v20);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v65, 0LL);
      v28 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = (ServantCommentEntity_o *)sub_B52A44(lookup, v4->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_57;
      }
      if ( v4->max_length <= 2 )
        goto LABEL_55;
      v4->m_Items[2] = (System_String_o *)v28;
      sub_B52920((BattleServantConfConponent_o *)&v4->m_Items[2], v28, v22, v23, v24, v25, v26, v27);
      lookup = (ServantCommentEntity_o *)StringLiteral_1240/*":"*/;
      if ( StringLiteral_1240/*":"*/ )
      {
        lookup = (ServantCommentEntity_o *)sub_B52A44(StringLiteral_1240/*":"*/, v4->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_57;
        v35 = (System_Int32_array **)StringLiteral_1240/*":"*/;
      }
      else
      {
        v35 = 0LL;
      }
      if ( v4->max_length <= 3 )
      {
LABEL_55:
        v62 = sub_B52A88(lookup);
        sub_B52A28(v62, 0LL);
      }
      v4->m_Items[3] = (System_String_o *)v35;
      sub_B52920((BattleServantConfConponent_o *)&v4->m_Items[3], v35, v29, v30, v31, v32, v33, v34);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v64, 0LL);
      v42 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = (ServantCommentEntity_o *)sub_B52A44(lookup, v4->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_57;
      }
      if ( v4->max_length <= 4 )
        goto LABEL_55;
      v4->m_Items[4] = (System_String_o *)v42;
      sub_B52920((BattleServantConfConponent_o *)&v4->m_Items[4], v42, v36, v37, v38, v39, v40, v41);
      v43 = System_String__Concat_44648440(v4, 0LL);
      lookup = (ServantCommentEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_56;
      klass = lookup->klass;
      v46 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v47 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v47;
          p_offset += 4;
          if ( v47 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_29;
        }
        v49 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_29:
        v49 = sub_AEB880(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL,
                v44);
      }
      if ( ((*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v49)(
              v46,
              v43,
              *(_QWORD *)(v49 + 8)) & 1) == 0 )
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
          v56 = sub_AEB880(
                  lookup,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL,
                  v51);
        }
        lookup = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v56)(
                                             v53,
                                             v43,
                                             *(_QWORD *)(v56 + 8));
        if ( lookup )
        {
          v59 = lookup;
          v60 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&lookup->klass->_2.bitflags2 + 1) >= (unsigned int)v60
            && (ServantCommentEntity_c *)lookup->klass->_2.typeHierarchy[v60 - 1] == ServantCommentEntity_TypeInfo )
          {
            if ( ServantCommentEntity__IsOpen(lookup, -1, 1, v58) )
              v14 = v59;
            ++v64;
            v4 = (System_String_array *)sub_B5299C(string___TypeInfo, 5LL);
            lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v66, 0LL);
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
      if ( ServantCommentEntity__IsNew(v14, v50) )
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
    v4 = (System_String_array *)sub_B5299C(string___TypeInfo, 5LL);
    lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v66, 0LL);
    v13 = (System_Int32_array **)lookup;
    v14 = 0LL;
    if ( !v4 )
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  ServantCommentEntity_o *v18; // x0
  __int64 v19; // x1
  ServantCommentEntity_o *v20; // x22
  __int64 v21; // x9
  System_Int32_array *ImageLimit; // x0
  System_Collections_Generic_IEnumerable_T__o *v23; // x24
  System_Collections_Generic_List_int__o *v24; // x23
  __int64 v25; // x0
  __int64 v26; // x1
  int v27; // w8
  bool v28; // w20
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  int v35; // [xsp+10h] [xbp-60h]

  if ( (byte_42B12A1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor___68512808);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&ServantCommentEntity_TypeInfo);
    byte_42B12A1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list
    || (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
    sub_B52A5C(list, *(_QWORD *)&svtId);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v8);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v15;
        v16 += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_17:
      v17 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v8);
    }
    v18 = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                      Enumerator,
                                      *(_QWORD *)(v17 + 8));
    v20 = v18;
    if ( !v18 )
      goto LABEL_45;
    v21 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (ServantCommentEntity_c *)v18->klass->_2.typeHierarchy[v21 - 1] != ServantCommentEntity_TypeInfo )
    {
      v18 = (ServantCommentEntity_o *)sub_B52D50(v18);
LABEL_45:
      sub_B52A5C(v18, v19);
    }
    if ( v18->fields.svtId == svtId )
    {
      ImageLimit = ServantCommentEntity__GetImageLimit(v18, (const MethodInfo *)ServantCommentEntity_TypeInfo);
      v23 = (System_Collections_Generic_IEnumerable_T__o *)ImageLimit;
      if ( ImageLimit )
      {
        if ( *(_QWORD *)&ImageLimit->max_length )
        {
          v24 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor_50685004(
            v24,
            v23,
            (const MethodInfo_305644C *)Method_System_Collections_Generic_List_int___ctor___68512808);
          if ( !v24 )
            sub_B52A5C(v25, v26);
          System_Collections_Generic_List_int___Sort(
            v24,
            (const MethodInfo_3058ED0 *)Method_System_Collections_Generic_List_int__Sort__);
          if ( !v24->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v27 = v24->fields._items->m_Items[1];
          if ( v27 >= 3 )
          {
            if ( !v24->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
            if ( v27 == limitCount && ServantCommentEntity__IsOpen(v20, -1, 1, v8) )
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
    v32 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v8);
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

  if ( (byte_42B12A2 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_ServantCommentMaster___c__DisplayClass16_0__OpenSaintGraphProfileChange_b__0__);
    sub_B52984(&ServantCommentMaster___c__DisplayClass16_0_TypeInfo);
    sub_B52984(&StringLiteral_10992/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/);
    sub_B52984(&StringLiteral_10991/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_10989/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/);
    byte_42B12A2 = 1;
  }
  entity = 0LL;
  v9 = sub_B52A54(ServantCommentMaster___c__DisplayClass16_0_TypeInfo);
  ServantCommentMaster___c__DisplayClass16_0___ctor((ServantCommentMaster___c__DisplayClass16_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_17;
  *(_QWORD *)(v9 + 16) = decideAction;
  sub_B52920(
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
  sub_B52920((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)endAction, v18, v19, v20, v21, v22, v23);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_17;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    Master_WarQuestSelectionMaster,
    &entity,
    *(_DWORD *)(v9 + 24),
    (const MethodInfo_23E2334 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)LocalizationManager__Get(
                                                                                    (System_String_o *)StringLiteral_10992/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/,
                                                                                    0LL);
  if ( !entity )
    goto LABEL_17;
  v24 = (System_String_o *)Master_WarQuestSelectionMaster;
  Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)entity, *(_DWORD *)(v9 + 28), -1, 0LL);
  v26 = System_String__Format(v24, Name, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_10991/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/, 0LL);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_10989/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/, 0LL);
  v30 = (CommonConfirmDialog_ClickDelegate_o *)sub_B52A54(CommonConfirmDialog_ClickDelegate_TypeInfo);
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
    sub_B52A5C(Master_WarQuestSelectionMaster, v11);
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
  if ( (byte_42B129A & 1) == 0 )
  {
    sub_B52984(&ServantCommentManager_TypeInfo);
    byte_42B129A = 1;
  }
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ServantCommentManager__IsOpen(svtId, svtCommentId, svtCommentPriority, *(const MethodInfo **)&svtCommentPriority);
}


void __fastcall ServantCommentMaster__SetOpen_27243684(
        ServantCommentMaster_o *this,
        int32_t svtId,
        System_Int32_array *svtCommentIdList,
        System_Int32_array *svtCommentPriorityList,
        const MethodInfo *method)
{
  if ( (byte_42B129B & 1) == 0 )
  {
    sub_B52984(&ServantCommentManager_TypeInfo);
    byte_42B129B = 1;
  }
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ServantCommentManager__SetOpen_27233136(
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

  if ( (byte_42B1295 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__);
    sub_B52984(&ServantCommentEntity_TypeInfo);
    byte_42B1295 = 1;
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
           (const MethodInfo_23E2780 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__);
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
  sub_B52920(p_method);
}


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
  __int64 v13[5]; // [xsp+0h] [xbp-60h] BYREF
  char v14[4]; // [xsp+2Ch] [xbp-34h] BYREF
  int32_t v15; // [xsp+38h] [xbp-28h] BYREF
  int32_t v16; // [xsp+3Ch] [xbp-24h] BYREF

  v15 = limitCount;
  v16 = svtid;
  v14[0] = isDecide;
  if ( (byte_42AD331 & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    sub_B52984(&int_TypeInfo);
    byte_42AD331 = 1;
  }
  v13[4] = 0LL;
  v13[0] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v13[2] = j_il2cpp_value_box_0(bool_TypeInfo, v14);
  v13[3] = (__int64)finishCallback;
  return (System_IAsyncResult_o *)sub_B52928(this, v13, callback, object);
}


void __fastcall ServantCommentMaster_ProfileChangeDecideDelegate__EndInvoke(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
        sub_B52A40(*(_QWORD *)&v24->fields.extra_arg, *(_QWORD *)&svtid, *(_QWORD *)&limitCount, isDecide);
      if ( (sub_B529B4(v26) & 1) == 0 )
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
      v28 = sub_B529AC(v26);
      v29 = sub_B52DB0(v26);
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
            v22 = sub_AEB880(v25, v32, v33, v30);
          }
          v21 = *(_QWORD *)(v22 + 8);
        }
        else
        {
          v21 = *(_QWORD *)(*v25 + 16LL * *(unsigned __int16 *)(v26 + 72) + 320);
        }
        v23 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, bool, System_Action_o *, _QWORD))sub_B52A34(v21, v26);
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
            v20 = sub_AEB880(v25, class_0, v14, v16);
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
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20
  AvalonSceneManager_c *v7; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__1; // x21

  if ( (byte_42AD32F & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_ServantCommentMaster___c__DisplayClass17_0__DefaultProfileChangeDecideAction_b__1__);
    byte_42AD32F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__1 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantCommentMaster___c__DisplayClass17_0__DefaultProfileChangeDecideAction_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B52920(&this->fields.__9__1);
  }
  if ( !v6 )
    sub_B52A5C(Instance, v5);
  CommonUI__maskFadeout(v6, 1, DEFAULT_FADE_TIME, _9__1, 0LL);
}


void __fastcall ServantCommentMaster___c__DisplayClass17_0___DefaultProfileChangeDecideAction_b__1(
        ServantCommentMaster___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20

  if ( (byte_42AD330 & 1) == 0 )
  {
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD330 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v5 )
LABEL_9:
    sub_B52A5C(Instance, v4);
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}