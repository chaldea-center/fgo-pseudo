void __fastcall ServantAppendPassiveSkillMaster___ctor(
        ServantAppendPassiveSkillMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F93EF & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string___ctor__,
      method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity_____ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TypeInfo, v7);
    byte_40F93EF = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                       System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TypeInfo,
                                                                                       method,
                                                                                       v2,
                                                                                       v3,
                                                                                       v4);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v8,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____o *)v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.listCache,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    366,
    (const MethodInfo_266F73C *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string___ctor__);
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
  if ( (byte_40F93F0 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1223, *(_QWORD *)&svtId);
    byte_40F93F0 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_43746016(v4, (System_String_o *)StringLiteral_1223, v5, 0LL);
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
  WarQuestSelectionMaster_o *v30; // x0
  UserServantAppendPassiveSkillLvMaster_o *v31; // x27
  bool v32; // w0
  const MethodInfo *v33; // x2
  System_Int32_array *v34; // x25
  System_Int32_array *v35; // x24
  System_Collections_Generic_Dictionary_int__int__o *MaxLevelInfo; // x0
  System_Collections_Generic_Dictionary_int__int__o *v37; // x25
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  ServantAppendPassiveSkillEntity_array *EntityListFromSvtId; // x0
  __int64 v41; // x2
  ServantAppendPassiveSkillEntity_array *v42; // x26
  System_Int32_array *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x2
  System_String_array *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 v58; // x2
  System_String_array *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  __int64 v66; // x2
  System_Boolean_array *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  __int64 v74; // x2
  System_Int32_array *v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_String_o *v82; // x0
  __int64 v83; // x1
  System_String_array **v84; // x2
  __int64 v85; // x8
  unsigned __int64 v86; // x19
  __int64 v87; // x20
  ServantAppendPassiveSkillEntity_o *v88; // x27
  System_Int32_array *v89; // x8
  int v90; // w28
  const MethodInfo *v91; // x4
  System_Boolean_array *v92; // x8
  System_Int32_array *v93; // x8
  System_String_array *v94; // x8
  System_String_array *v95; // x9
  System_String_o **v96; // x1
  System_String_o **p_explanation; // x2
  ServantAppendPassiveSkillEntity_o *v98; // x0
  int32_t v99; // w3
  System_Boolean_array *v100; // x8
  System_String_array *v101; // x22
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_Int32_array **v107; // x28
  System_String_array *v108; // x8
  System_String_array *v109; // x8
  BattleServantConfConponent_o *v110; // x28
  System_Int32_array **v111; // x0
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_String_array *v118; // x22
  System_String_o *v119; // x28
  System_String_o *v120; // x0
  System_Int32_array **v121; // x0
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  System_Int32_array *v128; // x8
  System_String_array *v129; // x8
  System_String_o *explanation; // [xsp+28h] [xbp-68h] BYREF
  UserServantEntity_o *v135; // [xsp+30h] [xbp-60h] BYREF
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_40F93F4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, idList);
    sub_B16FFC(&bool___TypeInfo, v14);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v16);
    sub_B16FFC(&DataManager_TypeInfo, v17);
    sub_B16FFC(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__,
      v18);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__, v20);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v21);
    sub_B16FFC(&int___TypeInfo, v22);
    sub_B16FFC(&LocalizationManager_TypeInfo, v23);
    sub_B16FFC(&string___TypeInfo, v24);
    sub_B16FFC(&StringLiteral_26, v25);
    sub_B16FFC(&StringLiteral_3296, v26);
    sub_B16FFC(&StringLiteral_3284, v27);
    sub_B16FFC(&StringLiteral_1, v28);
    byte_40F93F4 = 1;
  }
  v135 = 0LL;
  entity = 0LL;
  explanation = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantAppendPassiveSkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  v30 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_69;
  v31 = (UserServantAppendPassiveSkillLvMaster_o *)v30;
  v32 = UserServantAppendPassiveSkillMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, userId, svtId, 0LL);
  v34 = 0LL;
  v35 = 0LL;
  if ( v32 )
  {
    if ( !v31 )
      goto LABEL_69;
    if ( userSvtId < 1 )
    {
      MaxLevelInfo = UserServantAppendPassiveSkillLvMaster__GetMaxLevelInfo(v31, userId, svtId, 0LL);
      if ( !MaxLevelInfo )
        goto LABEL_69;
      v37 = MaxLevelInfo;
      Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
               MaxLevelInfo,
               (const MethodInfo_2DDCBC4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
      v35 = System_Linq_Enumerable__ToArray_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
              (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 v37,
                 (const MethodInfo_2DDCD5C *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      v34 = System_Linq_Enumerable__ToArray_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)Values,
              (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    else if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v31,
                &v135,
                userSvtId,
                (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__) )
    {
      if ( !v135 )
        goto LABEL_69;
      v35 = *(System_Int32_array **)&v135->fields.svtId.fields.currentCryptoKey;
      v34 = *(System_Int32_array **)&v135->fields.svtId.fields.fakeValue;
    }
    else
    {
      v34 = 0LL;
      v35 = 0LL;
    }
  }
  EntityListFromSvtId = ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(this, svtId, v33);
  if ( !EntityListFromSvtId )
LABEL_69:
    sub_B170D4();
  v42 = EntityListFromSvtId;
  v43 = (System_Int32_array *)sub_B17014(int___TypeInfo, EntityListFromSvtId->max_length, v41);
  *idList = v43;
  sub_B16F98((BattleServantConfConponent_o *)idList, (System_Int32_array **)v43, v44, v45, v46, v47, v48, v49);
  v51 = (System_String_array *)sub_B17014(string___TypeInfo, v42->max_length, v50);
  *titleList = v51;
  sub_B16F98((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
  v59 = (System_String_array *)sub_B17014(string___TypeInfo, v42->max_length, v58);
  *explanationList = v59;
  sub_B16F98((BattleServantConfConponent_o *)explanationList, (System_Int32_array **)v59, v60, v61, v62, v63, v64, v65);
  v67 = (System_Boolean_array *)sub_B17014(bool___TypeInfo, v42->max_length, v66);
  *releaseStateList = v67;
  sub_B16F98((BattleServantConfConponent_o *)releaseStateList, (System_Int32_array **)v67, v68, v69, v70, v71, v72, v73);
  v75 = (System_Int32_array *)sub_B17014(int___TypeInfo, v42->max_length, v74);
  *lvList = v75;
  sub_B16F98((BattleServantConfConponent_o *)lvList, (System_Int32_array **)v75, v76, v77, v78, v79, v80, v81);
  v85 = *(_QWORD *)&v42->max_length;
  if ( (int)v85 >= 1 )
  {
    v86 = 0LL;
    v87 = 32LL;
    while ( v86 < (unsigned int)v85 )
    {
      v88 = *(ServantAppendPassiveSkillEntity_o **)((char *)&v42->obj.klass + v87);
      if ( v88 )
      {
        v89 = *idList;
        if ( !*idList )
          goto LABEL_69;
        if ( v86 >= v89->max_length )
          break;
        v89->m_Items[v86 + 1] = v88->fields.skillId;
        if ( !v35
          || (v82 = (System_String_o *)System_Array__IndexOf_int_(
                                         v35,
                                         v88->fields.num,
                                         (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___),
              ((unsigned int)v82 & 0x80000000) != 0) )
        {
          v90 = 1;
        }
        else
        {
          if ( !v34 )
            goto LABEL_69;
          if ( (unsigned int)v82 >= v34->max_length )
            break;
          v90 = v34->m_Items[(int)v82 + 1];
        }
        if ( !entity
          || (v82 = (System_String_o *)System_Array__IndexOf_int_(
                                         entity->fields.unlockNums,
                                         v88->fields.num,
                                         (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___),
              ((unsigned int)v82 & 0x80000000) != 0) )
        {
          v100 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_69;
          if ( v86 >= v100->max_length )
            break;
          v100->m_Items[v86 + 4] = 0;
          v101 = *explanationList;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v82 = LocalizationManager__Get((System_String_o *)StringLiteral_3296, 0LL);
          if ( !v101 )
            goto LABEL_69;
          v107 = (System_Int32_array **)v82;
          if ( v82 )
          {
            v82 = (System_String_o *)sub_B170BC(v82, v101->obj.klass->_1.element_class);
            if ( !v82 )
            {
              sub_B170F4(0LL);
              sub_B170A0();
            }
          }
          if ( v86 >= v101->max_length )
            break;
          *(Il2CppClass **)((char *)&v101->obj.klass + v87) = (Il2CppClass *)v107;
          sub_B16F98((BattleServantConfConponent_o *)((char *)v101 + v87), v107, v84, v102, v103, v104, v105, v106);
          v108 = *explanationList;
          if ( !*explanationList )
            goto LABEL_69;
          if ( v86 >= v108->max_length )
            break;
          v82 = (System_String_o *)System_String__op_Inequality(
                                     *(System_String_o **)((char *)&v108->obj.klass + v87),
                                     (System_String_o *)StringLiteral_1,
                                     0LL);
          if ( ((unsigned __int8)v82 & 1) != 0 )
          {
            v109 = *explanationList;
            if ( !*explanationList )
              goto LABEL_69;
            if ( v86 >= v109->max_length )
              break;
            v110 = (BattleServantConfConponent_o *)((char *)v109 + v87);
            v111 = (System_Int32_array **)System_String__Concat_43743732(
                                            *(System_String_o **)((char *)&v109->obj.klass + v87),
                                            (System_String_o *)StringLiteral_26,
                                            0LL);
            v110->klass = (BattleServantConfConponent_c *)v111;
            sub_B16F98(v110, v111, v112, v113, v114, v115, v116, v117);
          }
          v118 = *explanationList;
          if ( !*explanationList )
            goto LABEL_69;
          if ( v86 >= v118->max_length )
            break;
          v119 = *(System_String_o **)((char *)&v118->obj.klass + v87);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v120 = LocalizationManager__Get((System_String_o *)StringLiteral_3284, 0LL);
          v121 = (System_Int32_array **)System_String__Concat_43743732(v119, v120, 0LL);
          *(Il2CppClass **)((char *)&v118->obj.klass + v87) = (Il2CppClass *)v121;
          sub_B16F98((BattleServantConfConponent_o *)((char *)v118 + v87), v121, v122, v123, v124, v125, v126, v127);
          v128 = *lvList;
          if ( !*lvList )
            goto LABEL_69;
          if ( v86 >= v128->max_length )
            break;
          v128->m_Items[v86 + 1] = 0;
          v129 = *titleList;
          if ( !*titleList )
            goto LABEL_69;
          if ( v86 >= v129->max_length )
            break;
          v96 = (System_String_o **)((char *)v129 + v87);
          p_explanation = &explanation;
          v98 = v88;
          v99 = 0;
        }
        else
        {
          v92 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_69;
          if ( v86 >= v92->max_length )
            break;
          v92->m_Items[v86 + 4] = 1;
          v93 = *lvList;
          if ( !*lvList )
            goto LABEL_69;
          if ( v86 >= v93->max_length )
            break;
          v93->m_Items[v86 + 1] = v90;
          v94 = *titleList;
          if ( !*titleList )
            goto LABEL_69;
          v95 = *explanationList;
          if ( !*explanationList )
            goto LABEL_69;
          if ( v86 >= v94->max_length || v86 >= v95->max_length )
            break;
          v96 = (System_String_o **)((char *)v94 + v87);
          p_explanation = (System_String_o **)((char *)v95 + v87);
          v98 = v88;
          v99 = v90;
        }
        ServantAppendPassiveSkillEntity__GetEffectExplanation(v98, v96, p_explanation, v99, v91);
      }
      LODWORD(v85) = v42->max_length;
      ++v86;
      v87 += 8LL;
      if ( (__int64)v86 >= (int)v85 )
        return;
    }
    sub_B17100(v82, v83, v84);
    sub_B170A0();
  }
}


void __fastcall ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo_23785284(
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
  ServantAppendPassiveSkillEntity_array *EntityListFromSvtId; // x0
  __int64 v29; // x2
  ServantAppendPassiveSkillEntity_array *v30; // x25
  System_Int32_array *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x2
  System_String_array *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x2
  System_String_array *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x2
  System_Boolean_array *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x2
  System_Int32_array *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_String_o *v70; // x0
  __int64 v71; // x1
  System_String_array **v72; // x2
  const MethodInfo *v73; // x4
  __int64 v74; // x8
  unsigned __int64 v75; // x28
  __int64 v76; // x21
  ServantAppendPassiveSkillEntity_o *v77; // x26
  System_Int32_array *v78; // x8
  int32_t v79; // w27
  System_String_array *v80; // x8
  System_String_array *v81; // x9
  System_Boolean_array *v82; // x8
  System_Int32_array *v83; // x8
  System_Boolean_array *v84; // x8
  System_String_array *v85; // x27
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x26
  System_String_array *v92; // x8
  System_String_array *v93; // x8
  BattleServantConfConponent_o *v94; // x26
  System_Int32_array **v95; // x0
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_String_array *v102; // x27
  System_String_o *v103; // x26
  System_String_o *v104; // x0
  System_Int32_array **v105; // x0
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7

  if ( (byte_40F93F6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, idList);
    sub_B16FFC(&bool___TypeInfo, v16);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v18);
    sub_B16FFC(&DataManager_TypeInfo, v19);
    sub_B16FFC(&int___TypeInfo, v20);
    sub_B16FFC(&LocalizationManager_TypeInfo, v21);
    sub_B16FFC(&string___TypeInfo, v22);
    sub_B16FFC(&StringLiteral_26, v23);
    sub_B16FFC(&StringLiteral_3296, v24);
    sub_B16FFC(&StringLiteral_3284, v25);
    sub_B16FFC(&StringLiteral_1, v26);
    byte_40F93F6 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  EntityListFromSvtId = ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(this, svtId, v27);
  if ( !EntityListFromSvtId )
LABEL_57:
    sub_B170D4();
  v30 = EntityListFromSvtId;
  v31 = (System_Int32_array *)sub_B17014(int___TypeInfo, EntityListFromSvtId->max_length, v29);
  *idList = v31;
  sub_B16F98((BattleServantConfConponent_o *)idList, (System_Int32_array **)v31, v32, v33, v34, v35, v36, v37);
  v39 = (System_String_array *)sub_B17014(string___TypeInfo, v30->max_length, v38);
  *titleList = v39;
  sub_B16F98((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v39, v40, v41, v42, v43, v44, v45);
  v47 = (System_String_array *)sub_B17014(string___TypeInfo, v30->max_length, v46);
  *explanationList = v47;
  sub_B16F98((BattleServantConfConponent_o *)explanationList, (System_Int32_array **)v47, v48, v49, v50, v51, v52, v53);
  v55 = (System_Boolean_array *)sub_B17014(bool___TypeInfo, v30->max_length, v54);
  *releaseStateList = v55;
  sub_B16F98((BattleServantConfConponent_o *)releaseStateList, (System_Int32_array **)v55, v56, v57, v58, v59, v60, v61);
  v63 = (System_Int32_array *)sub_B17014(int___TypeInfo, v30->max_length, v62);
  *lvList = v63;
  sub_B16F98((BattleServantConfConponent_o *)lvList, (System_Int32_array **)v63, v64, v65, v66, v67, v68, v69);
  v74 = *(_QWORD *)&v30->max_length;
  if ( (int)v74 >= 1 )
  {
    v75 = 0LL;
    v76 = 32LL;
    while ( v75 < (unsigned int)v74 )
    {
      v77 = *(ServantAppendPassiveSkillEntity_o **)((char *)&v30->obj.klass + v76);
      if ( v77 )
      {
        v78 = *idList;
        if ( !*idList )
          goto LABEL_57;
        if ( v75 >= v78->max_length )
          break;
        v78->m_Items[v75 + 1] = v77->fields.skillId;
        if ( !releaseSkillIds
          || (v70 = (System_String_o *)System_Array__IndexOf_int_(
                                         releaseSkillIds,
                                         v77->fields.skillId,
                                         (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___),
              ((unsigned int)v70 & 0x80000000) != 0) )
        {
          v79 = 1;
        }
        else
        {
          if ( !releaseSkillLvs )
            goto LABEL_57;
          if ( (unsigned int)v70 >= releaseSkillLvs->max_length )
            break;
          v79 = releaseSkillLvs->m_Items[(int)v70 + 1];
        }
        v80 = *titleList;
        if ( !*titleList )
          goto LABEL_57;
        v81 = *explanationList;
        if ( !*explanationList )
          goto LABEL_57;
        if ( v75 >= v80->max_length || v75 >= v81->max_length )
          break;
        ServantAppendPassiveSkillEntity__GetEffectExplanation(
          v77,
          (System_String_o **)((char *)v80 + v76),
          (System_String_o **)((char *)v81 + v76),
          v79,
          v73);
        if ( !releaseSkillIds
          || (v70 = (System_String_o *)System_Array__IndexOf_int_(
                                         releaseSkillIds,
                                         v77->fields.skillId,
                                         (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___),
              ((unsigned int)v70 & 0x80000000) != 0) )
        {
          v84 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_57;
          if ( v75 >= v84->max_length )
            break;
          v84->m_Items[v75 + 4] = 0;
          v85 = *explanationList;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v70 = LocalizationManager__Get((System_String_o *)StringLiteral_3296, 0LL);
          if ( !v85 )
            goto LABEL_57;
          v91 = (System_Int32_array **)v70;
          if ( v70 )
          {
            v70 = (System_String_o *)sub_B170BC(v70, v85->obj.klass->_1.element_class);
            if ( !v70 )
            {
              sub_B170F4(0LL);
              sub_B170A0();
            }
          }
          if ( v75 >= v85->max_length )
            break;
          *(Il2CppClass **)((char *)&v85->obj.klass + v76) = (Il2CppClass *)v91;
          sub_B16F98((BattleServantConfConponent_o *)((char *)v85 + v76), v91, v72, v86, v87, v88, v89, v90);
          v92 = *explanationList;
          if ( !*explanationList )
            goto LABEL_57;
          if ( v75 >= v92->max_length )
            break;
          v70 = (System_String_o *)System_String__op_Inequality(
                                     *(System_String_o **)((char *)&v92->obj.klass + v76),
                                     (System_String_o *)StringLiteral_1,
                                     0LL);
          if ( ((unsigned __int8)v70 & 1) != 0 )
          {
            v93 = *explanationList;
            if ( !*explanationList )
              goto LABEL_57;
            if ( v75 >= v93->max_length )
              break;
            v94 = (BattleServantConfConponent_o *)((char *)v93 + v76);
            v95 = (System_Int32_array **)System_String__Concat_43743732(
                                           *(System_String_o **)((char *)&v93->obj.klass + v76),
                                           (System_String_o *)StringLiteral_26,
                                           0LL);
            v94->klass = (BattleServantConfConponent_c *)v95;
            sub_B16F98(v94, v95, v96, v97, v98, v99, v100, v101);
          }
          v102 = *explanationList;
          if ( !*explanationList )
            goto LABEL_57;
          if ( v75 >= v102->max_length )
            break;
          v103 = *(System_String_o **)((char *)&v102->obj.klass + v76);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v104 = LocalizationManager__Get((System_String_o *)StringLiteral_3284, 0LL);
          v105 = (System_Int32_array **)System_String__Concat_43743732(v103, v104, 0LL);
          *(Il2CppClass **)((char *)&v102->obj.klass + v76) = (Il2CppClass *)v105;
          sub_B16F98((BattleServantConfConponent_o *)((char *)v102 + v76), v105, v106, v107, v108, v109, v110, v111);
          v83 = *lvList;
          if ( !*lvList )
            goto LABEL_57;
          if ( v75 >= v83->max_length )
            break;
          v79 = 0;
        }
        else
        {
          v82 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_57;
          if ( v75 >= v82->max_length )
            break;
          v82->m_Items[v75 + 4] = 1;
          v83 = *lvList;
          if ( !*lvList )
            goto LABEL_57;
          if ( v75 >= v83->max_length )
            break;
        }
        v83->m_Items[v75 + 1] = v79;
      }
      LODWORD(v74) = v30->max_length;
      ++v75;
      v76 += 8LL;
      if ( (__int64)v75 >= (int)v74 )
        return;
    }
    sub_B17100(v70, v71, v72);
    sub_B170A0();
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

  if ( (byte_40F93ED & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_40F93ED = 1;
  }
  PK = ServantAppendPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantAppendPassiveSkillEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                                PK,
                                                (const MethodInfo_266F7D8 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__GetEntity__);
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
  _BOOL8 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_40F93F3 & 1) == 0 )
  {
    this = (ServantAppendPassiveSkillMaster_o *)sub_B16FFC(
                                                  &Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TryGetValue__,
                                                  *(_QWORD *)&svtId);
    byte_40F93F3 = 1;
  }
  value = 0LL;
  TempKey = ServantAppendPassiveSkillMaster__CreateTempKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    goto LABEL_10;
  v8 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.listCache,
         (System_Xml_XmlQualifiedName_o *)TempKey,
         &value,
         (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TryGetValue__);
  if ( !v8 )
    return 0LL;
  if ( !value )
LABEL_10:
    sub_B170D4();
  if ( !LODWORD(value->fields.sourceUri) )
  {
    sub_B17100(v8, v9, v10);
    sub_B170A0();
  }
  return (ServantAppendPassiveSkillEntity_o *)value->fields.namespaces;
}


// local variable allocation has failed, the output may be wrong!
ServantAppendPassiveSkillEntity_array *__fastcall ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_HashSet_int__o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v23; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v24; // x0
  int32_t *Item; // x0
  int32_t *v26; // x24
  __int64 v27; // x10
  const MethodInfo *v28; // x3
  ServantAppendPassiveSkillEntity_o *EntityFromIdNum; // x0

  if ( (byte_40F93F2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v9);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo, v14);
    sub_B16FFC(&ServantAppendPassiveSkillEntity_TypeInfo, v15);
    byte_40F93F2 = 1;
  }
  v16 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       method,
                                                       v3,
                                                       v4);
  System_Collections_Generic_HashSet_int____ctor(
    v16,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  v23 = 0;
  while ( v23 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v24 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v24 )
      goto LABEL_19;
    Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        v24,
                        v23,
                        (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v26 = Item;
      v27 = *(&ServantAppendPassiveSkillEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) >= (unsigned int)v27
        && *(ServantAppendPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v27 - 8) == ServantAppendPassiveSkillEntity_TypeInfo
        && Item[4] == svtId )
      {
        if ( !v16 )
          goto LABEL_19;
        if ( System_Collections_Generic_HashSet_int___Add(
               v16,
               Item[5],
               (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__) )
        {
          EntityFromIdNum = ServantAppendPassiveSkillMaster__GetEntityFromIdNum(this, v26[4], v26[5], v28);
          if ( !v21 )
            goto LABEL_19;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v21,
            (EventMissionProgressRequest_Argument_ProgressData_o *)EntityFromIdNum,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v23;
    if ( !list )
      goto LABEL_19;
  }
  if ( !v21 )
LABEL_19:
    sub_B170D4();
  return (ServantAppendPassiveSkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v21,
                                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
SvtUseSkillData_o *__fastcall ServantAppendPassiveSkillMaster__GetSkillData(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w24
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_int__o *v20; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Collections_Generic_List_int__o *v25; // x22
  int32_t v26; // w25
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v27; // x0
  int32_t *Item; // x0
  int32_t *v29; // x26
  __int64 v30; // x10
  System_Int32_array **v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v46; // [xsp+8h] [xbp-58h]

  if ( (byte_40F93F5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B16FFC(&ServantAppendPassiveSkillEntity_TypeInfo, v12);
    sub_B16FFC(&SvtUseSkillData_TypeInfo, v13);
    byte_40F93F5 = 1;
  }
  v46 = sub_B170CC(SvtUseSkillData_TypeInfo, *(_QWORD *)&svtId, method, v3, v4);
  SvtUseSkillData___ctor((SvtUseSkillData_o *)v46, 0LL);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v16,
                                                    v17,
                                                    v18,
                                                    v19);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v25 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v21,
                                                    v22,
                                                    v23,
                                                    v24);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      v27 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v27 )
        break;
      Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                          v27,
                          v26,
                          (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v29 = Item;
        v30 = *(&ServantAppendPassiveSkillEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) >= (unsigned int)v30
          && *(ServantAppendPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v30 - 8) == ServantAppendPassiveSkillEntity_TypeInfo
          && Item[4] == svtId )
        {
          if ( !v20 )
            break;
          System_Collections_Generic_List_int___Add(
            v20,
            Item[7],
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          if ( !v25 )
            break;
          System_Collections_Generic_List_int___Add(
            v25,
            v29[5],
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( ++v26 >= Count )
        goto LABEL_15;
    }
LABEL_19:
    sub_B170D4();
  }
LABEL_15:
  if ( !v20 )
    goto LABEL_19;
  v31 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v20,
                                 (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v46 )
    goto LABEL_19;
  *(_QWORD *)(v46 + 16) = v31;
  sub_B16F98((BattleServantConfConponent_o *)(v46 + 16), v31, v32, v33, v34, v35, v36, v37);
  if ( !v25 )
    goto LABEL_19;
  v38 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v25,
                                 (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v46 + 32) = v38;
  sub_B16F98((BattleServantConfConponent_o *)(v46 + 32), v38, v39, v40, v41, v42, v43, v44);
  return (SvtUseSkillData_o *)v46;
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

  if ( (byte_40F93EE & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__TryGetEntity__,
      entity);
    byte_40F93EE = 1;
  }
  PK = ServantAppendPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__TryGetEntity__);
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
  struct System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____o *listCache; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v35; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v39; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  unsigned __int64 v43; // x10
  int32_t *v44; // x11
  __int64 v45; // x0
  __int64 v46; // x0
  const MethodInfo *v47; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v48; // x22
  __int64 v49; // x9
  System_String_o *TempKey; // x0
  System_Xml_XmlQualifiedName_o *v51; // x23
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v56; // x24
  System_Xml_Schema_XmlSchemaObject_o *v57; // x2
  System_Collections_Generic_IEnumerator_T__c *v58; // x8
  unsigned __int64 v59; // x10
  int32_t *v60; // x11
  __int64 v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  ServantAppendPassiveSkillMaster___c_c *v66; // x0
  Il2CppObject *v67; // x21
  Il2CppObject *key; // x22
  struct ServantAppendPassiveSkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x23
  Il2CppObject *v71; // x24
  struct ServantAppendPassiveSkillMaster___c_StaticFields *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____o *v79; // x23
  System_Xml_Schema_XmlSchemaObject_o *v80; // x0
  int v81; // w21
  ServantAppendPassiveSkillMaster_o *v83; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v84; // [xsp+18h] [xbp-B8h] BYREF
  int v85[2]; // [xsp+40h] [xbp-90h]
  int v86; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v87; // [xsp+50h] [xbp-80h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_40F93F1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B16FFC(&Method_System_Comparison_ServantAppendPassiveSkillEntity___ctor__, v3);
    sub_B16FFC(&System_Comparison_ServantAppendPassiveSkillEntity__TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___Clear__, v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___GetEnumerator__,
      v7);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TryGetValue__,
      v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity____ctor__, v9);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___set_Item__,
      v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____set_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TypeInfo, v12);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___Dispose__,
      v13);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___MoveNext__,
      v14);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___get_Current__,
      v15);
    sub_B16FFC(&System_IDisposable_TypeInfo, v16);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v17);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v18);
    sub_B16FFC(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ServantAppendPassiveSkillEntity___get_Key__,
      v19);
    sub_B16FFC(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ServantAppendPassiveSkillEntity___get_Value__,
      v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Clear__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Sort__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__, v25);
    sub_B16FFC(&System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo, v26);
    sub_B16FFC(&ServantAppendPassiveSkillEntity_TypeInfo, v27);
    sub_B16FFC(&Method_ServantAppendPassiveSkillMaster___c__preProcess_b__5_0__, v28);
    sub_B16FFC(&ServantAppendPassiveSkillMaster___c_TypeInfo, v29);
    byte_40F93F1 = 1;
  }
  value = 0LL;
  memset(&v87, 0, sizeof(v87));
  v86 = 0;
  listCache = this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)listCache,
    (const MethodInfo_2DA3DF4 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____Clear__);
  v35 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                        System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TypeInfo,
                                                                                        v31,
                                                                                        v32,
                                                                                        v33,
                                                                                        v34);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v35,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity____ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v83 = this;
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v39;
        p_offset += 4;
        if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v42 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v43 = 0LL;
      v44 = &v42->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v44 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v43;
        v44 += 4;
        if ( v43 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v45 = (__int64)&v42->vtable[*v44].method;
    }
    else
    {
LABEL_17:
      v45 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v46 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
            Enumerator,
            *(_QWORD *)(v45 + 8));
    v48 = (EventMissionProgressRequest_Argument_ProgressData_o *)v46;
    if ( !v46 )
      sub_B170D4();
    v49 = *(&ServantAppendPassiveSkillEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v46 + 300LL) < (unsigned int)v49
      || *(ServantAppendPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v46 + 200LL) + 8 * v49 - 8) != ServantAppendPassiveSkillEntity_TypeInfo )
    {
      sub_B173C8(v46);
LABEL_52:
      sub_B170D4();
    }
    TempKey = ServantAppendPassiveSkillMaster__CreateTempKey(
                (ServantAppendPassiveSkillMaster_o *)v46,
                *(_DWORD *)(v46 + 16),
                *(_DWORD *)(v46 + 20),
                v47);
    if ( !v35 )
      sub_B170D4();
    v51 = (System_Xml_XmlQualifiedName_o *)TempKey;
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            v35,
            (System_Xml_XmlQualifiedName_o *)TempKey,
            &value,
            (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TryGetValue__) )
    {
      v56 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo, v52, v53, v54, v55);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v56,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
      value = (System_Xml_Schema_XmlSchemaObject_o *)v56;
      v57 = (System_Xml_Schema_XmlSchemaObject_o *)v56;
      this = v83;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v35,
        v51,
        v57,
        (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___set_Item__);
    }
    if ( !value )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
      v48,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__);
  }
  v85[0] = 117;
  v86 = 1;
  v58 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v59 = 0LL;
    v60 = &v58->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
    {
      ++v59;
      v60 += 4;
      if ( v59 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v61 = (__int64)&v58->vtable[*v60].method;
  }
  else
  {
LABEL_31:
    v61 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v61)(Enumerator, *(_QWORD *)(v61 + 8));
  v86 = 0;
  if ( !v35 )
LABEL_57:
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v84,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v35,
    (const MethodInfo_2DA41F4 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___GetEnumerator__);
  v87 = v84;
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v87,
            (const MethodInfo_26BCF58 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___MoveNext__) )
  {
    v66 = ServantAppendPassiveSkillMaster___c_TypeInfo;
    key = v87.fields.current.fields.key;
    v67 = v87.fields.current.fields.value;
    if ( (BYTE3(ServantAppendPassiveSkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAppendPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAppendPassiveSkillMaster___c_TypeInfo);
      v66 = ServantAppendPassiveSkillMaster___c_TypeInfo;
    }
    static_fields = v66->static_fields;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v66->vtable._0_Equals.methodPtr) & 4) != 0 && !v66->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v66);
        static_fields = ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields;
      }
      v71 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                            System_Comparison_ServantAppendPassiveSkillEntity__TypeInfo,
                                                                            v62,
                                                                            v63,
                                                                            v64,
                                                                            v65);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__5_0,
        v71,
        Method_ServantAppendPassiveSkillMaster___c__preProcess_b__5_0__,
        (const MethodInfo_25BFD48 *)Method_System_Comparison_ServantAppendPassiveSkillEntity___ctor__);
      v72 = ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields;
      v72->__9__5_0 = (struct System_Comparison_ServantAppendPassiveSkillEntity__o *)_9__5_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v72->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v73,
        v74,
        v75,
        v76,
        v77,
        v78);
      this = v83;
    }
    if ( !v67 )
      goto LABEL_52;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v67,
      (System_Comparison_T__o *)_9__5_0,
      (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Sort__);
    v79 = this->fields.listCache;
    v80 = (System_Xml_Schema_XmlSchemaObject_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v67,
                                                   (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
    if ( !v79 )
      sub_B170D4();
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v79,
      (System_Xml_XmlQualifiedName_o *)key,
      v80,
      (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____set_Item__);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v67,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Clear__);
  }
  v85[0] = 240;
  v81 = ++v86;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v87,
    (const MethodInfo_26BD0C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___Dispose__);
  if ( v81 && v85[v81 - 1] == 240 )
    v86 = v81 - 1;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    v35,
    (const MethodInfo_2DA3DF4 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___Clear__);
  return 1;
}


void __fastcall ServantAppendPassiveSkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7604 & 1) == 0 )
  {
    sub_B16FFC(&ServantAppendPassiveSkillMaster___c_TypeInfo, v1);
    byte_40F7604 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantAppendPassiveSkillMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}