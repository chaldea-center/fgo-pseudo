void ServantCommentMaster___ctor(ServantCommentMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5971156 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__);
    byte_5971156 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    2,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__);
}


void ServantCommentMaster__DefaultProfileChangeDecideAction(
        int32_t svtId,
        int32_t limitCount,
        bool isDecide,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v9; // x20
  CommonUI_o *Instance; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  Il2CppObject *Master_object; // x23
  CommonUI_o *v20; // x21
  Il2CppObject *v21; // x22
  UserServantCollectionEntity_o *v22; // x21
  ServantStatusDialog_EndDelegate_o *v23; // x23
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5971160 & 1) == 0 )
  {
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ServantCommentMaster___c__DisplayClass13_0__DefaultProfileChangeDecideAction_b__0__);
    sub_2213A60(&ServantCommentMaster___c__DisplayClass13_0_TypeInfo);
    byte_5971160 = 1;
  }
  entity = 0;
  v9 = sub_2213CCC(ServantCommentMaster___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_23;
  *(_QWORD *)(v9 + 16) = endAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)endAction, v12, v13, v14, v15, v16, v17);
  if ( isDecide )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    Instance = (CommonUI_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
      Instance = (CommonUI_o *)NetworkManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_23;
    if ( UserServantCollectionMaster__TryGetEntity(
           (UserServantCollectionMaster_o *)Master_object,
           &entity,
           (int64_t)Instance->fields.errorDialog->fields.baseCallbackFunc,
           svtId,
           0) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v20 = Instance;
      if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
      if ( v20 )
      {
        CommonUI__maskFadein(v20, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( Instance )
        {
          CommonUI__CloseConfirmDialog(Instance, 0);
          v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v22 = entity;
          v23 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v23,
            (Il2CppObject *)v9,
            Method_ServantCommentMaster___c__DisplayClass13_0__DefaultProfileChangeDecideAction_b__0__,
            0);
          if ( v21 )
          {
            CommonUI__OpenServantStatusDialog_37385140((CommonUI_o *)v21, 33, v22, limitCount, v23, 0);
            return;
          }
        }
      }
LABEL_23:
      sub_2213CDC(Instance, v11);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  CommonUI__CloseConfirmDialog_37373868(Instance, *(System_Action_o **)(v9 + 16), 0);
}


// local variable allocation has failed, the output may be wrong!
ServantCommentEntity_o *ServantCommentMaster__GetEntity(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5971154 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__);
    sub_2213A60(&ServantCommentEntity_TypeInfo);
    byte_5971154 = 1;
  }
  if ( !*(&ServantCommentEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo, *(_QWORD *)&svtId);
  PK = (Il2CppObject *)ServantCommentEntity__CreatePK(svtId, id, priority, *(const MethodInfo **)&priority);
  return (ServantCommentEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_3F157EC *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__);
}


ServantCommentEntity_array *ServantCommentMaster__GetEntityList(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t condType,
        bool addCheck,
        bool overLimit,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v10; // x24
  __int64 v11; // x26
  __int64 lookup; // x0
  const MethodInfo *v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  Il2CppObject *v20; // x25
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  int32_t v27; // w1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_String_o *v47; // x26
  __int64 v48; // x8
  __int64 v49; // x27
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  __int64 v59; // x8
  __int64 v60; // x27
  __int64 v61; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v62; // x10
  __int64 v63; // x0
  struct System_Object_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  Il2CppClass **v67; // x0
  int32_t v68; // w8
  ServantCommentEntity_o *v69; // x26
  System_Int32_array *ImageLimit; // x0
  const MethodInfo *v71; // x3
  il2cpp_array_size_t max_length; // x8
  int32_t *m_Items; // x9
  int32_t v74; // t1
  char v75; // w2
  const MethodInfo *v76; // x5
  ServantCommentEntity_o *v77; // x0
  int32_t v81; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v82; // [xsp+18h] [xbp-68h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_5971157 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantCommentAddMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
    sub_2213A60(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    byte_5971157 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v81 = 0;
  v82 = 1;
  v11 = sub_2213B20(string___TypeInfo, 5);
  lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
  if ( !v11 )
    goto LABEL_67;
  v13 = (const MethodInfo *)lookup;
  v20 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v11 + 24) )
        goto LABEL_70;
      *(_QWORD *)(v11 + 32) = v13;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 32), (int32_t)v13, v14, v15, v16, v17, v18, v19);
      if ( (*(_DWORD *)(v11 + 24) & 0xFFFFFFFE) == 0 )
        goto LABEL_70;
      v27 = StringLiteral_1533/*":"*/;
      *(_QWORD *)(v11 + 40) = StringLiteral_1533/*":"*/;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 40), v27, v21, v22, v23, v24, v25, v26);
      lookup = (__int64)System_Int32__ToString((int32_t)&v82, 0);
      if ( *(_DWORD *)(v11 + 24) <= 2u
        || (*(_QWORD *)(v11 + 48) = lookup,
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 48), lookup, v28, v29, v30, v31, v32, v33),
            (*(_DWORD *)(v11 + 24) & 0xFFFFFFFC) == 0)
        || (v40 = StringLiteral_1533/*":"*/,
            *(_QWORD *)(v11 + 56) = StringLiteral_1533/*":"*/,
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 56), v40, v34, v35, v36, v37, v38, v39),
            lookup = (__int64)System_Int32__ToString((int32_t)&v81, 0),
            *(_DWORD *)(v11 + 24) <= 4u) )
      {
LABEL_70:
        sub_2213CE4(lookup);
      }
      *(_QWORD *)(v11 + 64) = lookup;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 64), lookup, v41, v42, v43, v44, v45, v46);
      v47 = System_String__Concat_75697120((System_String_array *)v11, 0);
      lookup = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_3F134B8 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_67;
      v48 = *(_QWORD *)lookup;
      v49 = lookup;
      v50 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v51 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)v51 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v50;
          v51 += 4;
          if ( !v50 )
            goto LABEL_15;
        }
        v52 = v48 + 16LL * *v51 + 312;
      }
      else
      {
LABEL_15:
        v52 = sub_224BC3C(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v52)(v49, v47, *(_QWORD *)(v52 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_3F134B8 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_67;
      v59 = *(_QWORD *)lookup;
      v60 = lookup;
      v61 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v62 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)(*(_QWORD *)(v59 + 176)
                                                                                                + 8LL);
        while ( *(v62 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v61;
          v62 += 2;
          if ( !v61 )
            goto LABEL_23;
        }
        v63 = v59 + 16LL * (*(_DWORD *)v62 + 2) + 312;
      }
      else
      {
LABEL_23:
        v63 = sub_224BC3C(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                2);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v63)(v60, v47, *(_QWORD *)(v63 + 8));
      if ( !lookup )
        goto LABEL_67;
      v69 = (ServantCommentEntity_o *)lookup;
      ImageLimit = ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)lookup, v13);
      if ( imageLimitCount != -1 )
      {
        if ( ImageLimit )
        {
          max_length = ImageLimit->max_length;
          if ( max_length )
          {
            if ( overLimit )
            {
              if ( (int)max_length < 1 )
                goto LABEL_66;
              m_Items = ImageLimit->m_Items;
              while ( 1 )
              {
                v74 = *m_Items++;
                if ( v74 <= imageLimitCount )
                  break;
                LODWORD(max_length) = max_length - 1;
                if ( !(_DWORD)max_length )
                  goto LABEL_66;
              }
            }
            else if ( System_Array__IndexOf_int_(
                        ImageLimit,
                        imageLimitCount,
                        (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___) < 0 )
            {
              goto LABEL_66;
            }
          }
        }
      }
      if ( condType && v69->fields.condType != condType )
      {
        if ( !addCheck )
          goto LABEL_66;
        lookup = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lookup )
          goto LABEL_67;
        lookup = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)lookup,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
        if ( !lookup )
          goto LABEL_67;
        if ( !ServantCommentAddMaster__IsEntityListCondContain(
                (ServantCommentAddMaster_o *)lookup,
                svtIda,
                v82,
                v81,
                condType,
                v76) )
          goto LABEL_66;
        if ( !v20 )
          goto LABEL_65;
        v77 = v69;
        v75 = 1;
      }
      else
      {
        if ( addCheck )
        {
          v75 = 1;
          if ( !v20 )
            goto LABEL_65;
        }
        else if ( v81 < 1 )
        {
          v75 = 0;
          if ( !v20 )
            goto LABEL_65;
        }
        else
        {
          v75 = v69->fields.condType == 0;
          if ( !v20 )
            goto LABEL_65;
        }
        v77 = v69;
      }
      if ( ServantCommentEntity__IsOpen(v77, -1, v75, v71) )
LABEL_65:
        v20 = (Il2CppObject *)v69;
LABEL_66:
      ++v81;
      v11 = sub_2213B20(string___TypeInfo, 5);
      lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
      v13 = (const MethodInfo *)lookup;
      if ( !v11 )
        goto LABEL_67;
    }
    if ( v20 )
    {
      if ( !v10 )
        goto LABEL_67;
      items = v10->fields._items;
      v65 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v10->fields._version;
      if ( !items )
        goto LABEL_67;
      size = v10->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          v20,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
      }
      else
      {
        v67 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v67[4] = (Il2CppClass *)v20;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v67 + 4), (int32_t)v20, v53, v54, v55, v56, v57, v58);
      }
LABEL_44:
      v68 = v82;
      goto LABEL_45;
    }
    if ( v81 )
      goto LABEL_44;
    v68 = v82;
    if ( v82 != 1 )
      break;
LABEL_45:
    v81 = 0;
    v82 = v68 + 1;
    v11 = sub_2213B20(string___TypeInfo, 5);
    lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
    v13 = (const MethodInfo *)lookup;
    v20 = 0;
    if ( !v11 )
      goto LABEL_67;
  }
  if ( !v10 )
LABEL_67:
    sub_2213CDC(lookup, v13);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v10,
                                         (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


ServantCommentEntity_array *ServantCommentMaster__GetEntityListWithImageList(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t condType,
        bool addCheck,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v8; // x23
  __int64 v9; // x25
  __int64 lookup; // x0
  const MethodInfo *v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x24
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t v25; // w1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int32_t v38; // w1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_String_o *v45; // x25
  __int64 v46; // x8
  __int64 v47; // x26
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  __int64 v57; // x8
  __int64 v58; // x26
  __int64 v59; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v60; // x10
  __int64 v61; // x0
  ServantCommentEntity_o *v62; // x25
  System_Int32_array *ImageLimit; // x0
  il2cpp_array_size_t max_length; // x9
  __int64 v65; // x8
  char v66; // w10
  char *v67; // x11
  const MethodInfo *v68; // x3
  struct System_Object_array *items; // x8
  _QWORD *v70; // x9
  __int64 size; // x10
  Il2CppClass **v72; // x0
  int32_t v73; // w8
  const MethodInfo *v74; // x5
  int32_t v78; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v79; // [xsp+18h] [xbp-68h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_5971158 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantCommentAddMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
    sub_2213A60(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    byte_5971158 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v78 = 0;
  v79 = 1;
  v9 = sub_2213B20(string___TypeInfo, 5);
  lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
  if ( !v9 )
    goto LABEL_60;
  v11 = (const MethodInfo *)lookup;
  v18 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v9 + 24) )
        goto LABEL_59;
      *(_QWORD *)(v9 + 32) = v11;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)v11, v12, v13, v14, v15, v16, v17);
      if ( (*(_DWORD *)(v9 + 24) & 0xFFFFFFFE) == 0 )
        goto LABEL_59;
      v25 = StringLiteral_1533/*":"*/;
      *(_QWORD *)(v9 + 40) = StringLiteral_1533/*":"*/;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 40), v25, v19, v20, v21, v22, v23, v24);
      lookup = (__int64)System_Int32__ToString((int32_t)&v79, 0);
      if ( *(_DWORD *)(v9 + 24) <= 2u
        || (*(_QWORD *)(v9 + 48) = lookup,
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 48), lookup, v26, v27, v28, v29, v30, v31),
            (*(_DWORD *)(v9 + 24) & 0xFFFFFFFC) == 0)
        || (v38 = StringLiteral_1533/*":"*/,
            *(_QWORD *)(v9 + 56) = StringLiteral_1533/*":"*/,
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 56), v38, v32, v33, v34, v35, v36, v37),
            lookup = (__int64)System_Int32__ToString((int32_t)&v78, 0),
            *(_DWORD *)(v9 + 24) <= 4u) )
      {
LABEL_59:
        sub_2213CE4(lookup);
      }
      *(_QWORD *)(v9 + 64) = lookup;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 64), lookup, v39, v40, v41, v42, v43, v44);
      v45 = System_String__Concat_75697120((System_String_array *)v9, 0);
      lookup = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_3F134B8 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_60;
      v46 = *(_QWORD *)lookup;
      v47 = lookup;
      v48 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v49 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)v49 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v48;
          v49 += 4;
          if ( !v48 )
            goto LABEL_15;
        }
        v50 = v46 + 16LL * *v49 + 312;
      }
      else
      {
LABEL_15:
        v50 = sub_224BC3C(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v50)(v47, v45, *(_QWORD *)(v50 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_3F134B8 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_60;
      v57 = *(_QWORD *)lookup;
      v58 = lookup;
      v59 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v60 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)(*(_QWORD *)(v57 + 176)
                                                                                                + 8LL);
        while ( *(v60 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v59;
          v60 += 2;
          if ( !v59 )
            goto LABEL_23;
        }
        v61 = v57 + 16LL * (*(_DWORD *)v60 + 2) + 312;
      }
      else
      {
LABEL_23:
        v61 = sub_224BC3C(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                2);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v61)(v58, v45, *(_QWORD *)(v61 + 8));
      if ( !lookup )
        goto LABEL_60;
      v62 = (ServantCommentEntity_o *)lookup;
      ImageLimit = ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)lookup, v11);
      if ( ImageLimit )
      {
        max_length = ImageLimit->max_length;
        if ( max_length )
        {
          if ( (int)max_length >= 1 )
          {
            v65 = 0;
            v66 = 0;
            do
            {
              v67 = (char *)ImageLimit + v65;
              v65 += 4;
              v66 |= *((_DWORD *)v67 + 8) > 2;
            }
            while ( 4LL * (unsigned int)ImageLimit->max_length != v65 );
            if ( (v66 & 1) != 0
              && (System_Array__IndexOf_int_(
                    ImageLimit,
                    imageLimitCount,
                    (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___)
                & 0x80000000) == 0 )
            {
              if ( !condType || v62->fields.condType == condType )
                goto LABEL_50;
              if ( addCheck )
              {
                lookup = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !lookup )
                  goto LABEL_60;
                lookup = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)lookup,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
                if ( !lookup )
                  goto LABEL_60;
                if ( ServantCommentAddMaster__IsEntityListCondContain(
                       (ServantCommentAddMaster_o *)lookup,
                       svtIda,
                       v79,
                       v78,
                       condType,
                       v74) )
                {
LABEL_50:
                  if ( !v18 || ServantCommentEntity__IsOpen(v62, -1, 1, v68) )
                    v18 = (Il2CppObject *)v62;
                }
              }
            }
          }
        }
      }
      ++v78;
      v9 = sub_2213B20(string___TypeInfo, 5);
      lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
      v11 = (const MethodInfo *)lookup;
      if ( !v9 )
        goto LABEL_60;
    }
    if ( v18 )
    {
      if ( !v8 )
        goto LABEL_60;
      items = v8->fields._items;
      v70 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v8->fields._version;
      if ( !items )
        goto LABEL_60;
      size = v8->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          v18,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
      }
      else
      {
        v72 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v72[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v72 + 4), (int32_t)v18, v51, v52, v53, v54, v55, v56);
      }
LABEL_44:
      v73 = v79;
      goto LABEL_45;
    }
    if ( v78 )
      goto LABEL_44;
    v73 = v79;
    if ( v79 != 1 )
      break;
LABEL_45:
    v78 = 0;
    v79 = v73 + 1;
    v9 = sub_2213B20(string___TypeInfo, 5);
    lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
    v11 = (const MethodInfo *)lookup;
    v18 = 0;
    if ( !v9 )
      goto LABEL_60;
  }
  if ( !v8 )
LABEL_60:
    sub_2213CDC(lookup, v11);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v8,
                                         (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


bool ServantCommentMaster__GetNewList(
        ServantCommentMaster_o *this,
        System_Int32_array **idList,
        System_Int32_array **priorityList,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 id; // x1
  Il2CppObject *MasterData_object; // x25
  int32_t ServantLimitCountSealAfter; // w24
  int32_t v13; // w24
  System_Collections_Generic_List_int__o *v14; // x25
  System_Collections_Generic_List_int__o *v15; // x26
  __int64 v16; // x28
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  ServantCommentEntity_o *v23; // x27
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  int32_t v30; // w1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  int32_t v43; // w1
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  System_String_o *v50; // x28
  __int64 v51; // x8
  __int64 v52; // x29
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  const MethodInfo *v56; // x1
  __int64 v57; // x8
  __int64 v58; // x29
  __int64 v59; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v60; // x10
  __int64 v61; // x0
  ServantCommentEntity_o *v62; // x28
  const MethodInfo *v63; // x3
  __int64 v64; // x8
  int v65; // w29
  int v66; // w8
  int v67; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v69; // x9
  __int64 size; // x10
  struct System_Int32_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  struct System_Int32_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  int v77; // w8
  struct System_Int32_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  System_Int32_array *v81; // x0
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  System_Int32_array *v88; // x0
  System_String_o *v89; // x2
  System_String_o *v90; // x3
  int32_t v91; // w4
  int32_t v92; // w5
  bool v93; // w6
  bool v94; // w7
  MissionNaviTransitionBoardItem_o *v96; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_List_int__o *v97; // [xsp+18h] [xbp-88h]
  System_Collections_Generic_List_int__o *v98; // [xsp+20h] [xbp-80h]
  int v99; // [xsp+28h] [xbp-78h] BYREF
  int v100; // [xsp+2Ch] [xbp-74h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+30h] [xbp-70h] BYREF
  int32_t svtIda; // [xsp+3Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_597115A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
    sub_2213A60(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    byte_597115A = 1;
  }
  entity = 0;
  v100 = 0;
  v99 = 0;
  v98 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v98,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v97 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v97,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_100;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, id);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (__int64)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, id);
    Instance = (__int64)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_100;
  Instance = UserServantCollectionMaster__TryGetEntity(
               (UserServantCollectionMaster_o *)MasterData_object,
               &entity,
               *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
               svtId,
               0);
  ServantLimitCountSealAfter = 1;
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_100;
    v13 = entity->fields.maxLimitCount <= 1u ? 1 : entity->fields.maxLimitCount;
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_100;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Instance )
      goto LABEL_100;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   svtIda,
                                   v13,
                                   0);
  }
  v96 = (MissionNaviTransitionBoardItem_o *)priorityList;
  v100 = 1;
  while ( 2 )
  {
    v99 = 0;
    v14 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v14,
      (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
    v15 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v15,
      (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
    v16 = sub_2213B20(string___TypeInfo, 5);
    Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
    if ( !v16 )
      goto LABEL_100;
    id = Instance;
    v23 = 0;
    while ( 1 )
    {
      if ( !*(_DWORD *)(v16 + 24) )
        goto LABEL_99;
      *(_QWORD *)(v16 + 32) = id;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 32), id, v17, v18, v19, v20, v21, v22);
      if ( (*(_DWORD *)(v16 + 24) & 0xFFFFFFFE) == 0 )
        goto LABEL_99;
      v30 = StringLiteral_1533/*":"*/;
      *(_QWORD *)(v16 + 40) = StringLiteral_1533/*":"*/;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 40), v30, v24, v25, v26, v27, v28, v29);
      Instance = (__int64)System_Int32__ToString((int32_t)&v100, 0);
      if ( *(_DWORD *)(v16 + 24) <= 2u
        || (*(_QWORD *)(v16 + 48) = Instance,
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 48), Instance, v31, v32, v33, v34, v35, v36),
            (*(_DWORD *)(v16 + 24) & 0xFFFFFFFC) == 0)
        || (v43 = StringLiteral_1533/*":"*/,
            *(_QWORD *)(v16 + 56) = StringLiteral_1533/*":"*/,
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 56), v43, v37, v38, v39, v40, v41, v42),
            Instance = (__int64)System_Int32__ToString((int32_t)&v99, 0),
            *(_DWORD *)(v16 + 24) <= 4u) )
      {
LABEL_99:
        sub_2213CE4(Instance);
      }
      *(_QWORD *)(v16 + 64) = Instance;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 64), Instance, v44, v45, v46, v47, v48, v49);
      v50 = System_String__Concat_75697120((System_String_array *)v16, 0);
      Instance = (__int64)DataMasterBase_object__object__object___get_lookup(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            (const MethodInfo_3F134B8 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !Instance )
        goto LABEL_100;
      v51 = *(_QWORD *)Instance;
      v52 = Instance;
      v53 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v54 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)v54 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v53;
          v54 += 4;
          if ( !v53 )
            goto LABEL_32;
        }
        v55 = v51 + 16LL * *v54 + 312;
      }
      else
      {
LABEL_32:
        v55 = sub_224BC3C(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v55)(v52, v50, *(_QWORD *)(v55 + 8)) & 1) == 0 )
        break;
      Instance = (__int64)DataMasterBase_object__object__object___get_lookup(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            (const MethodInfo_3F134B8 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !Instance )
        goto LABEL_100;
      v57 = *(_QWORD *)Instance;
      v58 = Instance;
      v59 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v60 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)(*(_QWORD *)(v57 + 176)
                                                                                                + 8LL);
        while ( *(v60 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v59;
          v60 += 2;
          if ( !v59 )
            goto LABEL_40;
        }
        v61 = v57 + 16LL * (*(_DWORD *)v60 + 2) + 312;
      }
      else
      {
LABEL_40:
        v61 = sub_224BC3C(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                2);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v61)(v58, v50, *(_QWORD *)(v61 + 8));
      if ( !Instance )
        goto LABEL_100;
      v62 = (ServantCommentEntity_o *)Instance;
      Instance = (__int64)ServantCommentEntity__GetImageLimit(
                            (ServantCommentEntity_o *)Instance,
                            (const MethodInfo *)id);
      if ( !Instance || (v64 = *(_QWORD *)(Instance + 24)) == 0 )
      {
        if ( ServantCommentEntity__IsOpen(v62, -1, 0, v63) )
          v23 = v62;
        goto LABEL_72;
      }
      if ( !(_DWORD)v64 )
        goto LABEL_99;
      v65 = *(_DWORD *)(Instance + 32);
      if ( v65 <= 2 )
      {
        Instance = ServantCommentEntity__IsOpen(v62, -1, 0, v63);
        if ( (Instance & 1) != 0 )
          goto LABEL_55;
      }
      else if ( ServantLimitCountSealAfter >= v65 )
      {
        Instance = ServantCommentEntity__IsOpen(v62, -1, 0, v63);
        if ( (Instance & 1) != 0 )
          goto LABEL_60;
      }
      v62 = v23;
      if ( !v23 )
        goto LABEL_72;
LABEL_55:
      if ( v65 == 1 )
      {
        if ( !v14 )
          goto LABEL_100;
        v66 = v14->fields._version + 1;
        v14->fields._size = 0;
        v14->fields._version = v66;
        if ( !v15 )
          goto LABEL_100;
        v67 = v15->fields._version + 1;
        v15->fields._size = 0;
        v15->fields._version = v67;
        Instance = ServantCommentEntity__IsNew(v62, (const MethodInfo *)id);
        if ( (Instance & 1) == 0 )
          goto LABEL_71;
        goto LABEL_62;
      }
LABEL_60:
      Instance = ServantCommentEntity__IsNew(v62, (const MethodInfo *)id);
      if ( (Instance & 1) == 0 )
        goto LABEL_71;
      if ( !v14 )
        goto LABEL_100;
LABEL_62:
      items = v14->fields._items;
      id = (unsigned int)v62->fields.id;
      v69 = Method_System_Collections_Generic_List_int__Add__;
      ++v14->fields._version;
      if ( !items )
        goto LABEL_100;
      size = v14->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v14,
          id,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
      }
      else
      {
        v14->fields._size = size + 1;
        items->m_Items[size] = id;
      }
      if ( !v15 )
        goto LABEL_100;
      v71 = v15->fields._items;
      id = (unsigned int)v62->fields.priority;
      v72 = Method_System_Collections_Generic_List_int__Add__;
      ++v15->fields._version;
      if ( !v71 )
        goto LABEL_100;
      v73 = v15->fields._size;
      if ( (unsigned int)v73 >= LODWORD(v71->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v15,
          id,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
LABEL_71:
        v23 = 0;
        goto LABEL_72;
      }
      v23 = 0;
      v15->fields._size = v73 + 1;
      v71->m_Items[v73] = id;
LABEL_72:
      ++v99;
      v16 = sub_2213B20(string___TypeInfo, 5);
      Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
      id = Instance;
      if ( !v16 )
        goto LABEL_100;
    }
    if ( v23 )
    {
      if ( !ServantCommentEntity__IsNew(v23, v56) )
        goto LABEL_93;
      Instance = (__int64)v98;
      if ( !v98 )
        goto LABEL_100;
      v74 = v98->fields._items;
      id = (unsigned int)v23->fields.id;
      v75 = Method_System_Collections_Generic_List_int__Add__;
      ++v98->fields._version;
      if ( !v74 )
        goto LABEL_100;
      v76 = v98->fields._size;
      if ( (unsigned int)v76 >= LODWORD(v74->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v98,
          id,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
      }
      else
      {
        v98->fields._size = v76 + 1;
        v74->m_Items[v76] = id;
      }
      Instance = (__int64)v97;
      if ( !v97 )
        goto LABEL_100;
      v78 = v97->fields._items;
      id = (unsigned int)v23->fields.priority;
      v79 = Method_System_Collections_Generic_List_int__Add__;
      ++v97->fields._version;
      if ( !v78 )
        goto LABEL_100;
      v80 = v97->fields._size;
      if ( (unsigned int)v80 >= LODWORD(v78->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v97,
          id,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
      }
      else
      {
        v97->fields._size = v80 + 1;
        v78->m_Items[v80] = id;
      }
LABEL_93:
      v77 = v100;
LABEL_94:
      v100 = v77 + 1;
      continue;
    }
    break;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v14, 0) )
  {
    Instance = (__int64)v98;
    if ( v98 )
    {
      System_Collections_Generic_List_int___AddRange(
        v98,
        (System_Collections_Generic_IEnumerable_T__o *)v14,
        (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
      Instance = (__int64)v97;
      if ( v97 )
      {
        System_Collections_Generic_List_int___AddRange(
          v97,
          (System_Collections_Generic_IEnumerable_T__o *)v15,
          (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
        goto LABEL_93;
      }
    }
    goto LABEL_100;
  }
  if ( v99 )
    goto LABEL_93;
  v77 = v100;
  if ( v100 == 1 )
    goto LABEL_94;
  Instance = (__int64)v98;
  if ( !v98
    || (v81 = System_Collections_Generic_List_int___ToArray(
                v98,
                (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__),
        *idList = v81,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)idList, (int32_t)v81, v82, v83, v84, v85, v86, v87),
        (Instance = (__int64)v97) == 0)
    || (v88 = System_Collections_Generic_List_int___ToArray(
                v97,
                (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__),
        v96->klass = (MissionNaviTransitionBoardItem_c *)v88,
        sub_2213A04(v96, (int32_t)v88, v89, v90, v91, v92, v93, v94),
        !*idList) )
  {
LABEL_100:
    sub_2213CDC(Instance, id);
  }
  return LODWORD((*idList)->max_length) != 0;
}


System_Collections_Generic_List_ServantCommentEntity__o *ServantCommentMaster__GetNewProfileEntities(
        ServantCommentMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  const MethodInfo *v6; // x4
  __int64 NewList; // x0
  __int64 v8; // x1
  System_Int32_array *v9; // x8
  unsigned __int64 v10; // x28
  __int64 v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  int32_t v37; // w1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_String_o *v44; // x21
  __int64 v45; // x8
  __int64 v46; // x22
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  __int64 v50; // x8
  __int64 v51; // x22
  __int64 v52; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v53; // x10
  __int64 v54; // x0
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  __int64 v64; // x1
  Il2CppClass **v65; // x0
  System_Int32_array *v67; // [xsp+0h] [xbp-70h] BYREF
  System_Int32_array *idList; // [xsp+8h] [xbp-68h] BYREF
  int32_t v69; // [xsp+1Ch] [xbp-54h] BYREF

  v69 = svtId;
  if ( (byte_597115D & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
    sub_2213A60(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    byte_597115D = 1;
  }
  v67 = 0;
  idList = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  NewList = ServantCommentMaster__GetNewList(this, &idList, &v67, svtId, v6);
  if ( (NewList & 1) != 0 )
  {
    v9 = idList;
    if ( !idList )
LABEL_39:
      sub_2213CDC(NewList, v8);
    v10 = 0;
    while ( (__int64)v10 < SLODWORD(v9->max_length) )
    {
      v11 = sub_2213B20(string___TypeInfo, 5);
      NewList = (__int64)System_Int32__ToString((int32_t)&v69, 0);
      if ( !v11 )
        goto LABEL_39;
      if ( !*(_DWORD *)(v11 + 24) )
        goto LABEL_41;
      *(_QWORD *)(v11 + 32) = NewList;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 32), NewList, v12, v13, v14, v15, v16, v17);
      if ( (*(_DWORD *)(v11 + 24) & 0xFFFFFFFE) == 0 )
        goto LABEL_41;
      v24 = StringLiteral_1533/*":"*/;
      *(_QWORD *)(v11 + 40) = StringLiteral_1533/*":"*/;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 40), v24, v18, v19, v20, v21, v22, v23);
      if ( !idList )
        goto LABEL_39;
      if ( v10 >= LODWORD(idList->max_length) )
        goto LABEL_41;
      NewList = (__int64)System_Int32__ToString((int)idList + 4 * (int)v10 + 32, 0);
      if ( *(_DWORD *)(v11 + 24) <= 2u )
        goto LABEL_41;
      *(_QWORD *)(v11 + 48) = NewList;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 48), NewList, v25, v26, v27, v28, v29, v30);
      if ( (*(_DWORD *)(v11 + 24) & 0xFFFFFFFC) == 0 )
        goto LABEL_41;
      v37 = StringLiteral_1533/*":"*/;
      *(_QWORD *)(v11 + 56) = StringLiteral_1533/*":"*/;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 56), v37, v31, v32, v33, v34, v35, v36);
      if ( !v67 )
        goto LABEL_39;
      if ( v10 >= LODWORD(v67->max_length)
        || (NewList = (__int64)System_Int32__ToString((int)v67 + 4 * (int)v10 + 32, 0), *(_DWORD *)(v11 + 24) <= 4u) )
      {
LABEL_41:
        sub_2213CE4(NewList);
      }
      *(_QWORD *)(v11 + 64) = NewList;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 64), NewList, v38, v39, v40, v41, v42, v43);
      v44 = System_String__Concat_75697120((System_String_array *)v11, 0);
      NewList = (__int64)DataMasterBase_object__object__object___get_lookup(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                           (const MethodInfo_3F134B8 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !NewList )
        goto LABEL_39;
      v45 = *(_QWORD *)NewList;
      v46 = NewList;
      v47 = *(unsigned __int16 *)(*(_QWORD *)NewList + 302LL);
      if ( *(_WORD *)(*(_QWORD *)NewList + 302LL) )
      {
        v48 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)v48 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v47;
          v48 += 4;
          if ( !v47 )
            goto LABEL_22;
        }
        v49 = v45 + 16LL * *v48 + 312;
      }
      else
      {
LABEL_22:
        v49 = sub_224BC3C(
                NewList,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0);
      }
      NewList = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v49)(v46, v44, *(_QWORD *)(v49 + 8));
      if ( (NewList & 1) != 0 )
      {
        NewList = (__int64)DataMasterBase_object__object__object___get_lookup(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                             (const MethodInfo_3F134B8 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
        if ( !NewList )
          goto LABEL_39;
        v50 = *(_QWORD *)NewList;
        v51 = NewList;
        v52 = *(unsigned __int16 *)(*(_QWORD *)NewList + 302LL);
        if ( *(_WORD *)(*(_QWORD *)NewList + 302LL) )
        {
          v53 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)(*(_QWORD *)(v50 + 176)
                                                                                                  + 8LL);
          while ( *(v53 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
          {
            --v52;
            v53 += 2;
            if ( !v52 )
              goto LABEL_30;
          }
          v54 = v50 + 16LL * (*(_DWORD *)v53 + 2) + 312;
        }
        else
        {
LABEL_30:
          v54 = sub_224BC3C(
                  NewList,
                  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                  2);
        }
        NewList = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v54)(v51, v44, *(_QWORD *)(v54 + 8));
        if ( NewList )
        {
          if ( !v5 )
            goto LABEL_39;
          items = v5->fields._items;
          v62 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            goto LABEL_39;
          size = v5->fields._size;
          v64 = NewList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)NewList,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
          }
          else
          {
            v65 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v65[4] = (Il2CppClass *)v64;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v65 + 4), v64, v55, v56, v57, v58, v59, v60);
          }
        }
      }
      v9 = idList;
      ++v10;
      if ( !idList )
        goto LABEL_39;
    }
  }
  return (System_Collections_Generic_List_ServantCommentEntity__o *)v5;
}


System_Collections_Generic_List_int__o *ServantCommentMaster__GetServantListWithQuestClear(
        ServantCommentMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *svtId; // x1
  Il2CppObject *MasterData_object; // x25
  System_Collections_Generic_List_int__o *v10; // x23
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  int32_t Count; // w0
  int32_t v13; // w26
  int32_t v14; // w27
  int32_t v15; // w24
  ServantCommentEntity_o *v16; // x29
  System_Int32_array *ImageLimit; // x0
  const MethodInfo *v18; // x3
  System_Int32_array *v19; // x28
  UserServantCollectionMaster_o *v20; // x9
  int32_t ServantLimitCountSealAfter; // w0
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x7
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  ServantLimitImageMaster_o *v28; // [xsp+0h] [xbp-80h]
  UserServantCollectionMaster_o *v29; // [xsp+10h] [xbp-70h]
  UserServantCollectionEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_597115B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Item__);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantCommentAddMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597115B = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
  v10 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v28 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v29 = (UserServantCollectionMaster_o *)Instance;
  if ( !list )
    goto LABEL_36;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v14,
                   (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Item__);
      if ( !Instance || !v10 )
        break;
      v15 = *((_DWORD *)Instance + 4);
      v16 = (ServantCommentEntity_o *)Instance;
      if ( !System_Collections_Generic_List_int___Contains(
              v10,
              v15,
              (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        ImageLimit = ServantCommentEntity__GetImageLimit(v16, svtId);
        if ( !ImageLimit )
          goto LABEL_39;
        v19 = ImageLimit;
        if ( !ImageLimit->max_length )
          goto LABEL_39;
        v20 = v29;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, svtId);
          v20 = v29;
        }
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          v20 = v29;
          byte_5969EF2 = 1;
        }
        Instance = NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, svtId);
          v20 = v29;
          Instance = NetworkManager_TypeInfo;
        }
        if ( !v20 )
          break;
        Instance = (void *)UserServantCollectionMaster__TryGetEntity(
                             v20,
                             &entity,
                             *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                             v15,
                             0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_39;
        if ( !entity )
          break;
        Instance = v28;
        if ( !v28 )
          break;
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v28,
                                       v15,
                                       entity->fields.maxLimitCount,
                                       0);
        if ( (System_Array__IndexOf_int_(
                v19,
                ServantLimitCountSealAfter,
                (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___)
            & 0x80000000) == 0 )
        {
LABEL_39:
          if ( ServantCommentEntity__IsOnlyOpenQuestCond(v16, questId, questPhase, v18) )
            goto LABEL_40;
          Instance = MasterData_object;
          if ( !MasterData_object )
            break;
          if ( ServantCommentAddMaster__IsOnlyOpenQuestCond(
                 (ServantCommentAddMaster_o *)MasterData_object,
                 v15,
                 v16->fields.id,
                 v16->fields.priority,
                 1,
                 questId,
                 questPhase,
                 v23) )
          {
LABEL_40:
            Instance = (void *)ServantCommentEntity__IsOpen(v16, -1, 1, v22);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              items = v10->fields._items;
              svtId = (const MethodInfo *)(unsigned int)v16->fields.svtId;
              v25 = Method_System_Collections_Generic_List_int__Add__;
              ++v10->fields._version;
              if ( !items )
                break;
              size = v10->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v10,
                  (int32_t)svtId,
                  *(const MethodInfo_4467270 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
              }
              else
              {
                v10->fields._size = size + 1;
                items->m_Items[size] = (int)svtId;
              }
            }
          }
        }
      }
      if ( v13 == ++v14 )
        return v10;
    }
LABEL_36:
    sub_2213CDC(Instance, svtId);
  }
  return v10;
}


// local variable allocation has failed, the output may be wrong!
ServantCommentEntity_array *ServantCommentMaster__GetServantListWithQuestClearAndImageLimit(
        ServantCommentMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x22
  System_Collections_Generic_List_object__o *v8; // x23
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v11; // w24
  int32_t v12; // w25
  const MethodInfo *v13; // x3
  ServantCommentEntity_o *v14; // x26
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x7
  const MethodInfo *v17; // x1
  bool IsOpen; // w27
  const MethodInfo *v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_597115C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Item__);
    sub_2213A60(&Method_DataManager_GetMaster_ServantCommentAddMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    byte_597115C = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  v8 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_25;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v11 = (int)list;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Item__);
      if ( !list )
        break;
      v14 = (ServantCommentEntity_o *)list;
      list = (System_Collections_ObjectModel_Collection_T__o *)ServantCommentEntity__IsOnlyOpenQuestCond(
                                                                 (ServantCommentEntity_o *)list,
                                                                 questId,
                                                                 questPhase,
                                                                 v13);
      if ( ((unsigned __int8)list & 1) != 0 )
        goto LABEL_13;
      if ( !Master_object )
        break;
      if ( ServantCommentAddMaster__IsOnlyOpenQuestCond(
             (ServantCommentAddMaster_o *)Master_object,
             v14->fields.svtId,
             v14->fields.id,
             v14->fields.priority,
             1,
             questId,
             questPhase,
             v16) )
      {
LABEL_13:
        IsOpen = ServantCommentEntity__IsOpen(v14, -1, 1, v15);
        list = (System_Collections_ObjectModel_Collection_T__o *)ServantCommentEntity__GetImageLimit(v14, v19);
        if ( IsOpen && list && list[1].klass )
        {
          if ( !v8 )
            break;
          items = v8->fields._items;
          v27 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
          ++v8->fields._version;
          if ( !items )
            break;
          size = v8->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              (Il2CppObject *)v14,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v14;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 4), (int32_t)v14, v20, v21, v22, v23, v24, v25);
          }
        }
      }
      else
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)ServantCommentEntity__GetImageLimit(v14, v17);
      }
      if ( v11 == ++v12 )
        goto LABEL_23;
    }
LABEL_25:
    sub_2213CDC(list, v9);
  }
LABEL_23:
  if ( !v8 )
    goto LABEL_25;
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v8,
                                         (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool ServantCommentMaster__IsOpenImageLimitProfile(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  char v16; // w21
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  ServantCommentEntity_o *v21; // x0
  const MethodInfo *v22; // x1
  ServantCommentEntity_o *v23; // x22
  System_Int32_array *ImageLimit; // x0
  System_Collections_Generic_IEnumerable_T__o *v25; // x24
  System_Collections_Generic_List_int__o *v26; // x23
  __int64 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  System_Collections_Generic_IEnumerator_T__o *v36; // [xsp+18h] [xbp-68h]

  if ( (byte_597115E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ServantCommentEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor___91653480);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_597115E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list
    || (System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0) )
  {
    sub_2213CDC(list, *(_QWORD *)&svtId);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__GetEnumerator__);
  v36 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(0, v8);
  for ( i = Enumerator; ; i = v36 )
  {
    klass = i->klass;
    v11 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_11;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v13 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            i,
            *(_QWORD *)(v13 + 8));
    v16 = v14;
    if ( (v14 & 1) == 0 )
      break;
    if ( !v36 )
      sub_2213CDC(v14, v15);
    v17 = v36->klass;
    v18 = *(unsigned __int16 *)&v36->klass->_2.rank;
    if ( *(_WORD *)&v36->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantCommentEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_ServantCommentEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_19;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_19:
      v20 = sub_224BC3C(v36, System_Collections_Generic_IEnumerator_ServantCommentEntity__TypeInfo, 0);
    }
    v21 = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                      v36,
                                      *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( !v21 )
      sub_2213CDC(0, v22);
    if ( v21->fields.svtId == svtId )
    {
      ImageLimit = ServantCommentEntity__GetImageLimit(v21, v22);
      v25 = (System_Collections_Generic_IEnumerable_T__o *)ImageLimit;
      if ( ImageLimit )
      {
        if ( ImageLimit->max_length )
        {
          v26 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor_71723804(
            v26,
            v25,
            (const MethodInfo_4466B1C *)Method_System_Collections_Generic_List_int___ctor___91653480);
          if ( !v26 )
            sub_2213CDC(v27, v28);
          System_Collections_Generic_List_int___Sort(
            v26,
            (const MethodInfo_4468B78 *)Method_System_Collections_Generic_List_int__Sort__);
          if ( System_Collections_Generic_List_int___get_Item(
                 v26,
                 0,
                 (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__) >= 3
            && System_Collections_Generic_List_int___get_Item(
                 v26,
                 0,
                 (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__) == limitCount
            && ServantCommentEntity__IsOpen(v23, -1, 1, v29) )
          {
            goto LABEL_32;
          }
        }
      }
    }
  }
  v16 = 0;
LABEL_32:
  if ( v36 )
  {
    v30 = v36->klass;
    v31 = *(unsigned __int16 *)&v36->klass->_2.rank;
    if ( *(_WORD *)&v36->klass->_2.rank )
    {
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_37;
      }
      v33 = (__int64)&v30->vtable[*v32];
    }
    else
    {
LABEL_37:
      v33 = sub_224BC3C(v36, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(v36, *(_QWORD *)(v33 + 8));
  }
  return v16 & 1;
}


void ServantCommentMaster__OpenSaintGraphProfileChange(
        int32_t svtId,
        int32_t limitCount,
        ServantCommentMaster_ProfileChangeDecideDelegate_o *decideAction,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v9; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  __int64 v25; // x1
  const MethodInfo *v26; // x5
  System_String_o *v27; // x20
  Il2CppObject *Name; // x0
  System_String_o *v29; // x20
  Il2CppObject *Instance; // x21
  System_String_o *v31; // x22
  System_String_o *v32; // x23
  CommonConfirmDialog_ClickDelegate_o *v33; // x24
  Il2CppObject *entity; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_597115F & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ServantCommentMaster___c__DisplayClass12_0__OpenSaintGraphProfileChange_b__0__);
    sub_2213A60(&ServantCommentMaster___c__DisplayClass12_0_TypeInfo);
    sub_2213A60(&StringLiteral_11315/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/);
    sub_2213A60(&StringLiteral_11314/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_11312/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/);
    byte_597115F = 1;
  }
  entity = 0;
  v9 = sub_2213CCC(ServantCommentMaster___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_14;
  *(_QWORD *)(v9 + 16) = decideAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)decideAction, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = endAction;
  *(_DWORD *)(v9 + 24) = svtId;
  *(_DWORD *)(v9 + 28) = limitCount;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)endAction, v18, v19, v20, v21, v22, v23);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v24);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_14;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    &entity,
    *(_DWORD *)(v9 + 24),
    (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_11315/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/,
                                                                  0);
  if ( !entity )
    goto LABEL_14;
  v27 = (System_String_o *)Master_object;
  Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)entity, *(_DWORD *)(v9 + 28), -1, 0, 0, v26);
  v29 = System_String__Format(v27, Name, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_11314/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/, 0);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_11312/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/, 0);
  v33 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v33,
    (Il2CppObject *)v9,
    Method_ServantCommentMaster___c__DisplayClass12_0__OpenSaintGraphProfileChange_b__0__,
    0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v11);
  if ( !Instance )
LABEL_14:
    sub_2213CDC(Master_object, v11);
  CommonUI__OpenConfirmDialogOnFade(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v29,
    v31,
    v32,
    v33,
    0,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    42.0,
    0,
    0,
    0,
    0);
}


// local variable allocation has failed, the output may be wrong!
void ServantCommentMaster__SetOpen(
        ServantCommentMaster_o *this,
        int32_t svtId,
        System_Int32_array *svtCommentIdList,
        System_Int32_array *svtCommentPriorityList,
        const MethodInfo *method)
{
  if ( (byte_5971159 & 1) == 0 )
  {
    sub_2213A60(&ServantCommentManager_TypeInfo);
    byte_5971159 = 1;
  }
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, *(_QWORD *)&svtId);
  ServantCommentManager__SetOpen(svtId, svtCommentIdList, svtCommentPriorityList, 0);
}


// local variable allocation has failed, the output may be wrong!
bool ServantCommentMaster__TryGetEntity(
        ServantCommentMaster_o *this,
        ServantCommentEntity_o **entity,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5971155 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__);
    sub_2213A60(&ServantCommentEntity_TypeInfo);
    byte_5971155 = 1;
  }
  if ( !*(&ServantCommentEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo, entity);
  PK = (Il2CppObject *)ServantCommentEntity__CreatePK(svtId, id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__);
}


void ServantCommentMaster_ProfileChangeDecideDelegate___ctor(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 4 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_200E158;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200E0E8;
}


System_IAsyncResult_o *ServantCommentMaster_ProfileChangeDecideDelegate__BeginInvoke(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        int32_t svtid,
        int32_t limitCount,
        bool isDecide,
        System_Action_o *finishCallback,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v13[6]; // [xsp+0h] [xbp-70h] BYREF
  bool v14[4]; // [xsp+34h] [xbp-3Ch] BYREF
  int32_t v15; // [xsp+38h] [xbp-38h] BYREF
  int32_t v16; // [xsp+3Ch] [xbp-34h] BYREF

  v15 = limitCount;
  v16 = svtid;
  v14[0] = isDecide;
  v13[4] = 0;
  v13[0] = j_il2cpp_value_box_0(qword_5984348, &v16);
  v13[1] = j_il2cpp_value_box_0(qword_5984348, &v15);
  v13[2] = j_il2cpp_value_box_0(qword_5984328, v14);
  v13[3] = finishCallback;
  return (System_IAsyncResult_o *)sub_2213A14(this, v13, callback, object);
}


void ServantCommentMaster_ProfileChangeDecideDelegate__EndInvoke(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void ServantCommentMaster_ProfileChangeDecideDelegate__Invoke(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        int32_t svtid,
        int32_t limitCount,
        bool isDecide,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, bool, System_Action_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    svtid,
    limitCount,
    isDecide,
    finishCallback,
    this->fields.method);
}


void ServantCommentMaster___c__DisplayClass12_0___ctor(
        ServantCommentMaster___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantCommentMaster___c__DisplayClass12_0___OpenSaintGraphProfileChange_b__0(
        ServantCommentMaster___c__DisplayClass12_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  unsigned int limitCount; // w8
  unsigned int svtId; // w9
  struct ServantCommentMaster_ProfileChangeDecideDelegate_o *decideAction; // x10
  System_Action_o *endAction; // x4

  svtId = this->fields.svtId;
  limitCount = this->fields.limitCount;
  decideAction = this->fields.decideAction;
  endAction = this->fields.endAction;
  if ( decideAction )
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, bool, System_Action_o *, intptr_t))decideAction->fields.invoke_impl)(
      decideAction->fields.method_code,
      svtId,
      limitCount,
      isDecide,
      endAction,
      decideAction->fields.method);
  else
    ServantCommentMaster__DefaultProfileChangeDecideAction(
      svtId,
      limitCount,
      isDecide,
      endAction,
      (const MethodInfo *)endAction);
}


void ServantCommentMaster___c__DisplayClass13_0___ctor(
        ServantCommentMaster___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantCommentMaster___c__DisplayClass13_0___DefaultProfileChangeDecideAction_b__0(
        ServantCommentMaster___c__DisplayClass13_0_o *this,
        bool isDcd,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x21
  float DEFAULT_FADE_TIME; // s8
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5971161 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ServantCommentMaster___c__DisplayClass13_0__DefaultProfileChangeDecideAction_b__1__);
    byte_5971161 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = AvalonSceneManager_TypeInfo;
  v7 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v5);
    v6 = AvalonSceneManager_TypeInfo;
  }
  _9__1 = this->fields.__9__1;
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantCommentMaster___c__DisplayClass13_0__DefaultProfileChangeDecideAction_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v10, v11, v12, v13, v14, v15);
  }
  if ( !v7 )
    sub_2213CDC(Instance, v5);
  CommonUI__maskFadeout(v7, 1, DEFAULT_FADE_TIME, _9__1, 0);
}


void ServantCommentMaster___c__DisplayClass13_0___DefaultProfileChangeDecideAction_b__1(
        ServantCommentMaster___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20

  if ( (byte_5971162 & 1) == 0 )
  {
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5971162 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4);
  if ( !v5 )
LABEL_8:
    sub_2213CDC(Instance, v4);
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  ActionExtensions__Call(this->fields.endAction, 0);
}