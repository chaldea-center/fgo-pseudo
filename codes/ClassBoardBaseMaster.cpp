void ClassBoardBaseMaster___ctor(ClassBoardBaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59383D5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int___ctor__);
    byte_59383D5 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    434,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int___ctor__);
}


ClassBoardBaseEntity_o *ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(
        ClassBoardBaseMaster_o *this,
        int32_t parentClassBoardBaseId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_object__bool__o *v9; // x19

  if ( (byte_59383D3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardBaseEntity___);
    sub_21FFC50(&System_Func_ClassBoardBaseEntity__bool__TypeInfo);
    sub_21FFC50(&Method_ClassBoardBaseMaster___c__DisplayClass0_0__GetGrandClassBoardBaseEntity_b__0__);
    sub_21FFC50(&ClassBoardBaseMaster___c__DisplayClass0_0_TypeInfo);
    byte_59383D3 = 1;
  }
  v5 = sub_21FFEBC(ClassBoardBaseMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  list = this->fields.list;
  *(_DWORD *)(v5 + 16) = parentClassBoardBaseId;
  v9 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ClassBoardBaseEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ClassBoardBaseMaster___c__DisplayClass0_0__GetGrandClassBoardBaseEntity_b__0__,
    0);
  return (ClassBoardBaseEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                     (System_Func_TSource__bool__o *)v9,
                                     (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardBaseEntity___);
}


System_String_o *ClassBoardBaseMaster__GetParentClassNameByBaseClassId(
        ClassBoardBaseMaster_o *this,
        int32_t baseClassId,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  int32_t v8; // w1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59383D4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    byte_59383D4 = 1;
  }
  entity = 0;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         baseClassId,
         (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( !v5 )
    return **(System_String_o ***)(qword_594C0B8 + 184);
  if ( !entity )
    sub_21FFECC(v5, v6);
  v8 = *(_DWORD *)((char *)&qword_48 + (_QWORD)entity);
  if ( v8 <= 0 )
    return *(System_String_o **)((char *)off_18 + (_QWORD)entity);
  else
    return ClassBoardBaseMaster__GetParentClassNameByBaseClassId(this, v8, v7);
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
    sub_21FFECC(this, 0);
  return e->fields.parentClassBoardBaseId == this->fields.parentClassBoardBaseId;
}