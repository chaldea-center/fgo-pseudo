void __fastcall BannerAddMaster___ctor(BannerAddMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15E51 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string___ctor__, method, v2);
    byte_4B15E51 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    200,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BannerAddEntity_o *__fastcall BannerAddMaster__GetEntity(
        BannerAddMaster_o *this,
        int32_t bannerId,
        int32_t dispType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B15E4F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__GetEntity__,
      *(_QWORD *)&bannerId,
      *(_QWORD *)&dispType);
    byte_4B15E4F = 1;
  }
  PK = (Il2CppObject *)BannerAddEntity__CreatePK(bannerId, dispType, priority, *(const MethodInfo **)&priority);
  return (BannerAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_31B3198 *)Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BannerAddMaster__TryGetEntity(
        BannerAddMaster_o *this,
        BannerAddEntity_o **entity,
        int32_t bannerId,
        int32_t dispType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B15E50 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&bannerId);
    byte_4B15E50 = 1;
  }
  PK = (Il2CppObject *)BannerAddEntity__CreatePK(bannerId, dispType, priority, *(const MethodInfo **)&dispType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BannerAddMaster__getOverwriteBannerId(
        BannerAddMaster_o *this,
        int32_t bannerId,
        int32_t dispType,
        const MethodInfo *method)
{
  int32_t v5; // w21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_object__o *v31; // x19
  __int64 v32; // x1
  void *list; // x0
  int64_t v34; // x2
  __int64 v35; // x3
  const MethodInfo_314F4A0 **v36; // x27
  BannerAddEntity_c **v37; // x20
  int v38; // w23
  int32_t v39; // w24
  Il2CppObject *v40; // x25
  __int64 methodPtr_low; // x10
  BannerAddMaster_o *v42; // x23
  int32_t v43; // w22
  System_Collections_Generic_List_object__o *v44; // x21
  BannerAddEntity_c **v45; // x19
  const MethodInfo_314F4A0 **v46; // x20
  int32_t v47; // w26
  int32_t v48; // w28
  int64_t v49; // x27
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x0
  BannerAddMaster___c_c *v58; // x0
  System_Comparison_T__o *_9__3_0; // x20
  Il2CppObject *v60; // x21
  struct BannerAddMaster___c_StaticFields *static_fields; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int v69; // [xsp+Ch] [xbp-64h]

  v5 = bannerId;
  if ( (byte_4B15E52 & 1) == 0 )
  {
    sub_1BCA7E0(&BannerAddEntity_TypeInfo, *(_QWORD *)&bannerId, *(_QWORD *)&dispType);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&System_Comparison_BannerAddEntity__TypeInfo, v11, v12);
    sub_1BCA7E0(&CondType_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BannerAddEntity__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BannerAddEntity__Sort__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BannerAddEntity___ctor__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BannerAddEntity__get_Count__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BannerAddEntity__get_Item__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_BannerAddEntity__TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_BannerAddMaster___c__getOverwriteBannerId_b__3_0__, v27, v28);
    sub_1BCA7E0(&BannerAddMaster___c_TypeInfo, v29, v30);
    byte_4B15E52 = 1;
  }
  v31 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BannerAddEntity__TypeInfo,
                                                       *(_QWORD *)&bannerId,
                                                       *(_QWORD *)&dispType,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BannerAddEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_32;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v36 = (const MethodInfo_314F4A0 **)&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__;
    v37 = &BannerAddEntity_TypeInfo;
    v38 = (int)list;
    v39 = 0;
    v69 = (int)list;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v39,
               *v36);
      if ( !list )
        break;
      v40 = (Il2CppObject *)list;
      methodPtr_low = LOBYTE((*v37)->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(BannerAddEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != *v37 )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == v5 && *((_DWORD *)list + 5) == dispType )
      {
        v42 = this;
        v43 = v5;
        v44 = v31;
        v45 = v37;
        v46 = v36;
        v48 = *((_DWORD *)list + 7);
        v47 = *((_DWORD *)list + 8);
        v49 = *((int *)list + 9);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v32);
        list = (void *)CondType__IsOpen(v48, v47, v49, 0, 0LL, 0LL);
        v36 = v46;
        v37 = v45;
        v31 = v44;
        v5 = v43;
        this = v42;
        v38 = v69;
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v31 )
            break;
          items = v31->fields._items;
          v55 = Method_System_Collections_Generic_List_BannerAddEntity__Add__;
          ++v31->fields._version;
          if ( !items )
            break;
          size = v31->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v31,
              v40,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
          }
          else
          {
            v57 = &items->obj.klass + size;
            v31->fields._size = size + 1;
            v57[4] = (Il2CppClass *)v40;
            sub_1BCA784((PartyOrganizationUtility_o *)(v57 + 4), (int64_t)v40, v34, v35, v50, v51, v52, v53);
          }
        }
      }
      if ( v38 == ++v39 )
        goto LABEL_21;
    }
LABEL_32:
    sub_1BCAA3C(list, v32);
  }
LABEL_21:
  if ( !v31 )
    goto LABEL_32;
  if ( v31->fields._size < 1 )
    return -1;
  v58 = BannerAddMaster___c_TypeInfo;
  if ( !BannerAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BannerAddMaster___c_TypeInfo, v32);
    v58 = BannerAddMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v58->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v58->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v58, v32);
      v58 = BannerAddMaster___c_TypeInfo;
    }
    v60 = (Il2CppObject *)v58->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_BannerAddEntity__TypeInfo, v32, v34, v35);
    System_Comparison_object____ctor(_9__3_0, v60, Method_BannerAddMaster___c__getOverwriteBannerId_b__3_0__, 0LL);
    static_fields = BannerAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_BannerAddEntity__o *)_9__3_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v62, v63, v64, v65, v66, v67);
  }
  System_Collections_Generic_List_object___Sort_56244000(
    v31,
    _9__3_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_BannerAddEntity__Sort__);
  list = System_Collections_Generic_List_object___get_Item(
           v31,
           0,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BannerAddEntity__get_Item__);
  if ( !list )
    goto LABEL_32;
  return *((_DWORD *)list + 10);
}


void __fastcall BannerAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B15E53 & 1) == 0 )
  {
    sub_1BCA7E0(&BannerAddMaster___c_TypeInfo, v1, v2);
    byte_4B15E53 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BannerAddMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BannerAddMaster___c_TypeInfo->static_fields->__9 = (struct BannerAddMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BannerAddMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall BannerAddMaster___c___ctor(BannerAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BannerAddMaster___c___getOverwriteBannerId_b__3_0(
        BannerAddMaster___c_o *this,
        BannerAddEntity_o *a,
        BannerAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}