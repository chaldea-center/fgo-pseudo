void __fastcall ServantAppendPassiveSkillMaster___ctor(
        ServantAppendPassiveSkillMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4187B5E & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string___ctor__,
      method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity_____ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TypeInfo, v4);
    byte_4187B5E = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v5,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____o *)v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.listCache,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    366,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAppendPassiveSkillMaster__CreateTempKey(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  int32_t v7; // [xsp+8h] [xbp-8h] BYREF
  int32_t v8; // [xsp+Ch] [xbp-4h] BYREF

  v8 = svtId;
  v7 = num;
  if ( (byte_4187B5F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1225/*":"*/, *(_QWORD *)&svtId);
    byte_4187B5F = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_44307816(v4, (System_String_o *)StringLiteral_1225/*":"*/, v5, 0LL);
}


void __fastcall ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo(
        ServantAppendPassiveSkillMaster_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        System_Boolean_array **releaseStateList,
        System_Int32_array **lvList,
        int32_t svtId,
        int64_t userId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  UserServantAppendPassiveSkillMaster_o *Master_WarQuestSelectionMaster; // x24
  __int64 MaxLevelInfo; // x0
  __int64 v31; // x1
  UserServantAppendPassiveSkillLvMaster_o *v32; // x27
  const MethodInfo *v33; // x2
  System_Int32_array *v34; // x25
  System_Int32_array *v35; // x24
  System_Collections_Generic_Dictionary_int__int__o *v36; // x25
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v39; // x26
  System_Int32_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Boolean_array *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  __int64 v75; // x8
  unsigned __int64 v76; // x19
  __int64 v77; // x20
  ServantAppendPassiveSkillEntity_o *v78; // x27
  System_Int32_array *v79; // x8
  int v80; // w28
  const MethodInfo *v81; // x4
  System_Boolean_array *v82; // x8
  System_Int32_array *v83; // x8
  System_String_array *v84; // x8
  System_String_array *v85; // x9
  System_String_o **v86; // x1
  System_String_o **p_explanation; // x2
  ServantAppendPassiveSkillEntity_o *v88; // x0
  int32_t v89; // w3
  System_Boolean_array *v90; // x8
  System_String_array *v91; // x22
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Int32_array **v98; // x28
  System_String_array *v99; // x8
  System_String_array *v100; // x8
  BattleServantConfConponent_o *v101; // x28
  System_Int32_array **v102; // x0
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  System_String_array *v109; // x22
  System_String_o *v110; // x28
  System_String_o *v111; // x0
  System_Int32_array **v112; // x0
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  System_Int32_array *v119; // x8
  System_String_array *v120; // x8
  __int64 v121; // x0
  __int64 v122; // x0
  System_String_o *explanation; // [xsp+28h] [xbp-68h] BYREF
  UserServantEntity_o *v128; // [xsp+30h] [xbp-60h] BYREF
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4187B63 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, idList);
    sub_B2C35C(&bool___TypeInfo, v14);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v16);
    sub_B2C35C(&DataManager_TypeInfo, v17);
    sub_B2C35C(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__,
      v18);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__, v20);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v21);
    sub_B2C35C(&int___TypeInfo, v22);
    sub_B2C35C(&LocalizationManager_TypeInfo, v23);
    sub_B2C35C(&string___TypeInfo, v24);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v25);
    sub_B2C35C(&StringLiteral_3305/*"COND_TYPE_TITLE"*/, v26);
    sub_B2C35C(&StringLiteral_3293/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v27);
    sub_B2C35C(&StringLiteral_1/*""*/, v28);
    byte_4187B63 = 1;
  }
  v128 = 0LL;
  entity = 0LL;
  explanation = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantAppendPassiveSkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  MaxLevelInfo = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_69;
  v32 = (UserServantAppendPassiveSkillLvMaster_o *)MaxLevelInfo;
  MaxLevelInfo = UserServantAppendPassiveSkillMaster__TryGetEntity(
                   Master_WarQuestSelectionMaster,
                   &entity,
                   userId,
                   svtId,
                   0LL);
  v34 = 0LL;
  v35 = 0LL;
  if ( (MaxLevelInfo & 1) != 0 )
  {
    if ( !v32 )
      goto LABEL_69;
    if ( userSvtId < 1 )
    {
      MaxLevelInfo = (__int64)UserServantAppendPassiveSkillLvMaster__GetMaxLevelInfo(v32, userId, svtId, 0LL);
      if ( !MaxLevelInfo )
        goto LABEL_69;
      v36 = (System_Collections_Generic_Dictionary_int__int__o *)MaxLevelInfo;
      Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
               (System_Collections_Generic_Dictionary_int__int__o *)MaxLevelInfo,
               (const MethodInfo_2E24150 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
      v35 = System_Linq_Enumerable__ToArray_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
              (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 v36,
                 (const MethodInfo_2E242E8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      v34 = System_Linq_Enumerable__ToArray_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)Values,
              (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    else
    {
      MaxLevelInfo = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                       (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v32,
                       &v128,
                       userSvtId,
                       (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
      if ( (MaxLevelInfo & 1) != 0 )
      {
        if ( !v128 )
          goto LABEL_69;
        v35 = *(System_Int32_array **)&v128->fields.svtId.fields.currentCryptoKey;
        v34 = *(System_Int32_array **)&v128->fields.svtId.fields.fakeValue;
      }
      else
      {
        v34 = 0LL;
        v35 = 0LL;
      }
    }
  }
  MaxLevelInfo = (__int64)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(this, svtId, v33);
  if ( !MaxLevelInfo )
LABEL_69:
    sub_B2C434(MaxLevelInfo, v31);
  v39 = MaxLevelInfo;
  v40 = (System_Int32_array *)sub_B2C374(int___TypeInfo, *(unsigned int *)(MaxLevelInfo + 24));
  *idList = v40;
  sub_B2C2F8((BattleServantConfConponent_o *)idList, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
  v47 = (System_String_array *)sub_B2C374(string___TypeInfo, *(unsigned int *)(v39 + 24));
  *titleList = v47;
  sub_B2C2F8((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v47, v48, v49, v50, v51, v52, v53);
  v54 = (System_String_array *)sub_B2C374(string___TypeInfo, *(unsigned int *)(v39 + 24));
  *explanationList = v54;
  sub_B2C2F8((BattleServantConfConponent_o *)explanationList, (System_Int32_array **)v54, v55, v56, v57, v58, v59, v60);
  v61 = (System_Boolean_array *)sub_B2C374(bool___TypeInfo, *(unsigned int *)(v39 + 24));
  *releaseStateList = v61;
  sub_B2C2F8((BattleServantConfConponent_o *)releaseStateList, (System_Int32_array **)v61, v62, v63, v64, v65, v66, v67);
  v68 = (System_Int32_array *)sub_B2C374(int___TypeInfo, *(unsigned int *)(v39 + 24));
  *lvList = v68;
  sub_B2C2F8((BattleServantConfConponent_o *)lvList, (System_Int32_array **)v68, v69, v70, v71, v72, v73, v74);
  v75 = *(_QWORD *)(v39 + 24);
  if ( (int)v75 >= 1 )
  {
    v76 = 0LL;
    v77 = 32LL;
    while ( v76 < (unsigned int)v75 )
    {
      v78 = *(ServantAppendPassiveSkillEntity_o **)(v39 + v77);
      if ( v78 )
      {
        v79 = *idList;
        if ( !*idList )
          goto LABEL_69;
        if ( v76 >= v79->max_length )
          break;
        v79->m_Items[v76 + 1] = v78->fields.skillId;
        if ( !v35
          || (MaxLevelInfo = System_Array__IndexOf_int_(
                               v35,
                               v78->fields.num,
                               (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___),
              (MaxLevelInfo & 0x80000000) != 0) )
        {
          v80 = 1;
        }
        else
        {
          if ( !v34 )
            goto LABEL_69;
          if ( (unsigned int)MaxLevelInfo >= v34->max_length )
            break;
          v80 = v34->m_Items[(int)MaxLevelInfo + 1];
        }
        if ( !entity
          || (MaxLevelInfo = System_Array__IndexOf_int_(
                               entity->fields.unlockNums,
                               v78->fields.num,
                               (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___),
              (MaxLevelInfo & 0x80000000) != 0) )
        {
          v90 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_69;
          if ( v76 >= v90->max_length )
            break;
          v90->m_Items[v76 + 4] = 0;
          v91 = *explanationList;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          MaxLevelInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3305/*"COND_TYPE_TITLE"*/, 0LL);
          if ( !v91 )
            goto LABEL_69;
          v98 = (System_Int32_array **)MaxLevelInfo;
          if ( MaxLevelInfo )
          {
            MaxLevelInfo = sub_B2C41C(MaxLevelInfo, v91->obj.klass->_1.element_class);
            if ( !MaxLevelInfo )
            {
              v122 = sub_B2C454(0LL);
              sub_B2C400(v122, 0LL);
            }
          }
          if ( v76 >= v91->max_length )
            break;
          *(Il2CppClass **)((char *)&v91->obj.klass + v77) = (Il2CppClass *)v98;
          sub_B2C2F8((BattleServantConfConponent_o *)((char *)v91 + v77), v98, v92, v93, v94, v95, v96, v97);
          v99 = *explanationList;
          if ( !*explanationList )
            goto LABEL_69;
          if ( v76 >= v99->max_length )
            break;
          MaxLevelInfo = System_String__op_Inequality(
                           *(System_String_o **)((char *)&v99->obj.klass + v77),
                           (System_String_o *)StringLiteral_1/*""*/,
                           0LL);
          if ( (MaxLevelInfo & 1) != 0 )
          {
            v100 = *explanationList;
            if ( !*explanationList )
              goto LABEL_69;
            if ( v76 >= v100->max_length )
              break;
            v101 = (BattleServantConfConponent_o *)((char *)v100 + v77);
            v102 = (System_Int32_array **)System_String__Concat_44305532(
                                            *(System_String_o **)((char *)&v100->obj.klass + v77),
                                            (System_String_o *)StringLiteral_26/*"\n"*/,
                                            0LL);
            v101->klass = (BattleServantConfConponent_c *)v102;
            sub_B2C2F8(v101, v102, v103, v104, v105, v106, v107, v108);
          }
          v109 = *explanationList;
          if ( !*explanationList )
            goto LABEL_69;
          if ( v76 >= v109->max_length )
            break;
          v110 = *(System_String_o **)((char *)&v109->obj.klass + v77);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v111 = LocalizationManager__Get((System_String_o *)StringLiteral_3293/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v112 = (System_Int32_array **)System_String__Concat_44305532(v110, v111, 0LL);
          *(Il2CppClass **)((char *)&v109->obj.klass + v77) = (Il2CppClass *)v112;
          sub_B2C2F8((BattleServantConfConponent_o *)((char *)v109 + v77), v112, v113, v114, v115, v116, v117, v118);
          v119 = *lvList;
          if ( !*lvList )
            goto LABEL_69;
          if ( v76 >= v119->max_length )
            break;
          v119->m_Items[v76 + 1] = 0;
          v120 = *titleList;
          if ( !*titleList )
            goto LABEL_69;
          if ( v76 >= v120->max_length )
            break;
          v86 = (System_String_o **)((char *)v120 + v77);
          p_explanation = &explanation;
          v88 = v78;
          v89 = 0;
        }
        else
        {
          v82 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_69;
          if ( v76 >= v82->max_length )
            break;
          v82->m_Items[v76 + 4] = 1;
          v83 = *lvList;
          if ( !*lvList )
            goto LABEL_69;
          if ( v76 >= v83->max_length )
            break;
          v83->m_Items[v76 + 1] = v80;
          v84 = *titleList;
          if ( !*titleList )
            goto LABEL_69;
          v85 = *explanationList;
          if ( !*explanationList )
            goto LABEL_69;
          if ( v76 >= v84->max_length || v76 >= v85->max_length )
            break;
          v86 = (System_String_o **)((char *)v84 + v77);
          p_explanation = (System_String_o **)((char *)v85 + v77);
          v88 = v78;
          v89 = v80;
        }
        ServantAppendPassiveSkillEntity__GetEffectExplanation(v88, v86, p_explanation, v89, v81);
      }
      LODWORD(v75) = *(_DWORD *)(v39 + 24);
      ++v76;
      v77 += 8LL;
      if ( (__int64)v76 >= (int)v75 )
        return;
    }
    v121 = sub_B2C460(MaxLevelInfo);
    sub_B2C400(v121, 0LL);
  }
}


void __fastcall ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo_25315732(
        ServantAppendPassiveSkillMaster_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        System_Boolean_array **releaseStateList,
        System_Int32_array **lvList,
        int32_t svtId,
        System_Int32_array *releaseSkillIds,
        System_Int32_array *releaseSkillLvs,
        const MethodInfo *method)
{
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  __int64 EntityListFromSvtId; // x0
  __int64 v29; // x1
  __int64 v30; // x25
  System_Int32_array *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Boolean_array *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  const MethodInfo *v66; // x4
  __int64 v67; // x8
  unsigned __int64 v68; // x28
  __int64 v69; // x21
  ServantAppendPassiveSkillEntity_o *v70; // x26
  System_Int32_array *v71; // x8
  int32_t v72; // w27
  System_String_array *v73; // x8
  System_String_array *v74; // x9
  System_Boolean_array *v75; // x8
  System_Int32_array *v76; // x8
  System_Boolean_array *v77; // x8
  System_String_array *v78; // x27
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **v85; // x26
  System_String_array *v86; // x8
  System_String_array *v87; // x8
  BattleServantConfConponent_o *v88; // x26
  System_Int32_array **v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_String_array *v96; // x27
  System_String_o *v97; // x26
  System_String_o *v98; // x0
  System_Int32_array **v99; // x0
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  __int64 v106; // x0
  __int64 v107; // x0

  if ( (byte_4187B65 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, idList);
    sub_B2C35C(&bool___TypeInfo, v16);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v18);
    sub_B2C35C(&DataManager_TypeInfo, v19);
    sub_B2C35C(&int___TypeInfo, v20);
    sub_B2C35C(&LocalizationManager_TypeInfo, v21);
    sub_B2C35C(&string___TypeInfo, v22);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v23);
    sub_B2C35C(&StringLiteral_3305/*"COND_TYPE_TITLE"*/, v24);
    sub_B2C35C(&StringLiteral_3293/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v25);
    sub_B2C35C(&StringLiteral_1/*""*/, v26);
    byte_4187B65 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  EntityListFromSvtId = (__int64)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(this, svtId, v27);
  if ( !EntityListFromSvtId )
LABEL_57:
    sub_B2C434(EntityListFromSvtId, v29);
  v30 = EntityListFromSvtId;
  v31 = (System_Int32_array *)sub_B2C374(int___TypeInfo, *(unsigned int *)(EntityListFromSvtId + 24));
  *idList = v31;
  sub_B2C2F8((BattleServantConfConponent_o *)idList, (System_Int32_array **)v31, v32, v33, v34, v35, v36, v37);
  v38 = (System_String_array *)sub_B2C374(string___TypeInfo, *(unsigned int *)(v30 + 24));
  *titleList = v38;
  sub_B2C2F8((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v38, v39, v40, v41, v42, v43, v44);
  v45 = (System_String_array *)sub_B2C374(string___TypeInfo, *(unsigned int *)(v30 + 24));
  *explanationList = v45;
  sub_B2C2F8((BattleServantConfConponent_o *)explanationList, (System_Int32_array **)v45, v46, v47, v48, v49, v50, v51);
  v52 = (System_Boolean_array *)sub_B2C374(bool___TypeInfo, *(unsigned int *)(v30 + 24));
  *releaseStateList = v52;
  sub_B2C2F8((BattleServantConfConponent_o *)releaseStateList, (System_Int32_array **)v52, v53, v54, v55, v56, v57, v58);
  v59 = (System_Int32_array *)sub_B2C374(int___TypeInfo, *(unsigned int *)(v30 + 24));
  *lvList = v59;
  sub_B2C2F8((BattleServantConfConponent_o *)lvList, (System_Int32_array **)v59, v60, v61, v62, v63, v64, v65);
  v67 = *(_QWORD *)(v30 + 24);
  if ( (int)v67 >= 1 )
  {
    v68 = 0LL;
    v69 = 32LL;
    while ( v68 < (unsigned int)v67 )
    {
      v70 = *(ServantAppendPassiveSkillEntity_o **)(v30 + v69);
      if ( v70 )
      {
        v71 = *idList;
        if ( !*idList )
          goto LABEL_57;
        if ( v68 >= v71->max_length )
          break;
        v71->m_Items[v68 + 1] = v70->fields.skillId;
        if ( !releaseSkillIds
          || (EntityListFromSvtId = System_Array__IndexOf_int_(
                                      releaseSkillIds,
                                      v70->fields.skillId,
                                      (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___),
              (EntityListFromSvtId & 0x80000000) != 0) )
        {
          v72 = 1;
        }
        else
        {
          if ( !releaseSkillLvs )
            goto LABEL_57;
          if ( (unsigned int)EntityListFromSvtId >= releaseSkillLvs->max_length )
            break;
          v72 = releaseSkillLvs->m_Items[(int)EntityListFromSvtId + 1];
        }
        v73 = *titleList;
        if ( !*titleList )
          goto LABEL_57;
        v74 = *explanationList;
        if ( !*explanationList )
          goto LABEL_57;
        if ( v68 >= v73->max_length || v68 >= v74->max_length )
          break;
        ServantAppendPassiveSkillEntity__GetEffectExplanation(
          v70,
          (System_String_o **)((char *)v73 + v69),
          (System_String_o **)((char *)v74 + v69),
          v72,
          v66);
        if ( !releaseSkillIds
          || (EntityListFromSvtId = System_Array__IndexOf_int_(
                                      releaseSkillIds,
                                      v70->fields.skillId,
                                      (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___),
              (EntityListFromSvtId & 0x80000000) != 0) )
        {
          v77 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_57;
          if ( v68 >= v77->max_length )
            break;
          v77->m_Items[v68 + 4] = 0;
          v78 = *explanationList;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          EntityListFromSvtId = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3305/*"COND_TYPE_TITLE"*/, 0LL);
          if ( !v78 )
            goto LABEL_57;
          v85 = (System_Int32_array **)EntityListFromSvtId;
          if ( EntityListFromSvtId )
          {
            EntityListFromSvtId = sub_B2C41C(EntityListFromSvtId, v78->obj.klass->_1.element_class);
            if ( !EntityListFromSvtId )
            {
              v107 = sub_B2C454(0LL);
              sub_B2C400(v107, 0LL);
            }
          }
          if ( v68 >= v78->max_length )
            break;
          *(Il2CppClass **)((char *)&v78->obj.klass + v69) = (Il2CppClass *)v85;
          sub_B2C2F8((BattleServantConfConponent_o *)((char *)v78 + v69), v85, v79, v80, v81, v82, v83, v84);
          v86 = *explanationList;
          if ( !*explanationList )
            goto LABEL_57;
          if ( v68 >= v86->max_length )
            break;
          EntityListFromSvtId = System_String__op_Inequality(
                                  *(System_String_o **)((char *)&v86->obj.klass + v69),
                                  (System_String_o *)StringLiteral_1/*""*/,
                                  0LL);
          if ( (EntityListFromSvtId & 1) != 0 )
          {
            v87 = *explanationList;
            if ( !*explanationList )
              goto LABEL_57;
            if ( v68 >= v87->max_length )
              break;
            v88 = (BattleServantConfConponent_o *)((char *)v87 + v69);
            v89 = (System_Int32_array **)System_String__Concat_44305532(
                                           *(System_String_o **)((char *)&v87->obj.klass + v69),
                                           (System_String_o *)StringLiteral_26/*"\n"*/,
                                           0LL);
            v88->klass = (BattleServantConfConponent_c *)v89;
            sub_B2C2F8(v88, v89, v90, v91, v92, v93, v94, v95);
          }
          v96 = *explanationList;
          if ( !*explanationList )
            goto LABEL_57;
          if ( v68 >= v96->max_length )
            break;
          v97 = *(System_String_o **)((char *)&v96->obj.klass + v69);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v98 = LocalizationManager__Get((System_String_o *)StringLiteral_3293/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v99 = (System_Int32_array **)System_String__Concat_44305532(v97, v98, 0LL);
          *(Il2CppClass **)((char *)&v96->obj.klass + v69) = (Il2CppClass *)v99;
          sub_B2C2F8((BattleServantConfConponent_o *)((char *)v96 + v69), v99, v100, v101, v102, v103, v104, v105);
          v76 = *lvList;
          if ( !*lvList )
            goto LABEL_57;
          if ( v68 >= v76->max_length )
            break;
          v72 = 0;
        }
        else
        {
          v75 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_57;
          if ( v68 >= v75->max_length )
            break;
          v75->m_Items[v68 + 4] = 1;
          v76 = *lvList;
          if ( !*lvList )
            goto LABEL_57;
          if ( v68 >= v76->max_length )
            break;
        }
        v76->m_Items[v68 + 1] = v72;
      }
      LODWORD(v67) = *(_DWORD *)(v30 + 24);
      ++v68;
      v69 += 8LL;
      if ( (__int64)v68 >= (int)v67 )
        return;
    }
    v106 = sub_B2C460(EntityListFromSvtId);
    sub_B2C400(v106, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
ServantAppendPassiveSkillEntity_o *__fastcall ServantAppendPassiveSkillMaster__GetEntity(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4187B5C & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4187B5C = 1;
  }
  PK = ServantAppendPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantAppendPassiveSkillEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                                PK,
                                                (const MethodInfo_24E4520 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantAppendPassiveSkillEntity_o *__fastcall ServantAppendPassiveSkillMaster__GetEntityFromIdNum(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  ServantAppendPassiveSkillMaster_o *v6; // x20
  System_String_o *TempKey; // x0
  __int64 v8; // x1
  __int64 v10; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_4187B62 & 1) == 0 )
  {
    this = (ServantAppendPassiveSkillMaster_o *)sub_B2C35C(
                                                  &Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TryGetValue__,
                                                  *(_QWORD *)&svtId);
    byte_4187B62 = 1;
  }
  value = 0LL;
  TempKey = ServantAppendPassiveSkillMaster__CreateTempKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    goto LABEL_10;
  TempKey = (System_String_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
                                 (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.listCache,
                                 (System_Xml_XmlQualifiedName_o *)TempKey,
                                 &value,
                                 (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TryGetValue__);
  if ( ((unsigned __int8)TempKey & 1) == 0 )
    return 0LL;
  if ( !value )
LABEL_10:
    sub_B2C434(TempKey, v8);
  if ( !LODWORD(value->fields.sourceUri) )
  {
    v10 = sub_B2C460(TempKey);
    sub_B2C400(v10, 0LL);
  }
  return (ServantAppendPassiveSkillEntity_o *)value->fields.namespaces;
}


// local variable allocation has failed, the output may be wrong!
ServantAppendPassiveSkillEntity_array *__fastcall ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_HashSet_int__o *v14; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x22
  __int64 v16; // x1
  void *list; // x0
  int32_t v18; // w23
  _DWORD *v19; // x24
  __int64 v20; // x10
  const MethodInfo *v21; // x3

  if ( (byte_4187B61 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v7);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo, v12);
    sub_B2C35C(&ServantAppendPassiveSkillEntity_TypeInfo, v13);
    byte_4187B61 = 1;
  }
  v14 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v14,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_19;
  v18 = 0;
  while ( 1 )
  {
    list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                     (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v18 >= (int)list )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v18,
             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v19 = list;
      v20 = *(&ServantAppendPassiveSkillEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v20
        && *(ServantAppendPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v20 - 8) == ServantAppendPassiveSkillEntity_TypeInfo
        && *((_DWORD *)list + 4) == svtId )
      {
        if ( !v14 )
          goto LABEL_19;
        if ( System_Collections_Generic_HashSet_int___Add(
               v14,
               *((_DWORD *)list + 5),
               (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__) )
        {
          list = ServantAppendPassiveSkillMaster__GetEntityFromIdNum(this, v19[4], v19[5], v21);
          if ( !v15 )
            goto LABEL_19;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v15,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__);
        }
      }
    }
    list = this->fields.list;
    ++v18;
    if ( !list )
      goto LABEL_19;
  }
  if ( !v15 )
LABEL_19:
    sub_B2C434(list, v16);
  return (ServantAppendPassiveSkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
SvtUseSkillData_o *__fastcall ServantAppendPassiveSkillMaster__GetSkillData(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  void *list; // x0
  int32_t Count; // w24
  System_Collections_Generic_List_int__o *v15; // x23
  System_Collections_Generic_List_int__o *v16; // x22
  int32_t v17; // w25
  _DWORD *v18; // x26
  __int64 v19; // x10
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v34; // [xsp+8h] [xbp-58h]

  if ( (byte_4187B64 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_B2C35C(&ServantAppendPassiveSkillEntity_TypeInfo, v10);
    sub_B2C35C(&SvtUseSkillData_TypeInfo, v11);
    byte_4187B64 = 1;
  }
  v34 = sub_B2C42C(SvtUseSkillData_TypeInfo);
  SvtUseSkillData___ctor((SvtUseSkillData_o *)v34, 0LL);
  list = this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v15 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  v16 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v17,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v18 = list;
        v19 = *(&ServantAppendPassiveSkillEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v19
          && *(ServantAppendPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v19 - 8) == ServantAppendPassiveSkillEntity_TypeInfo
          && *((_DWORD *)list + 4) == svtId )
        {
          if ( !v15 )
            break;
          System_Collections_Generic_List_int___Add(
            v15,
            *((_DWORD *)list + 7),
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          if ( !v16 )
            break;
          System_Collections_Generic_List_int___Add(
            v16,
            v18[5],
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( ++v17 >= Count )
        goto LABEL_15;
    }
LABEL_19:
    sub_B2C434(list, v12);
  }
LABEL_15:
  if ( !v15 )
    goto LABEL_19;
  list = System_Collections_Generic_List_int___ToArray(
           v15,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v34 )
    goto LABEL_19;
  *(_QWORD *)(v34 + 16) = list;
  sub_B2C2F8((BattleServantConfConponent_o *)(v34 + 16), (System_Int32_array **)list, v20, v21, v22, v23, v24, v25);
  if ( !v16 )
    goto LABEL_19;
  v26 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v16,
                                 (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v34 + 32) = v26;
  sub_B2C2F8((BattleServantConfConponent_o *)(v34 + 32), v26, v27, v28, v29, v30, v31, v32);
  return (SvtUseSkillData_o *)v34;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantAppendPassiveSkillMaster__TryGetEntity(
        ServantAppendPassiveSkillMaster_o *this,
        ServantAppendPassiveSkillEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4187B5D & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__TryGetEntity__,
      entity);
    byte_4187B5D = 1;
  }
  PK = ServantAppendPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__TryGetEntity__);
}


bool __fastcall ServantAppendPassiveSkillMaster__preProcess(
        ServantAppendPassiveSkillMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *listCache; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v39; // x3
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  unsigned __int64 v41; // x10
  int32_t *v42; // x11
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x1
  const MethodInfo *v46; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v47; // x22
  __int64 v48; // x9
  System_String_o *TempKey; // x0
  __int64 v50; // x1
  System_Xml_XmlQualifiedName_o *v51; // x23
  __int64 v52; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v53; // x24
  System_Xml_Schema_XmlSchemaObject_o *v54; // x2
  System_Collections_Generic_IEnumerator_T__c *v55; // x8
  unsigned __int64 v56; // x10
  int32_t *v57; // x11
  __int64 v58; // x0
  __int64 v59; // x1
  ServantAppendPassiveSkillMaster___c_c *v60; // x0
  Il2CppObject *v61; // x21
  Il2CppObject *key; // x22
  struct ServantAppendPassiveSkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x23
  Il2CppObject *v65; // x24
  struct ServantAppendPassiveSkillMaster___c_StaticFields *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  struct System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____o *v73; // x23
  System_Xml_Schema_XmlSchemaObject_o *v74; // x0
  __int64 v75; // x1
  int v76; // w21
  ServantAppendPassiveSkillMaster_o *v78; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v79; // [xsp+18h] [xbp-B8h] BYREF
  int v80[2]; // [xsp+40h] [xbp-90h]
  int v81; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v82; // [xsp+50h] [xbp-80h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_4187B60 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B2C35C(&Method_System_Comparison_ServantAppendPassiveSkillEntity___ctor__, v3);
    sub_B2C35C(&System_Comparison_ServantAppendPassiveSkillEntity__TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___Clear__, v6);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___GetEnumerator__,
      v7);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TryGetValue__,
      v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity____ctor__, v9);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___set_Item__,
      v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____set_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TypeInfo, v12);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___Dispose__,
      v13);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___MoveNext__,
      v14);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___get_Current__,
      v15);
    sub_B2C35C(&System_IDisposable_TypeInfo, v16);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v17);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v18);
    sub_B2C35C(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ServantAppendPassiveSkillEntity___get_Key__,
      v19);
    sub_B2C35C(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ServantAppendPassiveSkillEntity___get_Value__,
      v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Clear__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Sort__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__, v25);
    sub_B2C35C(&System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo, v26);
    sub_B2C35C(&ServantAppendPassiveSkillEntity_TypeInfo, v27);
    sub_B2C35C(&Method_ServantAppendPassiveSkillMaster___c__preProcess_b__5_0__, v28);
    sub_B2C35C(&ServantAppendPassiveSkillMaster___c_TypeInfo, v29);
    byte_4187B60 = 1;
  }
  value = 0LL;
  memset(&v82, 0, sizeof(v82));
  v81 = 0;
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    listCache,
    (const MethodInfo_2DB1E9C *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____Clear__);
  v31 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v31,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)listCache,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v78 = this;
  if ( !Enumerator )
    sub_B2C434(0LL, v32);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v36 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v36;
        p_offset += 4;
        if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v33);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v40 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v41 = 0LL;
      v42 = &v40->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v42 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v41;
        v42 += 4;
        if ( v41 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v43 = (__int64)&v40->vtable[*v42].method;
    }
    else
    {
LABEL_17:
      v43 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v39);
    }
    v44 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(
            Enumerator,
            *(_QWORD *)(v43 + 8));
    v47 = (EventMissionProgressRequest_Argument_ProgressData_o *)v44;
    if ( !v44 )
      sub_B2C434(0LL, v45);
    v48 = *(&ServantAppendPassiveSkillEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v44 + 300LL) < (unsigned int)v48
      || *(ServantAppendPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v44 + 200LL) + 8 * v48 - 8) != ServantAppendPassiveSkillEntity_TypeInfo )
    {
      v60 = (ServantAppendPassiveSkillMaster___c_c *)sub_B2C728(v44);
LABEL_52:
      sub_B2C434(v60, v59);
    }
    TempKey = ServantAppendPassiveSkillMaster__CreateTempKey(
                (ServantAppendPassiveSkillMaster_o *)v44,
                *(_DWORD *)(v44 + 16),
                *(_DWORD *)(v44 + 20),
                v46);
    if ( !v31 )
      sub_B2C434(TempKey, v50);
    v51 = (System_Xml_XmlQualifiedName_o *)TempKey;
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            v31,
            (System_Xml_XmlQualifiedName_o *)TempKey,
            &value,
            (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TryGetValue__) )
    {
      v53 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v53,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
      value = (System_Xml_Schema_XmlSchemaObject_o *)v53;
      v54 = (System_Xml_Schema_XmlSchemaObject_o *)v53;
      this = v78;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v31,
        v51,
        v54,
        (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___set_Item__);
    }
    if ( !value )
      sub_B2C434(0LL, v52);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
      v47,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__);
  }
  v80[0] = 117;
  v81 = 1;
  v55 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v56 = 0LL;
    v57 = &v55->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
    {
      ++v56;
      v57 += 4;
      if ( v56 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v58 = (__int64)&v55->vtable[*v57].method;
  }
  else
  {
LABEL_31:
    v58 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v39);
  }
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v58)(
                                                                                              Enumerator,
                                                                                              *(_QWORD *)(v58 + 8));
  v81 = 0;
  if ( !v31 )
LABEL_57:
    sub_B2C434(listCache, method);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v79,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v31,
    (const MethodInfo_2DB229C *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___GetEnumerator__);
  v82 = v79;
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v82,
            (const MethodInfo_278B9EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___MoveNext__) )
  {
    v60 = ServantAppendPassiveSkillMaster___c_TypeInfo;
    key = v82.fields.current.fields.key;
    v61 = v82.fields.current.fields.value;
    if ( (BYTE3(ServantAppendPassiveSkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAppendPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAppendPassiveSkillMaster___c_TypeInfo);
      v60 = ServantAppendPassiveSkillMaster___c_TypeInfo;
    }
    static_fields = v60->static_fields;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v60);
        static_fields = ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields;
      }
      v65 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ServantAppendPassiveSkillEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__5_0,
        v65,
        Method_ServantAppendPassiveSkillMaster___c__preProcess_b__5_0__,
        (const MethodInfo_25D8DF8 *)Method_System_Comparison_ServantAppendPassiveSkillEntity___ctor__);
      v66 = ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields;
      v66->__9__5_0 = (struct System_Comparison_ServantAppendPassiveSkillEntity__o *)_9__5_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v66->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72);
      this = v78;
    }
    if ( !v61 )
      goto LABEL_52;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v61,
      (System_Comparison_T__o *)_9__5_0,
      (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Sort__);
    v73 = this->fields.listCache;
    v74 = (System_Xml_Schema_XmlSchemaObject_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v61,
                                                   (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
    if ( !v73 )
      sub_B2C434(v74, v75);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v73,
      (System_Xml_XmlQualifiedName_o *)key,
      v74,
      (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____set_Item__);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v61,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Clear__);
  }
  v80[0] = 240;
  v76 = ++v81;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v82,
    (const MethodInfo_278BB54 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___Dispose__);
  if ( v76 && v80[v76 - 1] == 240 )
    v81 = v76 - 1;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    v31,
    (const MethodInfo_2DB1E9C *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___Clear__);
  return 1;
}


void __fastcall ServantAppendPassiveSkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ServantAppendPassiveSkillMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41853C0 & 1) == 0 )
  {
    sub_B2C35C(&ServantAppendPassiveSkillMaster___c_TypeInfo, v1);
    byte_41853C0 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ServantAppendPassiveSkillMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantAppendPassiveSkillMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall ServantAppendPassiveSkillMaster___c___ctor(
        ServantAppendPassiveSkillMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantAppendPassiveSkillMaster___c___preProcess_b__5_0(
        ServantAppendPassiveSkillMaster___c_o *this,
        ServantAppendPassiveSkillEntity_o *a,
        ServantAppendPassiveSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}