void __fastcall ServantCommentMaster___ctor(ServantCommentMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FCA96 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__, method);
    byte_49FCA96 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    2,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__);
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
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *Master_object; // x22
  CommonUI_o *v21; // x21
  Il2CppObject *Instance; // x0
  UserServantCollectionEntity_o *v23; // x21
  CommonUI_o *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  ServantStatusDialog_EndDelegate_o *v27; // x23
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FCAA3 & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager_TypeInfo, *(_QWORD *)&limitCount);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9);
    sub_1B640C8(&DataManager_TypeInfo, v10);
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, v11);
    sub_1B640C8(&NetworkManager_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1B640C8(&Method_ServantCommentMaster___c__DisplayClass17_0__DefaultProfileChangeDecideAction_b__0__, v14);
    sub_1B640C8(&ServantCommentMaster___c__DisplayClass17_0_TypeInfo, v15);
    byte_49FCAA3 = 1;
  }
  entity = 0LL;
  v16 = sub_1B64314(ServantCommentMaster___c__DisplayClass17_0_TypeInfo, *(_QWORD *)&limitCount, isDecide);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_20;
  *(_QWORD *)(v16 + 16) = endAction;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 16), (int32_t)endAction, v18, v19);
  if ( isDecide )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = (CommonUI_o *)NetworkManager__get_UserId(0LL);
    if ( !Master_object )
      goto LABEL_20;
    if ( UserServantCollectionMaster__TryGetEntity(
           (UserServantCollectionMaster_o *)Master_object,
           &entity,
           (int64_t)UserId,
           svtId,
           0LL) )
    {
      UserId = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v21 = UserId;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( v21 )
      {
        CommonUI__maskFadein(v21, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
        UserId = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( UserId )
        {
          CommonUI__CloseConfirmDialog(UserId, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v23 = entity;
          v24 = (CommonUI_o *)Instance;
          v27 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v25, v26);
          ServantStatusDialog_EndDelegate___ctor(
            v27,
            (Il2CppObject *)v16,
            Method_ServantCommentMaster___c__DisplayClass17_0__DefaultProfileChangeDecideAction_b__0__,
            0LL);
          if ( v24 )
          {
            CommonUI__OpenServantStatusDialog_30357004(v24, 33, v23, limitCount, v27, 0LL);
            return;
          }
        }
      }
LABEL_20:
      sub_1B64324(UserId);
    }
  }
  UserId = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !UserId )
    goto LABEL_20;
  CommonUI__CloseConfirmDialog_30345628(UserId, *(System_Action_o **)(v16 + 16), 0LL);
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
  Il2CppObject *PK; // x1

  if ( (byte_49FCA94 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    sub_1B640C8(&ServantCommentEntity_TypeInfo, v9);
    byte_49FCA94 = 1;
  }
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
  PK = (Il2CppObject *)ServantCommentEntity__CreatePK(svtId, id, priority, *(const MethodInfo **)&priority);
  return (ServantCommentEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_30D41FC *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__);
}


ServantCommentEntity_array *__fastcall ServantCommentMaster__GetEntityList(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t condType,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6

  return ServantCommentMaster__GetEntityList_39296992(this, svtId, -1, condType, 0, 0, v4);
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
  System_Collections_Generic_List_object__o *v18; // x23
  __int64 v19; // x25
  __int64 lookup; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x1
  Il2CppObject *v24; // x24
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x25
  __int64 v36; // x8
  __int64 v37; // x26
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  __int64 v43; // x8
  __int64 v44; // x26
  __int64 v45; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v46; // x10
  __int64 v47; // x0
  const MethodInfo *v48; // x1
  ServantCommentEntity_o *v49; // x25
  __int64 methodPtr_low; // x10
  System_Int32_array *ImageLimit; // x0
  __int64 v52; // x10
  __int64 v53; // x9
  char v54; // w8
  int v55; // w11
  const MethodInfo *v56; // x3
  struct System_Object_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  Il2CppClass **v60; // x0
  int32_t v61; // w8
  const MethodInfo *v62; // x5
  int32_t v66; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v67; // [xsp+18h] [xbp-68h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_49FCA98 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_IndexOf_int___, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v8);
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v13);
    sub_1B640C8(&ServantCommentEntity_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B640C8(&string___TypeInfo, v16);
    sub_1B640C8(&StringLiteral_1546/*":"*/, v17);
    byte_49FCA98 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       *(_QWORD *)&imageLimitCount);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v66 = 0;
  v67 = 1;
  v19 = sub_1B64170(string___TypeInfo, 5LL);
  lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
  if ( !v19 )
    goto LABEL_60;
  v23 = lookup;
  v24 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v19 + 24) )
        goto LABEL_61;
      *(_QWORD *)(v19 + 32) = v23;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 32), v23, v21, v22);
      if ( *(_DWORD *)(v19 + 24) <= 1u )
        goto LABEL_61;
      v27 = StringLiteral_1546/*":"*/;
      *(_QWORD *)(v19 + 40) = StringLiteral_1546/*":"*/;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 40), v27, v25, v26);
      lookup = (__int64)System_Int32__ToString((int32_t)&v67, 0LL);
      if ( *(_DWORD *)(v19 + 24) <= 2u
        || (*(_QWORD *)(v19 + 48) = lookup,
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 48), lookup, v28, v29),
            *(_DWORD *)(v19 + 24) <= 3u)
        || (v32 = StringLiteral_1546/*":"*/,
            *(_QWORD *)(v19 + 56) = StringLiteral_1546/*":"*/,
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 56), v32, v30, v31),
            lookup = (__int64)System_Int32__ToString((int32_t)&v66, 0LL),
            *(_DWORD *)(v19 + 24) <= 4u) )
      {
LABEL_61:
        sub_1B6432C(lookup, v23);
      }
      *(_QWORD *)(v19 + 64) = lookup;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 64), lookup, v33, v34);
      v35 = System_String__Concat_61388924((System_String_array *)v19, 0LL);
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_60;
      v36 = *(_QWORD *)lookup;
      v37 = lookup;
      v38 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v39 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v39 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v38;
          v39 += 4;
          if ( !v38 )
            goto LABEL_15;
        }
        v40 = v36 + 16LL * *v39 + 312;
      }
      else
      {
LABEL_15:
        v40 = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v40)(v37, v35, *(_QWORD *)(v40 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_60;
      v43 = *(_QWORD *)lookup;
      v44 = lookup;
      v45 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v46 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v43 + 176) + 8LL);
        while ( *(v46 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v45;
          v46 += 2;
          if ( !v45 )
            goto LABEL_23;
        }
        v47 = v43 + 16LL * (*(_DWORD *)v46 + 2) + 312;
      }
      else
      {
LABEL_23:
        v47 = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v47)(v44, v35, *(_QWORD *)(v47 + 8));
      if ( !lookup )
        goto LABEL_60;
      v49 = (ServantCommentEntity_o *)lookup;
      methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)lookup + 304LL) < (unsigned int)methodPtr_low
        || *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)lookup + 200LL) + 8 * methodPtr_low - 8) != ServantCommentEntity_TypeInfo )
      {
        goto LABEL_60;
      }
      ImageLimit = ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)lookup, v48);
      if ( ImageLimit )
      {
        v52 = *(_QWORD *)&ImageLimit->max_length;
        if ( v52 )
        {
          if ( (int)v52 >= 1 )
          {
            v53 = 0LL;
            v54 = 0;
            do
            {
              v55 = ImageLimit->m_Items[++v53];
              v54 |= v55 > 2;
            }
            while ( (unsigned int)*(_QWORD *)&ImageLimit->max_length != v53 );
            if ( (v54 & 1) != 0
              && (System_Array__IndexOf_int_(
                    ImageLimit,
                    imageLimitCount,
                    (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
            {
              if ( !condType || v49->fields.condType == condType )
                goto LABEL_56;
              if ( addCheck )
              {
                lookup = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !lookup )
                  goto LABEL_60;
                lookup = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)lookup,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
                if ( !lookup )
                  goto LABEL_60;
                if ( ServantCommentAddMaster__IsEntityListCondContain(
                       (ServantCommentAddMaster_o *)lookup,
                       svtIda,
                       v67,
                       v66,
                       condType,
                       v62) )
                {
LABEL_56:
                  if ( !v24 || ServantCommentEntity__IsOpen(v49, -1, 1, v56) )
                    v24 = (Il2CppObject *)v49;
                }
              }
            }
          }
        }
      }
      ++v66;
      v19 = sub_1B64170(string___TypeInfo, 5LL);
      lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
      v23 = lookup;
      if ( !v19 )
        goto LABEL_60;
    }
    if ( v24 )
    {
      if ( !v18 )
        goto LABEL_60;
      items = v18->fields._items;
      v58 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v18->fields._version;
      if ( !items )
        goto LABEL_60;
      size = v18->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          v24,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
      }
      else
      {
        v60 = &items->obj.klass + size;
        v18->fields._size = size + 1;
        v60[4] = (Il2CppClass *)v24;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v60 + 4), (int32_t)v24, v41, v42);
      }
LABEL_46:
      v61 = v67;
      goto LABEL_47;
    }
    if ( v66 )
      goto LABEL_46;
    v61 = v67;
    if ( v67 != 1 )
      break;
LABEL_47:
    v66 = 0;
    v67 = v61 + 1;
    v19 = sub_1B64170(string___TypeInfo, 5LL);
    lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
    v23 = lookup;
    v24 = 0LL;
    if ( !v19 )
      goto LABEL_60;
  }
  if ( !v18 )
LABEL_60:
    sub_1B64324(lookup);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v18,
                                         (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ServantCommentEntity_array *__fastcall ServantCommentMaster__GetEntityList_39296992(
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
  System_Collections_Generic_List_object__o *v20; // x24
  __int64 v21; // x26
  __int64 lookup; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x1
  Il2CppObject *v26; // x25
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w1
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x26
  __int64 v38; // x8
  __int64 v39; // x27
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x8
  __int64 v46; // x27
  __int64 v47; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v48; // x10
  __int64 v49; // x0
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  int32_t v54; // w8
  const MethodInfo *v55; // x1
  ServantCommentEntity_o *v56; // x26
  __int64 methodPtr_low; // x10
  System_Int32_array *ImageLimit; // x0
  const MethodInfo *v59; // x3
  __int64 v60; // x8
  int v61; // w9
  const MethodInfo *v62; // x5
  int32_t v66; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v67; // [xsp+18h] [xbp-68h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_49FCA97 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_IndexOf_int___, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v10);
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v14);
    sub_1B640C8(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v15);
    sub_1B640C8(&ServantCommentEntity_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B640C8(&string___TypeInfo, v18);
    sub_1B640C8(&StringLiteral_1546/*":"*/, v19);
    byte_49FCA97 = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       *(_QWORD *)&imageLimitCount);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v66 = 0;
  v67 = 1;
  v21 = sub_1B64170(string___TypeInfo, 5LL);
  lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
  if ( !v21 )
    goto LABEL_64;
  v25 = lookup;
  v26 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v21 + 24) )
        goto LABEL_63;
      *(_QWORD *)(v21 + 32) = v25;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 32), v25, v23, v24);
      if ( *(_DWORD *)(v21 + 24) <= 1u )
        goto LABEL_63;
      v29 = StringLiteral_1546/*":"*/;
      *(_QWORD *)(v21 + 40) = StringLiteral_1546/*":"*/;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 40), v29, v27, v28);
      lookup = (__int64)System_Int32__ToString((int32_t)&v67, 0LL);
      if ( *(_DWORD *)(v21 + 24) <= 2u
        || (*(_QWORD *)(v21 + 48) = lookup,
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 48), lookup, v30, v31),
            *(_DWORD *)(v21 + 24) <= 3u)
        || (v34 = StringLiteral_1546/*":"*/,
            *(_QWORD *)(v21 + 56) = StringLiteral_1546/*":"*/,
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 56), v34, v32, v33),
            lookup = (__int64)System_Int32__ToString((int32_t)&v66, 0LL),
            *(_DWORD *)(v21 + 24) <= 4u) )
      {
LABEL_63:
        sub_1B6432C(lookup, v25);
      }
      *(_QWORD *)(v21 + 64) = lookup;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 64), lookup, v35, v36);
      v37 = System_String__Concat_61388924((System_String_array *)v21, 0LL);
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_64;
      v38 = *(_QWORD *)lookup;
      v39 = lookup;
      v40 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v41 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v41 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v40;
          v41 += 4;
          if ( !v40 )
            goto LABEL_15;
        }
        v42 = v38 + 16LL * *v41 + 312;
      }
      else
      {
LABEL_15:
        v42 = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v42)(v39, v37, *(_QWORD *)(v42 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_64;
      v45 = *(_QWORD *)lookup;
      v46 = lookup;
      v47 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v48 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v45 + 176) + 8LL);
        while ( *(v48 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v47;
          v48 += 2;
          if ( !v47 )
            goto LABEL_23;
        }
        v49 = v45 + 16LL * (*(_DWORD *)v48 + 2) + 312;
      }
      else
      {
LABEL_23:
        v49 = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v49)(v46, v37, *(_QWORD *)(v49 + 8));
      if ( !lookup )
        goto LABEL_64;
      v56 = (ServantCommentEntity_o *)lookup;
      methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)lookup + 304LL) < (unsigned int)methodPtr_low
        || *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)lookup + 200LL) + 8 * methodPtr_low - 8) != ServantCommentEntity_TypeInfo )
      {
        goto LABEL_64;
      }
      ImageLimit = ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)lookup, v55);
      if ( imageLimitCount != -1 )
      {
        if ( ImageLimit )
        {
          v60 = *(_QWORD *)&ImageLimit->max_length;
          if ( v60 )
          {
            if ( overLimit )
            {
              if ( (int)v60 < 1 )
                goto LABEL_59;
              v61 = 0;
              while ( ImageLimit->m_Items[v61 + 1] > imageLimitCount )
              {
                if ( (_DWORD)v60 == ++v61 )
                  goto LABEL_59;
              }
            }
            else if ( (System_Array__IndexOf_int_(
                         ImageLimit,
                         imageLimitCount,
                         (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___) & 0x80000000) != 0 )
            {
              goto LABEL_59;
            }
          }
        }
      }
      if ( !condType || v56->fields.condType == condType )
        goto LABEL_57;
      if ( addCheck )
      {
        lookup = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lookup )
          goto LABEL_64;
        lookup = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)lookup,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
        if ( !lookup )
          goto LABEL_64;
        if ( ServantCommentAddMaster__IsEntityListCondContain(
               (ServantCommentAddMaster_o *)lookup,
               svtIda,
               v67,
               v66,
               condType,
               v62) )
        {
LABEL_57:
          if ( !v26 || ServantCommentEntity__IsOpen(v56, -1, 1, v59) )
            v26 = (Il2CppObject *)v56;
        }
      }
LABEL_59:
      ++v66;
      v21 = sub_1B64170(string___TypeInfo, 5LL);
      lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
      v25 = lookup;
      if ( !v21 )
        goto LABEL_64;
    }
    if ( v26 )
    {
      if ( !v20 )
        goto LABEL_64;
      items = v20->fields._items;
      v51 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v20->fields._version;
      if ( !items )
        goto LABEL_64;
      size = v20->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v20,
          v26,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
      }
      else
      {
        v53 = &items->obj.klass + size;
        v20->fields._size = size + 1;
        v53[4] = (Il2CppClass *)v26;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v53 + 4), (int32_t)v26, v43, v44);
      }
LABEL_46:
      v54 = v67;
      goto LABEL_47;
    }
    if ( v66 )
      goto LABEL_46;
    v54 = v67;
    if ( v67 != 1 )
      break;
LABEL_47:
    v66 = 0;
    v67 = v54 + 1;
    v21 = sub_1B64170(string___TypeInfo, 5LL);
    lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
    v25 = lookup;
    v26 = 0LL;
    if ( !v21 )
      goto LABEL_64;
  }
  if ( !v20 )
LABEL_64:
    sub_1B64324(lookup);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v20,
                                         (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
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
  Il2CppObject *MasterData_object; // x25
  int32_t v26; // w24
  const MethodInfo *v27; // x3
  __int64 v28; // x26
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x1
  ServantCommentEntity_o *v32; // x25
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w1
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x26
  __int64 v44; // x8
  __int64 v45; // x27
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  const MethodInfo *v49; // x1
  __int64 v50; // x8
  __int64 v51; // x27
  __int64 v52; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v53; // x10
  __int64 v54; // x0
  int32_t id; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  int v59; // w8
  const MethodInfo *v60; // x1
  ServantCommentEntity_o *v61; // x26
  __int64 methodPtr_low; // x10
  const MethodInfo *v63; // x3
  __int64 v64; // x8
  int v65; // w8
  int32_t priority; // w1
  struct System_Int32_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  System_Int32_array *v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  System_Int32_array *v73; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  ServantStatusBattleListViewItem_o *v77; // [xsp+0h] [xbp-90h]
  ServantStatusBattleListViewItem_o *v78; // [xsp+8h] [xbp-88h]
  int32_t ServantLimitCountSealAfter; // [xsp+14h] [xbp-7Ch]
  __int64 v80; // [xsp+18h] [xbp-78h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+20h] [xbp-70h] BYREF
  int32_t svtIda; // [xsp+2Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_49FCA9D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, idList);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_1B640C8(&NetworkManager_TypeInfo, v15);
    sub_1B640C8(&ServantCommentEntity_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B640C8(&string___TypeInfo, v18);
    sub_1B640C8(&StringLiteral_1546/*":"*/, v19);
    byte_49FCA9D = 1;
  }
  v80 = 0LL;
  entity = 0LL;
  v20 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    idList,
                                                    priorityList);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  v23 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v21, v22);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_72;
  Instance = UserServantCollectionMaster__TryGetEntity(
               (UserServantCollectionMaster_o *)MasterData_object,
               &entity,
               Instance,
               svtId,
               0LL);
  ServantLimitCountSealAfter = 1;
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_72;
    v26 = entity->fields.maxLimitCount ? entity->fields.maxLimitCount : 1;
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_72;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Instance )
      goto LABEL_72;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   svtIda,
                                   v26,
                                   v27);
  }
  v77 = (ServantStatusBattleListViewItem_o *)priorityList;
  v78 = (ServantStatusBattleListViewItem_o *)idList;
  v80 = 0x100000000LL;
  v28 = sub_1B64170(string___TypeInfo, 5LL);
  Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
  if ( !v28 )
    goto LABEL_72;
  v31 = Instance;
  v32 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v28 + 24) )
        goto LABEL_71;
      *(_QWORD *)(v28 + 32) = v31;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 32), v31, v29, v30);
      if ( *(_DWORD *)(v28 + 24) <= 1u )
        goto LABEL_71;
      v35 = StringLiteral_1546/*":"*/;
      *(_QWORD *)(v28 + 40) = StringLiteral_1546/*":"*/;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 40), v35, v33, v34);
      Instance = (__int64)System_Int32__ToString((int32_t)&v80 + 4, 0LL);
      if ( *(_DWORD *)(v28 + 24) <= 2u
        || (*(_QWORD *)(v28 + 48) = Instance,
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 48), Instance, v36, v37),
            *(_DWORD *)(v28 + 24) <= 3u)
        || (v40 = StringLiteral_1546/*":"*/,
            *(_QWORD *)(v28 + 56) = StringLiteral_1546/*":"*/,
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 56), v40, v38, v39),
            Instance = (__int64)System_Int32__ToString((int32_t)&v80, 0LL),
            *(_DWORD *)(v28 + 24) <= 4u) )
      {
LABEL_71:
        sub_1B6432C(Instance, v31);
      }
      *(_QWORD *)(v28 + 64) = Instance;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 64), Instance, v41, v42);
      v43 = System_String__Concat_61388924((System_String_array *)v28, 0LL);
      Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        goto LABEL_72;
      v44 = *(_QWORD *)Instance;
      v45 = Instance;
      v46 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v47 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v47 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v46;
          v47 += 4;
          if ( !v46 )
            goto LABEL_27;
        }
        v48 = v44 + 16LL * *v47 + 312;
      }
      else
      {
LABEL_27:
        v48 = sub_1BB60A8(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v48)(v45, v43, *(_QWORD *)(v48 + 8));
      if ( (Instance & 1) == 0 )
        break;
      Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( Instance )
      {
        v50 = *(_QWORD *)Instance;
        v51 = Instance;
        v52 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
        if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
        {
          v53 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v50 + 176)
                                                                                            + 8LL);
          while ( *(v53 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            --v52;
            v53 += 2;
            if ( !v52 )
              goto LABEL_35;
          }
          v54 = v50 + 16LL * (*(_DWORD *)v53 + 2) + 312;
        }
        else
        {
LABEL_35:
          v54 = sub_1BB60A8(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL);
        }
        Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v54)(v51, v43, *(_QWORD *)(v54 + 8));
        if ( Instance )
        {
          v61 = (ServantCommentEntity_o *)Instance;
          methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
            && *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == ServantCommentEntity_TypeInfo )
          {
            Instance = (__int64)ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)Instance, v60);
            if ( !Instance )
              goto LABEL_54;
            v64 = *(_QWORD *)(Instance + 24);
            if ( !v64 )
              goto LABEL_54;
            if ( !(_DWORD)v64 )
              goto LABEL_71;
            v65 = *(_DWORD *)(Instance + 32);
            if ( v65 < 3 || ServantLimitCountSealAfter >= v65 )
            {
LABEL_54:
              if ( ServantCommentEntity__IsOpen(v61, -1, 1, v63) )
                v32 = v61;
            }
            LODWORD(v80) = v80 + 1;
            v28 = sub_1B64170(string___TypeInfo, 5LL);
            Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
            v31 = Instance;
            if ( v28 )
              continue;
          }
        }
      }
      goto LABEL_72;
    }
    if ( v32 )
    {
      Instance = ServantCommentEntity__IsNew(v32, v49);
      if ( (Instance & 1) != 0 )
      {
        if ( !v20 )
          goto LABEL_72;
        id = v32->fields.id;
        items = v20->fields._items;
        v57 = Method_System_Collections_Generic_List_int__Add__;
        ++v20->fields._version;
        if ( !items )
          goto LABEL_72;
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v20,
            id,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
        }
        else
        {
          v20->fields._size = size + 1;
          items->m_Items[size + 1] = id;
        }
        if ( !v23 )
          goto LABEL_72;
        priority = v32->fields.priority;
        v67 = v23->fields._items;
        v68 = Method_System_Collections_Generic_List_int__Add__;
        ++v23->fields._version;
        if ( !v67 )
          goto LABEL_72;
        v69 = v23->fields._size;
        if ( (unsigned int)v69 >= v67->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v23,
            priority,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
        }
        else
        {
          v23->fields._size = v69 + 1;
          v67->m_Items[v69 + 1] = priority;
        }
      }
LABEL_64:
      v59 = HIDWORD(v80);
      goto LABEL_65;
    }
    if ( (_DWORD)v80 )
      goto LABEL_64;
    v59 = HIDWORD(v80);
    if ( HIDWORD(v80) != 1 )
      break;
LABEL_65:
    LODWORD(v80) = 0;
    HIDWORD(v80) = v59 + 1;
    v28 = sub_1B64170(string___TypeInfo, 5LL);
    Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
    v31 = Instance;
    v32 = 0LL;
    if ( !v28 )
      goto LABEL_72;
  }
  if ( !v20
    || (v70 = System_Collections_Generic_List_int___ToArray(
                v20,
                (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__),
        v78->klass = (ServantStatusBattleListViewItem_c *)v70,
        sub_1B6406C(v78, (int32_t)v70, v71, v72),
        !v23)
    || (v73 = System_Collections_Generic_List_int___ToArray(
                v23,
                (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__),
        v77->klass = (ServantStatusBattleListViewItem_c *)v73,
        sub_1B6406C(v77, (int32_t)v73, v74, v75),
        !v78->klass) )
  {
LABEL_72:
    sub_1B64324(Instance);
  }
  return LODWORD(v78->klass->_1.namespaze) != 0;
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
  System_Collections_Generic_List_object__o *v11; // x20
  const MethodInfo *v12; // x4
  __int64 NewList; // x0
  System_Int32_array *v14; // x8
  unsigned __int64 v15; // x23
  __int64 v16; // x21
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x21
  __int64 v31; // x8
  __int64 v32; // x22
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x8
  __int64 v37; // x22
  __int64 v38; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v39; // x10
  __int64 v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  __int64 v43; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  System_Int32_array *v50; // [xsp+0h] [xbp-70h] BYREF
  System_Int32_array *idList; // [xsp+8h] [xbp-68h] BYREF
  int32_t v52; // [xsp+1Ch] [xbp-54h] BYREF

  v52 = svtId;
  if ( (byte_49FCAA0 & 1) == 0 )
  {
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v7);
    sub_1B640C8(&ServantCommentEntity_TypeInfo, v8);
    sub_1B640C8(&string___TypeInfo, v9);
    sub_1B640C8(&StringLiteral_1546/*":"*/, v10);
    byte_49FCAA0 = 1;
  }
  v50 = 0LL;
  idList = 0LL;
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  NewList = ServantCommentMaster__GetNewList(this, &idList, &v50, svtId, v12);
  if ( (NewList & 1) != 0 )
  {
    v14 = idList;
    if ( !idList )
LABEL_41:
      sub_1B64324(NewList);
    v15 = 0LL;
    while ( (__int64)v15 < (int)v14->max_length )
    {
      v16 = sub_1B64170(string___TypeInfo, 5LL);
      NewList = (__int64)System_Int32__ToString((int32_t)&v52, 0LL);
      if ( !v16 )
        goto LABEL_41;
      if ( !*(_DWORD *)(v16 + 24) )
        goto LABEL_43;
      *(_QWORD *)(v16 + 32) = NewList;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 32), NewList, v18, v19);
      if ( *(_DWORD *)(v16 + 24) <= 1u )
        goto LABEL_43;
      v22 = StringLiteral_1546/*":"*/;
      *(_QWORD *)(v16 + 40) = StringLiteral_1546/*":"*/;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 40), v22, v20, v21);
      if ( !idList )
        goto LABEL_41;
      if ( v15 >= idList->max_length )
        goto LABEL_43;
      NewList = (__int64)System_Int32__ToString((int)idList + 4 * (int)v15 + 32, 0LL);
      if ( *(_DWORD *)(v16 + 24) <= 2u )
        goto LABEL_43;
      *(_QWORD *)(v16 + 48) = NewList;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 48), NewList, v23, v24);
      if ( *(_DWORD *)(v16 + 24) <= 3u )
        goto LABEL_43;
      v27 = StringLiteral_1546/*":"*/;
      *(_QWORD *)(v16 + 56) = StringLiteral_1546/*":"*/;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 56), v27, v25, v26);
      if ( !v50 )
        goto LABEL_41;
      if ( v15 >= v50->max_length
        || (NewList = (__int64)System_Int32__ToString((int)v50 + 4 * (int)v15 + 32, 0LL), *(_DWORD *)(v16 + 24) <= 4u) )
      {
LABEL_43:
        sub_1B6432C(NewList, v17);
      }
      *(_QWORD *)(v16 + 64) = NewList;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 64), NewList, v28, v29);
      v30 = System_String__Concat_61388924((System_String_array *)v16, 0LL);
      NewList = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !NewList )
        goto LABEL_41;
      v31 = *(_QWORD *)NewList;
      v32 = NewList;
      v33 = *(unsigned __int16 *)(*(_QWORD *)NewList + 302LL);
      if ( *(_WORD *)(*(_QWORD *)NewList + 302LL) )
      {
        v34 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v34 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v33;
          v34 += 4;
          if ( !v33 )
            goto LABEL_22;
        }
        v35 = v31 + 16LL * *v34 + 312;
      }
      else
      {
LABEL_22:
        v35 = sub_1BB60A8(NewList, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      NewList = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v35)(v32, v30, *(_QWORD *)(v35 + 8));
      if ( (NewList & 1) != 0 )
      {
        NewList = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
        if ( !NewList )
          goto LABEL_41;
        v36 = *(_QWORD *)NewList;
        v37 = NewList;
        v38 = *(unsigned __int16 *)(*(_QWORD *)NewList + 302LL);
        if ( *(_WORD *)(*(_QWORD *)NewList + 302LL) )
        {
          v39 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v36 + 176)
                                                                                            + 8LL);
          while ( *(v39 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            --v38;
            v39 += 2;
            if ( !v38 )
              goto LABEL_30;
          }
          v40 = v36 + 16LL * (*(_DWORD *)v39 + 2) + 312;
        }
        else
        {
LABEL_30:
          v40 = sub_1BB60A8(
                  NewList,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL);
        }
        NewList = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v40)(v37, v30, *(_QWORD *)(v40 + 8));
        if ( NewList )
        {
          v43 = NewList;
          methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)NewList + 304LL) >= (unsigned int)methodPtr_low
            && *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)NewList + 200LL) + 8 * methodPtr_low - 8) == ServantCommentEntity_TypeInfo )
          {
            if ( !v11 )
              goto LABEL_41;
            items = v11->fields._items;
            v46 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
            ++v11->fields._version;
            if ( !items )
              goto LABEL_41;
            size = v11->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                (Il2CppObject *)NewList,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
            }
            else
            {
              v48 = &items->obj.klass + size;
              v11->fields._size = size + 1;
              v48[4] = (Il2CppClass *)v43;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v48 + 4), v43, v41, v42);
            }
          }
        }
      }
      v14 = idList;
      ++v15;
      if ( !idList )
        goto LABEL_41;
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
  System_Collections_Generic_List_object__o *v11; // x20
  __int64 v12; // x22
  __int64 lookup; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  Il2CppObject *v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x22
  __int64 v29; // x8
  __int64 v30; // x23
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x8
  __int64 v37; // x23
  __int64 v38; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v39; // x10
  __int64 v40; // x0
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  int v45; // w8
  const MethodInfo *v46; // x3
  Il2CppObject *v47; // x22
  __int64 methodPtr_low; // x10
  int v50; // [xsp+4h] [xbp-6Ch] BYREF
  int v51; // [xsp+8h] [xbp-68h] BYREF
  int32_t v52; // [xsp+Ch] [xbp-64h] BYREF

  v52 = svtId;
  if ( (byte_49FCA99 & 1) == 0 )
  {
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v7);
    sub_1B640C8(&ServantCommentEntity_TypeInfo, v8);
    sub_1B640C8(&string___TypeInfo, v9);
    sub_1B640C8(&StringLiteral_1546/*":"*/, v10);
    byte_49FCA99 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v50 = 0;
  v51 = 1;
  v12 = sub_1B64170(string___TypeInfo, 5LL);
  lookup = (__int64)System_Int32__ToString((int32_t)&v52, 0LL);
  if ( !v12 )
    goto LABEL_47;
  v16 = lookup;
  v17 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v12 + 24) )
        goto LABEL_46;
      *(_QWORD *)(v12 + 32) = v16;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 32), v16, v14, v15);
      if ( *(_DWORD *)(v12 + 24) <= 1u )
        goto LABEL_46;
      v20 = StringLiteral_1546/*":"*/;
      *(_QWORD *)(v12 + 40) = StringLiteral_1546/*":"*/;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 40), v20, v18, v19);
      lookup = (__int64)System_Int32__ToString((int32_t)&v51, 0LL);
      if ( *(_DWORD *)(v12 + 24) <= 2u
        || (*(_QWORD *)(v12 + 48) = lookup,
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 48), lookup, v21, v22),
            *(_DWORD *)(v12 + 24) <= 3u)
        || (v25 = StringLiteral_1546/*":"*/,
            *(_QWORD *)(v12 + 56) = StringLiteral_1546/*":"*/,
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 56), v25, v23, v24),
            lookup = (__int64)System_Int32__ToString((int32_t)&v50, 0LL),
            *(_DWORD *)(v12 + 24) <= 4u) )
      {
LABEL_46:
        sub_1B6432C(lookup, v16);
      }
      *(_QWORD *)(v12 + 64) = lookup;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 64), lookup, v26, v27);
      v28 = System_String__Concat_61388924((System_String_array *)v12, 0LL);
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_47;
      v29 = *(_QWORD *)lookup;
      v30 = lookup;
      v31 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v32 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v32 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v31;
          v32 += 4;
          if ( !v31 )
            goto LABEL_15;
        }
        v33 = v29 + 16LL * *v32 + 312;
      }
      else
      {
LABEL_15:
        v33 = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v33)(v30, v28, *(_QWORD *)(v33 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( lookup )
      {
        v36 = *(_QWORD *)lookup;
        v37 = lookup;
        v38 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
        if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
        {
          v39 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v36 + 176)
                                                                                            + 8LL);
          while ( *(v39 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            --v38;
            v39 += 2;
            if ( !v38 )
              goto LABEL_23;
          }
          v40 = v36 + 16LL * (*(_DWORD *)v39 + 2) + 312;
        }
        else
        {
LABEL_23:
          v40 = sub_1BB60A8(
                  lookup,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL);
        }
        lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v40)(v37, v28, *(_QWORD *)(v40 + 8));
        if ( lookup )
        {
          v47 = (Il2CppObject *)lookup;
          methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)lookup + 304LL) >= (unsigned int)methodPtr_low
            && *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)lookup + 200LL) + 8 * methodPtr_low - 8) == ServantCommentEntity_TypeInfo )
          {
            if ( ServantCommentEntity__IsOpen((ServantCommentEntity_o *)lookup, -1, 1, v46) )
              v17 = v47;
            ++v50;
            v12 = sub_1B64170(string___TypeInfo, 5LL);
            lookup = (__int64)System_Int32__ToString((int32_t)&v52, 0LL);
            v16 = lookup;
            if ( v12 )
              continue;
          }
        }
      }
      goto LABEL_47;
    }
    if ( v17 )
    {
      if ( !v11 )
        goto LABEL_47;
      items = v11->fields._items;
      v42 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v11->fields._version;
      if ( !items )
        goto LABEL_47;
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          v17,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v17;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)v17, v34, v35);
      }
LABEL_41:
      v45 = v51;
      goto LABEL_42;
    }
    if ( v50 )
      goto LABEL_41;
    v45 = v51;
    if ( v51 != 1 )
      break;
LABEL_42:
    v50 = 0;
    v51 = v45 + 1;
    v12 = sub_1B64170(string___TypeInfo, 5LL);
    lookup = (__int64)System_Int32__ToString((int32_t)&v52, 0LL);
    v16 = lookup;
    v17 = 0LL;
    if ( !v12 )
      goto LABEL_47;
  }
  if ( !v11 )
LABEL_47:
    sub_1B64324(lookup);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v11,
                                         (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall ServantCommentMaster__GetServantListWithQuestClear(
        ServantCommentMaster_o *this,
        int32_t questId,
        int32_t questPhase,
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_int__o *v22; // x23
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  int32_t Count; // w0
  int32_t v25; // w26
  int32_t v26; // w27
  ServantCommentEntity_o *v27; // x28
  __int64 methodPtr_low; // x9
  int32_t m_CachedPtr; // w29
  const MethodInfo *v30; // x1
  System_Int32_array *ImageLimit; // x0
  const MethodInfo *v32; // x3
  System_Int32_array *v33; // x24
  int64_t UserId; // x2
  int32_t ServantLimitCountSealAfter; // w0
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x7
  int32_t svtId; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  ServantCommentMaster_o *v43; // x0
  int32_t v44; // w1
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  ServantLimitImageMaster_o *v47; // [xsp+8h] [xbp-88h]
  UserServantCollectionMaster_o *v48; // [xsp+10h] [xbp-80h]
  UserServantCollectionEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_49FCA9E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_IndexOf_int___, *(_QWORD *)&questId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_1B640C8(&NetworkManager_TypeInfo, v15);
    sub_1B640C8(&ServantCommentEntity_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_49FCA9E = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
  v22 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v20, v21);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v47 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_object_(
                                             Instance,
                                             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
        v48 = (UserServantCollectionMaster_o *)Instance,
        !list) )
  {
LABEL_34:
    sub_1B64324(Instance);
  }
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return v22;
  v25 = Count;
  v26 = 0;
  while ( 1 )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( !Instance )
      goto LABEL_34;
    Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                  v26,
                                  (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_34;
    v27 = (ServantCommentEntity_o *)Instance;
    methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantCommentEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCommentEntity_TypeInfo )
    {
      break;
    }
    if ( !v22 )
      goto LABEL_34;
    m_CachedPtr = Instance->fields.m_CachedPtr;
    if ( !System_Collections_Generic_List_int___Contains(
            v22,
            m_CachedPtr,
            (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      ImageLimit = ServantCommentEntity__GetImageLimit(v27, v30);
      if ( !ImageLimit )
        goto LABEL_38;
      v33 = ImageLimit;
      if ( !*(_QWORD *)&ImageLimit->max_length )
        goto LABEL_38;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      Instance = (DataManager_o *)v48;
      if ( !v48 )
        goto LABEL_34;
      Instance = (DataManager_o *)UserServantCollectionMaster__TryGetEntity(v48, &entity, UserId, m_CachedPtr, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_38;
      if ( !entity )
        goto LABEL_34;
      Instance = (DataManager_o *)v47;
      if ( !v47 )
        goto LABEL_34;
      ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                     v47,
                                     m_CachedPtr,
                                     entity->fields.maxLimitCount,
                                     v32);
      if ( (System_Array__IndexOf_int_(
              v33,
              ServantLimitCountSealAfter,
              (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
      {
LABEL_38:
        if ( ServantCommentEntity__IsOnlyOpenQuestCond(v27, questId, questPhase, v32) )
          goto LABEL_39;
        Instance = (DataManager_o *)MasterData_object;
        if ( !MasterData_object )
          goto LABEL_34;
        if ( ServantCommentAddMaster__IsOnlyOpenQuestCond(
               (ServantCommentAddMaster_o *)MasterData_object,
               m_CachedPtr,
               v27->fields.id,
               v27->fields.priority,
               1,
               questId,
               questPhase,
               v37) )
        {
LABEL_39:
          Instance = (DataManager_o *)ServantCommentEntity__IsOpen(v27, -1, 1, v36);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            svtId = v27->fields.svtId;
            items = v22->fields._items;
            v40 = Method_System_Collections_Generic_List_int__Add__;
            ++v22->fields._version;
            if ( !items )
              goto LABEL_34;
            size = v22->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v22,
                svtId,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
            }
            else
            {
              v22->fields._size = size + 1;
              items->m_Items[size + 1] = svtId;
            }
          }
        }
      }
    }
    if ( v25 == ++v26 )
      return v22;
  }
  sub_1B645E4(Instance);
  return (System_Collections_Generic_List_int__o *)ServantCommentMaster__GetServantListWithQuestClearAndImageLimit(
                                                     v43,
                                                     v44,
                                                     v45,
                                                     v46);
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
  Il2CppObject *Master_object; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x22
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v20; // w24
  int32_t v21; // w25
  const MethodInfo *v22; // x3
  ServantCommentEntity_o *v23; // x26
  __int64 methodPtr_low; // x9
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x7
  const MethodInfo *v27; // x1
  bool IsOpen; // w27
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  ServantCommentMaster_o *v36; // x0
  int32_t v37; // w1
  const MethodInfo *v38; // x2

  if ( (byte_49FCA9F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantCommentAddMaster___, v8);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v13);
    sub_1B640C8(&ServantCommentEntity_TypeInfo, v14);
    byte_49FCA9F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  v18 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                       v16,
                                                       v17);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list < 1 )
  {
LABEL_26:
    if ( v18 )
      return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v18,
                                             (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
LABEL_28:
    sub_1B64324(list);
  }
  v20 = (int)list;
  v21 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_28;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v21,
                                                               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_28;
    v23 = (ServantCommentEntity_o *)list;
    methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantCommentEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCommentEntity_TypeInfo )
    {
      break;
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)ServantCommentEntity__IsOnlyOpenQuestCond(
                                                               (ServantCommentEntity_o *)list,
                                                               questId,
                                                               questPhase,
                                                               v22);
    if ( ((unsigned __int8)list & 1) != 0 )
      goto LABEL_15;
    if ( !Master_object )
      goto LABEL_28;
    if ( ServantCommentAddMaster__IsOnlyOpenQuestCond(
           (ServantCommentAddMaster_o *)Master_object,
           v23->fields.svtId,
           v23->fields.id,
           v23->fields.priority,
           1,
           questId,
           questPhase,
           v26) )
    {
LABEL_15:
      IsOpen = ServantCommentEntity__IsOpen(v23, -1, 1, v25);
    }
    else
    {
      IsOpen = 0;
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)ServantCommentEntity__GetImageLimit(v23, v27);
    if ( list && IsOpen && list[1].klass )
    {
      if ( !v18 )
        goto LABEL_28;
      items = v18->fields._items;
      v32 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v18->fields._version;
      if ( !items )
        goto LABEL_28;
      size = v18->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          (Il2CppObject *)v23,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj.klass + size;
        v18->fields._size = size + 1;
        v34[4] = (Il2CppClass *)v23;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)v23, v29, v30);
      }
    }
    if ( v20 == ++v21 )
      goto LABEL_26;
  }
  sub_1B645E4(list);
  return (ServantCommentEntity_array *)ServantCommentMaster__GetNewProfileEntities(v36, v37, v38);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentMaster__IsNew(ServantCommentMaster_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  ServantCommentEntity_o *lookup; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  ServantCommentEntity_o *v11; // x1
  ServantCommentEntity_o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x21
  ServantCommentEntity_c *klass; // x8
  ServantCommentEntity_o *v25; // x22
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 v28; // x0
  const MethodInfo *v29; // x1
  ServantCommentEntity_c *v30; // x8
  ServantCommentEntity_o *v31; // x22
  __int64 v32; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v33; // x10
  __int64 v34; // x0
  int v35; // w8
  const MethodInfo *v36; // x3
  ServantCommentEntity_o *v37; // x21
  __int64 methodPtr_low; // x10
  int v40; // [xsp+Ch] [xbp-54h] BYREF
  int v41; // [xsp+18h] [xbp-48h] BYREF
  int32_t v42; // [xsp+1Ch] [xbp-44h] BYREF

  v42 = svtId;
  if ( (byte_49FCA9C & 1) == 0 )
  {
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&svtId);
    sub_1B640C8(&ServantCommentEntity_TypeInfo, v4);
    sub_1B640C8(&string___TypeInfo, v5);
    sub_1B640C8(&StringLiteral_1546/*":"*/, v6);
    byte_49FCA9C = 1;
  }
  v41 = 1;
  v40 = 0;
  v7 = sub_1B64170(string___TypeInfo, 5LL);
  lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v42, 0LL);
  if ( !v7 )
LABEL_42:
    sub_1B64324(lookup);
  v11 = lookup;
  v12 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v7 + 24) )
        goto LABEL_41;
      *(_QWORD *)(v7 + 32) = v11;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)v11, v9, v10);
      if ( *(_DWORD *)(v7 + 24) <= 1u )
        goto LABEL_41;
      v15 = StringLiteral_1546/*":"*/;
      *(_QWORD *)(v7 + 40) = StringLiteral_1546/*":"*/;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 40), v15, v13, v14);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v41, 0LL);
      if ( *(_DWORD *)(v7 + 24) <= 2u
        || (*(_QWORD *)(v7 + 48) = lookup,
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)lookup, v16, v17),
            *(_DWORD *)(v7 + 24) <= 3u)
        || (v20 = StringLiteral_1546/*":"*/,
            *(_QWORD *)(v7 + 56) = StringLiteral_1546/*":"*/,
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 56), v20, v18, v19),
            lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v40, 0LL),
            *(_DWORD *)(v7 + 24) <= 4u) )
      {
LABEL_41:
        sub_1B6432C(lookup, v11);
      }
      *(_QWORD *)(v7 + 64) = lookup;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 64), (int32_t)lookup, v21, v22);
      v23 = System_String__Concat_61388924((System_String_array *)v7, 0LL);
      lookup = (ServantCommentEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_42;
      klass = lookup->klass;
      v25 = lookup;
      v26 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v26;
          p_offset += 4;
          if ( !v26 )
            goto LABEL_15;
        }
        v28 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_15:
        v28 = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v28)(
              v25,
              v23,
              *(_QWORD *)(v28 + 8)) & 1) == 0 )
        break;
      lookup = (ServantCommentEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( lookup )
      {
        v30 = lookup->klass;
        v31 = lookup;
        v32 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
        {
          v33 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v30->_1.interfaceOffsets->offset;
          while ( *(v33 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            --v32;
            v33 += 2;
            if ( !v32 )
              goto LABEL_23;
          }
          v34 = (__int64)(&v30->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v33);
        }
        else
        {
LABEL_23:
          v34 = sub_1BB60A8(
                  lookup,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL);
        }
        lookup = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v34)(
                                             v31,
                                             v23,
                                             *(_QWORD *)(v34 + 8));
        if ( lookup )
        {
          v37 = lookup;
          methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(lookup->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
            && (ServantCommentEntity_c *)lookup->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantCommentEntity_TypeInfo )
          {
            if ( ServantCommentEntity__IsOpen(lookup, -1, 1, v36) )
              v12 = v37;
            ++v40;
            v7 = sub_1B64170(string___TypeInfo, 5LL);
            lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v42, 0LL);
            v11 = lookup;
            if ( v7 )
              continue;
          }
        }
      }
      goto LABEL_42;
    }
    if ( v12 )
    {
      if ( ServantCommentEntity__IsNew(v12, v29) )
        return v12 != 0LL;
      goto LABEL_28;
    }
    if ( !v40 )
      break;
LABEL_28:
    v35 = v41;
LABEL_29:
    v41 = v35 + 1;
    v40 = 0;
    v7 = sub_1B64170(string___TypeInfo, 5LL);
    lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v42, 0LL);
    v11 = lookup;
    v12 = 0LL;
    if ( !v7 )
      goto LABEL_42;
  }
  v35 = v41;
  if ( v41 == 1 )
    goto LABEL_29;
  return v12 != 0LL;
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v21; // w22
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  ServantCommentEntity_o *v26; // x0
  ServantCommentEntity_o *v27; // x23
  __int64 methodPtr_low; // x9
  System_Int32_array *ImageLimit; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_IEnumerable_T__o *v32; // x25
  System_Collections_Generic_List_int__o *v33; // x24
  __int64 v34; // x0
  const MethodInfo *v35; // x3
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_49FCAA1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6);
    sub_1B640C8(&System_IDisposable_TypeInfo, v7);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Sort__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor___75657200, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B640C8(&ServantCommentEntity_TypeInfo, v14);
    byte_49FCAA1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list
    || (System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0LL) )
  {
    sub_1B64324(list);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v21 & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_17;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_17:
      v25 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                      Enumerator,
                                      *(_QWORD *)(v25 + 8));
    v27 = v26;
    if ( !v26 )
      goto LABEL_39;
    methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v26->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantCommentEntity_c *)v26->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCommentEntity_TypeInfo )
    {
      sub_1B645E4(v26);
LABEL_39:
      sub_1B64324(v26);
    }
    if ( v26->fields.svtId == svtId )
    {
      ImageLimit = ServantCommentEntity__GetImageLimit(v26, (const MethodInfo *)ServantCommentEntity_TypeInfo);
      v32 = (System_Collections_Generic_IEnumerable_T__o *)ImageLimit;
      if ( ImageLimit )
      {
        if ( *(_QWORD *)&ImageLimit->max_length )
        {
          v33 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                            System_Collections_Generic_List_int__TypeInfo,
                                                            v30,
                                                            v31);
          System_Collections_Generic_List_int____ctor_55113648(
            v33,
            v32,
            (const MethodInfo_348F7B0 *)Method_System_Collections_Generic_List_int___ctor___75657200);
          if ( !v33 )
            sub_1B64324(v34);
          System_Collections_Generic_List_int___Sort(
            v33,
            (const MethodInfo_34918C0 *)Method_System_Collections_Generic_List_int__Sort__);
          if ( System_Collections_Generic_List_int___get_Item(
                 v33,
                 0,
                 (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__) >= 3
            && System_Collections_Generic_List_int___get_Item(
                 v33,
                 0,
                 (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__) == limitCount
            && ServantCommentEntity__IsOpen(v27, -1, 1, v35) )
          {
            goto LABEL_31;
          }
        }
      }
    }
  }
  v21 = 0;
LABEL_31:
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_35;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_35:
    v39 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  return v21 & 1;
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
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  const MethodInfo *v27; // x3
  System_String_o *v28; // x20
  Il2CppObject *Name; // x0
  System_String_o *v30; // x20
  Il2CppObject *Instance; // x21
  System_String_o *v32; // x22
  System_String_o *v33; // x23
  __int64 v34; // x1
  __int64 v35; // x2
  CommonConfirmDialog_ClickDelegate_o *v36; // x24
  Il2CppObject *entity; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_49FCAA2 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&limitCount);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_1B640C8(&DataManager_TypeInfo, v11);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v12);
    sub_1B640C8(&LocalizationManager_TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1B640C8(&Method_ServantCommentMaster___c__DisplayClass16_0__OpenSaintGraphProfileChange_b__0__, v15);
    sub_1B640C8(&ServantCommentMaster___c__DisplayClass16_0_TypeInfo, v16);
    sub_1B640C8(&StringLiteral_10792/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/, v17);
    sub_1B640C8(&StringLiteral_10791/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/, v18);
    sub_1B640C8(&StringLiteral_1/*""*/, v19);
    sub_1B640C8(&StringLiteral_10789/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/, v20);
    byte_49FCAA2 = 1;
  }
  entity = 0LL;
  v21 = sub_1B64314(ServantCommentMaster___c__DisplayClass16_0_TypeInfo, *(_QWORD *)&limitCount, decideAction);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_14;
  *(_QWORD *)(v21 + 16) = decideAction;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 16), (int32_t)decideAction, v23, v24);
  *(_QWORD *)(v21 + 32) = endAction;
  *(_DWORD *)(v21 + 24) = svtId;
  *(_DWORD *)(v21 + 28) = limitCount;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 32), (int32_t)endAction, v25, v26);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_14;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    &entity,
    *(_DWORD *)(v21 + 24),
    (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_10792/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/,
                                                                  0LL);
  if ( !entity )
    goto LABEL_14;
  v28 = (System_String_o *)Master_object;
  Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)entity, *(_DWORD *)(v21 + 28), -1, v27);
  v30 = System_String__Format(v28, Name, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_10791/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/, 0LL);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_10789/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/, 0LL);
  v36 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v34, v35);
  CommonConfirmDialog_ClickDelegate___ctor(
    v36,
    (Il2CppObject *)v21,
    Method_ServantCommentMaster___c__DisplayClass16_0__OpenSaintGraphProfileChange_b__0__,
    0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Instance )
LABEL_14:
    sub_1B64324(Master_object);
  CommonUI__OpenConfirmDialogOnFade(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v30,
    v32,
    v33,
    v36,
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
  if ( (byte_49FCA9A & 1) == 0 )
  {
    sub_1B640C8(&ServantCommentManager_TypeInfo, *(_QWORD *)&svtId);
    byte_49FCA9A = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__SetOpen(svtId, svtCommentId, svtCommentPriority, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommentMaster__SetOpen_39300792(
        ServantCommentMaster_o *this,
        int32_t svtId,
        System_Int32_array *svtCommentIdList,
        System_Int32_array *svtCommentPriorityList,
        const MethodInfo *method)
{
  if ( (byte_49FCA9B & 1) == 0 )
  {
    sub_1B640C8(&ServantCommentManager_TypeInfo, *(_QWORD *)&svtId);
    byte_49FCA9B = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__SetOpen_40145556(svtId, svtCommentIdList, svtCommentPriorityList, 0LL);
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
  Il2CppObject *PK; // x2

  if ( (byte_49FCA95 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__, entity);
    sub_1B640C8(&ServantCommentEntity_TypeInfo, v11);
    byte_49FCA95 = 1;
  }
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
  PK = (Il2CppObject *)ServantCommentEntity__CreatePK(svtId, id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommentMaster_ProfileChangeDecideDelegate___ctor(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 4 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19AC944;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AC8D4;
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
  _QWORD v14[6]; // [xsp+0h] [xbp-80h] BYREF
  char v15[4]; // [xsp+34h] [xbp-4Ch] BYREF
  int32_t v16; // [xsp+38h] [xbp-48h] BYREF
  int32_t v17; // [xsp+3Ch] [xbp-44h] BYREF

  v16 = limitCount;
  v17 = svtid;
  v15[0] = isDecide;
  if ( (byte_49FCAA4 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, *(_QWORD *)&svtid);
    sub_1B640C8(&int_TypeInfo, v12);
    byte_49FCAA4 = 1;
  }
  v14[4] = 0LL;
  v14[0] = j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v14[2] = j_il2cpp_value_box_0(bool_TypeInfo, v15);
  v14[3] = finishCallback;
  return (System_IAsyncResult_o *)sub_1B6407C(this, v14, callback, object);
}


void __fastcall ServantCommentMaster_ProfileChangeDecideDelegate__EndInvoke(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
}


void __fastcall ServantCommentMaster_ProfileChangeDecideDelegate__Invoke(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        int32_t svtid,
        int32_t limitCount,
        bool isDecide,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, bool, System_Action_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    svtid,
    limitCount,
    isDecide,
    finishCallback,
    *(_QWORD *)&this->fields.extra_arg);
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
  struct ServantCommentMaster_ProfileChangeDecideDelegate_o *decideAction; // x9
  __int64 limitCount; // x2
  unsigned int svtId; // w8
  System_Action_o *endAction; // x4

  decideAction = this->fields.decideAction;
  svtId = this->fields.svtId;
  limitCount = (unsigned int)this->fields.limitCount;
  endAction = this->fields.endAction;
  if ( decideAction )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, __int64, bool, System_Action_o *, _QWORD))decideAction->fields.m_target)(
      decideAction->fields.original_method_info,
      svtId,
      limitCount,
      isDecide,
      endAction,
      *(_QWORD *)&decideAction->fields.extra_arg);
  else
    ServantCommentMaster__DefaultProfileChangeDecideAction(
      svtId,
      limitCount,
      isDecide,
      endAction,
      (const MethodInfo *)endAction);
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
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  AvalonSceneManager_c *v10; // x8
  CommonUI_o *v11; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__1; // x21
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49FCAA5 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDcd);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_ServantCommentMaster___c__DisplayClass17_0__DefaultProfileChangeDecideAction_b__1__, v6);
    byte_49FCAA5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  v11 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantCommentMaster___c__DisplayClass17_0__DefaultProfileChangeDecideAction_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v14, v15);
  }
  if ( !v11 )
    sub_1B64324(Instance);
  CommonUI__maskFadeout(v11, 1, DEFAULT_FADE_TIME, _9__1, 0LL);
}


void __fastcall ServantCommentMaster___c__DisplayClass17_0___DefaultProfileChangeDecideAction_b__1(
        ServantCommentMaster___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  CommonUI_o *v5; // x20

  if ( (byte_49FCAA6 & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_49FCAA6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v5 )
LABEL_8:
    sub_1B64324(Instance);
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}