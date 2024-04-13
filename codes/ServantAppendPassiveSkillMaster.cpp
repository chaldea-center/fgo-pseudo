void __fastcall ServantAppendPassiveSkillMaster___ctor(
        ServantAppendPassiveSkillMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42E987C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity_____ctor__,
      v5,
      v6,
      v7);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TypeInfo, v8, v9, v10);
    byte_42E987C = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v11,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____o *)v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.listCache,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    367,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string___ctor__);
}


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
  if ( (byte_42E987D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1245/*":"*/, svtId, num, method);
    byte_42E987D = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_44580072(v4, (System_String_o *)StringLiteral_1245/*":"*/, v5, 0LL);
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  UserServantAppendPassiveSkillMaster_o *Master_WarQuestSelectionMaster; // x24
  __int64 MaxLevelInfo; // x0
  __int64 v61; // x1
  UserServantAppendPassiveSkillLvMaster_o *v62; // x27
  const MethodInfo *v63; // x2
  System_Int32_array *v64; // x25
  System_Int32_array *v65; // x24
  System_Collections_Generic_Dictionary_int__int__o *v66; // x25
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v69; // x26
  System_Int32_array *v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_String_array *v77; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_String_array *v84; // x0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Boolean_array *v91; // x0
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Int32_array *v98; // x0
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  __int64 v105; // x8
  unsigned __int64 v106; // x19
  __int64 v107; // x20
  ServantAppendPassiveSkillEntity_o *v108; // x27
  System_Int32_array *v109; // x8
  int v110; // w28
  const MethodInfo *v111; // x4
  System_Boolean_array *v112; // x8
  System_Int32_array *v113; // x8
  System_String_array *v114; // x8
  System_String_array *v115; // x9
  System_String_o **v116; // x1
  System_String_o **p_explanation; // x2
  ServantAppendPassiveSkillEntity_o *v118; // x0
  int32_t v119; // w3
  System_Boolean_array *v120; // x8
  System_String_array *v121; // x22
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  System_Int32_array **v128; // x28
  System_String_array *v129; // x8
  System_String_array *v130; // x8
  BattleServantConfConponent_o *v131; // x28
  System_Int32_array **v132; // x0
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  System_String_array *v139; // x22
  System_String_o *v140; // x28
  System_String_o *v141; // x0
  System_Int32_array **v142; // x0
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  System_Int32_array *v149; // x8
  System_String_array *v150; // x8
  __int64 v151; // x0
  __int64 v152; // x0
  System_String_o *explanation; // [xsp+28h] [xbp-68h] BYREF
  UserServantEntity_o *v158; // [xsp+30h] [xbp-60h] BYREF
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_42E9881 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, (_DWORD)idList, (_DWORD)titleList, explanationList);
    sub_B5D5C4(&bool___TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v20, v21, v22);
    sub_B5D5C4(&DataManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__,
      v26,
      v27,
      v28);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v35, v36, v37);
    sub_B5D5C4(&int___TypeInfo, v38, v39, v40);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&string___TypeInfo, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_3371/*"COND_TYPE_TITLE"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_3359/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_1/*""*/, v56, v57, v58);
    byte_42E9881 = 1;
  }
  v158 = 0LL;
  entity = 0LL;
  explanation = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantAppendPassiveSkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  MaxLevelInfo = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_69;
  v62 = (UserServantAppendPassiveSkillLvMaster_o *)MaxLevelInfo;
  MaxLevelInfo = UserServantAppendPassiveSkillMaster__TryGetEntity(
                   Master_WarQuestSelectionMaster,
                   &entity,
                   userId,
                   svtId,
                   0LL);
  v64 = 0LL;
  v65 = 0LL;
  if ( (MaxLevelInfo & 1) != 0 )
  {
    if ( !v62 )
      goto LABEL_69;
    if ( userSvtId < 1 )
    {
      MaxLevelInfo = (__int64)UserServantAppendPassiveSkillLvMaster__GetMaxLevelInfo(v62, userId, svtId, 0LL);
      if ( !MaxLevelInfo )
        goto LABEL_69;
      v66 = (System_Collections_Generic_Dictionary_int__int__o *)MaxLevelInfo;
      Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
               (System_Collections_Generic_Dictionary_int__int__o *)MaxLevelInfo,
               (const MethodInfo_2F0AA68 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
      v65 = System_Linq_Enumerable__ToArray_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
              (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 v66,
                 (const MethodInfo_2F0AC00 *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      v64 = System_Linq_Enumerable__ToArray_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)Values,
              (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    else
    {
      MaxLevelInfo = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                       (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v62,
                       &v158,
                       userSvtId,
                       (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
      if ( (MaxLevelInfo & 1) != 0 )
      {
        if ( !v158 )
          goto LABEL_69;
        v65 = *(System_Int32_array **)&v158->fields.svtId.fields.currentCryptoKey;
        v64 = *(System_Int32_array **)&v158->fields.svtId.fields.fakeValue;
      }
      else
      {
        v64 = 0LL;
        v65 = 0LL;
      }
    }
  }
  MaxLevelInfo = (__int64)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(this, svtId, v63);
  if ( !MaxLevelInfo )
LABEL_69:
    sub_B5D69C(MaxLevelInfo, v61);
  v69 = MaxLevelInfo;
  v70 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, *(unsigned int *)(MaxLevelInfo + 24));
  *idList = v70;
  sub_B5D560((BattleServantConfConponent_o *)idList, (System_Int32_array **)v70, v71, v72, v73, v74, v75, v76);
  v77 = (System_String_array *)sub_B5D5DC(string___TypeInfo, *(unsigned int *)(v69 + 24));
  *titleList = v77;
  sub_B5D560((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v77, v78, v79, v80, v81, v82, v83);
  v84 = (System_String_array *)sub_B5D5DC(string___TypeInfo, *(unsigned int *)(v69 + 24));
  *explanationList = v84;
  sub_B5D560((BattleServantConfConponent_o *)explanationList, (System_Int32_array **)v84, v85, v86, v87, v88, v89, v90);
  v91 = (System_Boolean_array *)sub_B5D5DC(bool___TypeInfo, *(unsigned int *)(v69 + 24));
  *releaseStateList = v91;
  sub_B5D560((BattleServantConfConponent_o *)releaseStateList, (System_Int32_array **)v91, v92, v93, v94, v95, v96, v97);
  v98 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, *(unsigned int *)(v69 + 24));
  *lvList = v98;
  sub_B5D560((BattleServantConfConponent_o *)lvList, (System_Int32_array **)v98, v99, v100, v101, v102, v103, v104);
  v105 = *(_QWORD *)(v69 + 24);
  if ( (int)v105 >= 1 )
  {
    v106 = 0LL;
    v107 = 32LL;
    while ( v106 < (unsigned int)v105 )
    {
      v108 = *(ServantAppendPassiveSkillEntity_o **)(v69 + v107);
      if ( v108 )
      {
        v109 = *idList;
        if ( !*idList )
          goto LABEL_69;
        if ( v106 >= v109->max_length )
          break;
        v109->m_Items[v106 + 1] = v108->fields.skillId;
        if ( !v65
          || (MaxLevelInfo = System_Array__IndexOf_int_(
                               v65,
                               v108->fields.num,
                               (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___),
              (MaxLevelInfo & 0x80000000) != 0) )
        {
          v110 = 1;
        }
        else
        {
          if ( !v64 )
            goto LABEL_69;
          if ( (unsigned int)MaxLevelInfo >= v64->max_length )
            break;
          v110 = v64->m_Items[(int)MaxLevelInfo + 1];
        }
        if ( !entity
          || (MaxLevelInfo = System_Array__IndexOf_int_(
                               entity->fields.unlockNums,
                               v108->fields.num,
                               (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___),
              (MaxLevelInfo & 0x80000000) != 0) )
        {
          v120 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_69;
          if ( v106 >= v120->max_length )
            break;
          v120->m_Items[v106 + 4] = 0;
          v121 = *explanationList;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          MaxLevelInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3371/*"COND_TYPE_TITLE"*/, 0LL);
          if ( !v121 )
            goto LABEL_69;
          v128 = (System_Int32_array **)MaxLevelInfo;
          if ( MaxLevelInfo )
          {
            MaxLevelInfo = sub_B5D684(MaxLevelInfo, v121->obj.klass->_1.element_class);
            if ( !MaxLevelInfo )
            {
              v152 = sub_B5D6BC(0LL);
              sub_B5D668(v152, 0LL);
            }
          }
          if ( v106 >= v121->max_length )
            break;
          *(Il2CppClass **)((char *)&v121->obj.klass + v107) = (Il2CppClass *)v128;
          sub_B5D560((BattleServantConfConponent_o *)((char *)v121 + v107), v128, v122, v123, v124, v125, v126, v127);
          v129 = *explanationList;
          if ( !*explanationList )
            goto LABEL_69;
          if ( v106 >= v129->max_length )
            break;
          MaxLevelInfo = System_String__op_Inequality(
                           *(System_String_o **)((char *)&v129->obj.klass + v107),
                           (System_String_o *)StringLiteral_1/*""*/,
                           0LL);
          if ( (MaxLevelInfo & 1) != 0 )
          {
            v130 = *explanationList;
            if ( !*explanationList )
              goto LABEL_69;
            if ( v106 >= v130->max_length )
              break;
            v131 = (BattleServantConfConponent_o *)((char *)v130 + v107);
            v132 = (System_Int32_array **)System_String__Concat_44577788(
                                            *(System_String_o **)((char *)&v130->obj.klass + v107),
                                            (System_String_o *)StringLiteral_26/*"\n"*/,
                                            0LL);
            v131->klass = (BattleServantConfConponent_c *)v132;
            sub_B5D560(v131, v132, v133, v134, v135, v136, v137, v138);
          }
          v139 = *explanationList;
          if ( !*explanationList )
            goto LABEL_69;
          if ( v106 >= v139->max_length )
            break;
          v140 = *(System_String_o **)((char *)&v139->obj.klass + v107);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v141 = LocalizationManager__Get((System_String_o *)StringLiteral_3359/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v142 = (System_Int32_array **)System_String__Concat_44577788(v140, v141, 0LL);
          *(Il2CppClass **)((char *)&v139->obj.klass + v107) = (Il2CppClass *)v142;
          sub_B5D560((BattleServantConfConponent_o *)((char *)v139 + v107), v142, v143, v144, v145, v146, v147, v148);
          v149 = *lvList;
          if ( !*lvList )
            goto LABEL_69;
          if ( v106 >= v149->max_length )
            break;
          v149->m_Items[v106 + 1] = 0;
          v150 = *titleList;
          if ( !*titleList )
            goto LABEL_69;
          if ( v106 >= v150->max_length )
            break;
          v116 = (System_String_o **)((char *)v150 + v107);
          p_explanation = &explanation;
          v118 = v108;
          v119 = 0;
        }
        else
        {
          v112 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_69;
          if ( v106 >= v112->max_length )
            break;
          v112->m_Items[v106 + 4] = 1;
          v113 = *lvList;
          if ( !*lvList )
            goto LABEL_69;
          if ( v106 >= v113->max_length )
            break;
          v113->m_Items[v106 + 1] = v110;
          v114 = *titleList;
          if ( !*titleList )
            goto LABEL_69;
          v115 = *explanationList;
          if ( !*explanationList )
            goto LABEL_69;
          if ( v106 >= v114->max_length || v106 >= v115->max_length )
            break;
          v116 = (System_String_o **)((char *)v114 + v107);
          p_explanation = (System_String_o **)((char *)v115 + v107);
          v118 = v108;
          v119 = v110;
        }
        ServantAppendPassiveSkillEntity__GetEffectExplanation(v118, v116, p_explanation, v119, v111);
      }
      LODWORD(v105) = *(_DWORD *)(v69 + 24);
      ++v106;
      v107 += 8LL;
      if ( (__int64)v106 >= (int)v105 )
        return;
    }
    v151 = sub_B5D6C8(MaxLevelInfo);
    sub_B5D668(v151, 0LL);
  }
}


void __fastcall ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo_26883456(
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
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  const MethodInfo *v49; // x2
  __int64 EntityListFromSvtId; // x0
  __int64 v51; // x1
  __int64 v52; // x25
  System_Int32_array *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_String_array *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Boolean_array *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array *v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  const MethodInfo *v88; // x4
  __int64 v89; // x8
  unsigned __int64 v90; // x28
  __int64 v91; // x21
  ServantAppendPassiveSkillEntity_o *v92; // x26
  System_Int32_array *v93; // x8
  int32_t v94; // w27
  System_String_array *v95; // x8
  System_String_array *v96; // x9
  System_Boolean_array *v97; // x8
  System_Int32_array *v98; // x8
  System_Boolean_array *v99; // x8
  System_String_array *v100; // x27
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_Int32_array **v107; // x26
  System_String_array *v108; // x8
  System_String_array *v109; // x8
  BattleServantConfConponent_o *v110; // x26
  System_Int32_array **v111; // x0
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_String_array *v118; // x27
  System_String_o *v119; // x26
  System_String_o *v120; // x0
  System_Int32_array **v121; // x0
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  __int64 v128; // x0
  __int64 v129; // x0

  if ( (byte_42E9883 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, (_DWORD)idList, (_DWORD)titleList, explanationList);
    sub_B5D5C4(&bool___TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v22, v23, v24);
    sub_B5D5C4(&DataManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&int___TypeInfo, v28, v29, v30);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&string___TypeInfo, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_3371/*"COND_TYPE_TITLE"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_3359/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_1/*""*/, v46, v47, v48);
    byte_42E9883 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  EntityListFromSvtId = (__int64)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(this, svtId, v49);
  if ( !EntityListFromSvtId )
LABEL_57:
    sub_B5D69C(EntityListFromSvtId, v51);
  v52 = EntityListFromSvtId;
  v53 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, *(unsigned int *)(EntityListFromSvtId + 24));
  *idList = v53;
  sub_B5D560((BattleServantConfConponent_o *)idList, (System_Int32_array **)v53, v54, v55, v56, v57, v58, v59);
  v60 = (System_String_array *)sub_B5D5DC(string___TypeInfo, *(unsigned int *)(v52 + 24));
  *titleList = v60;
  sub_B5D560((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v60, v61, v62, v63, v64, v65, v66);
  v67 = (System_String_array *)sub_B5D5DC(string___TypeInfo, *(unsigned int *)(v52 + 24));
  *explanationList = v67;
  sub_B5D560((BattleServantConfConponent_o *)explanationList, (System_Int32_array **)v67, v68, v69, v70, v71, v72, v73);
  v74 = (System_Boolean_array *)sub_B5D5DC(bool___TypeInfo, *(unsigned int *)(v52 + 24));
  *releaseStateList = v74;
  sub_B5D560((BattleServantConfConponent_o *)releaseStateList, (System_Int32_array **)v74, v75, v76, v77, v78, v79, v80);
  v81 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, *(unsigned int *)(v52 + 24));
  *lvList = v81;
  sub_B5D560((BattleServantConfConponent_o *)lvList, (System_Int32_array **)v81, v82, v83, v84, v85, v86, v87);
  v89 = *(_QWORD *)(v52 + 24);
  if ( (int)v89 >= 1 )
  {
    v90 = 0LL;
    v91 = 32LL;
    while ( v90 < (unsigned int)v89 )
    {
      v92 = *(ServantAppendPassiveSkillEntity_o **)(v52 + v91);
      if ( v92 )
      {
        v93 = *idList;
        if ( !*idList )
          goto LABEL_57;
        if ( v90 >= v93->max_length )
          break;
        v93->m_Items[v90 + 1] = v92->fields.skillId;
        if ( !releaseSkillIds
          || (EntityListFromSvtId = System_Array__IndexOf_int_(
                                      releaseSkillIds,
                                      v92->fields.skillId,
                                      (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___),
              (EntityListFromSvtId & 0x80000000) != 0) )
        {
          v94 = 1;
        }
        else
        {
          if ( !releaseSkillLvs )
            goto LABEL_57;
          if ( (unsigned int)EntityListFromSvtId >= releaseSkillLvs->max_length )
            break;
          v94 = releaseSkillLvs->m_Items[(int)EntityListFromSvtId + 1];
        }
        v95 = *titleList;
        if ( !*titleList )
          goto LABEL_57;
        v96 = *explanationList;
        if ( !*explanationList )
          goto LABEL_57;
        if ( v90 >= v95->max_length || v90 >= v96->max_length )
          break;
        ServantAppendPassiveSkillEntity__GetEffectExplanation(
          v92,
          (System_String_o **)((char *)v95 + v91),
          (System_String_o **)((char *)v96 + v91),
          v94,
          v88);
        if ( !releaseSkillIds
          || (EntityListFromSvtId = System_Array__IndexOf_int_(
                                      releaseSkillIds,
                                      v92->fields.skillId,
                                      (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___),
              (EntityListFromSvtId & 0x80000000) != 0) )
        {
          v99 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_57;
          if ( v90 >= v99->max_length )
            break;
          v99->m_Items[v90 + 4] = 0;
          v100 = *explanationList;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          EntityListFromSvtId = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3371/*"COND_TYPE_TITLE"*/, 0LL);
          if ( !v100 )
            goto LABEL_57;
          v107 = (System_Int32_array **)EntityListFromSvtId;
          if ( EntityListFromSvtId )
          {
            EntityListFromSvtId = sub_B5D684(EntityListFromSvtId, v100->obj.klass->_1.element_class);
            if ( !EntityListFromSvtId )
            {
              v129 = sub_B5D6BC(0LL);
              sub_B5D668(v129, 0LL);
            }
          }
          if ( v90 >= v100->max_length )
            break;
          *(Il2CppClass **)((char *)&v100->obj.klass + v91) = (Il2CppClass *)v107;
          sub_B5D560((BattleServantConfConponent_o *)((char *)v100 + v91), v107, v101, v102, v103, v104, v105, v106);
          v108 = *explanationList;
          if ( !*explanationList )
            goto LABEL_57;
          if ( v90 >= v108->max_length )
            break;
          EntityListFromSvtId = System_String__op_Inequality(
                                  *(System_String_o **)((char *)&v108->obj.klass + v91),
                                  (System_String_o *)StringLiteral_1/*""*/,
                                  0LL);
          if ( (EntityListFromSvtId & 1) != 0 )
          {
            v109 = *explanationList;
            if ( !*explanationList )
              goto LABEL_57;
            if ( v90 >= v109->max_length )
              break;
            v110 = (BattleServantConfConponent_o *)((char *)v109 + v91);
            v111 = (System_Int32_array **)System_String__Concat_44577788(
                                            *(System_String_o **)((char *)&v109->obj.klass + v91),
                                            (System_String_o *)StringLiteral_26/*"\n"*/,
                                            0LL);
            v110->klass = (BattleServantConfConponent_c *)v111;
            sub_B5D560(v110, v111, v112, v113, v114, v115, v116, v117);
          }
          v118 = *explanationList;
          if ( !*explanationList )
            goto LABEL_57;
          if ( v90 >= v118->max_length )
            break;
          v119 = *(System_String_o **)((char *)&v118->obj.klass + v91);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v120 = LocalizationManager__Get((System_String_o *)StringLiteral_3359/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v121 = (System_Int32_array **)System_String__Concat_44577788(v119, v120, 0LL);
          *(Il2CppClass **)((char *)&v118->obj.klass + v91) = (Il2CppClass *)v121;
          sub_B5D560((BattleServantConfConponent_o *)((char *)v118 + v91), v121, v122, v123, v124, v125, v126, v127);
          v98 = *lvList;
          if ( !*lvList )
            goto LABEL_57;
          if ( v90 >= v98->max_length )
            break;
          v94 = 0;
        }
        else
        {
          v97 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_57;
          if ( v90 >= v97->max_length )
            break;
          v97->m_Items[v90 + 4] = 1;
          v98 = *lvList;
          if ( !*lvList )
            goto LABEL_57;
          if ( v90 >= v98->max_length )
            break;
        }
        v98->m_Items[v90 + 1] = v94;
      }
      LODWORD(v89) = *(_DWORD *)(v52 + 24);
      ++v90;
      v91 += 8LL;
      if ( (__int64)v90 >= (int)v89 )
        return;
    }
    v128 = sub_B5D6C8(EntityListFromSvtId);
    sub_B5D668(v128, 0LL);
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

  if ( (byte_42E987A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__GetEntity__,
      svtId,
      num,
      *(_QWORD *)&priority);
    byte_42E987A = 1;
  }
  PK = ServantAppendPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantAppendPassiveSkillEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                                PK,
                                                (const MethodInfo_23FB260 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__GetEntity__);
}


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
  if ( (byte_42E9880 & 1) == 0 )
  {
    this = (ServantAppendPassiveSkillMaster_o *)sub_B5D5C4(
                                                  &Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TryGetValue__,
                                                  svtId,
                                                  num,
                                                  method);
    byte_42E9880 = 1;
  }
  value = 0LL;
  TempKey = ServantAppendPassiveSkillMaster__CreateTempKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    goto LABEL_10;
  TempKey = (System_String_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
                                 (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.listCache,
                                 (System_Xml_XmlQualifiedName_o *)TempKey,
                                 &value,
                                 (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TryGetValue__);
  if ( ((unsigned __int8)TempKey & 1) == 0 )
    return 0LL;
  if ( !value )
LABEL_10:
    sub_B5D69C(TempKey, v8);
  if ( !LODWORD(value->fields.sourceUri) )
  {
    v10 = sub_B5D6C8(TempKey);
    sub_B5D668(v10, 0LL);
  }
  return (ServantAppendPassiveSkillEntity_o *)value->fields.namespaces;
}


ServantAppendPassiveSkillEntity_array *__fastcall ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  System_Collections_Generic_HashSet_int__o *v33; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x22
  __int64 v35; // x1
  void *list; // x0
  int32_t v37; // w23
  _DWORD *v38; // x24
  __int64 v39; // x10
  const MethodInfo *v40; // x3

  if ( (byte_42E987F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&ServantAppendPassiveSkillEntity_TypeInfo, v30, v31, v32);
    byte_42E987F = 1;
  }
  v33 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v33,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_19;
  v37 = 0;
  while ( 1 )
  {
    list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                     (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v37 >= (int)list )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v37,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v38 = list;
      v39 = *(&ServantAppendPassiveSkillEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v39
        && *(ServantAppendPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v39 - 8) == ServantAppendPassiveSkillEntity_TypeInfo
        && *((_DWORD *)list + 4) == svtId )
      {
        if ( !v33 )
          goto LABEL_19;
        if ( System_Collections_Generic_HashSet_int___Add(
               v33,
               *((_DWORD *)list + 5),
               (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__) )
        {
          list = ServantAppendPassiveSkillMaster__GetEntityFromIdNum(this, v38[4], v38[5], v40);
          if ( !v34 )
            goto LABEL_19;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v34,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__);
        }
      }
    }
    list = this->fields.list;
    ++v37;
    if ( !list )
      goto LABEL_19;
  }
  if ( !v34 )
LABEL_19:
    sub_B5D69C(list, v35);
  return (ServantAppendPassiveSkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v34,
                                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
}


SvtUseSkillData_o *__fastcall ServantAppendPassiveSkillMaster__GetSkillData(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  __int64 v27; // x1
  void *list; // x0
  int32_t Count; // w24
  System_Collections_Generic_List_int__o *v30; // x23
  System_Collections_Generic_List_int__o *v31; // x22
  int32_t v32; // w25
  _DWORD *v33; // x26
  __int64 v34; // x10
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v49; // [xsp+8h] [xbp-58h]

  if ( (byte_42E9882 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&ServantAppendPassiveSkillEntity_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&SvtUseSkillData_TypeInfo, v24, v25, v26);
    byte_42E9882 = 1;
  }
  v49 = sub_B5D694(SvtUseSkillData_TypeInfo);
  SvtUseSkillData___ctor((SvtUseSkillData_o *)v49, 0LL);
  list = this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v30 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v31 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( Count >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v32,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v33 = list;
        v34 = *(&ServantAppendPassiveSkillEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v34
          && *(ServantAppendPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v34 - 8) == ServantAppendPassiveSkillEntity_TypeInfo
          && *((_DWORD *)list + 4) == svtId )
        {
          if ( !v30 )
            break;
          System_Collections_Generic_List_int___Add(
            v30,
            *((_DWORD *)list + 7),
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          if ( !v31 )
            break;
          System_Collections_Generic_List_int___Add(
            v31,
            v33[5],
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( ++v32 >= Count )
        goto LABEL_15;
    }
LABEL_19:
    sub_B5D69C(list, v27);
  }
LABEL_15:
  if ( !v30 )
    goto LABEL_19;
  list = System_Collections_Generic_List_int___ToArray(
           v30,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v49 )
    goto LABEL_19;
  *(_QWORD *)(v49 + 16) = list;
  sub_B5D560((BattleServantConfConponent_o *)(v49 + 16), (System_Int32_array **)list, v35, v36, v37, v38, v39, v40);
  if ( !v31 )
    goto LABEL_19;
  v41 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v31,
                                 (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v49 + 32) = v41;
  sub_B5D560((BattleServantConfConponent_o *)(v49 + 32), v41, v42, v43, v44, v45, v46, v47);
  return (SvtUseSkillData_o *)v49;
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

  if ( (byte_42E987B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__TryGetEntity__,
      (_DWORD)entity,
      svtId,
      *(_QWORD *)&num);
    byte_42E987B = 1;
  }
  PK = ServantAppendPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__TryGetEntity__);
}


bool __fastcall ServantAppendPassiveSkillMaster__preProcess(
        ServantAppendPassiveSkillMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *listCache; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v87; // x20
  __int64 v88; // x1
  __int64 v89; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v92; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v95; // x3
  System_Collections_Generic_IEnumerator_T__c *v96; // x8
  unsigned __int64 v97; // x10
  int32_t *v98; // x11
  __int64 v99; // x0
  __int64 v100; // x0
  __int64 v101; // x1
  const MethodInfo *v102; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v103; // x22
  __int64 v104; // x9
  System_String_o *TempKey; // x0
  __int64 v106; // x1
  System_Xml_XmlQualifiedName_o *v107; // x23
  __int64 v108; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v109; // x24
  System_Xml_Schema_XmlSchemaObject_o *v110; // x2
  System_Collections_Generic_IEnumerator_T__c *v111; // x8
  unsigned __int64 v112; // x10
  int32_t *v113; // x11
  __int64 v114; // x0
  __int64 v115; // x1
  ServantAppendPassiveSkillMaster___c_c *v116; // x0
  Il2CppObject *v117; // x21
  Il2CppObject *key; // x22
  struct ServantAppendPassiveSkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x23
  Il2CppObject *v121; // x24
  struct ServantAppendPassiveSkillMaster___c_StaticFields *v122; // x0
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  struct System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____o *v129; // x23
  System_Xml_Schema_XmlSchemaObject_o *v130; // x0
  __int64 v131; // x1
  int v132; // w21
  ServantAppendPassiveSkillMaster_o *v134; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v135; // [xsp+18h] [xbp-B8h] BYREF
  int v136[2]; // [xsp+40h] [xbp-90h]
  int v137; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v138; // [xsp+50h] [xbp-80h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_42E987E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Comparison_ServantAppendPassiveSkillEntity___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Comparison_ServantAppendPassiveSkillEntity__TypeInfo, v8, v9, v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____Clear__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___Clear__,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___GetEnumerator__,
      v17,
      v18,
      v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TryGetValue__,
      v20,
      v21,
      v22);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity____ctor__,
      v23,
      v24,
      v25);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___set_Item__,
      v26,
      v27,
      v28);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____set_Item__,
      v29,
      v30,
      v31);
    sub_B5D5C4(
      &System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TypeInfo,
      v32,
      v33,
      v34);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___Dispose__,
      v35,
      v36,
      v37);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___MoveNext__,
      v38,
      v39,
      v40);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___get_Current__,
      v41,
      v42,
      v43);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v47, v48, v49);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v50, v51, v52);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ServantAppendPassiveSkillEntity___get_Key__,
      v53,
      v54,
      v55);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ServantAppendPassiveSkillEntity___get_Value__,
      v56,
      v57,
      v58);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__, v59, v60, v61);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Clear__, v62, v63, v64);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Sort__, v65, v66, v67);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__, v68, v69, v70);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__, v71, v72, v73);
    sub_B5D5C4(&System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo, v74, v75, v76);
    sub_B5D5C4(&ServantAppendPassiveSkillEntity_TypeInfo, v77, v78, v79);
    sub_B5D5C4(&Method_ServantAppendPassiveSkillMaster___c__preProcess_b__5_0__, v80, v81, v82);
    sub_B5D5C4(&ServantAppendPassiveSkillMaster___c_TypeInfo, v83, v84, v85);
    byte_42E987E = 1;
  }
  value = 0LL;
  memset(&v138, 0, sizeof(v138));
  v137 = 0;
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    listCache,
    (const MethodInfo_2F26D98 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____Clear__);
  v87 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v87,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)listCache,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v134 = this;
  if ( !Enumerator )
    sub_B5D69C(0LL, v88);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v92 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v92;
        p_offset += 4;
        if ( v92 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v89);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v96 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v97 = 0LL;
      v98 = &v96->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v98 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v97;
        v98 += 4;
        if ( v97 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v99 = (__int64)&v96->vtable[*v98].method;
    }
    else
    {
LABEL_17:
      v99 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v95);
    }
    v100 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v99)(
             Enumerator,
             *(_QWORD *)(v99 + 8));
    v103 = (EventMissionProgressRequest_Argument_ProgressData_o *)v100;
    if ( !v100 )
      sub_B5D69C(0LL, v101);
    v104 = *(&ServantAppendPassiveSkillEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v100 + 300LL) < (unsigned int)v104
      || *(ServantAppendPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v100 + 200LL) + 8 * v104 - 8) != ServantAppendPassiveSkillEntity_TypeInfo )
    {
      v116 = (ServantAppendPassiveSkillMaster___c_c *)sub_B5D990(v100);
LABEL_52:
      sub_B5D69C(v116, v115);
    }
    TempKey = ServantAppendPassiveSkillMaster__CreateTempKey(
                (ServantAppendPassiveSkillMaster_o *)v100,
                *(_DWORD *)(v100 + 16),
                *(_DWORD *)(v100 + 20),
                v102);
    if ( !v87 )
      sub_B5D69C(TempKey, v106);
    v107 = (System_Xml_XmlQualifiedName_o *)TempKey;
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            v87,
            (System_Xml_XmlQualifiedName_o *)TempKey,
            &value,
            (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TryGetValue__) )
    {
      v109 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v109,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
      value = (System_Xml_Schema_XmlSchemaObject_o *)v109;
      v110 = (System_Xml_Schema_XmlSchemaObject_o *)v109;
      this = v134;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v87,
        v107,
        v110,
        (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___set_Item__);
    }
    if ( !value )
      sub_B5D69C(0LL, v108);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
      v103,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__);
  }
  v136[0] = 117;
  v137 = 1;
  v111 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v112 = 0LL;
    v113 = &v111->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v113 - 1) != System_IDisposable_TypeInfo )
    {
      ++v112;
      v113 += 4;
      if ( v112 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v114 = (__int64)&v111->vtable[*v113].method;
  }
  else
  {
LABEL_31:
    v114 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v95);
  }
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v114)(
                                                                                              Enumerator,
                                                                                              *(_QWORD *)(v114 + 8));
  v137 = 0;
  if ( !v87 )
LABEL_57:
    sub_B5D69C(listCache, method);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v135,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v87,
    (const MethodInfo_2F27198 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___GetEnumerator__);
  v138 = v135;
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v138,
            (const MethodInfo_2767D00 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___MoveNext__) )
  {
    v116 = ServantAppendPassiveSkillMaster___c_TypeInfo;
    key = v138.fields.current.fields.key;
    v117 = v138.fields.current.fields.value;
    if ( (BYTE3(ServantAppendPassiveSkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAppendPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAppendPassiveSkillMaster___c_TypeInfo);
      v116 = ServantAppendPassiveSkillMaster___c_TypeInfo;
    }
    static_fields = v116->static_fields;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v116->vtable._0_Equals.methodPtr) & 4) != 0 && !v116->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v116);
        static_fields = ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields;
      }
      v121 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ServantAppendPassiveSkillEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__5_0,
        v121,
        Method_ServantAppendPassiveSkillMaster___c__preProcess_b__5_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_ServantAppendPassiveSkillEntity___ctor__);
      v122 = ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields;
      v122->__9__5_0 = (struct System_Comparison_ServantAppendPassiveSkillEntity__o *)_9__5_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v122->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v123,
        v124,
        v125,
        v126,
        v127,
        v128);
      this = v134;
    }
    if ( !v117 )
      goto LABEL_52;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v117,
      (System_Comparison_T__o *)_9__5_0,
      (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Sort__);
    v129 = this->fields.listCache;
    v130 = (System_Xml_Schema_XmlSchemaObject_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v117,
                                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
    if ( !v129 )
      sub_B5D69C(v130, v131);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v129,
      (System_Xml_XmlQualifiedName_o *)key,
      v130,
      (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____set_Item__);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v117,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Clear__);
  }
  v136[0] = 240;
  v132 = ++v137;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v138,
    (const MethodInfo_2767E68 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___Dispose__);
  if ( v132 && v136[v132 - 1] == 240 )
    v137 = v132 - 1;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    v87,
    (const MethodInfo_2F26D98 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___Clear__);
  return 1;
}


void __fastcall ServantAppendPassiveSkillMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantAppendPassiveSkillMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D30 & 1) == 0 )
  {
    sub_B5D5C4(&ServantAppendPassiveSkillMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5D30 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantAppendPassiveSkillMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantAppendPassiveSkillMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}