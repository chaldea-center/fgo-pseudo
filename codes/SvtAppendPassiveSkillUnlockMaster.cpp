void SvtAppendPassiveSkillUnlockMaster___ctor(SvtAppendPassiveSkillUnlockMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939398 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_SvtAppendPassiveSkillUnlockMaster__SvtAppendPassiveSkillUnlockEntity__string___ctor__);
    byte_5939398 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    379,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_SvtAppendPassiveSkillUnlockMaster__SvtAppendPassiveSkillUnlockEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SvtAppendPassiveSkillUnlockEntity_o *SvtAppendPassiveSkillUnlockMaster__GetEntity(
        SvtAppendPassiveSkillUnlockMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5939396 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_SvtAppendPassiveSkillUnlockMaster__SvtAppendPassiveSkillUnlockEntity__string__GetEntity__);
    byte_5939396 = 1;
  }
  PK = (Il2CppObject *)SvtAppendPassiveSkillUnlockEntity__CreatePK(svtId, num, *(const MethodInfo **)&num);
  return (SvtAppendPassiveSkillUnlockEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  PK,
                                                  (const MethodInfo_3EE2044 *)Method_DataMasterBase_SvtAppendPassiveSkillUnlockMaster__SvtAppendPassiveSkillUnlockEntity__string__GetEntity__);
}


SvtAppendPassiveSkillUnlockEntity_array *SvtAppendPassiveSkillUnlockMaster__GetEntityListFromSvtId(
        SvtAppendPassiveSkillUnlockMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_5939399 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_SvtAppendPassiveSkillUnlockEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_SvtAppendPassiveSkillUnlockEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtAppendPassiveSkillUnlockEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtAppendPassiveSkillUnlockEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtAppendPassiveSkillUnlockEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_SvtAppendPassiveSkillUnlockEntity__TypeInfo);
    byte_5939399 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SvtAppendPassiveSkillUnlockEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SvtAppendPassiveSkillUnlockEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_SvtAppendPassiveSkillUnlockEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_SvtAppendPassiveSkillUnlockEntity__get_Item__);
    if ( list )
    {
      v6 = list;
      if ( LODWORD(list->fields.items) == svtId )
      {
        if ( !v5 )
          goto LABEL_15;
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_SvtAppendPassiveSkillUnlockEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v6;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_15;
  }
  if ( !v5 )
LABEL_15:
    sub_21FFECC(list, v6);
  return (SvtAppendPassiveSkillUnlockEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                      v5,
                                                      (const MethodInfo_445164C *)Method_System_Collections_Generic_List_SvtAppendPassiveSkillUnlockEntity__ToArray__);
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

  if ( (byte_5939397 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_SvtAppendPassiveSkillUnlockMaster__SvtAppendPassiveSkillUnlockEntity__string__TryGetEntity__);
    byte_5939397 = 1;
  }
  PK = (Il2CppObject *)SvtAppendPassiveSkillUnlockEntity__CreatePK(svtId, num, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_SvtAppendPassiveSkillUnlockMaster__SvtAppendPassiveSkillUnlockEntity__string__TryGetEntity__);
}