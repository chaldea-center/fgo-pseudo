void ViewGachaFeaturedServantMaster___ctor(ViewGachaFeaturedServantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C2838A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ViewGachaFeaturedServantMaster__ViewGachaFeaturedServantEntity__string___ctor__);
    byte_4C2838A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    508,
    (const MethodInfo_338A52C *)Method_DataMasterBase_ViewGachaFeaturedServantMaster__ViewGachaFeaturedServantEntity__string___ctor__);
}


System_Int32_array *ViewGachaFeaturedServantMaster__GetFeaturedServantIds(
        ViewGachaFeaturedServantMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  _BOOL8 v6; // x0
  __int64 v7; // x1
  long double inited; // q0
  System_Int32_array **p_svtIds; // x8
  _QWORD *v10; // x19
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  ViewGachaFeaturedServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C2838C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_int___);
    byte_4C2838C = 1;
  }
  entity = 0;
  v6 = ViewGachaFeaturedServantMaster__TryGetEntity(this, &entity, gachaId, v3);
  if ( v6 )
  {
    if ( !entity )
      sub_1C2D6EC(v6, v7);
    p_svtIds = &entity->fields.svtIds;
  }
  else
  {
    v10 = Method_System_Array_Empty_int___;
    v11 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v11 )
    {
      sub_1C7DC00(Method_System_Array_Empty_int___);
      v11 = v10[7];
    }
    v12 = *(_QWORD *)(v11 + 16);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C7DBA4(inited);
    if ( !*(_DWORD *)(v12 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v12);
    v13 = *(_QWORD *)(v10[7] + 16LL);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C7DBA4(inited);
    p_svtIds = *(System_Int32_array ***)(v13 + 184);
  }
  return *p_svtIds;
}


bool ViewGachaFeaturedServantMaster__TryGetEntity(
        ViewGachaFeaturedServantMaster_o *this,
        ViewGachaFeaturedServantEntity_o **entity,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C2838B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ViewGachaFeaturedServantMaster__ViewGachaFeaturedServantEntity__string__TryGetEntity__);
    byte_4C2838B = 1;
  }
  PK = (Il2CppObject *)ViewGachaFeaturedServantEntity__CreatePK(gachaId, (const MethodInfo *)entity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_ViewGachaFeaturedServantMaster__ViewGachaFeaturedServantEntity__string__TryGetEntity__);
}