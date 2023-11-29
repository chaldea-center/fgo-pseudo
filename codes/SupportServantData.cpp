void __fastcall SupportServantData___ctor(SupportServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  BalanceConfig_c *v16; // x0
  struct UserServantLeaderEntity_array *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x2
  struct System_Int64_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x2
  struct System_Int64_array *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x2
  struct System_Int64_array *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x2
  struct System_Int64_array *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int64 v56; // x2
  __int64 v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  struct System_String_array *v64; // x20
  __int64 v65; // x0
  System_Int32_array **v66; // x1
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7

  if ( (byte_40FD297 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&long___TypeInfo, v4);
    sub_B16FFC(&string___TypeInfo, v5);
    sub_B16FFC(&UserServantLeaderEntity___TypeInfo, v6);
    sub_B16FFC(&StringLiteral_12439, v7);
    sub_B16FFC(&StringLiteral_12442, v8);
    sub_B16FFC(&StringLiteral_12437, v9);
    sub_B16FFC(&StringLiteral_12440, v10);
    sub_B16FFC(&StringLiteral_12443, v11);
    sub_B16FFC(&StringLiteral_12438, v12);
    sub_B16FFC(&StringLiteral_12436, v13);
    sub_B16FFC(&StringLiteral_12435, v14);
    sub_B16FFC(&StringLiteral_12441, v15);
    byte_40FD297 = 1;
  }
  v16 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  v17 = (struct UserServantLeaderEntity_array *)sub_B17014(
                                                  UserServantLeaderEntity___TypeInfo,
                                                  (unsigned int)v16->static_fields->SupportDeckMemberMax,
                                                  v2);
  this->fields.userServantLeaderEntityList = v17;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23);
  v25 = (struct System_Int64_array *)sub_B17014(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax,
                                       v24);
  this->fields.servantIdList = v25;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantIdList,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v33 = (struct System_Int64_array *)sub_B17014(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax,
                                       v32);
  this->fields.oldServantIdList = v33;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.oldServantIdList,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v41 = (struct System_Int64_array *)sub_B17014(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax,
                                       v40);
  this->fields.equipIdList = v41;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.equipIdList,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v49 = (struct System_Int64_array *)sub_B17014(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax,
                                       v48);
  this->fields.oldEquipIdList = v49;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.oldEquipIdList,
    (System_Int32_array **)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  v57 = sub_B17014(string___TypeInfo, 9LL, v56);
  if ( !v57 )
    sub_B170D4();
  v64 = (struct System_String_array *)v57;
  v65 = StringLiteral_12435;
  if ( StringLiteral_12435 )
  {
    v65 = sub_B170BC(StringLiteral_12435, v64->obj.klass->_1.element_class);
    if ( !v65 )
      goto LABEL_54;
    v66 = (System_Int32_array **)StringLiteral_12435;
  }
  else
  {
    v66 = 0LL;
  }
  if ( !v64->max_length )
    goto LABEL_53;
  v64->m_Items[0] = (System_String_o *)v66;
  sub_B16F98((BattleServantConfConponent_o *)v64->m_Items, v66, v58, v59, v60, v61, v62, v63);
  v65 = StringLiteral_12436;
  if ( StringLiteral_12436 )
  {
    v65 = sub_B170BC(StringLiteral_12436, v64->obj.klass->_1.element_class);
    if ( !v65 )
      goto LABEL_54;
    v66 = (System_Int32_array **)StringLiteral_12436;
  }
  else
  {
    v66 = 0LL;
  }
  if ( v64->max_length <= 1 )
    goto LABEL_53;
  v64->m_Items[1] = (System_String_o *)v66;
  sub_B16F98((BattleServantConfConponent_o *)&v64->m_Items[1], v66, v58, v67, v68, v69, v70, v71);
  v65 = StringLiteral_12437;
  if ( StringLiteral_12437 )
  {
    v65 = sub_B170BC(StringLiteral_12437, v64->obj.klass->_1.element_class);
    if ( !v65 )
      goto LABEL_54;
    v66 = (System_Int32_array **)StringLiteral_12437;
  }
  else
  {
    v66 = 0LL;
  }
  if ( v64->max_length <= 2 )
    goto LABEL_53;
  v64->m_Items[2] = (System_String_o *)v66;
  sub_B16F98((BattleServantConfConponent_o *)&v64->m_Items[2], v66, v58, v72, v73, v74, v75, v76);
  v65 = StringLiteral_12438;
  if ( StringLiteral_12438 )
  {
    v65 = sub_B170BC(StringLiteral_12438, v64->obj.klass->_1.element_class);
    if ( !v65 )
      goto LABEL_54;
    v66 = (System_Int32_array **)StringLiteral_12438;
  }
  else
  {
    v66 = 0LL;
  }
  if ( v64->max_length <= 3 )
    goto LABEL_53;
  v64->m_Items[3] = (System_String_o *)v66;
  sub_B16F98((BattleServantConfConponent_o *)&v64->m_Items[3], v66, v58, v77, v78, v79, v80, v81);
  v65 = StringLiteral_12439;
  if ( StringLiteral_12439 )
  {
    v65 = sub_B170BC(StringLiteral_12439, v64->obj.klass->_1.element_class);
    if ( !v65 )
      goto LABEL_54;
    v66 = (System_Int32_array **)StringLiteral_12439;
  }
  else
  {
    v66 = 0LL;
  }
  if ( v64->max_length <= 4 )
    goto LABEL_53;
  v64->m_Items[4] = (System_String_o *)v66;
  sub_B16F98((BattleServantConfConponent_o *)&v64->m_Items[4], v66, v58, v82, v83, v84, v85, v86);
  v65 = StringLiteral_12440;
  if ( StringLiteral_12440 )
  {
    v65 = sub_B170BC(StringLiteral_12440, v64->obj.klass->_1.element_class);
    if ( !v65 )
      goto LABEL_54;
    v66 = (System_Int32_array **)StringLiteral_12440;
  }
  else
  {
    v66 = 0LL;
  }
  if ( v64->max_length <= 5 )
    goto LABEL_53;
  v64->m_Items[5] = (System_String_o *)v66;
  sub_B16F98((BattleServantConfConponent_o *)&v64->m_Items[5], v66, v58, v87, v88, v89, v90, v91);
  v65 = StringLiteral_12441;
  if ( StringLiteral_12441 )
  {
    v65 = sub_B170BC(StringLiteral_12441, v64->obj.klass->_1.element_class);
    if ( !v65 )
      goto LABEL_54;
    v66 = (System_Int32_array **)StringLiteral_12441;
  }
  else
  {
    v66 = 0LL;
  }
  if ( v64->max_length <= 6 )
    goto LABEL_53;
  v64->m_Items[6] = (System_String_o *)v66;
  sub_B16F98((BattleServantConfConponent_o *)&v64->m_Items[6], v66, v58, v92, v93, v94, v95, v96);
  v65 = StringLiteral_12442;
  if ( StringLiteral_12442 )
  {
    v65 = sub_B170BC(StringLiteral_12442, v64->obj.klass->_1.element_class);
    if ( !v65 )
      goto LABEL_54;
    v66 = (System_Int32_array **)StringLiteral_12442;
  }
  else
  {
    v66 = 0LL;
  }
  if ( v64->max_length <= 7 )
    goto LABEL_53;
  v64->m_Items[7] = (System_String_o *)v66;
  sub_B16F98((BattleServantConfConponent_o *)&v64->m_Items[7], v66, v58, v97, v98, v99, v100, v101);
  v65 = StringLiteral_12443;
  if ( StringLiteral_12443 )
  {
    v65 = sub_B170BC(StringLiteral_12443, v64->obj.klass->_1.element_class);
    if ( v65 )
    {
      v66 = (System_Int32_array **)StringLiteral_12443;
      goto LABEL_51;
    }
LABEL_54:
    sub_B170F4(v65);
    sub_B170A0();
  }
  v66 = 0LL;
LABEL_51:
  if ( v64->max_length <= 8 )
  {
LABEL_53:
    sub_B17100(v65, v66, v58);
    sub_B170A0();
  }
  v64->m_Items[8] = (System_String_o *)v66;
  sub_B16F98((BattleServantConfConponent_o *)&v64->m_Items[8], v66, v58, v102, v103, v104, v105, v106);
  this->fields.className = v64;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.className,
    (System_Int32_array **)v64,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__CopyData(
        SupportServantData_o *this,
        SupportServantData_o *data,
        bool isInit,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  struct UserServantLeaderEntity_array *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  struct UserServantLeaderEntity_array *v22; // x8
  __int64 v23; // x25
  __int64 v24; // x26
  unsigned __int64 max_length; // x9
  unsigned __int64 v26; // x28
  struct UserServantLeaderEntity_array *v27; // x21
  UserServantLeaderEntity_o *v28; // x24
  UserServantLeaderEntity_o *v29; // x23
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Array_o *servantIdList; // x0
  Il2CppObject *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  Il2CppObject *v43; // x22
  struct System_Int64_array *v44; // x1
  System_Array_o *oldServantIdList; // x0
  Il2CppObject *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct System_Int64_array *v53; // x1
  System_Array_o *equipIdList; // x0
  Il2CppObject *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct System_Int64_array *v62; // x1
  System_Array_o *oldEquipIdList; // x0
  Il2CppObject *v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  struct System_Int64_array *v71; // x1
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  struct EventUpValSetupInfo_o *eventSetupInfo; // x1
  struct EventUpValSetupInfo_o *eventSetupInfo2; // x1
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  struct System_String_o *deckName_k__BackingField; // x1
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  struct System_String_o *oldDeckName_k__BackingField; // x1
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  bool v107; // [xsp+Ch] [xbp-54h]

  if ( (byte_40FD2A9 & 1) == 0 )
  {
    sub_B16FFC(&long___TypeInfo, data);
    sub_B16FFC(&UserServantLeaderEntity___TypeInfo, v7);
    sub_B16FFC(&UserServantLeaderEntity_TypeInfo, v8);
    byte_40FD2A9 = 1;
  }
  if ( !data )
    goto LABEL_14;
  userServantLeaderEntityList = data->fields.userServantLeaderEntityList;
  v107 = isInit;
  if ( !userServantLeaderEntityList )
    goto LABEL_14;
  v10 = (struct UserServantLeaderEntity_array *)sub_B17014(
                                                  UserServantLeaderEntity___TypeInfo,
                                                  userServantLeaderEntityList->max_length,
                                                  isInit);
  this->fields.userServantLeaderEntityList = v10;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16);
  v22 = data->fields.userServantLeaderEntityList;
  if ( !v22 )
    goto LABEL_14;
  v23 = 4LL;
  v24 = 32LL;
  while ( 1 )
  {
    max_length = v22->max_length;
    v26 = v23 - 4;
    if ( v23 - 4 >= (int)max_length )
      break;
    if ( v26 >= max_length )
      goto LABEL_38;
    v27 = this->fields.userServantLeaderEntityList;
    v28 = (UserServantLeaderEntity_o *)*((_QWORD *)&v22->obj.klass + v23);
    v29 = (UserServantLeaderEntity_o *)sub_B170CC(UserServantLeaderEntity_TypeInfo, v18, v19, v20, v21);
    UserServantLeaderEntity___ctor_34309304(v29, v28, 0LL);
    if ( v27 )
    {
      if ( v29 )
      {
        v17 = sub_B170BC(v29, v27->obj.klass->_1.element_class);
        if ( !v17 )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      if ( v26 >= v27->max_length )
      {
LABEL_38:
        sub_B17100(v17, v18, v19);
        sub_B170A0();
      }
      *((_QWORD *)&v27->obj.klass + v23) = v29;
      sub_B16F98(
        (BattleServantConfConponent_o *)((char *)v27 + v24),
        (System_Int32_array **)v29,
        v19,
        v30,
        v31,
        v32,
        v33,
        v34);
      v22 = data->fields.userServantLeaderEntityList;
      ++v23;
      v24 += 8LL;
      if ( v22 )
        continue;
    }
    goto LABEL_14;
  }
  servantIdList = (System_Array_o *)data->fields.servantIdList;
  if ( !servantIdList )
    goto LABEL_14;
  v36 = System_Array__Clone(servantIdList, 0LL);
  if ( v36 )
  {
    v43 = v36;
    v44 = (struct System_Int64_array *)sub_B170BC(v36, long___TypeInfo);
    if ( !v44 )
    {
LABEL_33:
      sub_B173C8(v43);
      goto LABEL_34;
    }
  }
  else
  {
    v44 = 0LL;
  }
  this->fields.servantIdList = v44;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantIdList,
    (System_Int32_array **)v44,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  oldServantIdList = (System_Array_o *)data->fields.oldServantIdList;
  if ( !oldServantIdList )
    goto LABEL_14;
  v46 = System_Array__Clone(oldServantIdList, 0LL);
  if ( v46 )
  {
    v43 = v46;
    v53 = (struct System_Int64_array *)sub_B170BC(v46, long___TypeInfo);
    if ( !v53 )
      goto LABEL_33;
  }
  else
  {
    v53 = 0LL;
  }
  this->fields.oldServantIdList = v53;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.oldServantIdList,
    (System_Int32_array **)v53,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  equipIdList = (System_Array_o *)data->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_14;
  v55 = System_Array__Clone(equipIdList, 0LL);
  if ( v55 )
  {
    v43 = v55;
    v62 = (struct System_Int64_array *)sub_B170BC(v55, long___TypeInfo);
    if ( !v62 )
      goto LABEL_33;
  }
  else
  {
    v62 = 0LL;
  }
  this->fields.equipIdList = v62;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.equipIdList,
    (System_Int32_array **)v62,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  oldEquipIdList = (System_Array_o *)data->fields.oldEquipIdList;
  if ( !oldEquipIdList )
LABEL_14:
    sub_B170D4();
  v64 = System_Array__Clone(oldEquipIdList, 0LL);
  if ( v64 )
  {
    v43 = v64;
    v71 = (struct System_Int64_array *)sub_B170BC(v64, long___TypeInfo);
    if ( v71 )
      goto LABEL_35;
    goto LABEL_33;
  }
LABEL_34:
  v71 = 0LL;
LABEL_35:
  this->fields.oldEquipIdList = v71;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.oldEquipIdList,
    (System_Int32_array **)v71,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  if ( v107 )
  {
    this->fields.isFriendInfo = data->fields.isFriendInfo;
    this->fields.kind = data->fields.kind;
    this->fields.isSelectServant = data->fields.isSelectServant;
    eventSetupInfo = data->fields.eventSetupInfo;
    this->fields.eventSetupInfo = eventSetupInfo;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.eventSetupInfo,
      (System_Int32_array **)eventSetupInfo,
      v72,
      v73,
      v74,
      v75,
      v76,
      v77);
    eventSetupInfo2 = data->fields.eventSetupInfo2;
    this->fields.eventSetupInfo2 = eventSetupInfo2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.eventSetupInfo2,
      (System_Int32_array **)eventSetupInfo2,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85);
    questRestrictionInfo = data->fields.questRestrictionInfo;
    this->fields.questRestrictionInfo = questRestrictionInfo;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
      (System_Int32_array **)questRestrictionInfo,
      v87,
      v88,
      v89,
      v90,
      v91,
      v92);
    this->fields.pushUserServantId = data->fields.pushUserServantId;
    this->fields._deckId_k__BackingField = data->fields._deckId_k__BackingField;
    deckName_k__BackingField = data->fields._deckName_k__BackingField;
    this->fields._deckName_k__BackingField = deckName_k__BackingField;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._deckName_k__BackingField,
      (System_Int32_array **)deckName_k__BackingField,
      v94,
      v95,
      v96,
      v97,
      v98,
      v99);
    oldDeckName_k__BackingField = data->fields._oldDeckName_k__BackingField;
    this->fields._oldDeckName_k__BackingField = oldDeckName_k__BackingField;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._oldDeckName_k__BackingField,
      (System_Int32_array **)oldDeckName_k__BackingField,
      v101,
      v102,
      v103,
      v104,
      v105,
      v106);
  }
}


System_Int64_array *__fastcall SupportServantData__GetEquipList(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.equipIdList;
}


// local variable allocation has failed, the output may be wrong!
SupportServantData_FollowerData_o *__fastcall SupportServantData__GetFollowerDataIfUpdated(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  SupportServantData_o *v6; // x20
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *oldServantIdList; // x9
  struct System_Int64_array *equipIdList; // x8
  struct System_Int64_array *oldEquipIdList; // x9
  SupportServantData_FollowerData_o *v11; // x21
  struct System_Int64_array *v12; // x8
  struct System_Int64_array *v13; // x8

  v6 = this;
  if ( (byte_40FD2A2 & 1) == 0 )
  {
    this = (SupportServantData_o *)sub_B16FFC(&SupportServantData_FollowerData_TypeInfo, *(_QWORD *)&classPos);
    byte_40FD2A2 = 1;
  }
  servantIdList = v6->fields.servantIdList;
  if ( !servantIdList )
    goto LABEL_21;
  if ( servantIdList->max_length <= classPos )
    goto LABEL_22;
  oldServantIdList = v6->fields.oldServantIdList;
  if ( !oldServantIdList )
    goto LABEL_21;
  if ( oldServantIdList->max_length <= classPos )
    goto LABEL_22;
  if ( servantIdList->m_Items[classPos] != oldServantIdList->m_Items[classPos] )
    goto LABEL_14;
  equipIdList = v6->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_21;
  if ( equipIdList->max_length <= classPos )
    goto LABEL_22;
  oldEquipIdList = v6->fields.oldEquipIdList;
  if ( !oldEquipIdList )
    goto LABEL_21;
  if ( oldEquipIdList->max_length <= classPos )
    goto LABEL_22;
  if ( equipIdList->m_Items[classPos] != oldEquipIdList->m_Items[classPos] )
  {
LABEL_14:
    v11 = (SupportServantData_FollowerData_o *)sub_B170CC(
                                                 SupportServantData_FollowerData_TypeInfo,
                                                 *(_QWORD *)&classPos,
                                                 method,
                                                 v3,
                                                 v4);
    SupportServantData_FollowerData___ctor(v11, 0LL);
    if ( v11 )
    {
      v11->fields.supportDeckId = v6->fields._deckId_k__BackingField;
      v11->fields.classId = classPos;
      v12 = v6->fields.servantIdList;
      if ( v12 )
      {
        if ( v12->max_length <= classPos )
          goto LABEL_22;
        v11->fields.userSvtId = v12->m_Items[classPos];
        v13 = v6->fields.equipIdList;
        if ( v13 )
        {
          if ( v13->max_length > classPos )
          {
            v11->fields.userSvtEquipId = v13->m_Items[classPos];
            return v11;
          }
LABEL_22:
          sub_B17100(this, *(_QWORD *)&classPos, method);
          sub_B170A0();
        }
      }
    }
LABEL_21:
    sub_B170D4();
  }
  return 0LL;
}


UserServantLeaderEntity_array *__fastcall SupportServantData__GetUserServantLeaderList(
        SupportServantData_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantLeaderEntityList;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__Init(
        SupportServantData_o *this,
        int32_t deckId,
        EventUpValSetupInfo_o *eventUpSetupInfo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 i; // x22
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *equipIdList; // x8
  struct System_Int64_array *oldServantIdList; // x8
  struct System_Int64_array *oldEquipIdList; // x8
  UserServantLeaderEntity_o *EquipUserSvtId; // x0
  unsigned __int64 v16; // x24
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v18; // x21
  WebViewManager_o *Instance; // x0
  UserServantLeaderMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantLeaderEntity_array *SupportDeck; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x23
  int max_length; // w8
  unsigned int v35; // w24
  struct System_Int64_array *v36; // x9
  __int64 classId; // x8
  struct System_Int64_array *v38; // x10
  int64_t userSvtId; // x11
  __int64 v40; // x25
  struct System_Int64_array *v41; // x26
  struct System_Int64_array *v42; // x27
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  WebViewManager_o *v55; // x0
  UserSupportDeckMaster_o *v56; // x0
  struct System_String_o *DeckName; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  const MethodInfo *v64; // x1
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  struct System_String_o *DefaultDeckName; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  struct System_String_o *deckName_k__BackingField; // x1

  if ( (byte_40FD298 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&deckId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserSupportDeckMaster___, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FD298 = 1;
  }
  for ( i = 4LL; ; ++i )
  {
    EquipUserSvtId = (UserServantLeaderEntity_o *)BalanceConfig_TypeInfo;
    v16 = i - 4;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      EquipUserSvtId = (UserServantLeaderEntity_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v16 >= *(int *)(EquipUserSvtId[2].fields.userId + 164) )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      goto LABEL_41;
    if ( v16 >= servantIdList->max_length )
      goto LABEL_42;
    *((_QWORD *)&servantIdList->obj.klass + i) = 0LL;
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_41;
    if ( v16 >= equipIdList->max_length )
      goto LABEL_42;
    *((_QWORD *)&equipIdList->obj.klass + i) = 0LL;
    oldServantIdList = this->fields.oldServantIdList;
    if ( !oldServantIdList )
      goto LABEL_41;
    if ( v16 >= oldServantIdList->max_length )
      goto LABEL_42;
    *((_QWORD *)&oldServantIdList->obj.klass + i) = 0LL;
    oldEquipIdList = this->fields.oldEquipIdList;
    if ( !oldEquipIdList )
      goto LABEL_41;
    if ( v16 >= oldEquipIdList->max_length )
      goto LABEL_42;
    *((_QWORD *)&oldEquipIdList->obj.klass + i) = 0LL;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields._deckId_k__BackingField = deckId;
  v18 = SelfUserGame;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_WarQuestSelectionMaster = (UserServantLeaderMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_41;
  SupportDeck = UserServantLeaderMaster__getSupportDeck(
                  MasterData_WarQuestSelectionMaster,
                  this->fields._deckId_k__BackingField,
                  0LL);
  this->fields.userServantLeaderEntityList = SupportDeck;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)SupportDeck,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_41;
  max_length = userServantLeaderEntityList->max_length;
  if ( max_length >= 1 )
  {
    v35 = 0;
    while ( v35 < max_length )
    {
      EquipUserSvtId = userServantLeaderEntityList->m_Items[v35];
      if ( !EquipUserSvtId )
        goto LABEL_41;
      if ( EquipUserSvtId->fields.supportDeckId == this->fields._deckId_k__BackingField )
      {
        v36 = this->fields.oldServantIdList;
        if ( !v36 )
          goto LABEL_41;
        classId = EquipUserSvtId->fields.classId;
        if ( (unsigned int)classId >= v36->max_length )
          break;
        v38 = this->fields.servantIdList;
        userSvtId = EquipUserSvtId->fields.userSvtId;
        v36->m_Items[classId] = userSvtId;
        if ( !v38 )
          goto LABEL_41;
        if ( (unsigned int)classId >= v38->max_length )
          break;
        v38->m_Items[classId] = userSvtId;
        v40 = EquipUserSvtId->fields.classId;
        v41 = this->fields.equipIdList;
        v42 = this->fields.oldEquipIdList;
        EquipUserSvtId = (UserServantLeaderEntity_o *)UserServantLeaderEntity__getEquipUserSvtId(EquipUserSvtId, 0LL);
        if ( !v42 )
          goto LABEL_41;
        if ( (unsigned int)v40 >= v42->max_length )
          break;
        v42->m_Items[v40] = (int64_t)EquipUserSvtId;
        if ( !v41 )
          goto LABEL_41;
        if ( (unsigned int)v40 >= v41->max_length )
          break;
        v41->m_Items[v40] = (int64_t)EquipUserSvtId;
      }
      max_length = userServantLeaderEntityList->max_length;
      if ( (int)++v35 >= max_length )
        goto LABEL_35;
    }
LABEL_42:
    sub_B17100(EquipUserSvtId, *(_QWORD *)&deckId, eventUpSetupInfo);
    sub_B170A0();
  }
LABEL_35:
  this->fields.isFriendInfo = 0;
  this->fields.isSelectServant = 0;
  this->fields.kind = 1;
  this->fields.eventSetupInfo2 = eventUpSetupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo2,
    (System_Int32_array **)eventUpSetupInfo,
    (System_String_array **)eventUpSetupInfo,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.eventSetupInfo = eventUpSetupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo,
    (System_Int32_array **)eventUpSetupInfo,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields.questRestrictionInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v49, v50, v51, v52, v53, v54);
  v55 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v55 )
    goto LABEL_41;
  v56 = (UserSupportDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v55,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserSupportDeckMaster___);
  if ( !v56 )
    goto LABEL_41;
  DeckName = UserSupportDeckMaster__getDeckName(v56, this->fields._deckId_k__BackingField, 0LL);
  this->fields._deckName_k__BackingField = DeckName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._deckName_k__BackingField,
    (System_Int32_array **)DeckName,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  if ( System_String__IsNullOrEmpty(this->fields._deckName_k__BackingField, 0LL) )
  {
    DefaultDeckName = SupportServantData__getDefaultDeckName(this, v64);
    this->fields._deckName_k__BackingField = DefaultDeckName;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._deckName_k__BackingField,
      (System_Int32_array **)DefaultDeckName,
      v72,
      v73,
      v74,
      v75,
      v76,
      v77);
  }
  deckName_k__BackingField = this->fields._deckName_k__BackingField;
  this->fields._oldDeckName_k__BackingField = deckName_k__BackingField;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._oldDeckName_k__BackingField,
    (System_Int32_array **)deckName_k__BackingField,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  if ( !v18 )
LABEL_41:
    sub_B170D4();
  this->fields.pushUserServantId = v18->fields.pushUserSvtId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__Init_30856296(
        SupportServantData_o *this,
        OtherUserGameEntity_o *otherData,
        int32_t friendKind,
        bool isSelectServant,
        EventUpValSetupInfo_o *eventSetupInfo,
        int32_t displayType,
        int32_t deckId,
        const MethodInfo *method)
{
  __int64 v12; // x1
  unsigned __int64 v13; // x26
  __int64 i; // x28
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x21
  UserServantLeaderEntity_o *v16; // x27
  __int64 ServantLeaderInfo; // x0
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct UserServantLeaderEntity_array *v23; // x8
  ServantLeaderInfo_o *v24; // x1
  UserServantLeaderEntity_o *v25; // x0
  struct System_Int64_array *oldServantIdList; // x21
  struct System_Int64_array *servantIdList; // x27
  struct System_Int64_array *v28; // x8
  struct UserServantLeaderEntity_array *v29; // x8
  UserServantLeaderEntity_o *v30; // x27
  System_Int32_array **EquipInfo; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct System_Int64_array *oldEquipIdList; // x21
  struct System_Int64_array *equipIdList; // x27
  struct System_Int64_array *v40; // x8
  Il2CppClass **v41; // x8
  BalanceConfig_c *v42; // x0
  int32_t v43; // w8
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7

  if ( (byte_40FD29A & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, otherData);
    sub_B16FFC(&UserServantLeaderEntity_TypeInfo, v12);
    byte_40FD29A = 1;
  }
  v13 = 0LL;
  for ( i = 32LL; ; i += 8LL )
  {
    v42 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v42 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v13 >= v42->static_fields->SupportDeckMemberMax )
      break;
    userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
    v16 = (UserServantLeaderEntity_o *)sub_B170CC(
                                         UserServantLeaderEntity_TypeInfo,
                                         otherData,
                                         *(_QWORD *)&friendKind,
                                         isSelectServant,
                                         eventSetupInfo);
    UserServantLeaderEntity___ctor(v16, 0LL);
    if ( !userServantLeaderEntityList )
      goto LABEL_47;
    if ( v16 )
    {
      ServantLeaderInfo = sub_B170BC(v16, userServantLeaderEntityList->obj.klass->_1.element_class);
      if ( !ServantLeaderInfo )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
    }
    if ( v13 >= userServantLeaderEntityList->max_length )
      goto LABEL_48;
    userServantLeaderEntityList->m_Items[v13] = v16;
    sub_B16F98(
      (BattleServantConfConponent_o *)((char *)userServantLeaderEntityList + i),
      (System_Int32_array **)v16,
      *(System_String_array ***)&friendKind,
      v18,
      v19,
      v20,
      v21,
      v22);
    if ( !otherData )
      goto LABEL_47;
    ServantLeaderInfo = (__int64)OtherUserGameEntity__getServantLeaderInfo(otherData, v13, 0, displayType, deckId, 0LL);
    if ( ServantLeaderInfo )
    {
      v23 = this->fields.userServantLeaderEntityList;
      if ( !v23 )
        goto LABEL_47;
      if ( v13 >= v23->max_length )
        goto LABEL_48;
      v24 = (ServantLeaderInfo_o *)ServantLeaderInfo;
      v25 = v23->m_Items[v13];
      if ( !v25 )
        goto LABEL_47;
      UserServantLeaderEntity__setUserServantEntity_34310044(v25, v24, 0LL);
      servantIdList = this->fields.servantIdList;
      oldServantIdList = this->fields.oldServantIdList;
      ServantLeaderInfo = OtherUserGameEntity__getUserSvtId(otherData, v13, displayType, 0LL);
      if ( !oldServantIdList )
        goto LABEL_47;
      if ( v13 >= oldServantIdList->max_length )
        goto LABEL_48;
      oldServantIdList->m_Items[v13] = ServantLeaderInfo;
      if ( !servantIdList )
        goto LABEL_47;
      if ( v13 >= servantIdList->max_length )
        goto LABEL_48;
    }
    else
    {
      v28 = this->fields.oldServantIdList;
      if ( !v28 )
        goto LABEL_47;
      if ( v13 >= v28->max_length )
        goto LABEL_48;
      servantIdList = this->fields.servantIdList;
      v28->m_Items[v13] = 0LL;
      if ( !servantIdList )
        goto LABEL_47;
      if ( v13 >= servantIdList->max_length )
        goto LABEL_48;
      ServantLeaderInfo = 0LL;
    }
    servantIdList->m_Items[v13] = ServantLeaderInfo;
    ServantLeaderInfo = OtherUserGameEntity__getEquipSvtId(otherData, v13, displayType, deckId, 0LL);
    if ( (_DWORD)ServantLeaderInfo )
    {
      v29 = this->fields.userServantLeaderEntityList;
      if ( !v29 )
        goto LABEL_47;
      if ( v13 >= v29->max_length )
        goto LABEL_48;
      v30 = v29->m_Items[v13];
      EquipInfo = (System_Int32_array **)OtherUserGameEntity__getEquipInfo(otherData, v13, displayType, deckId, 0LL);
      if ( !v30 )
        goto LABEL_47;
      v30->fields.equipTarget1 = (struct EquipTargetInfo_o *)EquipInfo;
      sub_B16F98((BattleServantConfConponent_o *)&v30->fields.equipTarget1, EquipInfo, v32, v33, v34, v35, v36, v37);
      equipIdList = this->fields.equipIdList;
      oldEquipIdList = this->fields.oldEquipIdList;
      ServantLeaderInfo = OtherUserGameEntity__getEquipUserSvtId(otherData, v13, displayType, deckId, 0LL);
      if ( !oldEquipIdList )
        goto LABEL_47;
      if ( v13 >= oldEquipIdList->max_length )
        goto LABEL_48;
      oldEquipIdList->m_Items[v13] = ServantLeaderInfo;
      if ( !equipIdList )
        goto LABEL_47;
      if ( v13 >= equipIdList->max_length )
        goto LABEL_48;
    }
    else
    {
      v40 = this->fields.oldEquipIdList;
      if ( !v40 )
        goto LABEL_47;
      if ( v13 >= v40->max_length )
        goto LABEL_48;
      equipIdList = this->fields.equipIdList;
      v40->m_Items[v13] = 0LL;
      if ( !equipIdList )
        goto LABEL_47;
      if ( v13 >= equipIdList->max_length )
      {
LABEL_48:
        sub_B17100(ServantLeaderInfo, otherData, *(_QWORD *)&friendKind);
        sub_B170A0();
      }
      ServantLeaderInfo = 0LL;
    }
    v41 = &equipIdList->obj.klass + v13++;
    v41[4] = (Il2CppClass *)ServantLeaderInfo;
  }
  if ( friendKind == 3 )
    v43 = 4;
  else
    v43 = 5;
  this->fields.isFriendInfo = 1;
  this->fields.isSelectServant = isSelectServant;
  this->fields.kind = v43;
  this->fields.eventSetupInfo2 = eventSetupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo2,
    (System_Int32_array **)eventSetupInfo,
    *(System_String_array ***)&friendKind,
    (System_String_array **)isSelectServant,
    (System_Boolean_array **)eventSetupInfo,
    *(System_Int32_array ***)&displayType,
    *(System_Int32_array **)&deckId,
    (System_Int32_array *)method);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo,
    (System_Int32_array **)eventSetupInfo,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.questRestrictionInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v50, v51, v52, v53, v54, v55);
  if ( !otherData )
LABEL_47:
    sub_B170D4();
  this->fields.pushUserServantId = otherData->fields.pushUserSvtId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__Init_30858440(
        SupportServantData_o *this,
        FollowerInfo_o *followerInfo,
        int32_t friendKind,
        bool isSelectServant,
        EventUpValSetupInfo_o *eventSetupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t deckId,
        const MethodInfo *method)
{
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t ReturnTypeByQuestId; // w26
  unsigned __int64 v17; // x27
  __int64 i; // x22
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x20
  UserServantLeaderEntity_o *v20; // x23
  __int64 ServantLeaderInfo; // x0
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  int32_t IndexForSupport; // w28
  ServantLeaderInfo_o *v28; // x23
  __int64 v29; // x20
  __int64 v30; // x25
  struct UserServantLeaderEntity_array *v31; // x8
  UserServantLeaderEntity_o *v32; // x0
  struct System_Int64_array *servantIdList; // x20
  struct System_Int64_array *oldServantIdList; // x23
  struct System_Int64_array *v35; // x8
  struct UserServantLeaderEntity_array *v36; // x8
  UserServantLeaderEntity_o *v37; // x23
  System_Int32_array **EquipTarget1; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct System_Int64_array *equipIdList; // x20
  struct System_Int64_array *oldEquipIdList; // x23
  struct System_Int64_array *v47; // x8
  Il2CppClass **v48; // x8
  BalanceConfig_c *v49; // x0
  int32_t v50; // w8
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  int32_t v63; // [xsp+0h] [xbp-70h]
  bool v64; // [xsp+4h] [xbp-6Ch]
  struct EventUpValSetupInfo_o *v65; // [xsp+8h] [xbp-68h]
  struct QuestRestrictionInfo_o *v66; // [xsp+10h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_40FD29B & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, followerInfo);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B16FFC(&UserServantLeaderEntity_TypeInfo, v15);
    byte_40FD29B = 1;
  }
  v65 = eventSetupInfo;
  v66 = questRestrictionInfo;
  v63 = friendKind;
  v64 = isSelectServant;
  if ( questRestrictionInfo )
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
  else
    ReturnTypeByQuestId = 0;
  v17 = 0LL;
  for ( i = 32LL; ; i += 8LL )
  {
    v49 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v49 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v17 >= v49->static_fields->SupportDeckMemberMax )
      break;
    userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
    v20 = (UserServantLeaderEntity_o *)sub_B170CC(
                                         UserServantLeaderEntity_TypeInfo,
                                         followerInfo,
                                         *(_QWORD *)&friendKind,
                                         isSelectServant,
                                         eventSetupInfo);
    UserServantLeaderEntity___ctor(v20, 0LL);
    if ( !userServantLeaderEntityList )
      goto LABEL_54;
    if ( v20 )
    {
      ServantLeaderInfo = sub_B170BC(v20, userServantLeaderEntityList->obj.klass->_1.element_class);
      if ( !ServantLeaderInfo )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
    }
    if ( v17 >= userServantLeaderEntityList->max_length )
      goto LABEL_55;
    userServantLeaderEntityList->m_Items[v17] = v20;
    sub_B16F98(
      (BattleServantConfConponent_o *)((char *)userServantLeaderEntityList + i),
      (System_Int32_array **)v20,
      *(System_String_array ***)&friendKind,
      v22,
      v23,
      v24,
      v25,
      v26);
    if ( !followerInfo )
      goto LABEL_54;
    IndexForSupport = FollowerInfo__getIndexForSupport(followerInfo, v17, ReturnTypeByQuestId, deckId, 0LL);
    ServantLeaderInfo = (__int64)FollowerInfo__getServantLeaderInfo(
                                   followerInfo,
                                   IndexForSupport,
                                   ReturnTypeByQuestId,
                                   0LL);
    if ( !ServantLeaderInfo )
      goto LABEL_25;
    v28 = (ServantLeaderInfo_o *)ServantLeaderInfo;
    v29 = *(_QWORD *)(ServantLeaderInfo + 48);
    v30 = *(_QWORD *)(ServantLeaderInfo + 56);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v68.fields.currentCryptoKey = v29;
    *(_QWORD *)&v68.fields.fakeValue = v30;
    ServantLeaderInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v68, 0LL);
    if ( (_DWORD)ServantLeaderInfo )
    {
      v31 = this->fields.userServantLeaderEntityList;
      if ( !v31 )
        goto LABEL_54;
      if ( v17 >= v31->max_length )
        goto LABEL_55;
      v32 = v31->m_Items[v17];
      if ( !v32 )
        goto LABEL_54;
      UserServantLeaderEntity__setUserServantEntity_34310044(v32, v28, 0LL);
      servantIdList = this->fields.servantIdList;
      oldServantIdList = this->fields.oldServantIdList;
      ServantLeaderInfo = FollowerInfo__getUserSvtId(followerInfo, IndexForSupport, ReturnTypeByQuestId, 0LL);
      if ( !oldServantIdList )
        goto LABEL_54;
      if ( v17 >= oldServantIdList->max_length )
        goto LABEL_55;
      oldServantIdList->m_Items[v17] = ServantLeaderInfo;
      if ( !servantIdList )
        goto LABEL_54;
      if ( v17 >= servantIdList->max_length )
        goto LABEL_55;
    }
    else
    {
LABEL_25:
      v35 = this->fields.oldServantIdList;
      if ( !v35 )
        goto LABEL_54;
      if ( v17 >= v35->max_length )
        goto LABEL_55;
      servantIdList = this->fields.servantIdList;
      v35->m_Items[v17] = 0LL;
      if ( !servantIdList )
        goto LABEL_54;
      if ( v17 >= servantIdList->max_length )
        goto LABEL_55;
      ServantLeaderInfo = 0LL;
    }
    servantIdList->m_Items[v17] = ServantLeaderInfo;
    ServantLeaderInfo = FollowerInfo__getEquipSvtId(followerInfo, IndexForSupport, ReturnTypeByQuestId, 0LL);
    if ( (_DWORD)ServantLeaderInfo )
    {
      v36 = this->fields.userServantLeaderEntityList;
      if ( !v36 )
        goto LABEL_54;
      if ( v17 >= v36->max_length )
        goto LABEL_55;
      v37 = v36->m_Items[v17];
      EquipTarget1 = (System_Int32_array **)FollowerInfo__getEquipTarget1(
                                              followerInfo,
                                              IndexForSupport,
                                              ReturnTypeByQuestId,
                                              0LL);
      if ( !v37 )
        goto LABEL_54;
      v37->fields.equipTarget1 = (struct EquipTargetInfo_o *)EquipTarget1;
      sub_B16F98((BattleServantConfConponent_o *)&v37->fields.equipTarget1, EquipTarget1, v39, v40, v41, v42, v43, v44);
      equipIdList = this->fields.equipIdList;
      oldEquipIdList = this->fields.oldEquipIdList;
      ServantLeaderInfo = FollowerInfo__getEquipUserSvtId(followerInfo, IndexForSupport, ReturnTypeByQuestId, 0LL);
      if ( !oldEquipIdList )
        goto LABEL_54;
      if ( v17 >= oldEquipIdList->max_length )
        goto LABEL_55;
      oldEquipIdList->m_Items[v17] = ServantLeaderInfo;
      if ( !equipIdList )
        goto LABEL_54;
      if ( v17 >= equipIdList->max_length )
        goto LABEL_55;
    }
    else
    {
      v47 = this->fields.oldEquipIdList;
      if ( !v47 )
        goto LABEL_54;
      if ( v17 >= v47->max_length )
        goto LABEL_55;
      equipIdList = this->fields.equipIdList;
      v47->m_Items[v17] = 0LL;
      if ( !equipIdList )
        goto LABEL_54;
      if ( v17 >= equipIdList->max_length )
      {
LABEL_55:
        sub_B17100(ServantLeaderInfo, followerInfo, *(_QWORD *)&friendKind);
        sub_B170A0();
      }
      ServantLeaderInfo = 0LL;
    }
    v48 = &equipIdList->obj.klass + v17++;
    v48[4] = (Il2CppClass *)ServantLeaderInfo;
  }
  if ( v63 == 3 )
    v50 = 4;
  else
    v50 = 5;
  this->fields.isFriendInfo = 1;
  this->fields.isSelectServant = v64;
  this->fields.kind = v50;
  this->fields.eventSetupInfo2 = v65;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo2,
    (System_Int32_array **)v65,
    *(System_String_array ***)&friendKind,
    (System_String_array **)isSelectServant,
    (System_Boolean_array **)eventSetupInfo,
    (System_Int32_array **)questRestrictionInfo,
    *(System_Int32_array **)&deckId,
    (System_Int32_array *)method);
  this->fields.eventSetupInfo = v65;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo,
    (System_Int32_array **)v65,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  this->fields.questRestrictionInfo = v66;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)v66,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  if ( !followerInfo )
LABEL_54:
    sub_B170D4();
  this->fields.pushUserServantId = followerInfo->fields.pushUserSvtId;
}


bool __fastcall SupportServantData__IsChangeDeckName(SupportServantData_o *this, const MethodInfo *method)
{
  return System_String__op_Inequality(
           this->fields._oldDeckName_k__BackingField,
           this->fields._deckName_k__BackingField,
           0LL);
}


bool __fastcall SupportServantData__IsDefaultDeckName(SupportServantData_o *this, const MethodInfo *method)
{
  System_String_o *deckName_k__BackingField; // x19
  System_String_o *DefaultDeckName; // x1

  deckName_k__BackingField = this->fields._deckName_k__BackingField;
  DefaultDeckName = SupportServantData__getDefaultDeckName(this, method);
  return System_String__op_Equality(deckName_k__BackingField, DefaultDeckName, 0LL);
}


bool __fastcall SupportServantData__IsEmpty(SupportServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  return !SupportServantData__getServantSum(this, method) && SupportServantData__getEquipSum(this, v3) == 0;
}


void __fastcall SupportServantData__ResetDeckName(SupportServantData_o *this, const MethodInfo *method)
{
  struct System_String_o *DefaultDeckName; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  DefaultDeckName = SupportServantData__getDefaultDeckName(this, method);
  this->fields._deckName_k__BackingField = DefaultDeckName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._deckName_k__BackingField,
    (System_Int32_array **)DefaultDeckName,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void __fastcall SupportServantData__ResetOld(SupportServantData_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_String_o *deckName_k__BackingField; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 i; // x20
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *oldServantIdList; // x9
  struct System_Int64_array *equipIdList; // x8
  struct System_Int64_array *oldEquipIdList; // x9
  BalanceConfig_c *v17; // x0
  unsigned __int64 v18; // x22

  if ( (byte_40FD2A7 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    byte_40FD2A7 = 1;
  }
  deckName_k__BackingField = this->fields._deckName_k__BackingField;
  this->fields._oldDeckName_k__BackingField = deckName_k__BackingField;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._oldDeckName_k__BackingField,
    (System_Int32_array **)deckName_k__BackingField,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  for ( i = 4LL; ; ++i )
  {
    v17 = BalanceConfig_TypeInfo;
    v18 = i - 4;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v17 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v18 >= v17->static_fields->SupportDeckMemberMax )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      goto LABEL_18;
    if ( v18 >= servantIdList->max_length )
      goto LABEL_19;
    oldServantIdList = this->fields.oldServantIdList;
    if ( !oldServantIdList )
      goto LABEL_18;
    if ( v18 >= oldServantIdList->max_length )
      goto LABEL_19;
    *((_QWORD *)&oldServantIdList->obj.klass + i) = *((_QWORD *)&servantIdList->obj.klass + i);
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_18;
    if ( v18 >= equipIdList->max_length )
      goto LABEL_19;
    oldEquipIdList = this->fields.oldEquipIdList;
    if ( !oldEquipIdList )
LABEL_18:
      sub_B170D4();
    if ( v18 >= oldEquipIdList->max_length )
    {
LABEL_19:
      sub_B17100(v17, v10, v11);
      sub_B170A0();
    }
    *((_QWORD *)&oldEquipIdList->obj.klass + i) = *((_QWORD *)&equipIdList->obj.klass + i);
  }
}


void __fastcall SupportServantData__SetOld(
        SupportServantData_o *this,
        SupportServantData_o *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_String_o *oldDeckName_k__BackingField; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 i; // x21
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *oldServantIdList; // x9
  struct System_Int64_array *equipIdList; // x8
  struct System_Int64_array *oldEquipIdList; // x9
  BalanceConfig_c *v18; // x0
  unsigned __int64 v19; // x23

  if ( (byte_40FD2A8 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, data);
    byte_40FD2A8 = 1;
  }
  if ( !data )
LABEL_19:
    sub_B170D4();
  oldDeckName_k__BackingField = data->fields._oldDeckName_k__BackingField;
  this->fields._oldDeckName_k__BackingField = oldDeckName_k__BackingField;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._oldDeckName_k__BackingField,
    (System_Int32_array **)oldDeckName_k__BackingField,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  for ( i = 4LL; ; ++i )
  {
    v18 = BalanceConfig_TypeInfo;
    v19 = i - 4;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v18 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v19 >= v18->static_fields->SupportDeckMemberMax )
      break;
    servantIdList = data->fields.servantIdList;
    if ( !servantIdList )
      goto LABEL_19;
    if ( v19 >= servantIdList->max_length )
      goto LABEL_20;
    oldServantIdList = this->fields.oldServantIdList;
    if ( !oldServantIdList )
      goto LABEL_19;
    if ( v19 >= oldServantIdList->max_length )
      goto LABEL_20;
    *((_QWORD *)&oldServantIdList->obj.klass + i) = *((_QWORD *)&servantIdList->obj.klass + i);
    equipIdList = data->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_19;
    if ( v19 >= equipIdList->max_length )
      goto LABEL_20;
    oldEquipIdList = this->fields.oldEquipIdList;
    if ( !oldEquipIdList )
      goto LABEL_19;
    if ( v19 >= oldEquipIdList->max_length )
    {
LABEL_20:
      sub_B17100(v18, v11, v12);
      sub_B170A0();
    }
    *((_QWORD *)&oldEquipIdList->obj.klass + i) = *((_QWORD *)&equipIdList->obj.klass + i);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SupportServantData__getClassName(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  SupportServantData_o *v4; // x20
  struct System_String_array *className; // x8
  System_String_o *v6; // x19

  v4 = this;
  if ( (byte_40FD2A6 & 1) == 0 )
  {
    this = (SupportServantData_o *)sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&classPos);
    byte_40FD2A6 = 1;
  }
  className = v4->fields.className;
  if ( !className )
    sub_B170D4();
  if ( className->max_length <= classPos )
  {
    sub_B17100(this, *(_QWORD *)&classPos, method);
    sub_B170A0();
  }
  v6 = className->m_Items[classPos];
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get(v6, 0LL);
}


System_String_o *__fastcall SupportServantData__getDefaultDeckName(
        SupportServantData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *v5; // x20
  Il2CppObject *v6; // x0
  int32_t deckId_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FD299 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_12491, v4);
    byte_40FD299 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_12491, 0LL);
  deckId_k__BackingField = this->fields._deckId_k__BackingField;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &deckId_k__BackingField);
  return System_String__Format(v5, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SupportServantData__getEquip(SupportServantData_o *this, int32_t classPos, const MethodInfo *method)
{
  struct System_Int64_array *equipIdList; // x8

  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    sub_B170D4();
  if ( equipIdList->max_length <= classPos )
  {
    sub_B17100(this, *(_QWORD *)&classPos, method);
    sub_B170A0();
  }
  return equipIdList->m_Items[classPos];
}


int32_t __fastcall SupportServantData__getEquipSum(SupportServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  unsigned __int64 v4; // x21
  int32_t v5; // w20
  BalanceConfig_c *v6; // x0
  struct System_Int64_array *equipIdList; // x8

  if ( (byte_40FD2A0 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    byte_40FD2A0 = 1;
  }
  v4 = 0LL;
  v5 = 0;
  v6 = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v4 >= v6->static_fields->SupportDeckMemberMax )
      break;
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      sub_B170D4();
    if ( v4 >= equipIdList->max_length )
    {
      sub_B17100(v6, method, v2);
      sub_B170A0();
    }
    if ( equipIdList->m_Items[v4++] )
      ++v5;
  }
  return v5;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SupportServantData__getMember(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  UserServantLeaderEntity_o *v4; // x8

  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    sub_B170D4();
  if ( userServantLeaderEntityList->max_length <= classPos )
  {
    sub_B17100(this, *(_QWORD *)&classPos, method);
    sub_B170A0();
  }
  v4 = userServantLeaderEntityList->m_Items[classPos];
  if ( v4 )
    return v4->fields.userSvtId;
  else
    return 0LL;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SupportServantData__getOldEquip(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct System_Int64_array *oldEquipIdList; // x8

  oldEquipIdList = this->fields.oldEquipIdList;
  if ( !oldEquipIdList )
    sub_B170D4();
  if ( oldEquipIdList->max_length <= classPos )
  {
    sub_B17100(this, *(_QWORD *)&classPos, method);
    sub_B170A0();
  }
  return oldEquipIdList->m_Items[classPos];
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SupportServantData__getOldServant(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct System_Int64_array *oldServantIdList; // x8

  oldServantIdList = this->fields.oldServantIdList;
  if ( !oldServantIdList )
    sub_B170D4();
  if ( oldServantIdList->max_length <= classPos )
  {
    sub_B17100(this, *(_QWORD *)&classPos, method);
    sub_B170A0();
  }
  return oldServantIdList->m_Items[classPos];
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SupportServantData__getServant(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct System_Int64_array *servantIdList; // x8

  servantIdList = this->fields.servantIdList;
  if ( !servantIdList )
    sub_B170D4();
  if ( servantIdList->max_length <= classPos )
  {
    sub_B17100(this, *(_QWORD *)&classPos, method);
    sub_B170A0();
  }
  return servantIdList->m_Items[classPos];
}


int32_t __fastcall SupportServantData__getServantSum(SupportServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  unsigned __int64 v4; // x21
  int32_t v5; // w20
  BalanceConfig_c *v6; // x0
  struct System_Int64_array *servantIdList; // x8

  if ( (byte_40FD29F & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    byte_40FD29F = 1;
  }
  v4 = 0LL;
  v5 = 0;
  v6 = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v4 >= v6->static_fields->SupportDeckMemberMax )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      sub_B170D4();
    if ( v4 >= servantIdList->max_length )
    {
      sub_B17100(v6, method, v2);
      sub_B170A0();
    }
    if ( servantIdList->m_Items[v4++] )
      ++v5;
  }
  return v5;
}


// local variable allocation has failed, the output may be wrong!
UserServantLeaderEntity_o *__fastcall SupportServantData__getUserServantLeaderEntity(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8

  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    sub_B170D4();
  if ( userServantLeaderEntityList->max_length <= classPos )
  {
    sub_B17100(this, *(_QWORD *)&classPos, method);
    sub_B170A0();
  }
  return userServantLeaderEntityList->m_Items[classPos];
}


EventUpValSetupInfo_o *__fastcall SupportServantData__get_EventSetupInfo(
        SupportServantData_o *this,
        const MethodInfo *method)
{
  return this->fields.eventSetupInfo;
}


EventUpValSetupInfo_o *__fastcall SupportServantData__get_EventSetupInfo2(
        SupportServantData_o *this,
        const MethodInfo *method)
{
  return this->fields.eventSetupInfo2;
}


bool __fastcall SupportServantData__get_IsFriendInfo(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.isFriendInfo;
}


bool __fastcall SupportServantData__get_IsNoServant(SupportServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  il2cpp_array_size_t v4; // w21
  BalanceConfig_c *v5; // x0
  struct System_Int64_array *servantIdList; // x8
  __int64 v7; // x8

  if ( (byte_40FD2A5 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    byte_40FD2A5 = 1;
  }
  v4 = 0;
  v5 = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)v4 >= v5->static_fields->SupportDeckMemberMax )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      sub_B170D4();
    if ( v4 >= servantIdList->max_length )
    {
      sub_B17100(v5, method, v2);
      sub_B170A0();
    }
    v7 = servantIdList->m_Items[v4++];
    if ( v7 > 0 )
      return 0;
  }
  return 1;
}


bool __fastcall SupportServantData__get_IsSelectServant(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.isSelectServant;
}


int32_t __fastcall SupportServantData__get_Kind(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.kind;
}


int64_t __fastcall SupportServantData__get_PushUserServantId(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.pushUserServantId;
}


QuestRestrictionInfo_o *__fastcall SupportServantData__get_QuestRestriction(
        SupportServantData_o *this,
        const MethodInfo *method)
{
  return this->fields.questRestrictionInfo;
}


int32_t __fastcall SupportServantData__get_deckId(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields._deckId_k__BackingField;
}


System_String_o *__fastcall SupportServantData__get_deckName(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields._deckName_k__BackingField;
}


System_String_o *__fastcall SupportServantData__get_oldDeckName(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields._oldDeckName_k__BackingField;
}


bool __fastcall SupportServantData__isUseServant(
        SupportServantData_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  il2cpp_array_size_t v5; // w22
  BalanceConfig_c *v6; // x0
  struct System_Int64_array *servantIdList; // x8
  int64_t v8; // x8

  if ( (byte_40FD2A1 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, userSvtId);
    byte_40FD2A1 = 1;
  }
  v5 = 0;
  v6 = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)v5 >= v6->static_fields->SupportDeckMemberMax )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      sub_B170D4();
    if ( v5 >= servantIdList->max_length )
    {
      sub_B17100(v6, userSvtId, method);
      sub_B170A0();
    }
    v8 = servantIdList->m_Items[v5++];
    if ( v8 == userSvtId )
      return 1;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__removeEquipData(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  int32_t v3; // w19
  SupportServantData_o *v4; // x20
  __int64 v5; // x1
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  UserServantLeaderEntity_o *v7; // x8
  struct EquipTargetInfo_o *equipTarget1; // x22
  __int128 v9; // q1
  struct UserServantLeaderEntity_array *v10; // x8
  UserServantLeaderEntity_o *v11; // x8
  struct EquipTargetInfo_o *v12; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // kr00_16
  struct System_Int64_array *equipIdList; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-40h] BYREF

  v3 = classPos;
  v4 = this;
  if ( (byte_40FD29E & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&classPos);
    this = (SupportServantData_o *)sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_40FD29E = 1;
  }
  userServantLeaderEntityList = v4->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_21;
  if ( userServantLeaderEntityList->max_length <= v3 )
    goto LABEL_22;
  v7 = userServantLeaderEntityList->m_Items[v3];
  if ( !v7 )
    goto LABEL_21;
  equipTarget1 = v7->fields.equipTarget1;
  if ( !equipTarget1 )
    goto LABEL_18;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  this = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v15, 0LL, 0LL);
  v9 = *(_OWORD *)&v15.fields.currentCryptoKey;
  *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue = *(_OWORD *)&v15.fields.fakeValue;
  *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey = v9;
  v10 = v4->fields.userServantLeaderEntityList;
  if ( !v10 )
    goto LABEL_21;
  if ( v10->max_length <= v3 )
    goto LABEL_22;
  v11 = v10->m_Items[v3];
  if ( !v11 )
    goto LABEL_21;
  v12 = v11->fields.equipTarget1;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
  *(_QWORD *)&classPos = *(_QWORD *)&v13.fields.fakeValue;
  this = *(SupportServantData_o **)&v13.fields.currentCryptoKey;
  if ( !v12 )
LABEL_21:
    sub_B170D4();
  v12->fields.svtId = v13;
LABEL_18:
  equipIdList = v4->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_21;
  if ( equipIdList->max_length <= v3 )
  {
LABEL_22:
    sub_B17100(this, *(_QWORD *)&classPos, method);
    sub_B170A0();
  }
  equipIdList->m_Items[v3] = 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__removeServantData(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x9
  UserServantLeaderEntity_o *v4; // x9
  struct System_Int64_array *servantIdList; // x9
  struct UserServantLeaderEntity_array *v6; // x9
  UserServantLeaderEntity_o *v7; // x8

  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_10;
  if ( userServantLeaderEntityList->max_length <= classPos )
    goto LABEL_11;
  v4 = userServantLeaderEntityList->m_Items[classPos];
  if ( !v4 || (v4->fields.userSvtId = 0LL, (servantIdList = this->fields.servantIdList) == 0LL) )
LABEL_10:
    sub_B170D4();
  if ( servantIdList->max_length <= classPos )
    goto LABEL_11;
  servantIdList->m_Items[classPos] = 0LL;
  v6 = this->fields.userServantLeaderEntityList;
  if ( !v6 )
    goto LABEL_10;
  if ( v6->max_length <= classPos )
  {
LABEL_11:
    sub_B17100(this, *(_QWORD *)&classPos, method);
    sub_B170A0();
  }
  v7 = v6->m_Items[classPos];
  if ( !v7 )
    goto LABEL_10;
  v7->fields.svtId = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__setEquipData(
        SupportServantData_o *this,
        int32_t classPos,
        int64_t userSvtId,
        int32_t svtId,
        const MethodInfo *method)
{
  SupportServantData_o *v8; // x22
  __int64 v9; // x1
  __int64 v10; // x1
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  UserServantLeaderEntity_o *v12; // x23
  BattleServantConfConponent_o *p_equipTarget1; // x23
  struct EquipTargetInfo_o *equipTarget1; // t1
  EquipTargetInfo_o *v15; // x24
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UserServantLeaderEntity_o *v22; // x8
  struct EquipTargetInfo_o *v23; // x23
  __int128 v24; // q1
  struct System_Int64_array *equipIdList; // x8
  struct UserServantLeaderEntity_array *v26; // x8
  UserServantLeaderEntity_o *v27; // x8
  struct EquipTargetInfo_o *v28; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // kr00_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-60h]

  v8 = this;
  if ( (byte_40FD29D & 1) == 0 )
  {
    sub_B16FFC(&EquipTargetInfo_TypeInfo, *(_QWORD *)&classPos);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    this = (SupportServantData_o *)sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    byte_40FD29D = 1;
  }
  userServantLeaderEntityList = v8->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_26;
  if ( userServantLeaderEntityList->max_length <= classPos )
    goto LABEL_27;
  v12 = userServantLeaderEntityList->m_Items[classPos];
  if ( !v12 )
    goto LABEL_26;
  equipTarget1 = v12->fields.equipTarget1;
  p_equipTarget1 = (BattleServantConfConponent_o *)&v12->fields.equipTarget1;
  if ( !equipTarget1 )
  {
    v15 = (EquipTargetInfo_o *)sub_B170CC(
                                 EquipTargetInfo_TypeInfo,
                                 *(_QWORD *)&classPos,
                                 userSvtId,
                                 *(_QWORD *)&svtId,
                                 method);
    EquipTargetInfo___ctor(v15, 0LL);
    p_equipTarget1->klass = (BattleServantConfConponent_c *)v15;
    sub_B16F98(p_equipTarget1, (System_Int32_array **)v15, v16, v17, v18, v19, v20, v21);
    userServantLeaderEntityList = v8->fields.userServantLeaderEntityList;
    if ( !userServantLeaderEntityList )
      goto LABEL_26;
  }
  if ( userServantLeaderEntityList->max_length <= classPos )
  {
LABEL_27:
    sub_B17100(this, *(_QWORD *)&classPos, userSvtId);
    sub_B170A0();
  }
  v22 = userServantLeaderEntityList->m_Items[classPos];
  if ( !v22 )
    goto LABEL_26;
  v23 = v22->fields.equipTarget1;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  this = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v30, userSvtId, 0LL);
  v31 = v30;
  if ( !v23 )
    goto LABEL_26;
  v24 = *(_OWORD *)&v31.fields.currentCryptoKey;
  *(_OWORD *)&v23->fields.userSvtId.fields.fakeValue = *(_OWORD *)&v31.fields.fakeValue;
  *(_OWORD *)&v23->fields.userSvtId.fields.currentCryptoKey = v24;
  equipIdList = v8->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_26;
  if ( equipIdList->max_length <= classPos )
    goto LABEL_27;
  equipIdList->m_Items[classPos] = userSvtId;
  if ( (svtId & 0x80000000) != 0 )
    return;
  v26 = v8->fields.userServantLeaderEntityList;
  if ( !v26 )
LABEL_26:
    sub_B170D4();
  if ( v26->max_length <= classPos )
    goto LABEL_27;
  v27 = v26->m_Items[classPos];
  if ( !v27 )
    goto LABEL_26;
  v28 = v27->fields.equipTarget1;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  if ( !v28 )
    goto LABEL_26;
  v28->fields.svtId = v29;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__setServantData(
        SupportServantData_o *this,
        int32_t classPos,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v4; // x4
  SupportServantData_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x25
  Il2CppClass **v12; // x22
  BattleServantConfConponent_o *v13; // x22
  Il2CppClass *v14; // t1
  UserServantLeaderEntity_o *v15; // x23
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  WebViewManager_o *Instance; // x0
  struct UserServantLeaderEntity_array *v22; // x8
  UserServantLeaderEntity_o *v23; // x0
  __int128 v24; // q1
  struct System_Int64_array *servantIdList; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-60h]

  v7 = this;
  if ( (byte_40FD29C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, *(_QWORD *)&classPos);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    this = (SupportServantData_o *)sub_B16FFC(&UserServantLeaderEntity_TypeInfo, v10);
    byte_40FD29C = 1;
  }
  userServantLeaderEntityList = v7->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_21;
  if ( userServantLeaderEntityList->max_length <= classPos )
    goto LABEL_22;
  v12 = &userServantLeaderEntityList->obj.klass + classPos;
  v14 = v12[4];
  v13 = (BattleServantConfConponent_o *)(v12 + 4);
  if ( !v14 )
  {
    v15 = (UserServantLeaderEntity_o *)sub_B170CC(
                                         UserServantLeaderEntity_TypeInfo,
                                         *(_QWORD *)&classPos,
                                         entity,
                                         method,
                                         v4);
    UserServantLeaderEntity___ctor(v15, 0LL);
    if ( v15 )
    {
      this = (SupportServantData_o *)sub_B170BC(v15, userServantLeaderEntityList->obj.klass->_1.element_class);
      if ( !this )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
    }
    if ( userServantLeaderEntityList->max_length <= classPos )
    {
LABEL_22:
      sub_B17100(this, *(_QWORD *)&classPos, entity);
      sub_B170A0();
    }
    v13->klass = (BattleServantConfConponent_c *)v15;
    sub_B16F98(v13, (System_Int32_array **)v15, (System_String_array **)entity, v16, v17, v18, v19, v20);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  this = (SupportServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  v22 = v7->fields.userServantLeaderEntityList;
  if ( !v22 )
    goto LABEL_21;
  if ( v22->max_length <= classPos )
    goto LABEL_22;
  v23 = v22->m_Items[classPos];
  if ( !v23 )
    goto LABEL_21;
  UserServantLeaderEntity__setUserServantEntity(v23, entity, classPos, v7->fields._deckId_k__BackingField, 0LL);
  if ( !entity )
    goto LABEL_21;
  v24 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
  servantIdList = v7->fields.servantIdList;
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v27.fields.fakeValue = v24;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v26 = v27;
  this = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v26, 0LL);
  if ( !servantIdList )
LABEL_21:
    sub_B170D4();
  if ( servantIdList->max_length <= classPos )
    goto LABEL_22;
  servantIdList->m_Items[classPos] = (int64_t)this;
}


void __fastcall SupportServantData__set_EventSetupInfo(
        SupportServantData_o *this,
        EventUpValSetupInfo_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.eventSetupInfo = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SupportServantData__set_PushUserServantId(
        SupportServantData_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields.pushUserServantId = value;
}


void __fastcall SupportServantData__set_deckId(SupportServantData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._deckId_k__BackingField = value;
}


void __fastcall SupportServantData__set_deckName(
        SupportServantData_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._deckName_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._deckName_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SupportServantData__set_oldDeckName(
        SupportServantData_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._oldDeckName_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._oldDeckName_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SupportServantData__updateCheck(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  int32_t v3; // w20
  SupportServantData_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *oldServantIdList; // x9
  struct System_Int64_array *equipIdList; // x10
  struct System_Int64_array *oldEquipIdList; // x11
  __int64 v15; // x0
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array *v21; // x20
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x21
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x21
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct System_Int64_array *v44; // x8
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x21
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct System_Int64_array *v56; // x8
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x19
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  int32_t deckId_k__BackingField; // [xsp+8h] [xbp-18h] BYREF
  unsigned int v69; // [xsp+Ch] [xbp-14h] BYREF

  v3 = classPos;
  v4 = this;
  v69 = classPos;
  if ( (byte_40FD2A3 & 1) == 0 )
  {
    sub_B16FFC(&string___TypeInfo, *(_QWORD *)&classPos);
    sub_B16FFC(&StringLiteral_739, v5);
    sub_B16FFC(&StringLiteral_23602, v6);
    sub_B16FFC(&StringLiteral_735, v7);
    sub_B16FFC(&StringLiteral_738, v8);
    this = (SupportServantData_o *)sub_B16FFC(&StringLiteral_23384, v9);
    byte_40FD2A3 = 1;
  }
  deckId_k__BackingField = 0;
  servantIdList = v4->fields.servantIdList;
  if ( !servantIdList )
    goto LABEL_58;
  if ( servantIdList->max_length <= v3 )
    goto LABEL_57;
  oldServantIdList = v4->fields.oldServantIdList;
  if ( !oldServantIdList )
    goto LABEL_58;
  if ( oldServantIdList->max_length <= v3 )
    goto LABEL_57;
  equipIdList = v4->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_58;
  if ( equipIdList->max_length <= v3 )
    goto LABEL_57;
  oldEquipIdList = v4->fields.oldEquipIdList;
  if ( !oldEquipIdList )
    goto LABEL_58;
  if ( oldEquipIdList->max_length <= v3 )
    goto LABEL_57;
  if ( servantIdList->m_Items[v3] == oldServantIdList->m_Items[v3]
    && equipIdList->m_Items[v3] == oldEquipIdList->m_Items[v3] )
  {
    return 0LL;
  }
  v15 = sub_B17014(string___TypeInfo, 9LL, method);
  if ( !v15 )
    goto LABEL_58;
  v21 = (System_String_array *)v15;
  this = (SupportServantData_o *)StringLiteral_23384;
  if ( StringLiteral_23384 )
  {
    this = (SupportServantData_o *)sub_B170BC(StringLiteral_23384, v21->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_59;
    *(_QWORD *)&classPos = StringLiteral_23384;
  }
  else
  {
    *(_QWORD *)&classPos = 0LL;
  }
  if ( !v21->max_length )
    goto LABEL_57;
  v21->m_Items[0] = *(System_String_o **)&classPos;
  sub_B16F98(
    (BattleServantConfConponent_o *)v21->m_Items,
    *(System_Int32_array ***)&classPos,
    (System_String_array **)method,
    v16,
    v17,
    v18,
    v19,
    v20);
  deckId_k__BackingField = v4->fields._deckId_k__BackingField;
  this = (SupportServantData_o *)System_Int32__ToString((int32_t)&deckId_k__BackingField, 0LL);
  v27 = (System_Int32_array **)this;
  if ( this )
  {
    this = (SupportServantData_o *)sub_B170BC(this, v21->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_59;
  }
  if ( v21->max_length <= 1 )
    goto LABEL_57;
  v21->m_Items[1] = (System_String_o *)v27;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v21->m_Items[1],
    v27,
    (System_String_array **)method,
    v22,
    v23,
    v24,
    v25,
    v26);
  this = (SupportServantData_o *)StringLiteral_735;
  if ( StringLiteral_735 )
  {
    this = (SupportServantData_o *)sub_B170BC(StringLiteral_735, v21->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_59;
    *(_QWORD *)&classPos = StringLiteral_735;
  }
  else
  {
    *(_QWORD *)&classPos = 0LL;
  }
  if ( v21->max_length <= 2 )
    goto LABEL_57;
  v21->m_Items[2] = *(System_String_o **)&classPos;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v21->m_Items[2],
    *(System_Int32_array ***)&classPos,
    (System_String_array **)method,
    v28,
    v29,
    v30,
    v31,
    v32);
  this = (SupportServantData_o *)System_Int32__ToString((int32_t)&v69, 0LL);
  v38 = (System_Int32_array **)this;
  if ( this )
  {
    this = (SupportServantData_o *)sub_B170BC(this, v21->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_59:
      sub_B170F4(this);
      sub_B170A0();
    }
  }
  if ( v21->max_length <= 3 )
    goto LABEL_57;
  v21->m_Items[3] = (System_String_o *)v38;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v21->m_Items[3],
    v38,
    (System_String_array **)method,
    v33,
    v34,
    v35,
    v36,
    v37);
  this = (SupportServantData_o *)StringLiteral_739;
  if ( StringLiteral_739 )
  {
    this = (SupportServantData_o *)sub_B170BC(StringLiteral_739, v21->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_59;
    *(_QWORD *)&classPos = StringLiteral_739;
  }
  else
  {
    *(_QWORD *)&classPos = 0LL;
  }
  if ( v21->max_length <= 4 )
    goto LABEL_57;
  v21->m_Items[4] = *(System_String_o **)&classPos;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v21->m_Items[4],
    *(System_Int32_array ***)&classPos,
    (System_String_array **)method,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = v4->fields.servantIdList;
  if ( !v44 )
    goto LABEL_58;
  if ( v69 >= v44->max_length )
    goto LABEL_57;
  this = (SupportServantData_o *)System_Int64__ToString((int64_t)&v44->m_Items[v69], 0LL);
  v50 = (System_Int32_array **)this;
  if ( this )
  {
    this = (SupportServantData_o *)sub_B170BC(this, v21->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_59;
  }
  if ( v21->max_length <= 5 )
    goto LABEL_57;
  v21->m_Items[5] = (System_String_o *)v50;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v21->m_Items[5],
    v50,
    (System_String_array **)method,
    v45,
    v46,
    v47,
    v48,
    v49);
  this = (SupportServantData_o *)StringLiteral_738;
  if ( StringLiteral_738 )
  {
    this = (SupportServantData_o *)sub_B170BC(StringLiteral_738, v21->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_59;
    *(_QWORD *)&classPos = StringLiteral_738;
  }
  else
  {
    *(_QWORD *)&classPos = 0LL;
  }
  if ( v21->max_length <= 6 )
    goto LABEL_57;
  v21->m_Items[6] = *(System_String_o **)&classPos;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v21->m_Items[6],
    *(System_Int32_array ***)&classPos,
    (System_String_array **)method,
    v51,
    v52,
    v53,
    v54,
    v55);
  v56 = v4->fields.equipIdList;
  if ( !v56 )
LABEL_58:
    sub_B170D4();
  if ( v69 >= v56->max_length )
    goto LABEL_57;
  this = (SupportServantData_o *)System_Int64__ToString((int64_t)&v56->m_Items[v69], 0LL);
  v62 = (System_Int32_array **)this;
  if ( this )
  {
    this = (SupportServantData_o *)sub_B170BC(this, v21->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_59;
  }
  if ( v21->max_length <= 7 )
    goto LABEL_57;
  v21->m_Items[7] = (System_String_o *)v62;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v21->m_Items[7],
    v62,
    (System_String_array **)method,
    v57,
    v58,
    v59,
    v60,
    v61);
  this = (SupportServantData_o *)StringLiteral_23602;
  if ( StringLiteral_23602 )
  {
    this = (SupportServantData_o *)sub_B170BC(StringLiteral_23602, v21->obj.klass->_1.element_class);
    if ( this )
    {
      *(_QWORD *)&classPos = StringLiteral_23602;
      goto LABEL_55;
    }
    goto LABEL_59;
  }
  *(_QWORD *)&classPos = 0LL;
LABEL_55:
  if ( v21->max_length <= 8 )
  {
LABEL_57:
    sub_B17100(this, *(_QWORD *)&classPos, method);
    sub_B170A0();
  }
  v21->m_Items[8] = *(System_String_o **)&classPos;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v21->m_Items[8],
    *(System_Int32_array ***)&classPos,
    (System_String_array **)method,
    v63,
    v64,
    v65,
    v66,
    v67);
  return System_String__Concat_43823856(v21, 0LL);
}


System_String_o *__fastcall SupportServantData__updateNameCheck(SupportServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  bool v7; // w8
  System_String_o *result; // x0
  __int64 v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array *v16; // x19
  System_String_o *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x21
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **deckName_k__BackingField; // x20
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  int32_t deckId_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FD2A4 & 1) == 0 )
  {
    sub_B16FFC(&string___TypeInfo, method);
    sub_B16FFC(&StringLiteral_23384, v3);
    sub_B16FFC(&StringLiteral_736, v4);
    sub_B16FFC(&StringLiteral_311, v5);
    byte_40FD2A4 = 1;
  }
  deckId_k__BackingField = 0;
  v7 = System_String__op_Inequality(
         this->fields._deckName_k__BackingField,
         this->fields._oldDeckName_k__BackingField,
         0LL);
  result = 0LL;
  if ( v7 )
  {
    v9 = sub_B17014(string___TypeInfo, 5LL, v6);
    if ( !v9 )
      sub_B170D4();
    v16 = (System_String_array *)v9;
    v17 = (System_String_o *)StringLiteral_23384;
    if ( StringLiteral_23384 )
    {
      v17 = (System_String_o *)sub_B170BC(StringLiteral_23384, v16->obj.klass->_1.element_class);
      if ( !v17 )
        goto LABEL_29;
      v18 = (System_Int32_array **)StringLiteral_23384;
    }
    else
    {
      v18 = 0LL;
    }
    if ( !v16->max_length )
      goto LABEL_28;
    v16->m_Items[0] = (System_String_o *)v18;
    sub_B16F98((BattleServantConfConponent_o *)v16->m_Items, v18, v10, v11, v12, v13, v14, v15);
    deckId_k__BackingField = this->fields._deckId_k__BackingField;
    v17 = System_Int32__ToString((int32_t)&deckId_k__BackingField, 0LL);
    v24 = (System_Int32_array **)v17;
    if ( !v17 || (v17 = (System_String_o *)sub_B170BC(v17, v16->obj.klass->_1.element_class)) != 0LL )
    {
      if ( v16->max_length <= 1 )
        goto LABEL_28;
      v16->m_Items[1] = (System_String_o *)v24;
      sub_B16F98((BattleServantConfConponent_o *)&v16->m_Items[1], v24, v10, v19, v20, v21, v22, v23);
      v17 = (System_String_o *)StringLiteral_736;
      if ( StringLiteral_736 )
      {
        v17 = (System_String_o *)sub_B170BC(StringLiteral_736, v16->obj.klass->_1.element_class);
        if ( !v17 )
          goto LABEL_29;
        v18 = (System_Int32_array **)StringLiteral_736;
      }
      else
      {
        v18 = 0LL;
      }
      if ( v16->max_length <= 2 )
        goto LABEL_28;
      v16->m_Items[2] = (System_String_o *)v18;
      sub_B16F98((BattleServantConfConponent_o *)&v16->m_Items[2], v18, v10, v25, v26, v27, v28, v29);
      deckName_k__BackingField = (System_Int32_array **)this->fields._deckName_k__BackingField;
      if ( !deckName_k__BackingField
        || (v17 = (System_String_o *)sub_B170BC(deckName_k__BackingField, v16->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v16->max_length <= 3 )
          goto LABEL_28;
        v16->m_Items[3] = (System_String_o *)deckName_k__BackingField;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v16->m_Items[3],
          deckName_k__BackingField,
          v10,
          v30,
          v31,
          v32,
          v33,
          v34);
        v17 = (System_String_o *)StringLiteral_311;
        if ( !StringLiteral_311 )
        {
          v18 = 0LL;
LABEL_25:
          if ( v16->max_length > 4 )
          {
            v16->m_Items[4] = (System_String_o *)v18;
            sub_B16F98((BattleServantConfConponent_o *)&v16->m_Items[4], v18, v10, v36, v37, v38, v39, v40);
            return System_String__Concat_43823856(v16, 0LL);
          }
LABEL_28:
          sub_B17100(v17, v18, v10);
          sub_B170A0();
        }
        v17 = (System_String_o *)sub_B170BC(StringLiteral_311, v16->obj.klass->_1.element_class);
        if ( v17 )
        {
          v18 = (System_Int32_array **)StringLiteral_311;
          goto LABEL_25;
        }
      }
    }
LABEL_29:
    sub_B170F4(v17);
    sub_B170A0();
  }
  return result;
}


void __fastcall SupportServantData_FollowerData___ctor(
        SupportServantData_FollowerData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}