void __fastcall FieldAliveServantData___ctor(FieldAliveServantData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5D5F9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_4A5D5F9 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  this->fields.playerIdList = (struct System_Collections_Generic_List_BattleServantData__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  this->fields.enemyIdList = (struct System_Collections_Generic_List_BattleServantData__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.enemyIdList, (int32_t)v6, v7, v8);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FieldAliveServantData__addSvtData(
        FieldAliveServantData_o *this,
        bool isEnemySide,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v7; // x8
  System_Collections_Generic_List_object__o *v8; // x0
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  Il2CppClass **v12; // x8

  if ( (byte_4A5D5F8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    byte_4A5D5F8 = 1;
  }
  v7 = 16LL;
  if ( isEnemySide )
    v7 = 24LL;
  v8 = *(System_Collections_Generic_List_object__o **)((char *)&this->klass + v7);
  if ( !v8
    || (items = v8->fields._items,
        v10 = Method_System_Collections_Generic_List_BattleServantData__Add__,
        ++v8->fields._version,
        !items) )
  {
    sub_1B8880C(v8, isEnemySide);
  }
  size = v8->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      (Il2CppObject *)svtData,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v12 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v12[4] = (Il2CppClass *)svtData;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 4), (int32_t)svtData, (int32_t)svtData, (int32_t)method);
  }
}


System_Collections_Generic_List_BattleServantData__o *__fastcall FieldAliveServantData__getTargetSideSvtDataList(
        FieldAliveServantData_o *this,
        bool isEnemySide,
        const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 16LL;
  if ( isEnemySide )
    v3 = 24LL;
  return *(System_Collections_Generic_List_BattleServantData__o **)((char *)&this->klass + v3);
}