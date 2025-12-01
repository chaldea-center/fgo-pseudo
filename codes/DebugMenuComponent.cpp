void DebugMenuComponent___ctor(DebugMenuComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DebugMenuComponent__OnClickCheckBox(DebugMenuComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *checkMark; // x19
  bool v3; // w1

  checkMark = this->fields.checkMark;
  if ( !checkMark )
    sub_1C71608(this, method);
  v3 = !UnityEngine_GameObject__get_activeSelf(this->fields.checkMark, 0);
  UnityEngine_GameObject__SetActive(checkMark, v3, 0);
}


void DebugMenuComponent__OnClickMenu(DebugMenuComponent_o *this, const MethodInfo *method)
{
  int32_t max; // w9
  struct DebugPanelRootComponent_paramDelegate_o *v4; // x8
  const MethodInfo *v5; // x1
  struct DebugPanelRootComponent_menuDelegate_o *menudel; // x8
  _BOOL4 flg; // w8
  struct DebugPanelRootComponent_tgrDelegate_o *tgrdel; // x9
  struct DebugPanelRootComponent_paramDelegate_o *paramdel; // x8
  _BOOL4 v10; // w8
  struct DebugPanelRootComponent_paramtgrDelegate_o *paramtgrdel; // x9
  struct DebugPanelRootComponent_paramStrDelegate_o *paramStrdel; // x8
  __int64 v13; // x0
  System_ArgumentOutOfRangeException_o *v14; // x19
  __int64 v15; // x0

  switch ( this->fields.type )
  {
    case 0:
      menudel = this->fields.menudel;
      if ( menudel )
        ((void (__fastcall *)(intptr_t, intptr_t))menudel->fields.invoke_impl)(
          menudel->fields.method_code,
          menudel->fields.method);
      return;
    case 1:
      flg = this->fields.flg;
      tgrdel = this->fields.tgrdel;
      this->fields.flg = !flg;
      if ( !tgrdel )
        goto LABEL_18;
      ((void (__fastcall *)(intptr_t, bool, intptr_t))tgrdel->fields.invoke_impl)(
        tgrdel->fields.method_code,
        !flg,
        tgrdel->fields.method);
      goto LABEL_14;
    case 2:
      paramdel = this->fields.paramdel;
      if ( !paramdel )
        goto LABEL_18;
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))paramdel->fields.invoke_impl)(
        paramdel->fields.method_code,
        (unsigned int)this->fields.param,
        paramdel->fields.method);
      return;
    case 3:
      v10 = this->fields.flg;
      paramtgrdel = this->fields.paramtgrdel;
      this->fields.flg = !v10;
      if ( !paramtgrdel )
        goto LABEL_18;
      ((void (__fastcall *)(intptr_t, _QWORD, bool, intptr_t))paramtgrdel->fields.invoke_impl)(
        paramtgrdel->fields.method_code,
        (unsigned int)this->fields.param,
        !v10,
        paramtgrdel->fields.method);
      goto LABEL_14;
    case 4:
      paramStrdel = this->fields.paramStrdel;
      if ( !paramStrdel )
        goto LABEL_18;
      ((void (__fastcall *)(intptr_t, struct System_String_o *, intptr_t))paramStrdel->fields.invoke_impl)(
        paramStrdel->fields.method_code,
        this->fields.strParam,
        paramStrdel->fields.method);
      return;
    case 5:
    case 6:
      max = this->fields.max;
      method = (const MethodInfo *)(unsigned int)(this->fields.param + 1);
      this->fields.param = (int)method;
      if ( max < (int)method )
      {
        method = (const MethodInfo *)(unsigned int)this->fields.min;
        this->fields.param = (int)method;
      }
      v4 = this->fields.paramdel;
      if ( !v4 )
LABEL_18:
        sub_1C71608(this, method);
      ((void (__fastcall *)(intptr_t))v4->fields.invoke_impl)(v4->fields.method_code);
LABEL_14:
      DebugMenuComponent__updateTitleLabel(this, v5);
      return;
    default:
      v13 = sub_1C713C4(&System_ArgumentOutOfRangeException_TypeInfo);
      v14 = (System_ArgumentOutOfRangeException_o *)sub_1C715FC(v13);
      System_ArgumentOutOfRangeException___ctor(v14, 0);
      v15 = sub_1C713C4(&Method_DebugMenuComponent_OnClickMenu__);
      sub_1C714D8(v14, v15);
  }
}


void DebugMenuComponent__SetFavorite(DebugMenuComponent_o *this, bool favorite, const MethodInfo *method)
{
  UnityEngine_GameObject_o *checkMark; // x0

  checkMark = this->fields.checkMark;
  if ( !checkMark )
    sub_1C71608(0, favorite);
  UnityEngine_GameObject__SetActive(checkMark, favorite, 0);
}


System_String_o *DebugMenuComponent__SetSelectMenuColor(
        DebugMenuComponent_o *this,
        System_String_o *title,
        const MethodInfo *method)
{
  return title;
}


System_String_o *DebugMenuComponent__getTitle(DebugMenuComponent_o *this, const MethodInfo *method)
{
  return this->fields.originalTitle;
}


bool DebugMenuComponent__get_isFavorite(DebugMenuComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *checkMark; // x0

  checkMark = this->fields.checkMark;
  if ( !checkMark )
    sub_1C71608(0, method);
  return UnityEngine_GameObject__get_activeSelf(checkMark, 0);
}


void DebugMenuComponent__setInitDlg(
        DebugMenuComponent_o *this,
        System_String_o *txt,
        DebugPanelRootComponent_menuDelegate_o *del,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  const MethodInfo *v22; // x1

  this->fields.menudel = del;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.menudel,
    (int32_t)del,
    (int32_t)del,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.type = 0;
  this->fields.originalTitle = txt;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.originalTitle, (int32_t)txt, v10, v11, v12, v13, v14, v15);
  this->fields.title = txt;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.title, (int32_t)txt, v16, v17, v18, v19, v20, v21);
  DebugMenuComponent__updateTitleLabel(this, v22);
}


void DebugMenuComponent__setInitDlg_43983904(
        DebugMenuComponent_o *this,
        System_String_o *txt,
        DebugPanelRootComponent_tgrDelegate_o *del,
        bool flg,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v11; // w2
  char v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  char v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  const MethodInfo *v23; // x1

  this->fields.tgrdel = del;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.tgrdel,
    (int32_t)del,
    (int32_t)del,
    flg,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.type = 1;
  this->fields.originalTitle = txt;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.originalTitle, (int32_t)txt, v11, v12, v13, v14, v15, v16);
  this->fields.title = txt;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.title, (int32_t)txt, v17, v18, v19, v20, v21, v22);
  this->fields.flg = flg;
  DebugMenuComponent__updateTitleLabel(this, v23);
}


void DebugMenuComponent__setInitDlg_43984000(
        DebugMenuComponent_o *this,
        System_String_o *txt,
        DebugPanelRootComponent_paramDelegate_o *del,
        int32_t param,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  const MethodInfo *v23; // x1

  this->fields.paramdel = del;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.paramdel,
    (int32_t)del,
    (int32_t)del,
    param,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.type = 2;
  this->fields.originalTitle = txt;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.originalTitle, (int32_t)txt, v11, v12, v13, v14, v15, v16);
  this->fields.title = txt;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.title, (int32_t)txt, v17, v18, v19, v20, v21, v22);
  this->fields.param = param;
  DebugMenuComponent__updateTitleLabel(this, v23);
}


// local variable allocation has failed, the output may be wrong!
void DebugMenuComponent__setInitDlg_43984092(
        DebugMenuComponent_o *this,
        System_String_o *txt,
        DebugPanelRootComponent_paramtgrDelegate_o *del,
        int32_t param,
        bool flg,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  const MethodInfo *v24; // x1

  this->fields.paramtgrdel = del;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.paramtgrdel,
    (int32_t)del,
    (int32_t)del,
    param,
    (System_String_o *)flg,
    (int32_t)method,
    v6,
    v7);
  this->fields.type = 3;
  this->fields.originalTitle = txt;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.originalTitle, (int32_t)txt, v12, v13, v14, v15, v16, v17);
  this->fields.title = txt;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.title, (int32_t)txt, v18, v19, v20, v21, v22, v23);
  this->fields.flg = flg;
  this->fields.param = param;
  DebugMenuComponent__updateTitleLabel(this, v24);
}


void DebugMenuComponent__setInitDlg_43984204(
        DebugMenuComponent_o *this,
        System_String_o *txt,
        DebugPanelRootComponent_paramStrDelegate_o *del,
        System_String_o *param,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  const MethodInfo *v29; // x1

  this->fields.paramStrdel = del;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.paramStrdel,
    (int32_t)del,
    (int32_t)del,
    (int32_t)param,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.type = 4;
  this->fields.originalTitle = txt;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.originalTitle, (int32_t)txt, v11, v12, v13, v14, v15, v16);
  this->fields.title = txt;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.title, (int32_t)txt, v17, v18, v19, v20, v21, v22);
  this->fields.strParam = param;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.strParam, (int32_t)param, v23, v24, v25, v26, v27, v28);
  DebugMenuComponent__updateTitleLabel(this, v29);
}


// local variable allocation has failed, the output may be wrong!
void DebugMenuComponent__setInitDlg_43984308(
        DebugMenuComponent_o *this,
        System_String_o *txt,
        DebugPanelRootComponent_paramDelegate_o *del,
        int32_t param,
        int32_t min,
        int32_t max,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  const MethodInfo *v25; // x1

  this->fields.paramdel = del;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.paramdel,
    (int32_t)del,
    (int32_t)del,
    param,
    *(System_String_o **)&min,
    max,
    (int64_t)method,
    v7);
  this->fields.type = 5;
  this->fields.originalTitle = txt;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.originalTitle, (int32_t)txt, v13, v14, v15, v16, v17, v18);
  this->fields.title = txt;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.title, (int32_t)txt, v19, v20, v21, v22, v23, v24);
  this->fields.param = param;
  this->fields.min = min;
  this->fields.max = max;
  DebugMenuComponent__updateTitleLabel(this, v25);
}


// local variable allocation has failed, the output may be wrong!
void DebugMenuComponent__setInitDlg_43984420(
        DebugMenuComponent_o *this,
        System_String_o *txt,
        DebugPanelRootComponent_paramDelegate_o *del,
        int32_t param,
        int32_t min,
        int32_t max,
        System_Collections_Generic_Dictionary_int__string__o *dictionary,
        const MethodInfo *method)
{
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  const MethodInfo *v32; // x1

  this->fields.paramdel = del;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.paramdel,
    (int32_t)del,
    (int32_t)del,
    param,
    *(System_String_o **)&min,
    max,
    (int64_t)dictionary,
    (System_String_o *)method);
  this->fields.type = 6;
  this->fields.paramToStringDictionary = dictionary;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.paramToStringDictionary,
    (int32_t)dictionary,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.originalTitle = txt;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.originalTitle, (int32_t)txt, v20, v21, v22, v23, v24, v25);
  this->fields.title = txt;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.title, (int32_t)txt, v26, v27, v28, v29, v30, v31);
  this->fields.param = param;
  this->fields.min = min;
  this->fields.max = max;
  DebugMenuComponent__updateTitleLabel(this, v32);
}


void DebugMenuComponent__setParam(DebugMenuComponent_o *this, int32_t param, const MethodInfo *method)
{
  this->fields.param = param;
}


void DebugMenuComponent__setStringParam(DebugMenuComponent_o *this, System_String_o *param, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.strParam = param;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.strParam,
    (int32_t)param,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void DebugMenuComponent__setTgr(DebugMenuComponent_o *this, bool initFlg, const MethodInfo *method)
{
  this->fields.flg = initFlg;
}


void DebugMenuComponent__setTitle(DebugMenuComponent_o *this, System_String_o *txt, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  this->fields.originalTitle = txt;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.originalTitle,
    (int32_t)txt,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.title = txt;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.title, (int32_t)txt, v10, v11, v12, v13, v14, v15);
}


void DebugMenuComponent__updateTitleLabel(DebugMenuComponent_o *this, const MethodInfo *method)
{
  System_String_o *title; // x20
  __int64 *v4; // x8
  Il2CppObject *v5; // x2
  System_Collections_Generic_Dictionary_int__object__o *paramToStringDictionary; // x0
  System_String_o *v7; // x0
  __int64 v8; // x0
  System_ArgumentOutOfRangeException_o *v9; // x19
  __int64 v10; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC8A0E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__);
    sub_1C713B0(&StringLiteral_205/*" [ON] "*/);
    sub_1C713B0(&StringLiteral_16024/*"[​"*/);
    sub_1C713B0(&StringLiteral_204/*" [OFF] "*/);
    sub_1C713B0(&StringLiteral_16058/*"]"*/);
    byte_4CC8A0E = 1;
  }
  value = 0;
  title = this->fields.title;
  switch ( this->fields.type )
  {
    case 0:
    case 2:
    case 3:
    case 4:
      goto LABEL_15;
    case 1:
      if ( this->fields.flg )
        v4 = &StringLiteral_205/*" [ON] "*/;
      else
        v4 = &StringLiteral_204/*" [OFF] "*/;
      v7 = System_String__Concat_64031724(this->fields.title, (System_String_o *)*v4, 0);
      goto LABEL_14;
    case 5:
      v5 = (Il2CppObject *)System_Int32__ToString((int)this + 64, 0);
      goto LABEL_11;
    case 6:
      paramToStringDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.paramToStringDictionary;
      if ( !paramToStringDictionary )
        goto LABEL_18;
      if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
             paramToStringDictionary,
             this->fields.param,
             &value,
             (const MethodInfo_3463A20 *)Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__) )
      {
        v5 = value;
      }
      else
      {
        v5 = (Il2CppObject *)System_Int32__ToString((int)this + 64, 0);
        value = v5;
      }
LABEL_11:
      v7 = System_String__Concat_64071992(
             title,
             (System_String_o *)StringLiteral_16024/*"[​"*/,
             (System_String_o *)v5,
             (System_String_o *)StringLiteral_16058/*"]"*/,
             0);
LABEL_14:
      title = v7;
LABEL_15:
      paramToStringDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.titlelabel;
      if ( !paramToStringDictionary
        || (UILabel__set_text((UILabel_o *)paramToStringDictionary, title, 0),
            (paramToStringDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.titlelabel) == 0) )
      {
LABEL_18:
        sub_1C71608(paramToStringDictionary, method);
      }
      UILabel__set_effectStyle((UILabel_o *)paramToStringDictionary, 2, 0);
      return;
    default:
      v8 = sub_1C713C4(&System_ArgumentOutOfRangeException_TypeInfo);
      v9 = (System_ArgumentOutOfRangeException_o *)sub_1C715FC(v8);
      System_ArgumentOutOfRangeException___ctor(v9, 0);
      v10 = sub_1C713C4(&Method_DebugMenuComponent_updateTitleLabel__);
      sub_1C714D8(v9, v10);
  }
}