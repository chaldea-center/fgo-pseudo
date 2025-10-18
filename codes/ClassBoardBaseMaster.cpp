void ClassBoardBaseMaster___ctor(ClassBoardBaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C42D14 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int___ctor__);
    byte_4C42D14 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    432,
    (const MethodInfo_339ED7C *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int___ctor__);
}


ClassBoardBaseEntity_o *ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(
        ClassBoardBaseMaster_o *this,
        int32_t parentClassBoardBaseId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v8; // x20

  if ( (byte_4C42D12 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardBaseEntity___);
    sub_1C37058(&System_Func_ClassBoardBaseEntity__bool__TypeInfo);
    sub_1C37058(&Method_ClassBoardBaseMaster___c__DisplayClass0_0__GetGrandClassBoardBaseEntity_b__0__);
    sub_1C37058(&ClassBoardBaseMaster___c__DisplayClass0_0_TypeInfo);
    byte_4C42D12 = 1;
  }
  v5 = sub_1C372A4(ClassBoardBaseMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_DWORD *)(v5 + 16) = parentClassBoardBaseId;
  list = this->fields.list;
  v8 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_ClassBoardBaseEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_ClassBoardBaseMaster___c__DisplayClass0_0__GetGrandClassBoardBaseEntity_b__0__,
    0);
  return (ClassBoardBaseEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__51451648(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                     (System_Func_TSource__bool__o *)v8,
                                     (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardBaseEntity___);
}


System_String_o *ClassBoardBaseMaster__GetParentClassNameByBaseClassId(
        ClassBoardBaseMaster_o *this,
        int32_t baseClassId,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x2
  int32_t v7; // w1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C42D13 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C37058(&string_TypeInfo);
    byte_4C42D13 = 1;
  }
  entity = 0;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         baseClassId,
         (const MethodInfo_33A10EC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( !v5 )
    return string_TypeInfo->static_fields->Empty;
  if ( !entity )
    sub_1C372B4(v5);
  v7 = *(_DWORD *)((char *)&qword_48 + (_QWORD)entity);
  if ( v7 <= 0 )
    return *(System_String_o **)((char *)&off_18 + (_QWORD)entity);
  else
    return ClassBoardBaseMaster__GetParentClassNameByBaseClassId(this, v7, v6);
}


void ClassBoardBaseMaster___c__DisplayClass0_0___ctor(
        ClassBoardBaseMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardBaseMaster___c__DisplayClass0_0___GetGrandClassBoardBaseEntity_b__0(
        ClassBoardBaseMaster___c__DisplayClass0_0_o *this,
        ClassBoardBaseEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C372B4(this);
  return e->fields.parentClassBoardBaseId == this->fields.parentClassBoardBaseId;
}