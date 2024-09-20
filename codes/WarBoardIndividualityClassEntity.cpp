void __fastcall WarBoardIndividualityClassEntity___ctor(
        WarBoardIndividualityClassEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5C11A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5C11A = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall WarBoardIndividualityClassEntity__CreatePrimaryKey(
        WarBoardIndividualityClassEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.individuality;
}


ServantClassEntity_o *__fastcall WarBoardIndividualityClassEntity__GetServantClassEntity(
        WarBoardIndividualityClassEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x0
  Il2CppObject *MasterData_object; // x0

  if ( (byte_4A5C119 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4A5C119 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1BDA48C(v3);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BDA48C(v4);
  MasterData_object = **(Il2CppObject ***)(v4 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_1B8880C(MasterData_object, method);
  }
  return (ServantClassEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                   this->fields.classId,
                                   (const MethodInfo_311D934 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
}