void FieldAliveServantData___ctor(FieldAliveServantData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CC9DBD & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_4CC9DBD = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  this->fields.playerIdList = (struct System_Collections_Generic_List_BattleServantData__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  this->fields.enemyIdList = (struct System_Collections_Generic_List_BattleServantData__o *)v10;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.enemyIdList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void FieldAliveServantData__addSvtData(
        FieldAliveServantData_o *this,
        bool isEnemySide,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v11; // x8
  System_Collections_Generic_List_object__o *v12; // x0
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4CC9DBC & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    byte_4CC9DBC = 1;
  }
  v11 = 16;
  if ( isEnemySide )
    v11 = 24;
  v12 = *(System_Collections_Generic_List_object__o **)((char *)&this->klass + v11);
  if ( !v12
    || (items = v12->fields._items,
        v14 = Method_System_Collections_Generic_List_BattleServantData__Add__,
        ++v12->fields._version,
        !items) )
  {
    sub_1C71608(v12, isEnemySide);
  }
  size = v12->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)svtData,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v16[4] = (Il2CppClass *)svtData;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)(v16 + 4),
      (int32_t)svtData,
      (int32_t)svtData,
      (int32_t)method,
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