void SvtAppendPassiveSkillUnlockMaster___ctor(SvtAppendPassiveSkillUnlockMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C38654 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_SvtAppendPassiveSkillUnlockMaster__SvtAppendPassiveSkillUnlockEntity__string___ctor__);
    byte_4C38654 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    377,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_SvtAppendPassiveSkillUnlockMaster__SvtAppendPassiveSkillUnlockEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SvtAppendPassiveSkillUnlockEntity_o *SvtAppendPassiveSkillUnlockMaster__GetEntity(
        SvtAppendPassiveSkillUnlockMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C38652 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_SvtAppendPassiveSkillUnlockMaster__SvtAppendPassiveSkillUnlockEntity__string__GetEntity__);
    byte_4C38652 = 1;
  }
  PK = (Il2CppObject *)SvtAppendPassiveSkillUnlockEntity__CreatePK(svtId, num, *(const MethodInfo **)&num);
  return (SvtAppendPassiveSkillUnlockEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  PK,
                                                  (const MethodInfo_339B2F0 *)Method_DataMasterBase_SvtAppendPassiveSkillUnlockMaster__SvtAppendPassiveSkillUnlockEntity__string__GetEntity__);
}


SvtAppendPassiveSkillUnlockEntity_array *SvtAppendPassiveSkillUnlockMaster__GetEntityListFromSvtId(
        SvtAppendPassiveSkillUnlockMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v7; // w22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_ObjectModel_Collection_T__o *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4C38655 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_SvtAppendPassiveSkillUnlockEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_SvtAppendPassiveSkillUnlockEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SvtAppendPassiveSkillUnlockEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SvtAppendPassiveSkillUnlockEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SvtAppendPassiveSkillUnlockEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_SvtAppendPassiveSkillUnlockEntity__TypeInfo);
    byte_4C38655 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_SvtAppendPassiveSkillUnlockEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_SvtAppendPassiveSkillUnlockEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v7 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_SvtAppendPassiveSkillUnlockEntity__get_Count__);
    if ( v7 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v7,
                                                               (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_SvtAppendPassiveSkillUnlockEntity__get_Item__);
    if ( list )
    {
      v10 = list;
      if ( LODWORD(list->fields.items) == svtId )
      {
        if ( !v5 )
          goto LABEL_18;
        items = v5->fields._items;
        v12 = Method_System_Collections_Generic_List_SvtAppendPassiveSkillUnlockEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v14 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v14[4] = (Il2CppClass *)v10;
          sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v10, v8, v9);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v7;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v5 )
LABEL_18:
    sub_1C32E7C(list);
  return (SvtAppendPassiveSkillUnlockEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                      v5,
                                                      (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_SvtAppendPassiveSkillUnlockEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool SvtAppendPassiveSkillUnlockMaster__TryGetEntity(
        SvtAppendPassiveSkillUnlockMaster_o *this,
        SvtAppendPassiveSkillUnlockEntity_o **entity,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C38653 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_SvtAppendPassiveSkillUnlockMaster__SvtAppendPassiveSkillUnlockEntity__string__TryGetEntity__);
    byte_4C38653 = 1;
  }
  PK = (Il2CppObject *)SvtAppendPassiveSkillUnlockEntity__CreatePK(svtId, num, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_SvtAppendPassiveSkillUnlockMaster__SvtAppendPassiveSkillUnlockEntity__string__TryGetEntity__);
}