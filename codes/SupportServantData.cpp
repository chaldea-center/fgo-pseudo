void __fastcall SupportServantData___ctor(SupportServantData_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UserServantLeaderEntity_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_Int64_array *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct System_Int64_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_Int64_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct System_Int64_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x0
  __int64 v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct System_String_array *v47; // x20
  __int64 v48; // x0
  System_Int32_array **v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x1
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x1
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x1
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x1
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Int32_array **v98; // x1
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Int32_array **v105; // x1
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  __int64 v112; // x0
  __int64 v113; // x0

  if ( (byte_42B3890 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&long___TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&UserServantLeaderEntity___TypeInfo);
    sub_B52984(&StringLiteral_12584/*"SUPPORT_KIND_4"*/);
    sub_B52984(&StringLiteral_12587/*"SUPPORT_KIND_7"*/);
    sub_B52984(&StringLiteral_12582/*"SUPPORT_KIND_2"*/);
    sub_B52984(&StringLiteral_12585/*"SUPPORT_KIND_5"*/);
    sub_B52984(&StringLiteral_12588/*"SUPPORT_KIND_8"*/);
    sub_B52984(&StringLiteral_12583/*"SUPPORT_KIND_3"*/);
    sub_B52984(&StringLiteral_12581/*"SUPPORT_KIND_1"*/);
    sub_B52984(&StringLiteral_12580/*"SUPPORT_KIND_0"*/);
    sub_B52984(&StringLiteral_12586/*"SUPPORT_KIND_6"*/);
    byte_42B3890 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UserServantLeaderEntity_array *)sub_B5299C(
                                                 UserServantLeaderEntity___TypeInfo,
                                                 (unsigned int)v3->static_fields->SupportDeckMemberMax);
  this->fields.userServantLeaderEntityList = v4;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct System_Int64_array *)sub_B5299C(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.servantIdList = v11;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.servantIdList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (struct System_Int64_array *)sub_B5299C(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.oldServantIdList = v18;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.oldServantIdList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (struct System_Int64_array *)sub_B5299C(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.equipIdList = v25;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.equipIdList,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (struct System_Int64_array *)sub_B5299C(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.oldEquipIdList = v32;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.oldEquipIdList,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = sub_B5299C(string___TypeInfo, 9LL);
  if ( !v39 )
    sub_B52A5C(0LL, v40);
  v47 = (struct System_String_array *)v39;
  v48 = StringLiteral_12580/*"SUPPORT_KIND_0"*/;
  if ( StringLiteral_12580/*"SUPPORT_KIND_0"*/ )
  {
    v48 = sub_B52A44(StringLiteral_12580/*"SUPPORT_KIND_0"*/, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_54;
    v49 = (System_Int32_array **)StringLiteral_12580/*"SUPPORT_KIND_0"*/;
  }
  else
  {
    v49 = 0LL;
  }
  if ( !v47->max_length )
    goto LABEL_53;
  v47->m_Items[0] = (System_String_o *)v49;
  sub_B52920((BattleServantConfConponent_o *)v47->m_Items, v49, v41, v42, v43, v44, v45, v46);
  v48 = StringLiteral_12581/*"SUPPORT_KIND_1"*/;
  if ( StringLiteral_12581/*"SUPPORT_KIND_1"*/ )
  {
    v48 = sub_B52A44(StringLiteral_12581/*"SUPPORT_KIND_1"*/, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_54;
    v56 = (System_Int32_array **)StringLiteral_12581/*"SUPPORT_KIND_1"*/;
  }
  else
  {
    v56 = 0LL;
  }
  if ( v47->max_length <= 1 )
    goto LABEL_53;
  v47->m_Items[1] = (System_String_o *)v56;
  sub_B52920((BattleServantConfConponent_o *)&v47->m_Items[1], v56, v50, v51, v52, v53, v54, v55);
  v48 = StringLiteral_12582/*"SUPPORT_KIND_2"*/;
  if ( StringLiteral_12582/*"SUPPORT_KIND_2"*/ )
  {
    v48 = sub_B52A44(StringLiteral_12582/*"SUPPORT_KIND_2"*/, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_54;
    v63 = (System_Int32_array **)StringLiteral_12582/*"SUPPORT_KIND_2"*/;
  }
  else
  {
    v63 = 0LL;
  }
  if ( v47->max_length <= 2 )
    goto LABEL_53;
  v47->m_Items[2] = (System_String_o *)v63;
  sub_B52920((BattleServantConfConponent_o *)&v47->m_Items[2], v63, v57, v58, v59, v60, v61, v62);
  v48 = StringLiteral_12583/*"SUPPORT_KIND_3"*/;
  if ( StringLiteral_12583/*"SUPPORT_KIND_3"*/ )
  {
    v48 = sub_B52A44(StringLiteral_12583/*"SUPPORT_KIND_3"*/, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_54;
    v70 = (System_Int32_array **)StringLiteral_12583/*"SUPPORT_KIND_3"*/;
  }
  else
  {
    v70 = 0LL;
  }
  if ( v47->max_length <= 3 )
    goto LABEL_53;
  v47->m_Items[3] = (System_String_o *)v70;
  sub_B52920((BattleServantConfConponent_o *)&v47->m_Items[3], v70, v64, v65, v66, v67, v68, v69);
  v48 = StringLiteral_12584/*"SUPPORT_KIND_4"*/;
  if ( StringLiteral_12584/*"SUPPORT_KIND_4"*/ )
  {
    v48 = sub_B52A44(StringLiteral_12584/*"SUPPORT_KIND_4"*/, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_54;
    v77 = (System_Int32_array **)StringLiteral_12584/*"SUPPORT_KIND_4"*/;
  }
  else
  {
    v77 = 0LL;
  }
  if ( v47->max_length <= 4 )
    goto LABEL_53;
  v47->m_Items[4] = (System_String_o *)v77;
  sub_B52920((BattleServantConfConponent_o *)&v47->m_Items[4], v77, v71, v72, v73, v74, v75, v76);
  v48 = StringLiteral_12585/*"SUPPORT_KIND_5"*/;
  if ( StringLiteral_12585/*"SUPPORT_KIND_5"*/ )
  {
    v48 = sub_B52A44(StringLiteral_12585/*"SUPPORT_KIND_5"*/, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_54;
    v84 = (System_Int32_array **)StringLiteral_12585/*"SUPPORT_KIND_5"*/;
  }
  else
  {
    v84 = 0LL;
  }
  if ( v47->max_length <= 5 )
    goto LABEL_53;
  v47->m_Items[5] = (System_String_o *)v84;
  sub_B52920((BattleServantConfConponent_o *)&v47->m_Items[5], v84, v78, v79, v80, v81, v82, v83);
  v48 = StringLiteral_12586/*"SUPPORT_KIND_6"*/;
  if ( StringLiteral_12586/*"SUPPORT_KIND_6"*/ )
  {
    v48 = sub_B52A44(StringLiteral_12586/*"SUPPORT_KIND_6"*/, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_54;
    v91 = (System_Int32_array **)StringLiteral_12586/*"SUPPORT_KIND_6"*/;
  }
  else
  {
    v91 = 0LL;
  }
  if ( v47->max_length <= 6 )
    goto LABEL_53;
  v47->m_Items[6] = (System_String_o *)v91;
  sub_B52920((BattleServantConfConponent_o *)&v47->m_Items[6], v91, v85, v86, v87, v88, v89, v90);
  v48 = StringLiteral_12587/*"SUPPORT_KIND_7"*/;
  if ( StringLiteral_12587/*"SUPPORT_KIND_7"*/ )
  {
    v48 = sub_B52A44(StringLiteral_12587/*"SUPPORT_KIND_7"*/, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_54;
    v98 = (System_Int32_array **)StringLiteral_12587/*"SUPPORT_KIND_7"*/;
  }
  else
  {
    v98 = 0LL;
  }
  if ( v47->max_length <= 7 )
    goto LABEL_53;
  v47->m_Items[7] = (System_String_o *)v98;
  sub_B52920((BattleServantConfConponent_o *)&v47->m_Items[7], v98, v92, v93, v94, v95, v96, v97);
  v48 = StringLiteral_12588/*"SUPPORT_KIND_8"*/;
  if ( StringLiteral_12588/*"SUPPORT_KIND_8"*/ )
  {
    v48 = sub_B52A44(StringLiteral_12588/*"SUPPORT_KIND_8"*/, v47->obj.klass->_1.element_class);
    if ( v48 )
    {
      v105 = (System_Int32_array **)StringLiteral_12588/*"SUPPORT_KIND_8"*/;
      goto LABEL_51;
    }
LABEL_54:
    v113 = sub_B52A7C(v48);
    sub_B52A28(v113, 0LL);
  }
  v105 = 0LL;
LABEL_51:
  if ( v47->max_length <= 8 )
  {
LABEL_53:
    v112 = sub_B52A88(v48);
    sub_B52A28(v112, 0LL);
  }
  v47->m_Items[8] = (System_String_o *)v105;
  sub_B52920((BattleServantConfConponent_o *)&v47->m_Items[8], v105, v99, v100, v101, v102, v103, v104);
  this->fields.className = v47;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.className,
    (System_Int32_array **)v47,
    v106,
    v107,
    v108,
    v109,
    v110,
    v111);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SupportServantData__CopyData(
        SupportServantData_o *this,
        SupportServantData_o *data,
        bool isInit,
        const MethodInfo *method)
{
  SupportServantData_o *v6; // x20
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  System_Int32_array **v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct UserServantLeaderEntity_array *v15; // x8
  __int64 v16; // x25
  __int64 v17; // x26
  unsigned __int64 max_length; // x9
  unsigned __int64 v19; // x28
  unsigned int *v20; // x21
  UserServantLeaderEntity_o *v21; // x24
  UserServantLeaderEntity_o *v22; // x23
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  Il2CppObject *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  Il2CppObject *v36; // x22
  System_Int32_array **v37; // x1
  Il2CppObject *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  Il2CppObject *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x1
  Il2CppObject *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **eventSetupInfo; // x1
  System_Int32_array **eventSetupInfo2; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **questRestrictionInfo; // x1
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **deckName_k__BackingField; // x1
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **oldDeckName_k__BackingField; // x1
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  __int64 v97; // x0
  __int64 v98; // x0
  bool v99; // [xsp+Ch] [xbp-54h]

  v6 = this;
  if ( (byte_42B38A2 & 1) == 0 )
  {
    sub_B52984(&long___TypeInfo);
    sub_B52984(&UserServantLeaderEntity___TypeInfo);
    this = (SupportServantData_o *)sub_B52984(&UserServantLeaderEntity_TypeInfo);
    byte_42B38A2 = 1;
  }
  if ( !data )
    goto LABEL_14;
  userServantLeaderEntityList = data->fields.userServantLeaderEntityList;
  v99 = isInit;
  if ( !userServantLeaderEntityList )
    goto LABEL_14;
  v8 = (System_Int32_array **)sub_B5299C(UserServantLeaderEntity___TypeInfo, userServantLeaderEntityList->max_length);
  v6->fields.userServantLeaderEntityList = (struct UserServantLeaderEntity_array *)v8;
  sub_B52920((BattleServantConfConponent_o *)&v6->fields, v8, v9, v10, v11, v12, v13, v14);
  v15 = data->fields.userServantLeaderEntityList;
  if ( !v15 )
    goto LABEL_14;
  v16 = 4LL;
  v17 = 8LL;
  while ( 1 )
  {
    max_length = v15->max_length;
    v19 = v16 - 4;
    if ( v16 - 4 >= (int)max_length )
      break;
    if ( v19 >= max_length )
      goto LABEL_38;
    v20 = (unsigned int *)v6->fields.userServantLeaderEntityList;
    v21 = (UserServantLeaderEntity_o *)*((_QWORD *)&v15->obj.klass + v16);
    v22 = (UserServantLeaderEntity_o *)sub_B52A54(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor_35286196(v22, v21, 0LL);
    if ( v20 )
    {
      if ( v22 )
      {
        this = (SupportServantData_o *)sub_B52A44(v22, *(_QWORD *)(*(_QWORD *)v20 + 64LL));
        if ( !this )
        {
          v98 = sub_B52A7C(0LL);
          sub_B52A28(v98, 0LL);
        }
      }
      if ( v19 >= v20[6] )
      {
LABEL_38:
        v97 = sub_B52A88(this);
        sub_B52A28(v97, 0LL);
      }
      *(_QWORD *)&v20[2 * v16] = v22;
      sub_B52920((BattleServantConfConponent_o *)&v20[v17], (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
      v15 = data->fields.userServantLeaderEntityList;
      ++v16;
      v17 += 2LL;
      if ( v15 )
        continue;
    }
    goto LABEL_14;
  }
  this = (SupportServantData_o *)data->fields.servantIdList;
  if ( !this )
    goto LABEL_14;
  v29 = System_Array__Clone((System_Array_o *)this, 0LL);
  if ( v29 )
  {
    v36 = v29;
    v37 = (System_Int32_array **)sub_B52A44(v29, long___TypeInfo);
    if ( !v37 )
    {
LABEL_33:
      sub_B52D50(v36);
      goto LABEL_34;
    }
  }
  else
  {
    v37 = 0LL;
  }
  v6->fields.servantIdList = (struct System_Int64_array *)v37;
  sub_B52920((BattleServantConfConponent_o *)&v6->fields.servantIdList, v37, v30, v31, v32, v33, v34, v35);
  this = (SupportServantData_o *)data->fields.oldServantIdList;
  if ( !this )
    goto LABEL_14;
  v38 = System_Array__Clone((System_Array_o *)this, 0LL);
  if ( v38 )
  {
    v36 = v38;
    v45 = (System_Int32_array **)sub_B52A44(v38, long___TypeInfo);
    if ( !v45 )
      goto LABEL_33;
  }
  else
  {
    v45 = 0LL;
  }
  v6->fields.oldServantIdList = (struct System_Int64_array *)v45;
  sub_B52920((BattleServantConfConponent_o *)&v6->fields.oldServantIdList, v45, v39, v40, v41, v42, v43, v44);
  this = (SupportServantData_o *)data->fields.equipIdList;
  if ( !this )
    goto LABEL_14;
  v46 = System_Array__Clone((System_Array_o *)this, 0LL);
  if ( v46 )
  {
    v36 = v46;
    v53 = (System_Int32_array **)sub_B52A44(v46, long___TypeInfo);
    if ( !v53 )
      goto LABEL_33;
  }
  else
  {
    v53 = 0LL;
  }
  v6->fields.equipIdList = (struct System_Int64_array *)v53;
  sub_B52920((BattleServantConfConponent_o *)&v6->fields.equipIdList, v53, v47, v48, v49, v50, v51, v52);
  this = (SupportServantData_o *)data->fields.oldEquipIdList;
  if ( !this )
LABEL_14:
    sub_B52A5C(this, data);
  v54 = System_Array__Clone((System_Array_o *)this, 0LL);
  if ( v54 )
  {
    v36 = v54;
    v61 = (System_Int32_array **)sub_B52A44(v54, long___TypeInfo);
    if ( v61 )
      goto LABEL_35;
    goto LABEL_33;
  }
LABEL_34:
  v61 = 0LL;
LABEL_35:
  v6->fields.oldEquipIdList = (struct System_Int64_array *)v61;
  sub_B52920((BattleServantConfConponent_o *)&v6->fields.oldEquipIdList, v61, v55, v56, v57, v58, v59, v60);
  if ( v99 )
  {
    v6->fields.isFriendInfo = data->fields.isFriendInfo;
    v6->fields.kind = data->fields.kind;
    v6->fields.isSelectServant = data->fields.isSelectServant;
    eventSetupInfo = (System_Int32_array **)data->fields.eventSetupInfo;
    v6->fields.eventSetupInfo = (struct EventUpValSetupInfo_o *)eventSetupInfo;
    sub_B52920((BattleServantConfConponent_o *)&v6->fields.eventSetupInfo, eventSetupInfo, v62, v63, v64, v65, v66, v67);
    eventSetupInfo2 = (System_Int32_array **)data->fields.eventSetupInfo2;
    v6->fields.eventSetupInfo2 = (struct EventUpValSetupInfo_o *)eventSetupInfo2;
    sub_B52920(
      (BattleServantConfConponent_o *)&v6->fields.eventSetupInfo2,
      eventSetupInfo2,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75);
    questRestrictionInfo = (System_Int32_array **)data->fields.questRestrictionInfo;
    v6->fields.questRestrictionInfo = (struct QuestRestrictionInfo_o *)questRestrictionInfo;
    sub_B52920(
      (BattleServantConfConponent_o *)&v6->fields.questRestrictionInfo,
      questRestrictionInfo,
      v77,
      v78,
      v79,
      v80,
      v81,
      v82);
    v6->fields.pushUserServantId = data->fields.pushUserServantId;
    v6->fields._deckId_k__BackingField = data->fields._deckId_k__BackingField;
    deckName_k__BackingField = (System_Int32_array **)data->fields._deckName_k__BackingField;
    v6->fields._deckName_k__BackingField = (struct System_String_o *)deckName_k__BackingField;
    sub_B52920(
      (BattleServantConfConponent_o *)&v6->fields._deckName_k__BackingField,
      deckName_k__BackingField,
      v84,
      v85,
      v86,
      v87,
      v88,
      v89);
    oldDeckName_k__BackingField = (System_Int32_array **)data->fields._oldDeckName_k__BackingField;
    v6->fields._oldDeckName_k__BackingField = (struct System_String_o *)oldDeckName_k__BackingField;
    sub_B52920(
      (BattleServantConfConponent_o *)&v6->fields._oldDeckName_k__BackingField,
      oldDeckName_k__BackingField,
      v91,
      v92,
      v93,
      v94,
      v95,
      v96);
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
  SupportServantData_o *v4; // x20
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *oldServantIdList; // x9
  struct System_Int64_array *equipIdList; // x8
  struct System_Int64_array *oldEquipIdList; // x9
  SupportServantData_FollowerData_o *v9; // x21
  struct System_Int64_array *v10; // x8
  struct System_Int64_array *v11; // x8
  __int64 v13; // x0

  v4 = this;
  if ( (byte_42B389B & 1) == 0 )
  {
    this = (SupportServantData_o *)sub_B52984(&SupportServantData_FollowerData_TypeInfo);
    byte_42B389B = 1;
  }
  servantIdList = v4->fields.servantIdList;
  if ( !servantIdList )
    goto LABEL_21;
  if ( servantIdList->max_length <= classPos )
    goto LABEL_22;
  oldServantIdList = v4->fields.oldServantIdList;
  if ( !oldServantIdList )
    goto LABEL_21;
  if ( oldServantIdList->max_length <= classPos )
    goto LABEL_22;
  if ( servantIdList->m_Items[classPos] != oldServantIdList->m_Items[classPos] )
    goto LABEL_14;
  equipIdList = v4->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_21;
  if ( equipIdList->max_length <= classPos )
    goto LABEL_22;
  oldEquipIdList = v4->fields.oldEquipIdList;
  if ( !oldEquipIdList )
    goto LABEL_21;
  if ( oldEquipIdList->max_length <= classPos )
    goto LABEL_22;
  if ( equipIdList->m_Items[classPos] != oldEquipIdList->m_Items[classPos] )
  {
LABEL_14:
    v9 = (SupportServantData_FollowerData_o *)sub_B52A54(SupportServantData_FollowerData_TypeInfo);
    SupportServantData_FollowerData___ctor(v9, 0LL);
    if ( v9 )
    {
      v9->fields.supportDeckId = v4->fields._deckId_k__BackingField;
      v9->fields.classId = classPos;
      v10 = v4->fields.servantIdList;
      if ( v10 )
      {
        if ( v10->max_length <= classPos )
          goto LABEL_22;
        v9->fields.userSvtId = v10->m_Items[classPos];
        v11 = v4->fields.equipIdList;
        if ( v11 )
        {
          if ( v11->max_length > classPos )
          {
            v9->fields.userSvtEquipId = v11->m_Items[classPos];
            return v9;
          }
LABEL_22:
          v13 = sub_B52A88(this);
          sub_B52A28(v13, 0LL);
        }
      }
    }
LABEL_21:
    sub_B52A5C(this, *(_QWORD *)&classPos);
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
  __int64 i; // x22
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *equipIdList; // x8
  struct System_Int64_array *oldServantIdList; // x8
  struct System_Int64_array *oldEquipIdList; // x8
  int64_t Instance; // x0
  unsigned __int64 v13; // x24
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v15; // x21
  struct UserServantLeaderEntity_array *SupportDeck; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x23
  int max_length; // w8
  unsigned int v31; // w24
  struct System_Int64_array *v32; // x9
  __int64 v33; // x8
  struct System_Int64_array *v34; // x10
  int64_t v35; // x11
  __int64 v36; // x25
  struct System_Int64_array *v37; // x26
  struct System_Int64_array *v38; // x27
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct System_String_o *DeckName; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  const MethodInfo *v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct System_String_o *DefaultDeckName; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct System_String_o *deckName_k__BackingField; // x1
  __int64 v73; // x0

  if ( (byte_42B3891 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserSupportDeckMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B3891 = 1;
  }
  for ( i = 4LL; ; ++i )
  {
    Instance = (int64_t)BalanceConfig_TypeInfo;
    v13 = i - 4;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (int64_t)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v13 >= *(int *)(*(_QWORD *)(Instance + 184) + 164LL) )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      goto LABEL_41;
    if ( v13 >= servantIdList->max_length )
      goto LABEL_42;
    *((_QWORD *)&servantIdList->obj.klass + i) = 0LL;
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_41;
    if ( v13 >= equipIdList->max_length )
      goto LABEL_42;
    *((_QWORD *)&equipIdList->obj.klass + i) = 0LL;
    oldServantIdList = this->fields.oldServantIdList;
    if ( !oldServantIdList )
      goto LABEL_41;
    if ( v13 >= oldServantIdList->max_length )
      goto LABEL_42;
    *((_QWORD *)&oldServantIdList->obj.klass + i) = 0LL;
    oldEquipIdList = this->fields.oldEquipIdList;
    if ( !oldEquipIdList )
      goto LABEL_41;
    if ( v13 >= oldEquipIdList->max_length )
      goto LABEL_42;
    *((_QWORD *)&oldEquipIdList->obj.klass + i) = 0LL;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields._deckId_k__BackingField = deckId;
  v15 = SelfUserGame;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_41;
  SupportDeck = UserServantLeaderMaster__getSupportDeck(
                  (UserServantLeaderMaster_o *)Instance,
                  this->fields._deckId_k__BackingField,
                  0LL);
  this->fields.userServantLeaderEntityList = SupportDeck;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)SupportDeck,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_41;
  max_length = userServantLeaderEntityList->max_length;
  if ( max_length >= 1 )
  {
    v31 = 0;
    while ( v31 < max_length )
    {
      Instance = (int64_t)userServantLeaderEntityList->m_Items[v31];
      if ( !Instance )
        goto LABEL_41;
      if ( *(_DWORD *)(Instance + 48) == this->fields._deckId_k__BackingField )
      {
        v32 = this->fields.oldServantIdList;
        if ( !v32 )
          goto LABEL_41;
        v33 = *(int *)(Instance + 52);
        if ( (unsigned int)v33 >= v32->max_length )
          break;
        v34 = this->fields.servantIdList;
        v35 = *(_QWORD *)(Instance + 56);
        v32->m_Items[v33] = v35;
        if ( !v34 )
          goto LABEL_41;
        if ( (unsigned int)v33 >= v34->max_length )
          break;
        v34->m_Items[v33] = v35;
        v36 = *(int *)(Instance + 52);
        v37 = this->fields.equipIdList;
        v38 = this->fields.oldEquipIdList;
        Instance = UserServantLeaderEntity__getEquipUserSvtId((UserServantLeaderEntity_o *)Instance, 0LL);
        if ( !v38 )
          goto LABEL_41;
        if ( (unsigned int)v36 >= v38->max_length )
          break;
        v38->m_Items[v36] = Instance;
        if ( !v37 )
          goto LABEL_41;
        if ( (unsigned int)v36 >= v37->max_length )
          break;
        v37->m_Items[v36] = Instance;
      }
      max_length = userServantLeaderEntityList->max_length;
      if ( (int)++v31 >= max_length )
        goto LABEL_35;
    }
LABEL_42:
    v73 = sub_B52A88(Instance);
    sub_B52A28(v73, 0LL);
  }
LABEL_35:
  this->fields.isFriendInfo = 0;
  this->fields.isSelectServant = 0;
  this->fields.kind = 1;
  this->fields.eventSetupInfo2 = eventUpSetupInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo2,
    (System_Int32_array **)eventUpSetupInfo,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.eventSetupInfo = eventUpSetupInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo,
    (System_Int32_array **)eventUpSetupInfo,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.questRestrictionInfo = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v45, v46, v47, v48, v49, v50);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserSupportDeckMaster___);
  if ( !Instance )
    goto LABEL_41;
  DeckName = UserSupportDeckMaster__getDeckName(
               (UserSupportDeckMaster_o *)Instance,
               this->fields._deckId_k__BackingField,
               0LL);
  this->fields._deckName_k__BackingField = DeckName;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._deckName_k__BackingField,
    (System_Int32_array **)DeckName,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  if ( System_String__IsNullOrEmpty(this->fields._deckName_k__BackingField, 0LL) )
  {
    DefaultDeckName = SupportServantData__getDefaultDeckName(this, v58);
    this->fields._deckName_k__BackingField = DefaultDeckName;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields._deckName_k__BackingField,
      (System_Int32_array **)DefaultDeckName,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71);
  }
  deckName_k__BackingField = this->fields._deckName_k__BackingField;
  this->fields._oldDeckName_k__BackingField = deckName_k__BackingField;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._oldDeckName_k__BackingField,
    (System_Int32_array **)deckName_k__BackingField,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  if ( !v15 )
LABEL_41:
    sub_B52A5C(Instance, *(_QWORD *)&deckId);
  this->fields.pushUserServantId = v15->fields.pushUserSvtId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__Init_31790560(
        SupportServantData_o *this,
        OtherUserGameEntity_o *otherData,
        int32_t friendKind,
        bool isSelectServant,
        EventUpValSetupInfo_o *eventSetupInfo,
        int32_t displayType,
        int32_t deckId,
        const MethodInfo *method)
{
  unsigned __int64 v12; // x26
  __int64 i; // x28
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x21
  UserServantLeaderEntity_o *v15; // x27
  __int64 ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct UserServantLeaderEntity_array *v24; // x8
  struct System_Int64_array *oldServantIdList; // x21
  struct System_Int64_array *servantIdList; // x27
  struct System_Int64_array *v27; // x8
  struct UserServantLeaderEntity_array *v28; // x8
  UserServantLeaderEntity_o *v29; // x27
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct System_Int64_array *oldEquipIdList; // x21
  struct System_Int64_array *equipIdList; // x27
  struct System_Int64_array *v38; // x8
  Il2CppClass **v39; // x8
  BalanceConfig_c *v40; // x0
  int32_t v41; // w8
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x0
  __int64 v55; // x0

  if ( (byte_42B3893 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&UserServantLeaderEntity_TypeInfo);
    byte_42B3893 = 1;
  }
  v12 = 0LL;
  for ( i = 32LL; ; i += 8LL )
  {
    v40 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v40 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v12 >= v40->static_fields->SupportDeckMemberMax )
      break;
    userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
    v15 = (UserServantLeaderEntity_o *)sub_B52A54(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor(v15, 0LL);
    if ( !userServantLeaderEntityList )
      goto LABEL_47;
    if ( v15 )
    {
      ServantLeaderInfo = sub_B52A44(v15, userServantLeaderEntityList->obj.klass->_1.element_class);
      if ( !ServantLeaderInfo )
      {
        v55 = sub_B52A7C(0LL);
        sub_B52A28(v55, 0LL);
      }
    }
    if ( v12 >= userServantLeaderEntityList->max_length )
      goto LABEL_48;
    userServantLeaderEntityList->m_Items[v12] = v15;
    sub_B52920(
      (BattleServantConfConponent_o *)((char *)userServantLeaderEntityList + i),
      (System_Int32_array **)v15,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    if ( !otherData )
      goto LABEL_47;
    ServantLeaderInfo = (__int64)OtherUserGameEntity__getServantLeaderInfo(otherData, v12, 0, displayType, deckId, 0LL);
    if ( ServantLeaderInfo )
    {
      v24 = this->fields.userServantLeaderEntityList;
      if ( !v24 )
        goto LABEL_47;
      if ( v12 >= v24->max_length )
        goto LABEL_48;
      v17 = (ServantLeaderInfo_o *)ServantLeaderInfo;
      ServantLeaderInfo = (__int64)v24->m_Items[v12];
      if ( !ServantLeaderInfo )
        goto LABEL_47;
      UserServantLeaderEntity__setUserServantEntity_35286936((UserServantLeaderEntity_o *)ServantLeaderInfo, v17, 0LL);
      servantIdList = this->fields.servantIdList;
      oldServantIdList = this->fields.oldServantIdList;
      ServantLeaderInfo = OtherUserGameEntity__getUserSvtId(otherData, v12, displayType, 0LL);
      if ( !oldServantIdList )
        goto LABEL_47;
      if ( v12 >= oldServantIdList->max_length )
        goto LABEL_48;
      oldServantIdList->m_Items[v12] = ServantLeaderInfo;
      if ( !servantIdList )
        goto LABEL_47;
      if ( v12 >= servantIdList->max_length )
        goto LABEL_48;
    }
    else
    {
      v27 = this->fields.oldServantIdList;
      if ( !v27 )
        goto LABEL_47;
      if ( v12 >= v27->max_length )
        goto LABEL_48;
      servantIdList = this->fields.servantIdList;
      v27->m_Items[v12] = 0LL;
      if ( !servantIdList )
        goto LABEL_47;
      if ( v12 >= servantIdList->max_length )
        goto LABEL_48;
      ServantLeaderInfo = 0LL;
    }
    servantIdList->m_Items[v12] = ServantLeaderInfo;
    ServantLeaderInfo = OtherUserGameEntity__getEquipSvtId(otherData, v12, displayType, deckId, 0LL);
    if ( (_DWORD)ServantLeaderInfo )
    {
      v28 = this->fields.userServantLeaderEntityList;
      if ( !v28 )
        goto LABEL_47;
      if ( v12 >= v28->max_length )
        goto LABEL_48;
      v29 = v28->m_Items[v12];
      ServantLeaderInfo = (__int64)OtherUserGameEntity__getEquipInfo(otherData, v12, displayType, deckId, 0LL);
      if ( !v29 )
        goto LABEL_47;
      v29->fields.equipTarget1 = (struct EquipTargetInfo_o *)ServantLeaderInfo;
      sub_B52920(
        (BattleServantConfConponent_o *)&v29->fields.equipTarget1,
        (System_Int32_array **)ServantLeaderInfo,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
      equipIdList = this->fields.equipIdList;
      oldEquipIdList = this->fields.oldEquipIdList;
      ServantLeaderInfo = OtherUserGameEntity__getEquipUserSvtId(otherData, v12, displayType, deckId, 0LL);
      if ( !oldEquipIdList )
        goto LABEL_47;
      if ( v12 >= oldEquipIdList->max_length )
        goto LABEL_48;
      oldEquipIdList->m_Items[v12] = ServantLeaderInfo;
      if ( !equipIdList )
        goto LABEL_47;
      if ( v12 >= equipIdList->max_length )
        goto LABEL_48;
    }
    else
    {
      v38 = this->fields.oldEquipIdList;
      if ( !v38 )
        goto LABEL_47;
      if ( v12 >= v38->max_length )
        goto LABEL_48;
      equipIdList = this->fields.equipIdList;
      v38->m_Items[v12] = 0LL;
      if ( !equipIdList )
        goto LABEL_47;
      if ( v12 >= equipIdList->max_length )
      {
LABEL_48:
        v54 = sub_B52A88(ServantLeaderInfo);
        sub_B52A28(v54, 0LL);
      }
      ServantLeaderInfo = 0LL;
    }
    v39 = &equipIdList->obj.klass + v12++;
    v39[4] = (Il2CppClass *)ServantLeaderInfo;
  }
  if ( friendKind == 3 )
    v41 = 4;
  else
    v41 = 5;
  this->fields.isFriendInfo = 1;
  this->fields.isSelectServant = isSelectServant;
  this->fields.kind = v41;
  this->fields.eventSetupInfo2 = eventSetupInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo2,
    (System_Int32_array **)eventSetupInfo,
    *(System_String_array ***)&friendKind,
    (System_String_array **)isSelectServant,
    (System_Boolean_array **)eventSetupInfo,
    *(System_Int32_array ***)&displayType,
    *(System_Int32_array **)&deckId,
    (System_Int32_array *)method);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo,
    (System_Int32_array **)eventSetupInfo,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.questRestrictionInfo = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v48, v49, v50, v51, v52, v53);
  if ( !otherData )
LABEL_47:
    sub_B52A5C(ServantLeaderInfo, v17);
  this->fields.pushUserServantId = otherData->fields.pushUserSvtId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__Init_31791424(
        SupportServantData_o *this,
        FollowerInfo_o *followerInfo,
        int32_t friendKind,
        bool isSelectServant,
        EventUpValSetupInfo_o *eventSetupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t deckId,
        const MethodInfo *method)
{
  int32_t ReturnTypeByQuestId; // w26
  unsigned __int64 v15; // x27
  __int64 i; // x22
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x20
  UserServantLeaderEntity_o *v18; // x23
  __int64 ServantLeaderInfo; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
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
  struct System_Int64_array *servantIdList; // x20
  struct System_Int64_array *oldServantIdList; // x23
  struct System_Int64_array *v34; // x8
  struct UserServantLeaderEntity_array *v35; // x8
  UserServantLeaderEntity_o *v36; // x23
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct System_Int64_array *equipIdList; // x20
  struct System_Int64_array *oldEquipIdList; // x23
  struct System_Int64_array *v45; // x8
  Il2CppClass **v46; // x8
  BalanceConfig_c *v47; // x0
  int32_t v48; // w8
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  __int64 v61; // x0
  __int64 v62; // x0
  int32_t v63; // [xsp+0h] [xbp-70h]
  bool v64; // [xsp+4h] [xbp-6Ch]
  struct EventUpValSetupInfo_o *v65; // [xsp+8h] [xbp-68h]
  struct QuestRestrictionInfo_o *v66; // [xsp+10h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_42B3894 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&UserServantLeaderEntity_TypeInfo);
    byte_42B3894 = 1;
  }
  v65 = eventSetupInfo;
  v66 = questRestrictionInfo;
  v63 = friendKind;
  v64 = isSelectServant;
  if ( questRestrictionInfo )
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
  else
    ReturnTypeByQuestId = 0;
  v15 = 0LL;
  for ( i = 32LL; ; i += 8LL )
  {
    v47 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v47 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v15 >= v47->static_fields->SupportDeckMemberMax )
      break;
    userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
    v18 = (UserServantLeaderEntity_o *)sub_B52A54(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor(v18, 0LL);
    if ( !userServantLeaderEntityList )
      goto LABEL_54;
    if ( v18 )
    {
      ServantLeaderInfo = sub_B52A44(v18, userServantLeaderEntityList->obj.klass->_1.element_class);
      if ( !ServantLeaderInfo )
      {
        v62 = sub_B52A7C(0LL);
        sub_B52A28(v62, 0LL);
      }
    }
    if ( v15 >= userServantLeaderEntityList->max_length )
      goto LABEL_55;
    userServantLeaderEntityList->m_Items[v15] = v18;
    sub_B52920(
      (BattleServantConfConponent_o *)((char *)userServantLeaderEntityList + i),
      (System_Int32_array **)v18,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    if ( !followerInfo )
      goto LABEL_54;
    IndexForSupport = FollowerInfo__getIndexForSupport(followerInfo, v15, ReturnTypeByQuestId, deckId, 0LL);
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
    ServantLeaderInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v68, 0LL);
    if ( (_DWORD)ServantLeaderInfo )
    {
      v31 = this->fields.userServantLeaderEntityList;
      if ( !v31 )
        goto LABEL_54;
      if ( v15 >= v31->max_length )
        goto LABEL_55;
      ServantLeaderInfo = (__int64)v31->m_Items[v15];
      if ( !ServantLeaderInfo )
        goto LABEL_54;
      UserServantLeaderEntity__setUserServantEntity_35286936((UserServantLeaderEntity_o *)ServantLeaderInfo, v28, 0LL);
      servantIdList = this->fields.servantIdList;
      oldServantIdList = this->fields.oldServantIdList;
      ServantLeaderInfo = FollowerInfo__getUserSvtId(followerInfo, IndexForSupport, ReturnTypeByQuestId, 0LL);
      if ( !oldServantIdList )
        goto LABEL_54;
      if ( v15 >= oldServantIdList->max_length )
        goto LABEL_55;
      oldServantIdList->m_Items[v15] = ServantLeaderInfo;
      if ( !servantIdList )
        goto LABEL_54;
      if ( v15 >= servantIdList->max_length )
        goto LABEL_55;
    }
    else
    {
LABEL_25:
      v34 = this->fields.oldServantIdList;
      if ( !v34 )
        goto LABEL_54;
      if ( v15 >= v34->max_length )
        goto LABEL_55;
      servantIdList = this->fields.servantIdList;
      v34->m_Items[v15] = 0LL;
      if ( !servantIdList )
        goto LABEL_54;
      if ( v15 >= servantIdList->max_length )
        goto LABEL_55;
      ServantLeaderInfo = 0LL;
    }
    servantIdList->m_Items[v15] = ServantLeaderInfo;
    ServantLeaderInfo = FollowerInfo__getEquipSvtId(followerInfo, IndexForSupport, ReturnTypeByQuestId, 0LL);
    if ( (_DWORD)ServantLeaderInfo )
    {
      v35 = this->fields.userServantLeaderEntityList;
      if ( !v35 )
        goto LABEL_54;
      if ( v15 >= v35->max_length )
        goto LABEL_55;
      v36 = v35->m_Items[v15];
      ServantLeaderInfo = (__int64)FollowerInfo__getEquipTarget1(
                                     followerInfo,
                                     IndexForSupport,
                                     ReturnTypeByQuestId,
                                     0LL);
      if ( !v36 )
        goto LABEL_54;
      v36->fields.equipTarget1 = (struct EquipTargetInfo_o *)ServantLeaderInfo;
      sub_B52920(
        (BattleServantConfConponent_o *)&v36->fields.equipTarget1,
        (System_Int32_array **)ServantLeaderInfo,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
      equipIdList = this->fields.equipIdList;
      oldEquipIdList = this->fields.oldEquipIdList;
      ServantLeaderInfo = FollowerInfo__getEquipUserSvtId(followerInfo, IndexForSupport, ReturnTypeByQuestId, 0LL);
      if ( !oldEquipIdList )
        goto LABEL_54;
      if ( v15 >= oldEquipIdList->max_length )
        goto LABEL_55;
      oldEquipIdList->m_Items[v15] = ServantLeaderInfo;
      if ( !equipIdList )
        goto LABEL_54;
      if ( v15 >= equipIdList->max_length )
        goto LABEL_55;
    }
    else
    {
      v45 = this->fields.oldEquipIdList;
      if ( !v45 )
        goto LABEL_54;
      if ( v15 >= v45->max_length )
        goto LABEL_55;
      equipIdList = this->fields.equipIdList;
      v45->m_Items[v15] = 0LL;
      if ( !equipIdList )
        goto LABEL_54;
      if ( v15 >= equipIdList->max_length )
      {
LABEL_55:
        v61 = sub_B52A88(ServantLeaderInfo);
        sub_B52A28(v61, 0LL);
      }
      ServantLeaderInfo = 0LL;
    }
    v46 = &equipIdList->obj.klass + v15++;
    v46[4] = (Il2CppClass *)ServantLeaderInfo;
  }
  if ( v63 == 3 )
    v48 = 4;
  else
    v48 = 5;
  this->fields.isFriendInfo = 1;
  this->fields.isSelectServant = v64;
  this->fields.kind = v48;
  this->fields.eventSetupInfo2 = v65;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo2,
    (System_Int32_array **)v65,
    *(System_String_array ***)&friendKind,
    (System_String_array **)isSelectServant,
    (System_Boolean_array **)eventSetupInfo,
    (System_Int32_array **)questRestrictionInfo,
    *(System_Int32_array **)&deckId,
    (System_Int32_array *)method);
  this->fields.eventSetupInfo = v65;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo,
    (System_Int32_array **)v65,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  this->fields.questRestrictionInfo = v66;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)v66,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  if ( !followerInfo )
LABEL_54:
    sub_B52A5C(ServantLeaderInfo, v20);
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
  sub_B52920(
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
  __int64 i; // x20
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *oldServantIdList; // x9
  struct System_Int64_array *equipIdList; // x8
  struct System_Int64_array *oldEquipIdList; // x9
  BalanceConfig_c *v16; // x0
  unsigned __int64 v17; // x22
  __int64 v18; // x0

  if ( (byte_42B38A0 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B38A0 = 1;
  }
  deckName_k__BackingField = this->fields._deckName_k__BackingField;
  this->fields._oldDeckName_k__BackingField = deckName_k__BackingField;
  sub_B52920(
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
    v16 = BalanceConfig_TypeInfo;
    v17 = i - 4;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v16 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v17 >= v16->static_fields->SupportDeckMemberMax )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      goto LABEL_18;
    if ( v17 >= servantIdList->max_length )
      goto LABEL_19;
    oldServantIdList = this->fields.oldServantIdList;
    if ( !oldServantIdList )
      goto LABEL_18;
    if ( v17 >= oldServantIdList->max_length )
      goto LABEL_19;
    *((_QWORD *)&oldServantIdList->obj.klass + i) = *((_QWORD *)&servantIdList->obj.klass + i);
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_18;
    if ( v17 >= equipIdList->max_length )
      goto LABEL_19;
    oldEquipIdList = this->fields.oldEquipIdList;
    if ( !oldEquipIdList )
LABEL_18:
      sub_B52A5C(v16, v10);
    if ( v17 >= oldEquipIdList->max_length )
    {
LABEL_19:
      v18 = sub_B52A88(v16);
      sub_B52A28(v18, 0LL);
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
  SupportServantData_o *v9; // x20
  System_Int32_array **oldDeckName_k__BackingField; // x1
  __int64 i; // x21
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *oldServantIdList; // x9
  struct System_Int64_array *equipIdList; // x8
  struct System_Int64_array *oldEquipIdList; // x9
  unsigned __int64 v16; // x23
  __int64 v17; // x0

  v9 = this;
  if ( (byte_42B38A1 & 1) == 0 )
  {
    this = (SupportServantData_o *)sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B38A1 = 1;
  }
  if ( !data )
LABEL_19:
    sub_B52A5C(this, data);
  oldDeckName_k__BackingField = (System_Int32_array **)data->fields._oldDeckName_k__BackingField;
  v9->fields._oldDeckName_k__BackingField = (struct System_String_o *)oldDeckName_k__BackingField;
  sub_B52920(
    (BattleServantConfConponent_o *)&v9->fields._oldDeckName_k__BackingField,
    oldDeckName_k__BackingField,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  for ( i = 4LL; ; ++i )
  {
    this = (SupportServantData_o *)BalanceConfig_TypeInfo;
    v16 = i - 4;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      this = (SupportServantData_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v16 >= SHIDWORD(this[1].fields.oldEquipIdList->m_Items[16]) )
      break;
    servantIdList = data->fields.servantIdList;
    if ( !servantIdList )
      goto LABEL_19;
    if ( v16 >= servantIdList->max_length )
      goto LABEL_20;
    oldServantIdList = v9->fields.oldServantIdList;
    if ( !oldServantIdList )
      goto LABEL_19;
    if ( v16 >= oldServantIdList->max_length )
      goto LABEL_20;
    *((_QWORD *)&oldServantIdList->obj.klass + i) = *((_QWORD *)&servantIdList->obj.klass + i);
    equipIdList = data->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_19;
    if ( v16 >= equipIdList->max_length )
      goto LABEL_20;
    oldEquipIdList = v9->fields.oldEquipIdList;
    if ( !oldEquipIdList )
      goto LABEL_19;
    if ( v16 >= oldEquipIdList->max_length )
    {
LABEL_20:
      v17 = sub_B52A88(this);
      sub_B52A28(v17, 0LL);
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
  __int64 v8; // x0

  v4 = this;
  if ( (byte_42B389F & 1) == 0 )
  {
    this = (SupportServantData_o *)sub_B52984(&LocalizationManager_TypeInfo);
    byte_42B389F = 1;
  }
  className = v4->fields.className;
  if ( !className )
    sub_B52A5C(this, *(_QWORD *)&classPos);
  if ( className->max_length <= classPos )
  {
    v8 = sub_B52A88(this);
    sub_B52A28(v8, 0LL);
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
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t deckId_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B3892 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_12636/*"SUPPORT_SELECT_NAME_BASE"*/);
    byte_42B3892 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_12636/*"SUPPORT_SELECT_NAME_BASE"*/, 0LL);
  deckId_k__BackingField = this->fields._deckId_k__BackingField;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &deckId_k__BackingField);
  return System_String__Format(v3, v4, 0LL);
}


int64_t __fastcall SupportServantData__getEquip(SupportServantData_o *this, int32_t classPos, const MethodInfo *method)
{
  struct System_Int64_array *equipIdList; // x8
  __int64 v5; // x0

  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    sub_B52A5C(this, classPos);
  if ( equipIdList->max_length <= classPos )
  {
    v5 = sub_B52A88(this);
    sub_B52A28(v5, 0LL);
  }
  return equipIdList->m_Items[classPos];
}


int32_t __fastcall SupportServantData__getEquipSum(SupportServantData_o *this, const MethodInfo *method)
{
  unsigned __int64 v3; // x21
  int32_t v4; // w20
  BalanceConfig_c *v5; // x0
  struct System_Int64_array *equipIdList; // x8
  __int64 v9; // x0

  if ( (byte_42B3899 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B3899 = 1;
  }
  v3 = 0LL;
  v4 = 0;
  v5 = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v3 >= v5->static_fields->SupportDeckMemberMax )
      break;
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      sub_B52A5C(v5, method);
    if ( v3 >= equipIdList->max_length )
    {
      v9 = sub_B52A88(v5);
      sub_B52A28(v9, 0LL);
    }
    if ( equipIdList->m_Items[v3++] )
      ++v4;
  }
  return v4;
}


int64_t __fastcall SupportServantData__getMember(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  UserServantLeaderEntity_o *v4; // x8
  __int64 v6; // x0

  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    sub_B52A5C(this, classPos);
  if ( userServantLeaderEntityList->max_length <= classPos )
  {
    v6 = sub_B52A88(this);
    sub_B52A28(v6, 0LL);
  }
  v4 = userServantLeaderEntityList->m_Items[classPos];
  if ( v4 )
    return v4->fields.userSvtId;
  else
    return 0LL;
}


int64_t __fastcall SupportServantData__getOldEquip(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct System_Int64_array *oldEquipIdList; // x8
  __int64 v5; // x0

  oldEquipIdList = this->fields.oldEquipIdList;
  if ( !oldEquipIdList )
    sub_B52A5C(this, classPos);
  if ( oldEquipIdList->max_length <= classPos )
  {
    v5 = sub_B52A88(this);
    sub_B52A28(v5, 0LL);
  }
  return oldEquipIdList->m_Items[classPos];
}


int64_t __fastcall SupportServantData__getOldServant(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct System_Int64_array *oldServantIdList; // x8
  __int64 v5; // x0

  oldServantIdList = this->fields.oldServantIdList;
  if ( !oldServantIdList )
    sub_B52A5C(this, classPos);
  if ( oldServantIdList->max_length <= classPos )
  {
    v5 = sub_B52A88(this);
    sub_B52A28(v5, 0LL);
  }
  return oldServantIdList->m_Items[classPos];
}


int64_t __fastcall SupportServantData__getServant(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct System_Int64_array *servantIdList; // x8
  __int64 v5; // x0

  servantIdList = this->fields.servantIdList;
  if ( !servantIdList )
    sub_B52A5C(this, classPos);
  if ( servantIdList->max_length <= classPos )
  {
    v5 = sub_B52A88(this);
    sub_B52A28(v5, 0LL);
  }
  return servantIdList->m_Items[classPos];
}


int32_t __fastcall SupportServantData__getServantSum(SupportServantData_o *this, const MethodInfo *method)
{
  unsigned __int64 v3; // x21
  int32_t v4; // w20
  BalanceConfig_c *v5; // x0
  struct System_Int64_array *servantIdList; // x8
  __int64 v9; // x0

  if ( (byte_42B3898 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B3898 = 1;
  }
  v3 = 0LL;
  v4 = 0;
  v5 = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v3 >= v5->static_fields->SupportDeckMemberMax )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      sub_B52A5C(v5, method);
    if ( v3 >= servantIdList->max_length )
    {
      v9 = sub_B52A88(v5);
      sub_B52A28(v9, 0LL);
    }
    if ( servantIdList->m_Items[v3++] )
      ++v4;
  }
  return v4;
}


UserServantLeaderEntity_o *__fastcall SupportServantData__getUserServantLeaderEntity(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  __int64 v5; // x0

  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    sub_B52A5C(this, classPos);
  if ( userServantLeaderEntityList->max_length <= classPos )
  {
    v5 = sub_B52A88(this);
    sub_B52A28(v5, 0LL);
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
  il2cpp_array_size_t v3; // w21
  BalanceConfig_c *v4; // x0
  struct System_Int64_array *servantIdList; // x8
  __int64 v6; // x8
  __int64 v8; // x0

  if ( (byte_42B389E & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B389E = 1;
  }
  v3 = 0;
  v4 = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)v3 >= v4->static_fields->SupportDeckMemberMax )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      sub_B52A5C(v4, method);
    if ( v3 >= servantIdList->max_length )
    {
      v8 = sub_B52A88(v4);
      sub_B52A28(v8, 0LL);
    }
    v6 = servantIdList->m_Items[v3++];
    if ( v6 > 0 )
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
  __int64 v10; // x0

  if ( (byte_42B389A & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B389A = 1;
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
      sub_B52A5C(v6, userSvtId);
    if ( v5 >= servantIdList->max_length )
    {
      v10 = sub_B52A88(v6);
      sub_B52A28(v10, 0LL);
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
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  UserServantLeaderEntity_o *v6; // x8
  struct EquipTargetInfo_o *equipTarget1; // x22
  __int128 v8; // q1
  struct UserServantLeaderEntity_array *v9; // x8
  UserServantLeaderEntity_o *v10; // x8
  struct EquipTargetInfo_o *v11; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // kr00_16
  struct System_Int64_array *equipIdList; // x8
  __int64 v14; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-40h] BYREF

  v3 = classPos;
  v4 = this;
  if ( (byte_42B3897 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (SupportServantData_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B3897 = 1;
  }
  userServantLeaderEntityList = v4->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_21;
  if ( userServantLeaderEntityList->max_length <= v3 )
    goto LABEL_22;
  v6 = userServantLeaderEntityList->m_Items[v3];
  if ( !v6 )
    goto LABEL_21;
  equipTarget1 = v6->fields.equipTarget1;
  if ( !equipTarget1 )
    goto LABEL_18;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  this = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v15, 0LL, 0LL);
  v8 = *(_OWORD *)&v15.fields.currentCryptoKey;
  *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue = *(_OWORD *)&v15.fields.fakeValue;
  *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey = v8;
  v9 = v4->fields.userServantLeaderEntityList;
  if ( !v9 )
    goto LABEL_21;
  if ( v9->max_length <= v3 )
    goto LABEL_22;
  v10 = v9->m_Items[v3];
  if ( !v10 )
    goto LABEL_21;
  v11 = v10->fields.equipTarget1;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
  *(_QWORD *)&classPos = *(_QWORD *)&v12.fields.fakeValue;
  this = *(SupportServantData_o **)&v12.fields.currentCryptoKey;
  if ( !v11 )
LABEL_21:
    sub_B52A5C(this, *(_QWORD *)&classPos);
  v11->fields.svtId = v12;
LABEL_18:
  equipIdList = v4->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_21;
  if ( equipIdList->max_length <= v3 )
  {
LABEL_22:
    v14 = sub_B52A88(this);
    sub_B52A28(v14, 0LL);
  }
  equipIdList->m_Items[v3] = 0LL;
}


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
  __int64 v8; // x0

  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_10;
  if ( userServantLeaderEntityList->max_length <= classPos )
    goto LABEL_11;
  v4 = userServantLeaderEntityList->m_Items[classPos];
  if ( !v4 || (v4->fields.userSvtId = 0LL, (servantIdList = this->fields.servantIdList) == 0LL) )
LABEL_10:
    sub_B52A5C(this, classPos);
  if ( servantIdList->max_length <= classPos )
    goto LABEL_11;
  servantIdList->m_Items[classPos] = 0LL;
  v6 = this->fields.userServantLeaderEntityList;
  if ( !v6 )
    goto LABEL_10;
  if ( v6->max_length <= classPos )
  {
LABEL_11:
    v8 = sub_B52A88(this);
    sub_B52A28(v8, 0LL);
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
  int32_t v7; // w20
  SupportServantData_o *v8; // x22
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  UserServantLeaderEntity_o *v10; // x23
  BattleServantConfConponent_o *p_equipTarget1; // x23
  struct EquipTargetInfo_o *equipTarget1; // t1
  EquipTargetInfo_o *v13; // x24
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UserServantLeaderEntity_o *v20; // x8
  struct EquipTargetInfo_o *v21; // x23
  __int128 v22; // q1
  struct System_Int64_array *equipIdList; // x8
  struct UserServantLeaderEntity_array *v24; // x8
  UserServantLeaderEntity_o *v25; // x8
  struct EquipTargetInfo_o *v26; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // kr00_16
  __int64 v28; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-60h]

  v7 = classPos;
  v8 = this;
  if ( (byte_42B3896 & 1) == 0 )
  {
    sub_B52984(&EquipTargetInfo_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (SupportServantData_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B3896 = 1;
  }
  userServantLeaderEntityList = v8->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_26;
  if ( userServantLeaderEntityList->max_length <= v7 )
    goto LABEL_27;
  v10 = userServantLeaderEntityList->m_Items[v7];
  if ( !v10 )
    goto LABEL_26;
  equipTarget1 = v10->fields.equipTarget1;
  p_equipTarget1 = (BattleServantConfConponent_o *)&v10->fields.equipTarget1;
  if ( !equipTarget1 )
  {
    v13 = (EquipTargetInfo_o *)sub_B52A54(EquipTargetInfo_TypeInfo);
    EquipTargetInfo___ctor(v13, 0LL);
    p_equipTarget1->klass = (BattleServantConfConponent_c *)v13;
    sub_B52920(p_equipTarget1, (System_Int32_array **)v13, v14, v15, v16, v17, v18, v19);
    userServantLeaderEntityList = v8->fields.userServantLeaderEntityList;
    if ( !userServantLeaderEntityList )
      goto LABEL_26;
  }
  if ( userServantLeaderEntityList->max_length <= v7 )
  {
LABEL_27:
    v28 = sub_B52A88(this);
    sub_B52A28(v28, 0LL);
  }
  v20 = userServantLeaderEntityList->m_Items[v7];
  if ( !v20 )
    goto LABEL_26;
  v21 = v20->fields.equipTarget1;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  this = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v29, userSvtId, 0LL);
  v30 = v29;
  if ( !v21 )
    goto LABEL_26;
  v22 = *(_OWORD *)&v30.fields.currentCryptoKey;
  *(_OWORD *)&v21->fields.userSvtId.fields.fakeValue = *(_OWORD *)&v30.fields.fakeValue;
  *(_OWORD *)&v21->fields.userSvtId.fields.currentCryptoKey = v22;
  equipIdList = v8->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_26;
  if ( equipIdList->max_length <= v7 )
    goto LABEL_27;
  equipIdList->m_Items[v7] = userSvtId;
  if ( (svtId & 0x80000000) != 0 )
    return;
  v24 = v8->fields.userServantLeaderEntityList;
  if ( !v24 )
LABEL_26:
    sub_B52A5C(this, *(_QWORD *)&classPos);
  if ( v24->max_length <= v7 )
    goto LABEL_27;
  v25 = v24->m_Items[v7];
  if ( !v25 )
    goto LABEL_26;
  v26 = v25->fields.equipTarget1;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  *(_QWORD *)&classPos = *(_QWORD *)&v27.fields.fakeValue;
  this = *(SupportServantData_o **)&v27.fields.currentCryptoKey;
  if ( !v26 )
    goto LABEL_26;
  v26->fields.svtId = v27;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__setServantData(
        SupportServantData_o *this,
        int32_t classPos,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  SupportServantData_o *v6; // x20
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x25
  Il2CppClass **v8; // x22
  BattleServantConfConponent_o *v9; // x22
  Il2CppClass *v10; // t1
  UserServantLeaderEntity_o *v11; // x23
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct UserServantLeaderEntity_array *v18; // x8
  __int128 v19; // q1
  struct System_Int64_array *servantIdList; // x20
  __int64 v21; // x0
  __int64 v22; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-60h]

  v6 = this;
  if ( (byte_42B3895 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (SupportServantData_o *)sub_B52984(&UserServantLeaderEntity_TypeInfo);
    byte_42B3895 = 1;
  }
  userServantLeaderEntityList = v6->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_21;
  if ( userServantLeaderEntityList->max_length <= classPos )
    goto LABEL_22;
  v8 = &userServantLeaderEntityList->obj.klass + classPos;
  v10 = v8[4];
  v9 = (BattleServantConfConponent_o *)(v8 + 4);
  if ( !v10 )
  {
    v11 = (UserServantLeaderEntity_o *)sub_B52A54(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor(v11, 0LL);
    if ( v11 )
    {
      this = (SupportServantData_o *)sub_B52A44(v11, userServantLeaderEntityList->obj.klass->_1.element_class);
      if ( !this )
      {
        v22 = sub_B52A7C(0LL);
        sub_B52A28(v22, 0LL);
      }
    }
    if ( userServantLeaderEntityList->max_length <= classPos )
    {
LABEL_22:
      v21 = sub_B52A88(this);
      sub_B52A28(v21, 0LL);
    }
    v9->klass = (BattleServantConfConponent_c *)v11;
    sub_B52920(v9, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
  }
  this = (SupportServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_21;
  this = (SupportServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)this,
                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  v18 = v6->fields.userServantLeaderEntityList;
  if ( !v18 )
    goto LABEL_21;
  if ( v18->max_length <= classPos )
    goto LABEL_22;
  this = (SupportServantData_o *)v18->m_Items[classPos];
  if ( !this )
    goto LABEL_21;
  UserServantLeaderEntity__setUserServantEntity(
    (UserServantLeaderEntity_o *)this,
    entity,
    classPos,
    v6->fields._deckId_k__BackingField,
    0LL);
  if ( !entity )
    goto LABEL_21;
  v19 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
  servantIdList = v6->fields.servantIdList;
  *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v24.fields.fakeValue = v19;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v23 = v24;
  this = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v23, 0LL);
  if ( !servantIdList )
LABEL_21:
    sub_B52A5C(this, *(_QWORD *)&classPos);
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  SupportServantData_o *v4; // x19
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *oldServantIdList; // x9
  struct System_Int64_array *equipIdList; // x10
  struct System_Int64_array *oldEquipIdList; // x11
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  SupportServantData_o *v16; // x20
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  struct System_Int64_array *v46; // x8
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x21
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x1
  struct System_Int64_array *v61; // x8
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x19
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x1
  __int64 v76; // x0
  __int64 v77; // x0
  int32_t deckId_k__BackingField; // [xsp+8h] [xbp-18h] BYREF
  unsigned int v79; // [xsp+Ch] [xbp-14h] BYREF

  v4 = this;
  v79 = classPos;
  if ( (byte_42B389C & 1) == 0 )
  {
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_750/*",\"userSvtId\":"*/);
    sub_B52984(&StringLiteral_23890/*"}"*/);
    sub_B52984(&StringLiteral_746/*",\"classId\":"*/);
    sub_B52984(&StringLiteral_749/*",\"userSvtEquipId\":"*/);
    this = (SupportServantData_o *)sub_B52984(&StringLiteral_23671/*"{\"supportDeckId\":"*/);
    byte_42B389C = 1;
  }
  deckId_k__BackingField = 0;
  servantIdList = v4->fields.servantIdList;
  if ( !servantIdList )
    goto LABEL_58;
  if ( servantIdList->max_length <= classPos )
    goto LABEL_57;
  oldServantIdList = v4->fields.oldServantIdList;
  if ( !oldServantIdList )
    goto LABEL_58;
  if ( oldServantIdList->max_length <= classPos )
    goto LABEL_57;
  equipIdList = v4->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_58;
  if ( equipIdList->max_length <= classPos )
    goto LABEL_57;
  oldEquipIdList = v4->fields.oldEquipIdList;
  if ( !oldEquipIdList )
    goto LABEL_58;
  if ( oldEquipIdList->max_length <= classPos )
    goto LABEL_57;
  if ( servantIdList->m_Items[classPos] == oldServantIdList->m_Items[classPos]
    && equipIdList->m_Items[classPos] == oldEquipIdList->m_Items[classPos] )
  {
    return 0LL;
  }
  this = (SupportServantData_o *)sub_B5299C(string___TypeInfo, 9LL);
  if ( !this )
    goto LABEL_58;
  v16 = this;
  this = (SupportServantData_o *)StringLiteral_23671/*"{\"supportDeckId\":"*/;
  if ( StringLiteral_23671/*"{\"supportDeckId\":"*/ )
  {
    this = (SupportServantData_o *)sub_B52A44(StringLiteral_23671/*"{\"supportDeckId\":"*/, v16->klass->_1.element_class);
    if ( !this )
      goto LABEL_59;
    v17 = (System_Int32_array **)StringLiteral_23671/*"{\"supportDeckId\":"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( !LODWORD(v16->fields.servantIdList) )
    goto LABEL_57;
  v16->fields.oldServantIdList = (struct System_Int64_array *)v17;
  sub_B52920((BattleServantConfConponent_o *)&v16->fields.oldServantIdList, v17, v10, v11, v12, v13, v14, v15);
  deckId_k__BackingField = v4->fields._deckId_k__BackingField;
  this = (SupportServantData_o *)System_Int32__ToString((int32_t)&deckId_k__BackingField, 0LL);
  v24 = (System_Int32_array **)this;
  if ( this )
  {
    this = (SupportServantData_o *)sub_B52A44(this, v16->klass->_1.element_class);
    if ( !this )
      goto LABEL_59;
  }
  if ( LODWORD(v16->fields.servantIdList) <= 1 )
    goto LABEL_57;
  v16->fields.equipIdList = (struct System_Int64_array *)v24;
  sub_B52920((BattleServantConfConponent_o *)&v16->fields.equipIdList, v24, v18, v19, v20, v21, v22, v23);
  this = (SupportServantData_o *)StringLiteral_746/*",\"classId\":"*/;
  if ( StringLiteral_746/*",\"classId\":"*/ )
  {
    this = (SupportServantData_o *)sub_B52A44(StringLiteral_746/*",\"classId\":"*/, v16->klass->_1.element_class);
    if ( !this )
      goto LABEL_59;
    v31 = (System_Int32_array **)StringLiteral_746/*",\"classId\":"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( LODWORD(v16->fields.servantIdList) <= 2 )
    goto LABEL_57;
  v16->fields.oldEquipIdList = (struct System_Int64_array *)v31;
  sub_B52920((BattleServantConfConponent_o *)&v16->fields.oldEquipIdList, v31, v25, v26, v27, v28, v29, v30);
  this = (SupportServantData_o *)System_Int32__ToString((int32_t)&v79, 0LL);
  v38 = (System_Int32_array **)this;
  if ( this )
  {
    this = (SupportServantData_o *)sub_B52A44(this, v16->klass->_1.element_class);
    if ( !this )
    {
LABEL_59:
      v77 = sub_B52A7C(this);
      sub_B52A28(v77, 0LL);
    }
  }
  if ( LODWORD(v16->fields.servantIdList) <= 3 )
    goto LABEL_57;
  v16->fields.className = (struct System_String_array *)v38;
  sub_B52920((BattleServantConfConponent_o *)&v16->fields.className, v38, v32, v33, v34, v35, v36, v37);
  this = (SupportServantData_o *)StringLiteral_750/*",\"userSvtId\":"*/;
  if ( StringLiteral_750/*",\"userSvtId\":"*/ )
  {
    this = (SupportServantData_o *)sub_B52A44(StringLiteral_750/*",\"userSvtId\":"*/, v16->klass->_1.element_class);
    if ( !this )
      goto LABEL_59;
    v45 = (System_Int32_array **)StringLiteral_750/*",\"userSvtId\":"*/;
  }
  else
  {
    v45 = 0LL;
  }
  if ( LODWORD(v16->fields.servantIdList) <= 4 )
    goto LABEL_57;
  *(_QWORD *)&v16->fields.isFriendInfo = v45;
  sub_B52920((BattleServantConfConponent_o *)&v16->fields.isFriendInfo, v45, v39, v40, v41, v42, v43, v44);
  v46 = v4->fields.servantIdList;
  if ( !v46 )
    goto LABEL_58;
  if ( v79 >= v46->max_length )
    goto LABEL_57;
  this = (SupportServantData_o *)System_Int64__ToString((int64_t)&v46->m_Items[v79], 0LL);
  v53 = (System_Int32_array **)this;
  if ( this )
  {
    this = (SupportServantData_o *)sub_B52A44(this, v16->klass->_1.element_class);
    if ( !this )
      goto LABEL_59;
  }
  if ( LODWORD(v16->fields.servantIdList) <= 5 )
    goto LABEL_57;
  *(_QWORD *)&v16->fields.isSelectServant = v53;
  sub_B52920((BattleServantConfConponent_o *)&v16->fields.isSelectServant, v53, v47, v48, v49, v50, v51, v52);
  this = (SupportServantData_o *)StringLiteral_749/*",\"userSvtEquipId\":"*/;
  if ( StringLiteral_749/*",\"userSvtEquipId\":"*/ )
  {
    this = (SupportServantData_o *)sub_B52A44(StringLiteral_749/*",\"userSvtEquipId\":"*/, v16->klass->_1.element_class);
    if ( !this )
      goto LABEL_59;
    v60 = (System_Int32_array **)StringLiteral_749/*",\"userSvtEquipId\":"*/;
  }
  else
  {
    v60 = 0LL;
  }
  if ( LODWORD(v16->fields.servantIdList) <= 6 )
    goto LABEL_57;
  v16->fields.eventSetupInfo = (struct EventUpValSetupInfo_o *)v60;
  sub_B52920((BattleServantConfConponent_o *)&v16->fields.eventSetupInfo, v60, v54, v55, v56, v57, v58, v59);
  v61 = v4->fields.equipIdList;
  if ( !v61 )
LABEL_58:
    sub_B52A5C(this, *(_QWORD *)&classPos);
  if ( v79 >= v61->max_length )
    goto LABEL_57;
  this = (SupportServantData_o *)System_Int64__ToString((int64_t)&v61->m_Items[v79], 0LL);
  v68 = (System_Int32_array **)this;
  if ( this )
  {
    this = (SupportServantData_o *)sub_B52A44(this, v16->klass->_1.element_class);
    if ( !this )
      goto LABEL_59;
  }
  if ( LODWORD(v16->fields.servantIdList) <= 7 )
    goto LABEL_57;
  v16->fields.eventSetupInfo2 = (struct EventUpValSetupInfo_o *)v68;
  sub_B52920((BattleServantConfConponent_o *)&v16->fields.eventSetupInfo2, v68, v62, v63, v64, v65, v66, v67);
  this = (SupportServantData_o *)StringLiteral_23890/*"}"*/;
  if ( StringLiteral_23890/*"}"*/ )
  {
    this = (SupportServantData_o *)sub_B52A44(StringLiteral_23890/*"}"*/, v16->klass->_1.element_class);
    if ( this )
    {
      v75 = (System_Int32_array **)StringLiteral_23890/*"}"*/;
      goto LABEL_55;
    }
    goto LABEL_59;
  }
  v75 = 0LL;
LABEL_55:
  if ( LODWORD(v16->fields.servantIdList) <= 8 )
  {
LABEL_57:
    v76 = sub_B52A88(this);
    sub_B52A28(v76, 0LL);
  }
  v16->fields.questRestrictionInfo = (struct QuestRestrictionInfo_o *)v75;
  sub_B52920((BattleServantConfConponent_o *)&v16->fields.questRestrictionInfo, v75, v69, v70, v71, v72, v73, v74);
  return System_String__Concat_44648440((System_String_array *)v16, 0LL);
}


System_String_o *__fastcall SupportServantData__updateNameCheck(SupportServantData_o *this, const MethodInfo *method)
{
  bool v3; // w8
  System_String_o *result; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array *v13; // x19
  System_String_o *v14; // x0
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **deckName_k__BackingField; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  __int64 v44; // x0
  __int64 v45; // x0
  int32_t deckId_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B389D & 1) == 0 )
  {
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_23671/*"{\"supportDeckId\":"*/);
    sub_B52984(&StringLiteral_747/*",\"name\":\""*/);
    sub_B52984(&StringLiteral_318/*"\"}"*/);
    byte_42B389D = 1;
  }
  deckId_k__BackingField = 0;
  v3 = System_String__op_Inequality(
         this->fields._deckName_k__BackingField,
         this->fields._oldDeckName_k__BackingField,
         0LL);
  result = 0LL;
  if ( v3 )
  {
    v5 = sub_B5299C(string___TypeInfo, 5LL);
    if ( !v5 )
      sub_B52A5C(0LL, v6);
    v13 = (System_String_array *)v5;
    v14 = (System_String_o *)StringLiteral_23671/*"{\"supportDeckId\":"*/;
    if ( StringLiteral_23671/*"{\"supportDeckId\":"*/ )
    {
      v14 = (System_String_o *)sub_B52A44(StringLiteral_23671/*"{\"supportDeckId\":"*/, v13->obj.klass->_1.element_class);
      if ( !v14 )
        goto LABEL_29;
      v15 = (System_Int32_array **)StringLiteral_23671/*"{\"supportDeckId\":"*/;
    }
    else
    {
      v15 = 0LL;
    }
    if ( !v13->max_length )
      goto LABEL_28;
    v13->m_Items[0] = (System_String_o *)v15;
    sub_B52920((BattleServantConfConponent_o *)v13->m_Items, v15, v7, v8, v9, v10, v11, v12);
    deckId_k__BackingField = this->fields._deckId_k__BackingField;
    v14 = System_Int32__ToString((int32_t)&deckId_k__BackingField, 0LL);
    v22 = (System_Int32_array **)v14;
    if ( !v14 || (v14 = (System_String_o *)sub_B52A44(v14, v13->obj.klass->_1.element_class)) != 0LL )
    {
      if ( v13->max_length <= 1 )
        goto LABEL_28;
      v13->m_Items[1] = (System_String_o *)v22;
      sub_B52920((BattleServantConfConponent_o *)&v13->m_Items[1], v22, v16, v17, v18, v19, v20, v21);
      v14 = (System_String_o *)StringLiteral_747/*",\"name\":\""*/;
      if ( StringLiteral_747/*",\"name\":\""*/ )
      {
        v14 = (System_String_o *)sub_B52A44(StringLiteral_747/*",\"name\":\""*/, v13->obj.klass->_1.element_class);
        if ( !v14 )
          goto LABEL_29;
        v29 = (System_Int32_array **)StringLiteral_747/*",\"name\":\""*/;
      }
      else
      {
        v29 = 0LL;
      }
      if ( v13->max_length <= 2 )
        goto LABEL_28;
      v13->m_Items[2] = (System_String_o *)v29;
      sub_B52920((BattleServantConfConponent_o *)&v13->m_Items[2], v29, v23, v24, v25, v26, v27, v28);
      deckName_k__BackingField = (System_Int32_array **)this->fields._deckName_k__BackingField;
      if ( !deckName_k__BackingField
        || (v14 = (System_String_o *)sub_B52A44(deckName_k__BackingField, v13->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v13->max_length <= 3 )
          goto LABEL_28;
        v13->m_Items[3] = (System_String_o *)deckName_k__BackingField;
        sub_B52920(
          (BattleServantConfConponent_o *)&v13->m_Items[3],
          deckName_k__BackingField,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
        v14 = (System_String_o *)StringLiteral_318/*"\"}"*/;
        if ( !StringLiteral_318/*"\"}"*/ )
        {
          v43 = 0LL;
LABEL_25:
          if ( v13->max_length > 4 )
          {
            v13->m_Items[4] = (System_String_o *)v43;
            sub_B52920((BattleServantConfConponent_o *)&v13->m_Items[4], v43, v37, v38, v39, v40, v41, v42);
            return System_String__Concat_44648440(v13, 0LL);
          }
LABEL_28:
          v44 = sub_B52A88(v14);
          sub_B52A28(v44, 0LL);
        }
        v14 = (System_String_o *)sub_B52A44(StringLiteral_318/*"\"}"*/, v13->obj.klass->_1.element_class);
        if ( v14 )
        {
          v43 = (System_Int32_array **)StringLiteral_318/*"\"}"*/;
          goto LABEL_25;
        }
      }
    }
LABEL_29:
    v45 = sub_B52A7C(v14);
    sub_B52A28(v45, 0LL);
  }
  return result;
}


void __fastcall SupportServantData_FollowerData___ctor(
        SupportServantData_FollowerData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}