void __fastcall Grade___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
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
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_String_array *v21; // x19
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x19
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w1
  struct Grade_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // x19
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w1
  struct Grade_StaticFields *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w2
  int32_t v46; // w3
  __int64 v47; // x19
  int32_t v48; // w1
  int32_t v49; // w2
  int32_t v50; // w3
  int32_t v51; // w1
  struct Grade_StaticFields *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  int32_t v55; // w2
  int32_t v56; // w3
  __int64 v57; // x19
  int32_t v58; // w1
  int32_t v59; // w2
  int32_t v60; // w3
  int32_t v61; // w1
  struct Grade_StaticFields *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  int32_t v65; // w2
  int32_t v66; // w3
  __int64 v67; // x19
  int32_t v68; // w1
  int32_t v69; // w2
  int32_t v70; // w3
  int32_t v71; // w1
  struct Grade_StaticFields *v72; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  int32_t v75; // w2
  int32_t v76; // w3
  __int64 v77; // x19
  int32_t v78; // w1
  int32_t v79; // w2
  int32_t v80; // w3
  int32_t v81; // w1
  struct Grade_StaticFields *v82; // x0
  int32_t v83; // w2
  int32_t v84; // w3
  int32_t v85; // w2
  int32_t v86; // w3
  __int64 v87; // x19
  int32_t v88; // w1
  int32_t v89; // w2
  int32_t v90; // w3
  int32_t v91; // w1
  struct Grade_StaticFields *v92; // x0
  int32_t v93; // w2
  int32_t v94; // w3

  if ( (byte_4A07C74 & 1) == 0 )
  {
    sub_1B686D4(&Grade_TypeInfo, v1);
    sub_1B686D4(&string___TypeInfo, v2);
    sub_1B686D4(&StringLiteral_20280/*"img_listbg_04"*/, v3);
    sub_1B686D4(&StringLiteral_20277/*"img_listbg_01"*/, v4);
    sub_1B686D4(&StringLiteral_20285/*"img_mastername_line1"*/, v5);
    sub_1B686D4(&StringLiteral_20224/*"img_commonbg_04"*/, v6);
    sub_1B686D4(&StringLiteral_20084/*"icon_grade_1"*/, v7);
    sub_1B686D4(&StringLiteral_20288/*"img_masterprofile_bg2"*/, v8);
    sub_1B686D4(&StringLiteral_19552/*"frame_master_bg1"*/, v9);
    sub_1B686D4(&StringLiteral_20287/*"img_masterprofile_bg1"*/, v10);
    sub_1B686D4(&StringLiteral_23447/*"status_master_frame"*/, v11);
    sub_1B686D4(&StringLiteral_20279/*"img_listbg_03"*/, v12);
    sub_1B686D4(&StringLiteral_20284/*"img_masterform_bg"*/, v13);
    sub_1B686D4(&StringLiteral_20286/*"img_mastername_line2"*/, v14);
    sub_1B686D4(&StringLiteral_19551/*"frame_master_bg"*/, v15);
    sub_1B686D4(&StringLiteral_23448/*"status_master_frame1"*/, v16);
    byte_4A07C74 = 1;
  }
  v17 = sub_1B6877C(string___TypeInfo, 2LL);
  if ( !v17 )
    goto LABEL_28;
  v21 = (struct System_String_array *)v17;
  if ( *(_DWORD *)(v17 + 24) <= 1u )
    goto LABEL_27;
  v22 = StringLiteral_20084/*"icon_grade_1"*/;
  *(_QWORD *)(v17 + 40) = StringLiteral_20084/*"icon_grade_1"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v17 + 40), v22, v19, v20);
  Grade_TypeInfo->static_fields->gradeIconFileList = v21;
  sub_1B68678((ServantStatusBattleListViewItem_o *)Grade_TypeInfo->static_fields, (int32_t)v21, v23, v24);
  v17 = sub_1B6877C(string___TypeInfo, 2LL);
  if ( !v17 )
    goto LABEL_28;
  v27 = v17;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_27;
  v28 = StringLiteral_20287/*"img_masterprofile_bg1"*/;
  *(_QWORD *)(v17 + 32) = StringLiteral_20287/*"img_masterprofile_bg1"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v17 + 32), v28, v25, v26);
  if ( *(_DWORD *)(v27 + 24) <= 1u )
    goto LABEL_27;
  v31 = StringLiteral_20288/*"img_masterprofile_bg2"*/;
  *(_QWORD *)(v27 + 40) = StringLiteral_20288/*"img_masterprofile_bg2"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v27 + 40), v31, v29, v30);
  static_fields = Grade_TypeInfo->static_fields;
  static_fields->masterProfileBgFileList = (struct System_String_array *)v27;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->masterProfileBgFileList, v27, v33, v34);
  v17 = sub_1B6877C(string___TypeInfo, 2LL);
  if ( !v17 )
    goto LABEL_28;
  v37 = v17;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_27;
  v38 = StringLiteral_20285/*"img_mastername_line1"*/;
  *(_QWORD *)(v17 + 32) = StringLiteral_20285/*"img_mastername_line1"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v17 + 32), v38, v35, v36);
  if ( *(_DWORD *)(v37 + 24) <= 1u )
    goto LABEL_27;
  v41 = StringLiteral_20286/*"img_mastername_line2"*/;
  *(_QWORD *)(v37 + 40) = StringLiteral_20286/*"img_mastername_line2"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v37 + 40), v41, v39, v40);
  v42 = Grade_TypeInfo->static_fields;
  v42->masterProfileBgLineFileList = (struct System_String_array *)v37;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v42->masterProfileBgLineFileList, v37, v43, v44);
  v17 = sub_1B6877C(string___TypeInfo, 2LL);
  if ( !v17 )
    goto LABEL_28;
  v47 = v17;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_27;
  v48 = StringLiteral_20224/*"img_commonbg_04"*/;
  *(_QWORD *)(v17 + 32) = StringLiteral_20224/*"img_commonbg_04"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v17 + 32), v48, v45, v46);
  if ( *(_DWORD *)(v47 + 24) <= 1u )
    goto LABEL_27;
  v51 = StringLiteral_20284/*"img_masterform_bg"*/;
  *(_QWORD *)(v47 + 40) = StringLiteral_20284/*"img_masterform_bg"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v47 + 40), v51, v49, v50);
  v52 = Grade_TypeInfo->static_fields;
  v52->masterEquipBgFileList = (struct System_String_array *)v47;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v52->masterEquipBgFileList, v47, v53, v54);
  v17 = sub_1B6877C(string___TypeInfo, 2LL);
  if ( !v17 )
    goto LABEL_28;
  v57 = v17;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_27;
  v58 = StringLiteral_19551/*"frame_master_bg"*/;
  *(_QWORD *)(v17 + 32) = StringLiteral_19551/*"frame_master_bg"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v17 + 32), v58, v55, v56);
  if ( *(_DWORD *)(v57 + 24) <= 1u )
    goto LABEL_27;
  v61 = StringLiteral_19552/*"frame_master_bg1"*/;
  *(_QWORD *)(v57 + 40) = StringLiteral_19552/*"frame_master_bg1"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v57 + 40), v61, v59, v60);
  v62 = Grade_TypeInfo->static_fields;
  v62->battleIconBgFileList = (struct System_String_array *)v57;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v62->battleIconBgFileList, v57, v63, v64);
  v17 = sub_1B6877C(string___TypeInfo, 2LL);
  if ( !v17 )
    goto LABEL_28;
  v67 = v17;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_27;
  v68 = StringLiteral_23447/*"status_master_frame"*/;
  *(_QWORD *)(v17 + 32) = StringLiteral_23447/*"status_master_frame"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v17 + 32), v68, v65, v66);
  if ( *(_DWORD *)(v67 + 24) <= 1u )
    goto LABEL_27;
  v71 = StringLiteral_23448/*"status_master_frame1"*/;
  *(_QWORD *)(v67 + 40) = StringLiteral_23448/*"status_master_frame1"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v67 + 40), v71, v69, v70);
  v72 = Grade_TypeInfo->static_fields;
  v72->mainMstIconBgFileList = (struct System_String_array *)v67;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v72->mainMstIconBgFileList, v67, v73, v74);
  v17 = sub_1B6877C(string___TypeInfo, 2LL);
  if ( !v17 )
    goto LABEL_28;
  v77 = v17;
  if ( !*(_DWORD *)(v17 + 24)
    || (v78 = StringLiteral_20277/*"img_listbg_01"*/,
        *(_QWORD *)(v17 + 32) = StringLiteral_20277/*"img_listbg_01"*/,
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v17 + 32), v78, v75, v76),
        *(_DWORD *)(v77 + 24) <= 1u) )
  {
LABEL_27:
    sub_1B68938(v17, v18);
  }
  v81 = StringLiteral_20279/*"img_listbg_03"*/;
  *(_QWORD *)(v77 + 40) = StringLiteral_20279/*"img_listbg_03"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v77 + 40), v81, v79, v80);
  v82 = Grade_TypeInfo->static_fields;
  v82->supportBgFileList = (struct System_String_array *)v77;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v82->supportBgFileList, v77, v83, v84);
  v17 = sub_1B6877C(string___TypeInfo, 2LL);
  if ( !v17 )
LABEL_28:
    sub_1B68930(v17, v18);
  v87 = v17;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_27;
  v88 = StringLiteral_20277/*"img_listbg_01"*/;
  *(_QWORD *)(v17 + 32) = StringLiteral_20277/*"img_listbg_01"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v17 + 32), v88, v85, v86);
  if ( *(_DWORD *)(v87 + 24) <= 1u )
    goto LABEL_27;
  v91 = StringLiteral_20280/*"img_listbg_04"*/;
  *(_QWORD *)(v87 + 40) = StringLiteral_20280/*"img_listbg_04"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v87 + 40), v91, v89, v90);
  v92 = Grade_TypeInfo->static_fields;
  v92->followerBgFileList = (struct System_String_array *)v87;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v92->followerBgFileList, v87, v93, v94);
}


void __fastcall Grade___ctor(Grade_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall Grade__GetBattleIconBgImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *battleIconBgFileList; // x8

  if ( (byte_4A07C70 & 1) == 0 )
  {
    sub_1B686D4(&Grade_TypeInfo, method);
    byte_4A07C70 = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  battleIconBgFileList = v3->static_fields->battleIconBgFileList;
  if ( !battleIconBgFileList )
    sub_1B68930(v3, method);
  if ( battleIconBgFileList->max_length <= gradeKind )
    sub_1B68938(v3, method);
  return battleIconBgFileList->m_Items[gradeKind];
}


System_String_o *__fastcall Grade__GetFollowerBgImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *followerBgFileList; // x8

  if ( (byte_4A07C73 & 1) == 0 )
  {
    sub_1B686D4(&Grade_TypeInfo, method);
    byte_4A07C73 = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  followerBgFileList = v3->static_fields->followerBgFileList;
  if ( !followerBgFileList )
    sub_1B68930(v3, method);
  if ( followerBgFileList->max_length <= gradeKind )
    sub_1B68938(v3, method);
  return followerBgFileList->m_Items[gradeKind];
}


System_String_o *__fastcall Grade__GetIconImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *gradeIconFileList; // x8

  if ( (byte_4A07C6C & 1) == 0 )
  {
    sub_1B686D4(&Grade_TypeInfo, method);
    byte_4A07C6C = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  gradeIconFileList = v3->static_fields->gradeIconFileList;
  if ( !gradeIconFileList )
    sub_1B68930(v3, method);
  if ( gradeIconFileList->max_length <= gradeKind )
    sub_1B68938(v3, method);
  return gradeIconFileList->m_Items[gradeKind];
}


int32_t __fastcall Grade__GetKind(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4A07C68 & 1) == 0 )
  {
    sub_1B686D4(&TutorialFlag_TypeInfo, v1);
    byte_4A07C68 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_37438804(127, v1);
}


int32_t __fastcall Grade__GetKind_37438888(UserGameEntity_o *userGameEntity, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0

  if ( (byte_4A07C69 & 1) == 0 )
  {
    sub_1B686D4(&TutorialFlag_TypeInfo, method);
    byte_4A07C69 = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !userGameEntity )
    sub_1B68930(v3, method);
  return (LODWORD(userGameEntity->fields.tutorial1) >> 27) & 1;
}


int32_t __fastcall Grade__GetKind_37439108(OtherUserGameEntity_o *otherUserGameEntity, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0

  if ( (byte_4A07C6A & 1) == 0 )
  {
    sub_1B686D4(&TutorialFlag_TypeInfo, method);
    byte_4A07C6A = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !otherUserGameEntity )
    sub_1B68930(v3, method);
  return (LODWORD(otherUserGameEntity->fields.tutorial1) >> 27) & 1;
}


int32_t __fastcall Grade__GetKind_37439300(FollowerInfo_o *followerInfo, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0

  if ( (byte_4A07C6B & 1) == 0 )
  {
    sub_1B686D4(&TutorialFlag_TypeInfo, method);
    byte_4A07C6B = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !followerInfo )
    sub_1B68930(v3, method);
  return (LODWORD(followerInfo->fields.tutorial1) >> 27) & 1;
}


System_String_o *__fastcall Grade__GetMainMstIconBgImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *mainMstIconBgFileList; // x8

  if ( (byte_4A07C71 & 1) == 0 )
  {
    sub_1B686D4(&Grade_TypeInfo, method);
    byte_4A07C71 = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  mainMstIconBgFileList = v3->static_fields->mainMstIconBgFileList;
  if ( !mainMstIconBgFileList )
    sub_1B68930(v3, method);
  if ( mainMstIconBgFileList->max_length <= gradeKind )
    sub_1B68938(v3, method);
  return mainMstIconBgFileList->m_Items[gradeKind];
}


System_String_o *__fastcall Grade__GetMasterEquipBgImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *masterEquipBgFileList; // x8

  if ( (byte_4A07C6F & 1) == 0 )
  {
    sub_1B686D4(&Grade_TypeInfo, method);
    byte_4A07C6F = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  masterEquipBgFileList = v3->static_fields->masterEquipBgFileList;
  if ( !masterEquipBgFileList )
    sub_1B68930(v3, method);
  if ( masterEquipBgFileList->max_length <= gradeKind )
    sub_1B68938(v3, method);
  return masterEquipBgFileList->m_Items[gradeKind];
}


System_String_o *__fastcall Grade__GetMasterProfileBgImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *masterProfileBgFileList; // x8

  if ( (byte_4A07C6D & 1) == 0 )
  {
    sub_1B686D4(&Grade_TypeInfo, method);
    byte_4A07C6D = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  masterProfileBgFileList = v3->static_fields->masterProfileBgFileList;
  if ( !masterProfileBgFileList )
    sub_1B68930(v3, method);
  if ( masterProfileBgFileList->max_length <= gradeKind )
    sub_1B68938(v3, method);
  return masterProfileBgFileList->m_Items[gradeKind];
}


System_String_o *__fastcall Grade__GetMasterProfileBgLineImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *masterProfileBgLineFileList; // x8

  if ( (byte_4A07C6E & 1) == 0 )
  {
    sub_1B686D4(&Grade_TypeInfo, method);
    byte_4A07C6E = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  masterProfileBgLineFileList = v3->static_fields->masterProfileBgLineFileList;
  if ( !masterProfileBgLineFileList )
    sub_1B68930(v3, method);
  if ( masterProfileBgLineFileList->max_length <= gradeKind )
    sub_1B68938(v3, method);
  return masterProfileBgLineFileList->m_Items[gradeKind];
}


System_String_o *__fastcall Grade__GetSupportBgImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *supportBgFileList; // x8

  if ( (byte_4A07C72 & 1) == 0 )
  {
    sub_1B686D4(&Grade_TypeInfo, method);
    byte_4A07C72 = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  supportBgFileList = v3->static_fields->supportBgFileList;
  if ( !supportBgFileList )
    sub_1B68930(v3, method);
  if ( supportBgFileList->max_length <= gradeKind )
    sub_1B68938(v3, method);
  return supportBgFileList->m_Items[gradeKind];
}