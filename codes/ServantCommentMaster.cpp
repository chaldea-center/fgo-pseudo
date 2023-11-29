void __fastcall ServantCommentMaster___ctor(ServantCommentMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FCEA8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__, method);
    byte_40FCEA8 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    2,
    (const MethodInfo_266F73C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__);
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x23
  int64_t UserId; // x0
  CommonUI_o *Instance; // x21
  CommonUI_o *v26; // x0
  WebViewManager_o *v27; // x0
  UserServantCollectionEntity_o *v28; // x21
  CommonUI_o *v29; // x22
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  ServantStatusDialog_EndDelegate_o *v34; // x23
  CommonUI_o *v35; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FCEB5 & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, *(_QWORD *)&limitCount);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9);
    sub_B16FFC(&DataManager_TypeInfo, v10);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v11);
    sub_B16FFC(&NetworkManager_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_B16FFC(&Method_ServantCommentMaster___c__DisplayClass17_0__DefaultProfileChangeDecideAction_b__0__, v14);
    sub_B16FFC(&ServantCommentMaster___c__DisplayClass17_0_TypeInfo, v15);
    byte_40FCEB5 = 1;
  }
  entity = 0LL;
  v16 = sub_B170CC(
          ServantCommentMaster___c__DisplayClass17_0_TypeInfo,
          *(_QWORD *)&limitCount,
          isDecide,
          endAction,
          method);
  ServantCommentMaster___c__DisplayClass17_0___ctor((ServantCommentMaster___c__DisplayClass17_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_23;
  *(_QWORD *)(v16 + 16) = endAction;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)endAction, v17, v18, v19, v20, v21, v22);
  if ( isDecide )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_23;
    if ( UserServantCollectionMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, UserId, svtId, 0LL) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( Instance )
      {
        CommonUI__maskFadein(Instance, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
        v26 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( v26 )
        {
          CommonUI__CloseConfirmDialog(v26, 0LL);
          v27 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v28 = entity;
          v29 = (CommonUI_o *)v27;
          v34 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                       ServantStatusDialog_EndDelegate_TypeInfo,
                                                       v30,
                                                       v31,
                                                       v32,
                                                       v33);
          ServantStatusDialog_EndDelegate___ctor(
            v34,
            (Il2CppObject *)v16,
            Method_ServantCommentMaster___c__DisplayClass17_0__DefaultProfileChangeDecideAction_b__0__,
            0LL);
          if ( v29 )
          {
            CommonUI__OpenServantStatusDialog_18249816(v29, 33, v28, limitCount, v34, 0LL);
            return;
          }
        }
      }
LABEL_23:
      sub_B170D4();
    }
  }
  v35 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v35 )
    goto LABEL_23;
  CommonUI__CloseConfirmDialog_18237824(v35, *(System_Action_o **)(v16 + 16), 0LL);
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

  if ( (byte_40FCEA6 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    sub_B16FFC(&ServantCommentEntity_TypeInfo, v9);
    byte_40FCEA6 = 1;
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
                                     (const MethodInfo_266F7D8 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__);
}


ServantCommentEntity_array *__fastcall ServantCommentMaster__GetEntityList(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t condType,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6

  return ServantCommentMaster__GetEntityList_30493208(this, svtId, -1, condType, 0, 0, v4);
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
  __int64 v18; // x2
  System_String_array *v19; // x25
  System_String_o *v20; // x0
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v29; // x24
  WebViewManager_o *Instance; // x0
  ServantCommentAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v32; // x5
  __int64 v33; // x2
  const MethodInfo *v34; // x3
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x26
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x26
  System_String_o *v57; // x25
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v60; // x26
  unsigned __int64 v61; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v64; // x2
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v65; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v66; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v67; // x26
  unsigned __int64 v68; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v69; // x11
  __int64 v70; // x0
  ServantCommentEntity_o *v71; // x0
  const MethodInfo *v72; // x1
  ServantCommentEntity_o *v73; // x25
  __int64 v74; // x10
  System_Int32_array *ImageLimit; // x0
  __int64 v76; // x9
  char v77; // w8
  __int64 v78; // x10
  int v79; // w11
  __int64 v80; // x12
  int32_t v81; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v85; // [xsp+8h] [xbp-68h]
  int32_t v86; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v87; // [xsp+18h] [xbp-58h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-54h] BYREF

  svtIda = svtId;
  if ( (byte_40FCEAA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v8);
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v13);
    sub_B16FFC(&ServantCommentEntity_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&string___TypeInfo, v16);
    sub_B16FFC(&StringLiteral_1223, v17);
    byte_40FCEAA = 1;
  }
  v85 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                                                                  *(_QWORD *)&svtId,
                                                                                                  *(_QWORD *)&imageLimitCount,
                                                                                                  *(_QWORD *)&condType,
                                                                                                  addCheck);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v85,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v86 = 0;
  v87 = 1;
  v19 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, v18);
  v20 = System_Int32__ToString((int32_t)&svtIda, 0LL);
  if ( !v19 )
    goto LABEL_70;
  v28 = (System_Int32_array **)v20;
  v29 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v28 )
      {
        v20 = (System_String_o *)sub_B170BC(v28, v19->obj.klass->_1.element_class);
        if ( !v20 )
        {
LABEL_72:
          sub_B170F4(v20);
          sub_B170A0();
        }
      }
      if ( !v19->max_length )
        goto LABEL_71;
      v19->m_Items[0] = (System_String_o *)v28;
      sub_B16F98((BattleServantConfConponent_o *)v19->m_Items, v28, v22, v23, v24, v25, v26, v27);
      v20 = (System_String_o *)StringLiteral_1223;
      if ( StringLiteral_1223 )
      {
        v20 = (System_String_o *)sub_B170BC(StringLiteral_1223, v19->obj.klass->_1.element_class);
        if ( !v20 )
          goto LABEL_72;
        v21 = (System_Int32_array **)StringLiteral_1223;
      }
      else
      {
        v21 = 0LL;
      }
      if ( v19->max_length <= 1 )
        goto LABEL_71;
      v19->m_Items[1] = (System_String_o *)v21;
      sub_B16F98((BattleServantConfConponent_o *)&v19->m_Items[1], v21, v22, v35, v36, v37, v38, v39);
      v20 = System_Int32__ToString((int32_t)&v87, 0LL);
      v45 = (System_Int32_array **)v20;
      if ( v20 )
      {
        v20 = (System_String_o *)sub_B170BC(v20, v19->obj.klass->_1.element_class);
        if ( !v20 )
          goto LABEL_72;
      }
      if ( v19->max_length <= 2 )
        goto LABEL_71;
      v19->m_Items[2] = (System_String_o *)v45;
      sub_B16F98((BattleServantConfConponent_o *)&v19->m_Items[2], v45, v22, v40, v41, v42, v43, v44);
      v20 = (System_String_o *)StringLiteral_1223;
      if ( StringLiteral_1223 )
      {
        v20 = (System_String_o *)sub_B170BC(StringLiteral_1223, v19->obj.klass->_1.element_class);
        if ( !v20 )
          goto LABEL_72;
        v21 = (System_Int32_array **)StringLiteral_1223;
      }
      else
      {
        v21 = 0LL;
      }
      if ( v19->max_length <= 3 )
      {
LABEL_71:
        sub_B17100(v20, v21, v22);
        sub_B170A0();
      }
      v19->m_Items[3] = (System_String_o *)v21;
      sub_B16F98((BattleServantConfConponent_o *)&v19->m_Items[3], v21, v22, v46, v47, v48, v49, v50);
      v20 = System_Int32__ToString((int32_t)&v86, 0LL);
      v56 = (System_Int32_array **)v20;
      if ( v20 )
      {
        v20 = (System_String_o *)sub_B170BC(v20, v19->obj.klass->_1.element_class);
        if ( !v20 )
          goto LABEL_72;
      }
      if ( v19->max_length <= 4 )
        goto LABEL_71;
      v19->m_Items[4] = (System_String_o *)v56;
      sub_B16F98((BattleServantConfConponent_o *)&v19->m_Items[4], v56, v22, v51, v52, v53, v54, v55);
      v57 = System_String__Concat_43823856(v19, 0LL);
      lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
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
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_38:
        p_method = sub_AAFEF8(
                     lookup,
                     System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                     0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
              v60,
              v57,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v65 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !v65 )
        goto LABEL_70;
      v66 = v65->klass;
      v67 = v65;
      if ( *(_WORD *)&v65->klass->_2.bitflags1 )
      {
        v68 = 0LL;
        v69 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v66->_1.interfaceOffsets->offset;
        while ( *(v69 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v68;
          v69 += 2;
          if ( v68 >= *(unsigned __int16 *)&v65->klass->_2.bitflags1 )
            goto LABEL_46;
        }
        v70 = (__int64)&v66->vtable[*(_DWORD *)v69 + 2].method;
      }
      else
      {
LABEL_46:
        v70 = sub_AAFEF8(v65, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
      }
      v71 = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v70)(
                                        v67,
                                        v57,
                                        *(_QWORD *)(v70 + 8));
      if ( !v71 )
        goto LABEL_70;
      v73 = v71;
      v74 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v71->klass->_2.bitflags2 + 1) < (unsigned int)v74
        || (ServantCommentEntity_c *)v71->klass->_2.typeHierarchy[v74 - 1] != ServantCommentEntity_TypeInfo )
      {
        goto LABEL_70;
      }
      ImageLimit = ServantCommentEntity__GetImageLimit(v71, v72);
      if ( ImageLimit )
      {
        v76 = *(_QWORD *)&ImageLimit->max_length;
        if ( v76 )
        {
          if ( (int)v76 >= 1 )
          {
            v77 = 0;
            v78 = 8LL;
            do
            {
              v79 = *((_DWORD *)&ImageLimit->obj.klass + v78);
              v80 = v78 - 7;
              ++v78;
              v77 |= v79 > 2;
            }
            while ( v80 < (int)v76 );
            if ( (v77 & 1) != 0
              && (System_Array__IndexOf_int_(
                    ImageLimit,
                    imageLimitCount,
                    (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
            {
              if ( !condType || v73->fields.condType == condType )
                goto LABEL_12;
              if ( addCheck )
              {
                Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Instance )
                  goto LABEL_70;
                MasterData_WarQuestSelectionMaster = (ServantCommentAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                    (DataManager_o *)Instance,
                                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
                if ( !MasterData_WarQuestSelectionMaster )
                  goto LABEL_70;
                if ( ServantCommentAddMaster__IsEntityListCondContain(
                       MasterData_WarQuestSelectionMaster,
                       svtIda,
                       v87,
                       v86,
                       condType,
                       v32) )
                {
LABEL_12:
                  if ( !v29 || ServantCommentEntity__IsOpen(v73, -1, 1, v34) )
                    v29 = (EventMissionProgressRequest_Argument_ProgressData_o *)v73;
                }
              }
            }
          }
        }
      }
      ++v86;
      v19 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, v33);
      v20 = System_Int32__ToString((int32_t)&svtIda, 0LL);
      v28 = (System_Int32_array **)v20;
      if ( !v19 )
        goto LABEL_70;
    }
    if ( v29 )
    {
      if ( !v85 )
        goto LABEL_70;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v85,
        v29,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
      goto LABEL_64;
    }
    if ( !v86 )
      break;
LABEL_64:
    v81 = v87;
LABEL_65:
    v86 = 0;
    v87 = v81 + 1;
    v19 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, v64);
    v20 = System_Int32__ToString((int32_t)&svtIda, 0LL);
    v28 = (System_Int32_array **)v20;
    v29 = 0LL;
    if ( !v19 )
      goto LABEL_70;
  }
  v81 = v87;
  if ( v87 == 1 )
    goto LABEL_65;
  if ( !v85 )
LABEL_70:
    sub_B170D4();
  return (ServantCommentEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v85,
                                         (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ServantCommentEntity_array *__fastcall ServantCommentMaster__GetEntityList_30493208(
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
  __int64 v21; // x2
  System_String_array *v22; // x26
  System_String_o *v23; // x0
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x27
  EventMissionProgressRequest_Argument_ProgressData_o *v32; // x25
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x27
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x27
  System_String_o *v55; // x26
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v58; // x27
  unsigned __int64 v59; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v62; // x2
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v63; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v64; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v65; // x27
  unsigned __int64 v66; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v67; // x11
  __int64 v68; // x0
  int32_t v69; // w8
  ServantCommentEntity_o *v70; // x0
  const MethodInfo *v71; // x1
  ServantCommentEntity_o *v72; // x26
  __int64 v73; // x10
  System_Int32_array *ImageLimit; // x0
  __int64 v75; // x2
  const MethodInfo *v76; // x3
  __int64 v77; // x8
  __int64 v78; // x9
  WebViewManager_o *Instance; // x0
  ServantCommentAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v81; // x5
  int32_t v85; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v86; // [xsp+18h] [xbp-58h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-54h] BYREF

  svtIda = svtId;
  if ( (byte_40FCEA9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v10);
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v15);
    sub_B16FFC(&ServantCommentEntity_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&string___TypeInfo, v18);
    sub_B16FFC(&StringLiteral_1223, v19);
    byte_40FCEA9 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                                                                  *(_QWORD *)&svtId,
                                                                                                  *(_QWORD *)&imageLimitCount,
                                                                                                  *(_QWORD *)&condType,
                                                                                                  addCheck);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v85 = 0;
  v86 = 1;
  v22 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, v21);
  v23 = System_Int32__ToString((int32_t)&svtIda, 0LL);
  if ( !v22 )
    goto LABEL_74;
  v31 = (System_Int32_array **)v23;
  v32 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v31 )
      {
        v23 = (System_String_o *)sub_B170BC(v31, v22->obj.klass->_1.element_class);
        if ( !v23 )
        {
LABEL_75:
          sub_B170F4(v23);
          sub_B170A0();
        }
      }
      if ( !v22->max_length )
        goto LABEL_73;
      v22->m_Items[0] = (System_String_o *)v31;
      sub_B16F98((BattleServantConfConponent_o *)v22->m_Items, v31, v25, v26, v27, v28, v29, v30);
      v23 = (System_String_o *)StringLiteral_1223;
      if ( StringLiteral_1223 )
      {
        v23 = (System_String_o *)sub_B170BC(StringLiteral_1223, v22->obj.klass->_1.element_class);
        if ( !v23 )
          goto LABEL_75;
        v24 = (System_Int32_array **)StringLiteral_1223;
      }
      else
      {
        v24 = 0LL;
      }
      if ( v22->max_length <= 1 )
        goto LABEL_73;
      v22->m_Items[1] = (System_String_o *)v24;
      sub_B16F98((BattleServantConfConponent_o *)&v22->m_Items[1], v24, v25, v33, v34, v35, v36, v37);
      v23 = System_Int32__ToString((int32_t)&v86, 0LL);
      v43 = (System_Int32_array **)v23;
      if ( v23 )
      {
        v23 = (System_String_o *)sub_B170BC(v23, v22->obj.klass->_1.element_class);
        if ( !v23 )
          goto LABEL_75;
      }
      if ( v22->max_length <= 2 )
        goto LABEL_73;
      v22->m_Items[2] = (System_String_o *)v43;
      sub_B16F98((BattleServantConfConponent_o *)&v22->m_Items[2], v43, v25, v38, v39, v40, v41, v42);
      v23 = (System_String_o *)StringLiteral_1223;
      if ( StringLiteral_1223 )
      {
        v23 = (System_String_o *)sub_B170BC(StringLiteral_1223, v22->obj.klass->_1.element_class);
        if ( !v23 )
          goto LABEL_75;
        v24 = (System_Int32_array **)StringLiteral_1223;
      }
      else
      {
        v24 = 0LL;
      }
      if ( v22->max_length <= 3 )
      {
LABEL_73:
        sub_B17100(v23, v24, v25);
        sub_B170A0();
      }
      v22->m_Items[3] = (System_String_o *)v24;
      sub_B16F98((BattleServantConfConponent_o *)&v22->m_Items[3], v24, v25, v44, v45, v46, v47, v48);
      v23 = System_Int32__ToString((int32_t)&v85, 0LL);
      v54 = (System_Int32_array **)v23;
      if ( v23 )
      {
        v23 = (System_String_o *)sub_B170BC(v23, v22->obj.klass->_1.element_class);
        if ( !v23 )
          goto LABEL_75;
      }
      if ( v22->max_length <= 4 )
        goto LABEL_73;
      v22->m_Items[4] = (System_String_o *)v54;
      sub_B16F98((BattleServantConfConponent_o *)&v22->m_Items[4], v54, v25, v49, v50, v51, v52, v53);
      v55 = System_String__Concat_43823856(v22, 0LL);
      lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_74;
      klass = lookup->klass;
      v58 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v59 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v59;
          p_offset += 4;
          if ( v59 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_29;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_29:
        p_method = sub_AAFEF8(
                     lookup,
                     System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                     0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
              v58,
              v55,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v63 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !v63 )
        goto LABEL_74;
      v64 = v63->klass;
      v65 = v63;
      if ( *(_WORD *)&v63->klass->_2.bitflags1 )
      {
        v66 = 0LL;
        v67 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v64->_1.interfaceOffsets->offset;
        while ( *(v67 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v66;
          v67 += 2;
          if ( v66 >= *(unsigned __int16 *)&v63->klass->_2.bitflags1 )
            goto LABEL_37;
        }
        v68 = (__int64)&v64->vtable[*(_DWORD *)v67 + 2].method;
      }
      else
      {
LABEL_37:
        v68 = sub_AAFEF8(v63, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
      }
      v70 = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v68)(
                                        v65,
                                        v55,
                                        *(_QWORD *)(v68 + 8));
      if ( !v70 )
        goto LABEL_74;
      v72 = v70;
      v73 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v70->klass->_2.bitflags2 + 1) < (unsigned int)v73
        || (ServantCommentEntity_c *)v70->klass->_2.typeHierarchy[v73 - 1] != ServantCommentEntity_TypeInfo )
      {
        goto LABEL_74;
      }
      ImageLimit = ServantCommentEntity__GetImageLimit(v70, v71);
      if ( imageLimitCount != -1 )
      {
        if ( ImageLimit )
        {
          v77 = *(_QWORD *)&ImageLimit->max_length;
          if ( v77 )
          {
            if ( overLimit )
            {
              if ( (int)v77 < 1 )
                goto LABEL_68;
              v78 = 0LL;
              while ( ImageLimit->m_Items[v78 + 1] > imageLimitCount )
              {
                if ( (int)++v78 >= (int)v77 )
                  goto LABEL_68;
              }
            }
            else if ( (System_Array__IndexOf_int_(
                         ImageLimit,
                         imageLimitCount,
                         (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___) & 0x80000000) != 0 )
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
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_74;
        MasterData_WarQuestSelectionMaster = (ServantCommentAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_74;
        if ( ServantCommentAddMaster__IsEntityListCondContain(
               MasterData_WarQuestSelectionMaster,
               svtIda,
               v86,
               v85,
               condType,
               v81) )
        {
LABEL_62:
          if ( !v32 || ServantCommentEntity__IsOpen(v72, -1, 1, v76) )
            v32 = (EventMissionProgressRequest_Argument_ProgressData_o *)v72;
        }
      }
LABEL_68:
      ++v85;
      v22 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, v75);
      v23 = System_Int32__ToString((int32_t)&svtIda, 0LL);
      v31 = (System_Int32_array **)v23;
      if ( !v22 )
        goto LABEL_74;
    }
    if ( v32 )
    {
      if ( !v20 )
        goto LABEL_74;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v20,
        v32,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
      goto LABEL_42;
    }
    if ( !v85 )
      break;
LABEL_42:
    v69 = v86;
LABEL_43:
    v85 = 0;
    v86 = v69 + 1;
    v22 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, v62);
    v23 = System_Int32__ToString((int32_t)&svtIda, 0LL);
    v31 = (System_Int32_array **)v23;
    v32 = 0LL;
    if ( !v22 )
      goto LABEL_74;
  }
  v69 = v86;
  if ( v86 == 1 )
    goto LABEL_43;
  if ( !v20 )
LABEL_74:
    sub_B170D4();
  return (ServantCommentEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                         (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v23; // x3
  __int64 v24; // x4
  System_Collections_Generic_List_int__o *v25; // x22
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x25
  int64_t UserId; // x0
  __int64 v29; // x2
  int32_t v30; // w24
  WebViewManager_o *v31; // x0
  ServantLimitImageMaster_o *v32; // x0
  System_String_array *v33; // x26
  void *ImageLimit; // x0
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x27
  ServantCommentEntity_o *v43; // x25
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x27
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x27
  System_String_o *v66; // x26
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v69; // x27
  unsigned __int64 v70; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  const MethodInfo *v73; // x1
  __int64 v74; // x2
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v75; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v76; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v77; // x27
  unsigned __int64 v78; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v79; // x11
  __int64 v80; // x0
  int v81; // w8
  ServantCommentEntity_o *v82; // x0
  const MethodInfo *v83; // x1
  ServantCommentEntity_o *v84; // x26
  __int64 v85; // x10
  const MethodInfo *v86; // x3
  __int64 v87; // x8
  int v88; // w8
  System_Int32_array **v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **v96; // x0
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  BattleServantConfConponent_o *v104; // [xsp+0h] [xbp-80h]
  BattleServantConfConponent_o *v105; // [xsp+8h] [xbp-78h]
  int32_t ServantLimitCountSealAfter; // [xsp+14h] [xbp-6Ch]
  __int64 v107; // [xsp+18h] [xbp-68h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+20h] [xbp-60h] BYREF
  int32_t svtIda; // [xsp+2Ch] [xbp-54h] BYREF

  svtIda = svtId;
  if ( (byte_40FCEAF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, idList);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_B16FFC(&NetworkManager_TypeInfo, v15);
    sub_B16FFC(&ServantCommentEntity_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&string___TypeInfo, v18);
    sub_B16FFC(&StringLiteral_1223, v19);
    byte_40FCEAF = 1;
  }
  v107 = 0LL;
  entity = 0LL;
  v20 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    idList,
                                                    priorityList,
                                                    *(_QWORD *)&svtId,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v25 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v21,
                                                    v22,
                                                    v23,
                                                    v24);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_79;
  ServantLimitCountSealAfter = 1;
  if ( UserServantCollectionMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, svtId, 0LL) )
  {
    if ( !entity )
      goto LABEL_79;
    v30 = entity->fields.maxLimitCount ? entity->fields.maxLimitCount : 1;
    v31 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v31 )
      goto LABEL_79;
    v32 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v31,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !v32 )
      goto LABEL_79;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v32, svtIda, v30, 0LL);
  }
  v104 = (BattleServantConfConponent_o *)priorityList;
  v105 = (BattleServantConfConponent_o *)idList;
  v107 = 0x100000000LL;
  v33 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, v29);
  ImageLimit = System_Int32__ToString((int32_t)&svtIda, 0LL);
  if ( !v33 )
    goto LABEL_79;
  v42 = (System_Int32_array **)ImageLimit;
  v43 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v42 )
      {
        ImageLimit = (void *)sub_B170BC(v42, v33->obj.klass->_1.element_class);
        if ( !ImageLimit )
        {
LABEL_80:
          sub_B170F4(ImageLimit);
          sub_B170A0();
        }
      }
      if ( !v33->max_length )
        goto LABEL_78;
      v33->m_Items[0] = (System_String_o *)v42;
      sub_B16F98((BattleServantConfConponent_o *)v33->m_Items, v42, v36, v37, v38, v39, v40, v41);
      ImageLimit = (void *)StringLiteral_1223;
      if ( StringLiteral_1223 )
      {
        ImageLimit = (void *)sub_B170BC(StringLiteral_1223, v33->obj.klass->_1.element_class);
        if ( !ImageLimit )
          goto LABEL_80;
        v35 = (System_Int32_array **)StringLiteral_1223;
      }
      else
      {
        v35 = 0LL;
      }
      if ( v33->max_length <= 1 )
        goto LABEL_78;
      v33->m_Items[1] = (System_String_o *)v35;
      sub_B16F98((BattleServantConfConponent_o *)&v33->m_Items[1], v35, v36, v44, v45, v46, v47, v48);
      ImageLimit = System_Int32__ToString((int32_t)&v107 + 4, 0LL);
      v54 = (System_Int32_array **)ImageLimit;
      if ( ImageLimit )
      {
        ImageLimit = (void *)sub_B170BC(ImageLimit, v33->obj.klass->_1.element_class);
        if ( !ImageLimit )
          goto LABEL_80;
      }
      if ( v33->max_length <= 2 )
        goto LABEL_78;
      v33->m_Items[2] = (System_String_o *)v54;
      sub_B16F98((BattleServantConfConponent_o *)&v33->m_Items[2], v54, v36, v49, v50, v51, v52, v53);
      ImageLimit = (void *)StringLiteral_1223;
      if ( StringLiteral_1223 )
      {
        ImageLimit = (void *)sub_B170BC(StringLiteral_1223, v33->obj.klass->_1.element_class);
        if ( !ImageLimit )
          goto LABEL_80;
        v35 = (System_Int32_array **)StringLiteral_1223;
      }
      else
      {
        v35 = 0LL;
      }
      if ( v33->max_length <= 3 )
      {
LABEL_78:
        sub_B17100(ImageLimit, v35, v36);
        sub_B170A0();
      }
      v33->m_Items[3] = (System_String_o *)v35;
      sub_B16F98((BattleServantConfConponent_o *)&v33->m_Items[3], v35, v36, v55, v56, v57, v58, v59);
      ImageLimit = System_Int32__ToString((int32_t)&v107, 0LL);
      v65 = (System_Int32_array **)ImageLimit;
      if ( ImageLimit )
      {
        ImageLimit = (void *)sub_B170BC(ImageLimit, v33->obj.klass->_1.element_class);
        if ( !ImageLimit )
          goto LABEL_80;
      }
      if ( v33->max_length <= 4 )
        goto LABEL_78;
      v33->m_Items[4] = (System_String_o *)v65;
      sub_B16F98((BattleServantConfConponent_o *)&v33->m_Items[4], v65, v36, v60, v61, v62, v63, v64);
      v66 = System_String__Concat_43823856(v33, 0LL);
      lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_79;
      klass = lookup->klass;
      v69 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v70 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v70;
          p_offset += 4;
          if ( v70 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_42;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_42:
        p_method = sub_AAFEF8(
                     lookup,
                     System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                     0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
              v69,
              v66,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v75 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( v75 )
      {
        v76 = v75->klass;
        v77 = v75;
        if ( *(_WORD *)&v75->klass->_2.bitflags1 )
        {
          v78 = 0LL;
          v79 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v76->_1.interfaceOffsets->offset;
          while ( *(v79 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            ++v78;
            v79 += 2;
            if ( v78 >= *(unsigned __int16 *)&v75->klass->_2.bitflags1 )
              goto LABEL_50;
          }
          v80 = (__int64)&v76->vtable[*(_DWORD *)v79 + 2].method;
        }
        else
        {
LABEL_50:
          v80 = sub_AAFEF8(v75, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
        }
        v82 = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v80)(
                                          v77,
                                          v66,
                                          *(_QWORD *)(v80 + 8));
        if ( v82 )
        {
          v84 = v82;
          v85 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v82->klass->_2.bitflags2 + 1) >= (unsigned int)v85
            && (ServantCommentEntity_c *)v82->klass->_2.typeHierarchy[v85 - 1] == ServantCommentEntity_TypeInfo )
          {
            ImageLimit = ServantCommentEntity__GetImageLimit(v82, v83);
            if ( !ImageLimit )
              goto LABEL_69;
            v87 = *((_QWORD *)ImageLimit + 3);
            if ( !v87 )
              goto LABEL_69;
            if ( !(_DWORD)v87 )
              goto LABEL_78;
            v88 = *((_DWORD *)ImageLimit + 8);
            if ( v88 < 3 || ServantLimitCountSealAfter >= v88 )
            {
LABEL_69:
              if ( ServantCommentEntity__IsOpen(v84, -1, 1, v86) )
                v43 = v84;
            }
            LODWORD(v107) = v107 + 1;
            v33 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, v36);
            ImageLimit = System_Int32__ToString((int32_t)&svtIda, 0LL);
            v42 = (System_Int32_array **)ImageLimit;
            if ( v33 )
              continue;
          }
        }
      }
      goto LABEL_79;
    }
    if ( v43 )
    {
      if ( ServantCommentEntity__IsNew(v43, v73) )
      {
        if ( !v20 )
          goto LABEL_79;
        System_Collections_Generic_List_int___Add(
          v20,
          v43->fields.id,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        if ( !v25 )
          goto LABEL_79;
        System_Collections_Generic_List_int___Add(
          v25,
          v43->fields.priority,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      goto LABEL_57;
    }
    if ( !(_DWORD)v107 )
      break;
LABEL_57:
    v81 = HIDWORD(v107);
LABEL_58:
    LODWORD(v107) = 0;
    HIDWORD(v107) = v81 + 1;
    v33 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, v74);
    ImageLimit = System_Int32__ToString((int32_t)&svtIda, 0LL);
    v42 = (System_Int32_array **)ImageLimit;
    v43 = 0LL;
    if ( !v33 )
      goto LABEL_79;
  }
  v81 = HIDWORD(v107);
  if ( HIDWORD(v107) == 1 )
    goto LABEL_58;
  if ( !v20
    || (v89 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                       v20,
                                       (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__),
        v105->klass = (BattleServantConfConponent_c *)v89,
        sub_B16F98(v105, v89, v90, v91, v92, v93, v94, v95),
        !v25)
    || (v96 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                       v25,
                                       (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__),
        v104->klass = (BattleServantConfConponent_c *)v96,
        sub_B16F98(v104, v96, v97, v98, v99, v100, v101, v102),
        !v105->klass) )
  {
LABEL_79:
    sub_B170D4();
  }
  return LODWORD(v105->klass->_1.namespaze) != 0;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantCommentEntity__o *__fastcall ServantCommentMaster__GetNewProfileEntities(
        ServantCommentMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  const MethodInfo *v14; // x4
  __int64 v15; // x2
  System_Int32_array *v16; // x8
  unsigned __int64 v17; // x23
  System_String_array *v18; // x21
  System_String_o *v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x22
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x22
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x22
  System_String_o *v50; // x21
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v53; // x22
  unsigned __int64 v54; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v57; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v58; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v59; // x22
  unsigned __int64 v60; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v61; // x11
  __int64 v62; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v63; // x0
  __int64 v64; // x10
  System_Int32_array *priorityList; // [xsp+8h] [xbp-68h] BYREF
  System_Int32_array *idList; // [xsp+10h] [xbp-60h] BYREF
  int32_t v68; // [xsp+1Ch] [xbp-54h] BYREF

  v68 = svtId;
  if ( (byte_40FCEB2 & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v9);
    sub_B16FFC(&ServantCommentEntity_TypeInfo, v10);
    sub_B16FFC(&string___TypeInfo, v11);
    sub_B16FFC(&StringLiteral_1223, v12);
    byte_40FCEB2 = 1;
  }
  priorityList = 0LL;
  idList = 0LL;
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                                                                  *(_QWORD *)&svtId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  if ( ServantCommentMaster__GetNewList(this, &idList, &priorityList, svtId, v14) )
  {
    v16 = idList;
    if ( !idList )
LABEL_52:
      sub_B170D4();
    v17 = 0LL;
    while ( (__int64)v17 < (int)v16->max_length )
    {
      v18 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, v15);
      v19 = System_Int32__ToString((int32_t)&v68, 0LL);
      if ( !v18 )
        goto LABEL_52;
      v27 = (System_Int32_array **)v19;
      if ( v19 )
      {
        v19 = (System_String_o *)sub_B170BC(v19, v18->obj.klass->_1.element_class);
        if ( !v19 )
        {
LABEL_55:
          sub_B170F4(v19);
          sub_B170A0();
        }
      }
      if ( !v18->max_length )
        goto LABEL_54;
      v18->m_Items[0] = (System_String_o *)v27;
      sub_B16F98((BattleServantConfConponent_o *)v18->m_Items, v27, v21, v22, v23, v24, v25, v26);
      v19 = (System_String_o *)StringLiteral_1223;
      if ( StringLiteral_1223 )
      {
        v19 = (System_String_o *)sub_B170BC(StringLiteral_1223, v18->obj.klass->_1.element_class);
        if ( !v19 )
          goto LABEL_55;
        v20 = (System_Int32_array **)StringLiteral_1223;
      }
      else
      {
        v20 = 0LL;
      }
      if ( v18->max_length <= 1 )
        goto LABEL_54;
      v18->m_Items[1] = (System_String_o *)v20;
      sub_B16F98((BattleServantConfConponent_o *)&v18->m_Items[1], v20, v21, v28, v29, v30, v31, v32);
      if ( !idList )
        goto LABEL_52;
      if ( v17 >= idList->max_length )
        goto LABEL_54;
      v19 = System_Int32__ToString((int)idList + 4 * (int)v17 + 32, 0LL);
      v38 = (System_Int32_array **)v19;
      if ( v19 )
      {
        v19 = (System_String_o *)sub_B170BC(v19, v18->obj.klass->_1.element_class);
        if ( !v19 )
          goto LABEL_55;
      }
      if ( v18->max_length <= 2 )
        goto LABEL_54;
      v18->m_Items[2] = (System_String_o *)v38;
      sub_B16F98((BattleServantConfConponent_o *)&v18->m_Items[2], v38, v21, v33, v34, v35, v36, v37);
      v19 = (System_String_o *)StringLiteral_1223;
      if ( StringLiteral_1223 )
      {
        v19 = (System_String_o *)sub_B170BC(StringLiteral_1223, v18->obj.klass->_1.element_class);
        if ( !v19 )
          goto LABEL_55;
        v20 = (System_Int32_array **)StringLiteral_1223;
      }
      else
      {
        v20 = 0LL;
      }
      if ( v18->max_length <= 3 )
        goto LABEL_54;
      v18->m_Items[3] = (System_String_o *)v20;
      sub_B16F98((BattleServantConfConponent_o *)&v18->m_Items[3], v20, v21, v39, v40, v41, v42, v43);
      if ( !priorityList )
        goto LABEL_52;
      if ( v17 >= priorityList->max_length )
      {
LABEL_54:
        sub_B17100(v19, v20, v21);
        sub_B170A0();
      }
      v19 = System_Int32__ToString((int)priorityList + 4 * (int)v17 + 32, 0LL);
      v49 = (System_Int32_array **)v19;
      if ( v19 )
      {
        v19 = (System_String_o *)sub_B170BC(v19, v18->obj.klass->_1.element_class);
        if ( !v19 )
          goto LABEL_55;
      }
      if ( v18->max_length <= 4 )
        goto LABEL_54;
      v18->m_Items[4] = (System_String_o *)v49;
      sub_B16F98((BattleServantConfConponent_o *)&v18->m_Items[4], v49, v21, v44, v45, v46, v47, v48);
      v50 = System_String__Concat_43823856(v18, 0LL);
      lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( lookup )
      {
        klass = lookup->klass;
        v53 = lookup;
        if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
        {
          v54 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            ++v54;
            p_offset += 4;
            if ( v54 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
              goto LABEL_36;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_36:
          p_method = sub_AAFEF8(
                       lookup,
                       System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                       0LL);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
                v53,
                v50,
                *(_QWORD *)(p_method + 8)) & 1) != 0 )
        {
          v57 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
          if ( !v57 )
            goto LABEL_52;
          v58 = v57->klass;
          v59 = v57;
          if ( *(_WORD *)&v57->klass->_2.bitflags1 )
          {
            v60 = 0LL;
            v61 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v58->_1.interfaceOffsets->offset;
            while ( *(v61 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
            {
              ++v60;
              v61 += 2;
              if ( v60 >= *(unsigned __int16 *)&v57->klass->_2.bitflags1 )
                goto LABEL_44;
            }
            v62 = (__int64)&v58->vtable[*(_DWORD *)v61 + 2].method;
          }
          else
          {
LABEL_44:
            v62 = sub_AAFEF8(v57, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
          }
          v63 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v62)(
                                                                         v59,
                                                                         v50,
                                                                         *(_QWORD *)(v62 + 8));
          if ( v63 )
          {
            v64 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v63->klass->_2.bitflags2 + 1) >= (unsigned int)v64
              && (ServantCommentEntity_c *)v63->klass->_2.typeHierarchy[v64 - 1] == ServantCommentEntity_TypeInfo )
            {
              if ( !v13 )
                goto LABEL_52;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v13,
                v63,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
            }
          }
        }
        v16 = idList;
        ++v17;
        if ( idList )
          continue;
      }
      goto LABEL_52;
    }
  }
  return (System_Collections_Generic_List_ServantCommentEntity__o *)v13;
}


// local variable allocation has failed, the output may be wrong!
ServantCommentEntity_array *__fastcall ServantCommentMaster__GetOpenEntitiyList(
        ServantCommentMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  __int64 v14; // x2
  System_String_array *v15; // x22
  System_String_o *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x23
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x21
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x23
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x23
  System_String_o *v48; // x22
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v51; // x23
  unsigned __int64 v52; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v55; // x2
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v56; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v57; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v58; // x23
  unsigned __int64 v59; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v60; // x11
  __int64 v61; // x0
  int v62; // w8
  ServantCommentEntity_o *v63; // x0
  const MethodInfo *v64; // x3
  ServantCommentEntity_o *v65; // x22
  __int64 v66; // x10
  __int64 v67; // x2
  int v69; // [xsp+4h] [xbp-5Ch] BYREF
  int v70; // [xsp+8h] [xbp-58h] BYREF
  int32_t v71; // [xsp+Ch] [xbp-54h] BYREF

  v71 = svtId;
  if ( (byte_40FCEAB & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v9);
    sub_B16FFC(&ServantCommentEntity_TypeInfo, v10);
    sub_B16FFC(&string___TypeInfo, v11);
    sub_B16FFC(&StringLiteral_1223, v12);
    byte_40FCEAB = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                                                                  *(_QWORD *)&svtId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v69 = 0;
  v70 = 1;
  v15 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, v14);
  v16 = System_Int32__ToString((int32_t)&v71, 0LL);
  if ( !v15 )
    goto LABEL_57;
  v24 = (System_Int32_array **)v16;
  v25 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v24 )
      {
        v16 = (System_String_o *)sub_B170BC(v24, v15->obj.klass->_1.element_class);
        if ( !v16 )
        {
LABEL_58:
          sub_B170F4(v16);
          sub_B170A0();
        }
      }
      if ( !v15->max_length )
        goto LABEL_56;
      v15->m_Items[0] = (System_String_o *)v24;
      sub_B16F98((BattleServantConfConponent_o *)v15->m_Items, v24, v18, v19, v20, v21, v22, v23);
      v16 = (System_String_o *)StringLiteral_1223;
      if ( StringLiteral_1223 )
      {
        v16 = (System_String_o *)sub_B170BC(StringLiteral_1223, v15->obj.klass->_1.element_class);
        if ( !v16 )
          goto LABEL_58;
        v17 = (System_Int32_array **)StringLiteral_1223;
      }
      else
      {
        v17 = 0LL;
      }
      if ( v15->max_length <= 1 )
        goto LABEL_56;
      v15->m_Items[1] = (System_String_o *)v17;
      sub_B16F98((BattleServantConfConponent_o *)&v15->m_Items[1], v17, v18, v26, v27, v28, v29, v30);
      v16 = System_Int32__ToString((int32_t)&v70, 0LL);
      v36 = (System_Int32_array **)v16;
      if ( v16 )
      {
        v16 = (System_String_o *)sub_B170BC(v16, v15->obj.klass->_1.element_class);
        if ( !v16 )
          goto LABEL_58;
      }
      if ( v15->max_length <= 2 )
        goto LABEL_56;
      v15->m_Items[2] = (System_String_o *)v36;
      sub_B16F98((BattleServantConfConponent_o *)&v15->m_Items[2], v36, v18, v31, v32, v33, v34, v35);
      v16 = (System_String_o *)StringLiteral_1223;
      if ( StringLiteral_1223 )
      {
        v16 = (System_String_o *)sub_B170BC(StringLiteral_1223, v15->obj.klass->_1.element_class);
        if ( !v16 )
          goto LABEL_58;
        v17 = (System_Int32_array **)StringLiteral_1223;
      }
      else
      {
        v17 = 0LL;
      }
      if ( v15->max_length <= 3 )
      {
LABEL_56:
        sub_B17100(v16, v17, v18);
        sub_B170A0();
      }
      v15->m_Items[3] = (System_String_o *)v17;
      sub_B16F98((BattleServantConfConponent_o *)&v15->m_Items[3], v17, v18, v37, v38, v39, v40, v41);
      v16 = System_Int32__ToString((int32_t)&v69, 0LL);
      v47 = (System_Int32_array **)v16;
      if ( v16 )
      {
        v16 = (System_String_o *)sub_B170BC(v16, v15->obj.klass->_1.element_class);
        if ( !v16 )
          goto LABEL_58;
      }
      if ( v15->max_length <= 4 )
        goto LABEL_56;
      v15->m_Items[4] = (System_String_o *)v47;
      sub_B16F98((BattleServantConfConponent_o *)&v15->m_Items[4], v47, v18, v42, v43, v44, v45, v46);
      v48 = System_String__Concat_43823856(v15, 0LL);
      lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_57;
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
            goto LABEL_29;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_29:
        p_method = sub_AAFEF8(
                     lookup,
                     System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                     0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
              v51,
              v48,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v56 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( v56 )
      {
        v57 = v56->klass;
        v58 = v56;
        if ( *(_WORD *)&v56->klass->_2.bitflags1 )
        {
          v59 = 0LL;
          v60 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v57->_1.interfaceOffsets->offset;
          while ( *(v60 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            ++v59;
            v60 += 2;
            if ( v59 >= *(unsigned __int16 *)&v56->klass->_2.bitflags1 )
              goto LABEL_37;
          }
          v61 = (__int64)&v57->vtable[*(_DWORD *)v60 + 2].method;
        }
        else
        {
LABEL_37:
          v61 = sub_AAFEF8(v56, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
        }
        v63 = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v61)(
                                          v58,
                                          v48,
                                          *(_QWORD *)(v61 + 8));
        if ( v63 )
        {
          v65 = v63;
          v66 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v63->klass->_2.bitflags2 + 1) >= (unsigned int)v66
            && (ServantCommentEntity_c *)v63->klass->_2.typeHierarchy[v66 - 1] == ServantCommentEntity_TypeInfo )
          {
            if ( ServantCommentEntity__IsOpen(v63, -1, 1, v64) )
              v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)v65;
            ++v69;
            v15 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, v67);
            v16 = System_Int32__ToString((int32_t)&v71, 0LL);
            v24 = (System_Int32_array **)v16;
            if ( v15 )
              continue;
          }
        }
      }
      goto LABEL_57;
    }
    if ( v25 )
    {
      if ( !v13 )
        goto LABEL_57;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v13,
        v25,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
      goto LABEL_42;
    }
    if ( !v69 )
      break;
LABEL_42:
    v62 = v70;
LABEL_43:
    v69 = 0;
    v70 = v62 + 1;
    v15 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, v55);
    v16 = System_Int32__ToString((int32_t)&v71, 0LL);
    v24 = (System_Int32_array **)v16;
    v25 = 0LL;
    if ( !v15 )
      goto LABEL_57;
  }
  v62 = v70;
  if ( v70 == 1 )
    goto LABEL_43;
  if ( !v13 )
LABEL_57:
    sub_B170D4();
  return (ServantCommentEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                         (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
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
  WebViewManager_o *Instance; // x0
  ServantCommentAddMaster_o *MasterData_WarQuestSelectionMaster; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_List_int__o *v23; // x23
  WebViewManager_o *v24; // x0
  WebViewManager_o *v25; // x0
  WarQuestSelectionMaster_o *v26; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  int32_t Count; // w0
  int32_t v29; // w26
  int32_t v30; // w27
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v31; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  ServantCommentEntity_o *v33; // x28
  __int64 v34; // x9
  int32_t klass; // w24
  const MethodInfo *v36; // x1
  System_Int32_array *ImageLimit; // x0
  const MethodInfo *v38; // x3
  System_Int32_array *v39; // x22
  int64_t UserId; // x2
  int32_t ServantLimitCountSealAfter; // w0
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x7
  ServantCommentMaster_o *v45; // x0
  int32_t v46; // w1
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  ServantLimitImageMaster_o *v49; // [xsp+8h] [xbp-78h]
  UserServantCollectionMaster_o *v50; // [xsp+10h] [xbp-70h]
  UserServantCollectionEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_40FCEB0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, *(_QWORD *)&questId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B16FFC(&NetworkManager_TypeInfo, v14);
    sub_B16FFC(&ServantCommentEntity_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_40FCEB0 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_WarQuestSelectionMaster = (ServantCommentAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
  v23 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v19,
                                                    v20,
                                                    v21,
                                                    v22);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v24 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v24
    || (v49 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)v24,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        (v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v26 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)v25,
                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
        v50 = (UserServantCollectionMaster_o *)v26,
        !list) )
  {
LABEL_32:
    sub_B170D4();
  }
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return v23;
  v29 = Count;
  v30 = 0;
  while ( 1 )
  {
    v31 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v31 )
      goto LABEL_32;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v31,
             v30,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Item )
      goto LABEL_32;
    v33 = (ServantCommentEntity_o *)Item;
    v34 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v34
      || (ServantCommentEntity_c *)Item->klass->_2.typeHierarchy[v34 - 1] != ServantCommentEntity_TypeInfo )
    {
      break;
    }
    if ( !v23 )
      goto LABEL_32;
    klass = (int32_t)Item[1].klass;
    if ( !System_Collections_Generic_List_int___Contains(
            v23,
            klass,
            (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      ImageLimit = ServantCommentEntity__GetImageLimit(v33, v36);
      if ( !ImageLimit )
        goto LABEL_27;
      v39 = ImageLimit;
      if ( !*(_QWORD *)&ImageLimit->max_length )
        goto LABEL_27;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v50 )
        goto LABEL_32;
      if ( !UserServantCollectionMaster__TryGetEntity(v50, &entity, UserId, klass, 0LL) )
        goto LABEL_27;
      if ( !entity || !v49 )
        goto LABEL_32;
      ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                     v49,
                                     klass,
                                     entity->fields.maxLimitCount,
                                     0LL);
      if ( (System_Array__IndexOf_int_(
              v39,
              ServantLimitCountSealAfter,
              (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
      {
LABEL_27:
        if ( ServantCommentEntity__IsOnlyOpenQuestCond(v33, questId, questPhase, v38) )
          goto LABEL_28;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_32;
        if ( ServantCommentAddMaster__IsOnlyOpenQuestCond(
               MasterData_WarQuestSelectionMaster,
               klass,
               v33->fields.id,
               v33->fields.priority,
               1,
               questId,
               questPhase,
               v43) )
        {
LABEL_28:
          if ( ServantCommentEntity__IsOpen(v33, -1, 1, v42) )
            System_Collections_Generic_List_int___Add(
              v23,
              v33->fields.svtId,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
    }
    if ( ++v30 >= v29 )
      return v23;
  }
  sub_B173C8(Item);
  return (System_Collections_Generic_List_int__o *)ServantCommentMaster__GetServantListWithQuestClearAndImageLimit(
                                                     v45,
                                                     v46,
                                                     v47,
                                                     v48);
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
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v23; // w24
  int32_t v24; // w25
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v25; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v27; // x3
  ServantCommentEntity_o *v28; // x26
  __int64 v29; // x9
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x7
  const MethodInfo *v32; // x1
  bool IsOpen; // w27
  System_Int32_array *ImageLimit; // x0
  ServantCommentMaster_o *v36; // x0
  int32_t v37; // w1
  const MethodInfo *v38; // x2

  if ( (byte_40FCEB1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantCommentAddMaster___, v8);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v13);
    sub_B16FFC(&ServantCommentEntity_TypeInfo, v14);
    byte_40FCEB1 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantCommentAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                                                                  v16,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
  {
LABEL_24:
    if ( v20 )
      return (ServantCommentEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                             (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
LABEL_26:
    sub_B170D4();
  }
  v23 = Count;
  v24 = 0;
  while ( 1 )
  {
    v25 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v25 )
      goto LABEL_26;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v25,
             v24,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Item )
      goto LABEL_26;
    v28 = (ServantCommentEntity_o *)Item;
    v29 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v29
      || (ServantCommentEntity_c *)Item->klass->_2.typeHierarchy[v29 - 1] != ServantCommentEntity_TypeInfo )
    {
      break;
    }
    if ( ServantCommentEntity__IsOnlyOpenQuestCond((ServantCommentEntity_o *)Item, questId, questPhase, v27) )
      goto LABEL_16;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_26;
    if ( ServantCommentAddMaster__IsOnlyOpenQuestCond(
           Master_WarQuestSelectionMaster,
           v28->fields.svtId,
           v28->fields.id,
           v28->fields.priority,
           1,
           questId,
           questPhase,
           v31) )
    {
LABEL_16:
      IsOpen = ServantCommentEntity__IsOpen(v28, -1, 1, v30);
    }
    else
    {
      IsOpen = 0;
    }
    ImageLimit = ServantCommentEntity__GetImageLimit(v28, v32);
    if ( ImageLimit && IsOpen && *(_QWORD *)&ImageLimit->max_length )
    {
      if ( !v20 )
        goto LABEL_26;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v20,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    }
    if ( ++v24 >= v23 )
      goto LABEL_24;
  }
  sub_B173C8(Item);
  return (ServantCommentEntity_array *)ServantCommentMaster__GetNewProfileEntities(v36, v37, v38);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentMaster__IsNew(ServantCommentMaster_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_array *v7; // x21
  System_String_o *v8; // x0
  System_Int32_array **v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **v16; // x22
  ServantCommentEntity_o *v17; // x20
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x22
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x22
  System_String_o *v40; // x21
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v43; // x22
  unsigned __int64 v44; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  const MethodInfo *v47; // x1
  __int64 v48; // x2
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v49; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v50; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v51; // x22
  unsigned __int64 v52; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v53; // x11
  __int64 v54; // x0
  int v55; // w8
  ServantCommentEntity_o *v56; // x0
  const MethodInfo *v57; // x3
  ServantCommentEntity_o *v58; // x21
  __int64 v59; // x10
  __int64 v60; // x2
  int v62; // [xsp+4h] [xbp-4Ch] BYREF
  int v63; // [xsp+8h] [xbp-48h] BYREF
  int32_t v64; // [xsp+Ch] [xbp-44h] BYREF

  v64 = svtId;
  if ( (byte_40FCEAE & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&ServantCommentEntity_TypeInfo, v4);
    sub_B16FFC(&string___TypeInfo, v5);
    sub_B16FFC(&StringLiteral_1223, v6);
    byte_40FCEAE = 1;
  }
  v62 = 0;
  v63 = 1;
  v7 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, method);
  v8 = System_Int32__ToString((int32_t)&v64, 0LL);
  if ( !v7 )
LABEL_56:
    sub_B170D4();
  v16 = (System_Int32_array **)v8;
  v17 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v16 )
      {
        v8 = (System_String_o *)sub_B170BC(v16, v7->obj.klass->_1.element_class);
        if ( !v8 )
        {
LABEL_57:
          sub_B170F4(v8);
          sub_B170A0();
        }
      }
      if ( !v7->max_length )
        goto LABEL_55;
      v7->m_Items[0] = (System_String_o *)v16;
      sub_B16F98((BattleServantConfConponent_o *)v7->m_Items, v16, v10, v11, v12, v13, v14, v15);
      v8 = (System_String_o *)StringLiteral_1223;
      if ( StringLiteral_1223 )
      {
        v8 = (System_String_o *)sub_B170BC(StringLiteral_1223, v7->obj.klass->_1.element_class);
        if ( !v8 )
          goto LABEL_57;
        v9 = (System_Int32_array **)StringLiteral_1223;
      }
      else
      {
        v9 = 0LL;
      }
      if ( v7->max_length <= 1 )
        goto LABEL_55;
      v7->m_Items[1] = (System_String_o *)v9;
      sub_B16F98((BattleServantConfConponent_o *)&v7->m_Items[1], v9, v10, v18, v19, v20, v21, v22);
      v8 = System_Int32__ToString((int32_t)&v63, 0LL);
      v28 = (System_Int32_array **)v8;
      if ( v8 )
      {
        v8 = (System_String_o *)sub_B170BC(v8, v7->obj.klass->_1.element_class);
        if ( !v8 )
          goto LABEL_57;
      }
      if ( v7->max_length <= 2 )
        goto LABEL_55;
      v7->m_Items[2] = (System_String_o *)v28;
      sub_B16F98((BattleServantConfConponent_o *)&v7->m_Items[2], v28, v10, v23, v24, v25, v26, v27);
      v8 = (System_String_o *)StringLiteral_1223;
      if ( StringLiteral_1223 )
      {
        v8 = (System_String_o *)sub_B170BC(StringLiteral_1223, v7->obj.klass->_1.element_class);
        if ( !v8 )
          goto LABEL_57;
        v9 = (System_Int32_array **)StringLiteral_1223;
      }
      else
      {
        v9 = 0LL;
      }
      if ( v7->max_length <= 3 )
      {
LABEL_55:
        sub_B17100(v8, v9, v10);
        sub_B170A0();
      }
      v7->m_Items[3] = (System_String_o *)v9;
      sub_B16F98((BattleServantConfConponent_o *)&v7->m_Items[3], v9, v10, v29, v30, v31, v32, v33);
      v8 = System_Int32__ToString((int32_t)&v62, 0LL);
      v39 = (System_Int32_array **)v8;
      if ( v8 )
      {
        v8 = (System_String_o *)sub_B170BC(v8, v7->obj.klass->_1.element_class);
        if ( !v8 )
          goto LABEL_57;
      }
      if ( v7->max_length <= 4 )
        goto LABEL_55;
      v7->m_Items[4] = (System_String_o *)v39;
      sub_B16F98((BattleServantConfConponent_o *)&v7->m_Items[4], v39, v10, v34, v35, v36, v37, v38);
      v40 = System_String__Concat_43823856(v7, 0LL);
      lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_56;
      klass = lookup->klass;
      v43 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v44 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v44;
          p_offset += 4;
          if ( v44 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_29;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_29:
        p_method = sub_AAFEF8(
                     lookup,
                     System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                     0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
              v43,
              v40,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v49 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( v49 )
      {
        v50 = v49->klass;
        v51 = v49;
        if ( *(_WORD *)&v49->klass->_2.bitflags1 )
        {
          v52 = 0LL;
          v53 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v50->_1.interfaceOffsets->offset;
          while ( *(v53 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            ++v52;
            v53 += 2;
            if ( v52 >= *(unsigned __int16 *)&v49->klass->_2.bitflags1 )
              goto LABEL_37;
          }
          v54 = (__int64)&v50->vtable[*(_DWORD *)v53 + 2].method;
        }
        else
        {
LABEL_37:
          v54 = sub_AAFEF8(v49, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
        }
        v56 = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v54)(
                                          v51,
                                          v40,
                                          *(_QWORD *)(v54 + 8));
        if ( v56 )
        {
          v58 = v56;
          v59 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v56->klass->_2.bitflags2 + 1) >= (unsigned int)v59
            && (ServantCommentEntity_c *)v56->klass->_2.typeHierarchy[v59 - 1] == ServantCommentEntity_TypeInfo )
          {
            if ( ServantCommentEntity__IsOpen(v56, -1, 1, v57) )
              v17 = v58;
            ++v62;
            v7 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, v60);
            v8 = System_Int32__ToString((int32_t)&v64, 0LL);
            v16 = (System_Int32_array **)v8;
            if ( v7 )
              continue;
          }
        }
      }
      goto LABEL_56;
    }
    if ( v17 )
    {
      if ( ServantCommentEntity__IsNew(v17, v47) )
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
    v7 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, v48);
    v8 = System_Int32__ToString((int32_t)&v64, 0LL);
    v16 = (System_Int32_array **)v8;
    v17 = 0LL;
    if ( !v7 )
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v16; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  ServantCommentEntity_o *v26; // x0
  ServantCommentEntity_o *v27; // x22
  __int64 v28; // x9
  System_Int32_array *ImageLimit; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Collections_Generic_IEnumerable_T__o *v34; // x24
  System_Collections_Generic_List_int__o *v35; // x23
  const MethodInfo *v36; // x3
  int v37; // w8
  bool v38; // w20
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0
  int v45; // [xsp+10h] [xbp-60h]

  if ( (byte_40FCEB3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6);
    sub_B16FFC(&System_IDisposable_TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Sort__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B16FFC(&ServantCommentEntity_TypeInfo, v14);
    byte_40FCEB3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list
    || (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
        (v16 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
    sub_B170D4();
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 v16,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_17:
      v25 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                      Enumerator,
                                      *(_QWORD *)(v25 + 8));
    v27 = v26;
    if ( !v26 )
      goto LABEL_45;
    v28 = *(&ServantCommentEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v28
      || (ServantCommentEntity_c *)v26->klass->_2.typeHierarchy[v28 - 1] != ServantCommentEntity_TypeInfo )
    {
      sub_B173C8(v26);
LABEL_45:
      sub_B170D4();
    }
    if ( v26->fields.svtId == svtId )
    {
      ImageLimit = ServantCommentEntity__GetImageLimit(v26, (const MethodInfo *)ServantCommentEntity_TypeInfo);
      v34 = (System_Collections_Generic_IEnumerable_T__o *)ImageLimit;
      if ( ImageLimit )
      {
        if ( *(_QWORD *)&ImageLimit->max_length )
        {
          v35 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                            System_Collections_Generic_List_int__TypeInfo,
                                                            v30,
                                                            v31,
                                                            v32,
                                                            v33);
          System_Collections_Generic_List_int____ctor_49346956(
            v35,
            v34,
            (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
          if ( !v35 )
            sub_B170D4();
          System_Collections_Generic_List_int___Sort(
            v35,
            (const MethodInfo_2F12410 *)Method_System_Collections_Generic_List_int__Sort__);
          if ( !v35->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v37 = v35->fields._items->m_Items[1];
          if ( v37 >= 3 )
          {
            if ( !v35->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            if ( v37 == limitCount && ServantCommentEntity__IsOpen(v27, -1, 1, v36) )
            {
              v45 = 131;
              v38 = 1;
              goto LABEL_35;
            }
          }
        }
      }
    }
  }
  v38 = 0;
  v45 = 129;
LABEL_35:
  v39 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v40 = 0LL;
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      ++v40;
      v41 += 4;
      if ( v40 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v42 = (__int64)&v39->vtable[*v41].method;
  }
  else
  {
LABEL_39:
    v42 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(Enumerator, *(_QWORD *)(v42 + 8));
  if ( v45 == 129 )
    return 0;
  return v38;
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
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  System_String_o *v35; // x0
  System_String_o *v36; // x20
  Il2CppObject *Name; // x0
  System_String_o *v38; // x20
  CommonUI_o *Instance; // x21
  System_String_o *v40; // x22
  System_String_o *v41; // x23
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  CommonConfirmDialog_ClickDelegate_o *v46; // x24
  WarEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_40FCEB4 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&limitCount);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_B16FFC(&DataManager_TypeInfo, v11);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B16FFC(&Method_ServantCommentMaster___c__DisplayClass16_0__OpenSaintGraphProfileChange_b__0__, v15);
    sub_B16FFC(&ServantCommentMaster___c__DisplayClass16_0_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_10872, v17);
    sub_B16FFC(&StringLiteral_10871, v18);
    sub_B16FFC(&StringLiteral_1, v19);
    sub_B16FFC(&StringLiteral_10869, v20);
    byte_40FCEB4 = 1;
  }
  entity = 0LL;
  v21 = sub_B170CC(
          ServantCommentMaster___c__DisplayClass16_0_TypeInfo,
          *(_QWORD *)&limitCount,
          decideAction,
          endAction,
          method);
  ServantCommentMaster___c__DisplayClass16_0___ctor((ServantCommentMaster___c__DisplayClass16_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_17;
  *(_QWORD *)(v21 + 16) = decideAction;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v21 + 16),
    (System_Int32_array **)decideAction,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  *(_QWORD *)(v21 + 32) = endAction;
  *(_DWORD *)(v21 + 24) = svtId;
  *(_DWORD *)(v21 + 28) = limitCount;
  sub_B16F98((BattleServantConfConponent_o *)(v21 + 32), (System_Int32_array **)endAction, v28, v29, v30, v31, v32, v33);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_17;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    Master_WarQuestSelectionMaster,
    &entity,
    *(_DWORD *)(v21 + 24),
    (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_10872, 0LL);
  if ( !entity )
    goto LABEL_17;
  v36 = v35;
  Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)entity, *(_DWORD *)(v21 + 28), -1, 0LL);
  v38 = System_String__Format(v36, Name, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_10871, 0LL);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_10869, 0LL);
  v46 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                 CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                 v42,
                                                 v43,
                                                 v44,
                                                 v45);
  CommonConfirmDialog_ClickDelegate___ctor(
    v46,
    (Il2CppObject *)v21,
    Method_ServantCommentMaster___c__DisplayClass16_0__OpenSaintGraphProfileChange_b__0__,
    0LL);
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !Instance )
LABEL_17:
    sub_B170D4();
  CommonUI__OpenConfirmDialogOnFade(
    Instance,
    (System_String_o *)StringLiteral_1,
    v38,
    v40,
    v41,
    v46,
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
  if ( (byte_40FCEAC & 1) == 0 )
  {
    sub_B16FFC(&ServantCommentManager_TypeInfo, *(_QWORD *)&svtId);
    byte_40FCEAC = 1;
  }
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ServantCommentManager__IsOpen(svtId, svtCommentId, svtCommentPriority, *(const MethodInfo **)&svtCommentPriority);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommentMaster__SetOpen_30500108(
        ServantCommentMaster_o *this,
        int32_t svtId,
        System_Int32_array *svtCommentIdList,
        System_Int32_array *svtCommentPriorityList,
        const MethodInfo *method)
{
  if ( (byte_40FCEAD & 1) == 0 )
  {
    sub_B16FFC(&ServantCommentManager_TypeInfo, *(_QWORD *)&svtId);
    byte_40FCEAD = 1;
  }
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ServantCommentManager__SetOpen_30489560(
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

  if ( (byte_40FCEA7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__, entity);
    sub_B16FFC(&ServantCommentEntity_TypeInfo, v11);
    byte_40FCEA7 = 1;
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
           (const MethodInfo_266F830 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommentMaster_ProfileChangeDecideDelegate___ctor(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F761D & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, *(_QWORD *)&svtid);
    sub_B16FFC(&int_TypeInfo, v12);
    byte_40F761D = 1;
  }
  v14[4] = 0LL;
  v14[0] = j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v14[2] = j_il2cpp_value_box_0(bool_TypeInfo, v15);
  v14[3] = (__int64)finishCallback;
  return (System_IAsyncResult_o *)sub_B16FA0(this, v14, callback, object);
}


void __fastcall ServantCommentMaster_ProfileChangeDecideDelegate__EndInvoke(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&svtid, *(_QWORD *)&limitCount);
      if ( (sub_B1702C(v25) & 1) == 0 )
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
      v27 = sub_B17024(v25);
      v28 = sub_B17428(v25);
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
            v21 = sub_AAFEF8(v24, v30, v31);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, bool, System_Action_o *, _QWORD))sub_B170AC(v20, v25);
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
            v19 = sub_AAFEF8(v24, class_0, v14);
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
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v12; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__1; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40F761B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDcd);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&Method_ServantCommentMaster___c__DisplayClass17_0__DefaultProfileChangeDecideAction_b__1__, v6);
    byte_40F761B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v12 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantCommentMaster___c__DisplayClass17_0__DefaultProfileChangeDecideAction_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, _9__1, 0LL);
}


void __fastcall ServantCommentMaster___c__DisplayClass17_0___DefaultProfileChangeDecideAction_b__1(
        ServantCommentMaster___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  CommonUI_o *v5; // x20

  if ( (byte_40F761C & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_40F761C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
  v5 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v5 )
LABEL_9:
    sub_B170D4();
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}