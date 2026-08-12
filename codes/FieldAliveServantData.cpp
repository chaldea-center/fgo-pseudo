void FieldAliveServantData___ctor(FieldAliveServantData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5973338 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_5973338 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  this->fields.playerIdList = (struct System_Collections_Generic_List_BattleServantData__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  this->fields.enemyIdList = (struct System_Collections_Generic_List_BattleServantData__o *)v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.enemyIdList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void FieldAliveServantData__addSvtData(
        FieldAliveServantData_o *this,
        bool isEnemySide,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  FieldAliveServantData_o *v10; // x20
  __int64 v11; // x8
  System_Collections_Generic_List_object__o *v12; // x8
  struct System_Object_array *items; // x9
  _QWORD *v14; // x10
  __int64 size; // x11
  Il2CppClass **v16; // x0

  v10 = this;
  if ( (byte_5973337 & 1) == 0 )
  {
    this = (FieldAliveServantData_o *)sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    byte_5973337 = 1;
  }
  v11 = 16;
  if ( isEnemySide )
    v11 = 24;
  v12 = *(System_Collections_Generic_List_object__o **)((char *)&v10->klass + v11);
  if ( !v12
    || (items = v12->fields._items,
        v14 = Method_System_Collections_Generic_List_BattleServantData__Add__,
        ++v12->fields._version,
        !items) )
  {
    sub_2213CDC(this, isEnemySide);
  }
  size = v12->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)svtData,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v16[4] = (Il2CppClass *)svtData;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v16 + 4),
      (int32_t)svtData,
      (System_String_o *)svtData,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
  }
}


System_Collections_Generic_List_BattleServantData__o *FieldAliveServantData__getTargetSideSvtDataList(
        FieldAliveServantData_o *this,
        bool isEnemySide,
        const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 16;
  if ( isEnemySide )
    v3 = 24;
  return *(System_Collections_Generic_List_BattleServantData__o **)((char *)&this->klass + v3);
}