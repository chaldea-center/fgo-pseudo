void __fastcall UserImagePartsGroupEntity___ctor(UserImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BFE529 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataEntityBase_int___ctor__, method);
    byte_4BFE529 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3278C9C *)Method_DataEntityBase_int___ctor__);
}


void __fastcall UserImagePartsGroupEntity__ConcatImageValues(
        UserImagePartsGroupEntity_o *this,
        System_String_o **defaultName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_T__o *ImageValue; // x20
  System_String_o *v7; // x21
  System_String_o *v8; // x0
  System_String_o *v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BFE527 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_String_Join_int___, defaultName);
    sub_1C2E12C(&StringLiteral_16410/*"_"*/, v5);
    byte_4BFE527 = 1;
  }
  ImageValue = (System_Collections_Generic_IEnumerable_T__o *)UserImagePartsGroupEntity__GetImageValue(
                                                                this,
                                                                (const MethodInfo *)defaultName);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ImageValue, 0LL) )
  {
    v7 = *defaultName;
    v8 = System_String__Join_int_(
           (System_String_o *)StringLiteral_16410/*"_"*/,
           ImageValue,
           (const MethodInfo_307664C *)Method_System_String_Join_int___);
    v9 = System_String__Concat_63246844(v7, (System_String_o *)StringLiteral_16410/*"_"*/, v8, 0LL);
    *defaultName = v9;
    sub_1C2E0D0((PartyOrganizationUtility_o *)defaultName, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserImagePartsGroupEntity__ContainsImagePartsGroupIdx(
        UserImagePartsGroupEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *idxs; // x0

  if ( (byte_4BFE528 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&index);
    byte_4BFE528 = 1;
  }
  idxs = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.idxs;
  if ( idxs )
    LOBYTE(idxs) = System_Linq_Enumerable__Contains_int_(
                     idxs,
                     index,
                     (const MethodInfo_2FE9D88 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)idxs;
}


int32_t __fastcall UserImagePartsGroupEntity__CreatePrimaryKey(
        UserImagePartsGroupEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}


System_Collections_Generic_List_int__o *__fastcall UserImagePartsGroupEntity__GetImageValue(
        UserImagePartsGroupEntity_o *this,
        const MethodInfo *method)
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  ImagePartsGroupMaster_o *Master_object; // x0
  Il2CppObject *v20; // x1
  struct System_Int32_array *idxs; // x8
  ImagePartsGroupMaster_o *v22; // x21
  System_Collections_Generic_List_object__o *v23; // x20
  struct System_Int32_array *v24; // x22
  __int64 v25; // x8
  unsigned __int64 v26; // x23
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Collections_Generic_List_int__o *v37; // x19
  UserImagePartsGroupEntity___c_c *v38; // x0
  System_Comparison_T__o *_9__3_0; // x21
  Il2CppObject *v40; // x22
  struct UserImagePartsGroupEntity___c_StaticFields *static_fields; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  _BOOL8 v48; // x0
  __int64 v49; // x1
  __int64 monitor_high; // x1
  struct System_Int32_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+20h] [xbp-60h] BYREF
  ImagePartsGroupEntity_o *entity; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4BFE526 & 1) == 0 )
  {
    sub_1C2E12C(&System_Comparison_ImagePartsGroupEntity__TypeInfo, method);
    sub_1C2E12C(&Method_DataManager_GetMaster_ImagePartsGroupMaster___, v3);
    sub_1C2E12C(&DataManager_TypeInfo, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__Dispose__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__MoveNext__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__get_Current__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ImagePartsGroupEntity__Add__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ImagePartsGroupEntity__GetEnumerator__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ImagePartsGroupEntity__Sort__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ImagePartsGroupEntity___ctor__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ImagePartsGroupEntity__get_Count__, v14);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_1C2E12C(&System_Collections_Generic_List_ImagePartsGroupEntity__TypeInfo, v16);
    sub_1C2E12C(&Method_UserImagePartsGroupEntity___c__GetImageValue_b__3_0__, v17);
    sub_1C2E12C(&UserImagePartsGroupEntity___c_TypeInfo, v18);
    byte_4BFE526 = 1;
  }
  entity = 0LL;
  memset(&v56, 0, sizeof(v56));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ImagePartsGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
  idxs = this->fields.idxs;
  if ( !idxs )
    goto LABEL_41;
  v22 = Master_object;
  if ( !*(_QWORD *)&idxs->max_length )
    goto LABEL_37;
  v23 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_ImagePartsGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_ImagePartsGroupEntity___ctor__);
  v24 = this->fields.idxs;
  if ( !v24 )
    goto LABEL_41;
  v25 = *(_QWORD *)&v24->max_length;
  if ( (int)v25 >= 1 )
  {
    v26 = 0LL;
    while ( 1 )
    {
      if ( v26 >= (unsigned int)v25 )
        sub_1C2E390(Master_object, v20);
      if ( !v22 )
        break;
      Master_object = (ImagePartsGroupMaster_o *)ImagePartsGroupMaster__TryGetEntity(
                                                   v22,
                                                   &entity,
                                                   this->fields.id,
                                                   v24->m_Items[v26 + 1],
                                                   0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        Master_object = (ImagePartsGroupMaster_o *)entity;
        if ( !entity )
          break;
        Master_object = (ImagePartsGroupMaster_o *)ImagePartsGroupEntity__IsUseEquipImage(entity, 0LL);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
          return ImagePartsGroupMaster__GetDefaultImageValues(v22, this->fields.id, 0LL);
        if ( !v23 )
          break;
        v20 = (Il2CppObject *)entity;
        items = v23->fields._items;
        v34 = Method_System_Collections_Generic_List_ImagePartsGroupEntity__Add__;
        ++v23->fields._version;
        if ( !items )
          break;
        size = v23->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v23,
            v20,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          v23->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v20;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v36 + 4), (int64_t)v20, v27, v28, v29, v30, v31, v32);
        }
      }
      LODWORD(v25) = v24->max_length;
      if ( (__int64)++v26 >= (int)v25 )
        goto LABEL_21;
    }
LABEL_41:
    sub_1C2E388(Master_object, v20);
  }
LABEL_21:
  if ( !v23 )
    goto LABEL_41;
  if ( v23->fields._size >= 1 )
  {
    v37 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v37,
      (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
    v38 = UserImagePartsGroupEntity___c_TypeInfo;
    if ( !UserImagePartsGroupEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserImagePartsGroupEntity___c_TypeInfo);
      v38 = UserImagePartsGroupEntity___c_TypeInfo;
    }
    _9__3_0 = (System_Comparison_T__o *)v38->static_fields->__9__3_0;
    if ( !_9__3_0 )
    {
      if ( !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38);
        v38 = UserImagePartsGroupEntity___c_TypeInfo;
      }
      v40 = (Il2CppObject *)v38->static_fields->__9;
      _9__3_0 = (System_Comparison_T__o *)sub_1C2E378(System_Comparison_ImagePartsGroupEntity__TypeInfo);
      System_Comparison_object____ctor(_9__3_0, v40, Method_UserImagePartsGroupEntity___c__GetImageValue_b__3_0__, 0LL);
      static_fields = UserImagePartsGroupEntity___c_TypeInfo->static_fields;
      static_fields->__9__3_0 = (struct System_Comparison_ImagePartsGroupEntity__o *)_9__3_0;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&static_fields->__9__3_0,
        (int64_t)_9__3_0,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
    }
    System_Collections_Generic_List_object___Sort_57070448(
      v23,
      _9__3_0,
      (const MethodInfo_366D370 *)Method_System_Collections_Generic_List_ImagePartsGroupEntity__Sort__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v55,
      v23,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_ImagePartsGroupEntity__GetEnumerator__);
    v56 = v55;
    while ( 1 )
    {
      v48 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v56,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__MoveNext__);
      if ( !v48 )
        break;
      if ( !v56.fields._current )
        sub_1C2E388(v48, v49);
      if ( !v37 )
        sub_1C2E388(v48, v49);
      monitor_high = HIDWORD(v56.fields._current[1].monitor);
      v51 = v37->fields._items;
      v52 = Method_System_Collections_Generic_List_int__Add__;
      ++v37->fields._version;
      if ( !v51 )
        sub_1C2E388(v48, monitor_high);
      v53 = v37->fields._size;
      if ( (unsigned int)v53 >= v51->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v37,
          monitor_high,
          *(const MethodInfo_364E888 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v37->fields._size = v53 + 1;
        v51->m_Items[v53 + 1] = monitor_high;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v56,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__Dispose__);
  }
  else
  {
LABEL_37:
    if ( !v22 )
      goto LABEL_41;
    return ImagePartsGroupMaster__GetDefaultImageValues(v22, this->fields.id, 0LL);
  }
  return v37;
}


void __fastcall UserImagePartsGroupEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFE52A & 1) == 0 )
  {
    sub_1C2E12C(&UserImagePartsGroupEntity___c_TypeInfo, v1);
    byte_4BFE52A = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(UserImagePartsGroupEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserImagePartsGroupEntity___c_TypeInfo->static_fields->__9 = (struct UserImagePartsGroupEntity___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)UserImagePartsGroupEntity___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall UserImagePartsGroupEntity___c___ctor(UserImagePartsGroupEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall UserImagePartsGroupEntity___c___GetImageValue_b__3_0(
        UserImagePartsGroupEntity___c_o *this,
        ImagePartsGroupEntity_o *a,
        ImagePartsGroupEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C2E388(this, a);
  return a->fields.typeValue - b->fields.typeValue;
}