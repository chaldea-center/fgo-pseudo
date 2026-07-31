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
    sub_21FFECC(this, method);
  v3 = !UnityEngine_GameObject__get_activeSelf(this->fields.checkMark, 0);
  UnityEngine_GameObject__SetActive(checkMark, v3, 0);
}


void DebugMenuComponent__OnClickMenu(DebugMenuComponent_o *this, const MethodInfo *method)
{
  int32_t type; // w8
  struct DebugPanelRootComponent_paramDelegate_o *v4; // x8
  struct DebugPanelRootComponent_paramStrDelegate_o *paramStrdel; // x8
  int32_t max; // w9
  struct DebugPanelRootComponent_paramDelegate_o *paramdel; // x8
  const MethodInfo *v8; // x1
  _BOOL4 v9; // w9
  struct DebugPanelRootComponent_tgrDelegate_o *tgrdel; // x8
  struct DebugPanelRootComponent_menuDelegate_o *menudel; // x8
  _BOOL4 flg; // w9
  struct DebugPanelRootComponent_paramtgrDelegate_o *paramtgrdel; // x8
  __int64 v14; // x0
  System_ArgumentOutOfRangeException_o *v15; // x19
  __int64 v16; // x0

  type = this->fields.type;
  if ( type > 2 )
  {
    if ( (unsigned int)(type - 5) < 2 )
    {
      max = this->fields.max;
      method = (const MethodInfo *)(unsigned int)(this->fields.param + 1);
      this->fields.param = (int)method;
      if ( max < (int)method )
      {
        method = (const MethodInfo *)(unsigned int)this->fields.min;
        this->fields.param = (int)method;
      }
      paramdel = this->fields.paramdel;
      if ( !paramdel )
        goto LABEL_24;
      ((void (__fastcall *)(intptr_t, const MethodInfo *, intptr_t))paramdel->fields.invoke_impl)(
        paramdel->fields.method_code,
        method,
        paramdel->fields.method);
    }
    else
    {
      if ( type != 3 )
      {
        if ( type != 4 )
          goto LABEL_25;
        paramStrdel = this->fields.paramStrdel;
        if ( !paramStrdel )
          goto LABEL_24;
        ((void (__fastcall *)(intptr_t, struct System_String_o *, intptr_t))paramStrdel->fields.invoke_impl)(
          paramStrdel->fields.method_code,
          this->fields.strParam,
          paramStrdel->fields.method);
        return;
      }
      flg = this->fields.flg;
      paramtgrdel = this->fields.paramtgrdel;
      this->fields.flg = !flg;
      if ( !paramtgrdel )
        goto LABEL_24;
      ((void (__fastcall *)(intptr_t, _QWORD, bool, intptr_t))paramtgrdel->fields.invoke_impl)(
        paramtgrdel->fields.method_code,
        (unsigned int)this->fields.param,
        !flg,
        paramtgrdel->fields.method);
    }
LABEL_22:
    DebugMenuComponent__updateTitleLabel(this, v8);
    return;
  }
  if ( type )
  {
    if ( type != 1 )
    {
      if ( type == 2 )
      {
        v4 = this->fields.paramdel;
        if ( v4 )
        {
          ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v4->fields.invoke_impl)(
            v4->fields.method_code,
            (unsigned int)this->fields.param,
            v4->fields.method);
          return;
        }
LABEL_24:
        sub_21FFECC(this, method);
      }
LABEL_25:
      v14 = sub_21FFC64(&System_ArgumentOutOfRangeException_TypeInfo);
      v15 = (System_ArgumentOutOfRangeException_o *)sub_21FFEBC(v14);
      System_ArgumentOutOfRangeException___ctor(v15, 0);
      v16 = sub_21FFC64(&Method_DebugMenuComponent_OnClickMenu__);
      sub_21FFD90(v15, v16);
    }
    v9 = this->fields.flg;
    tgrdel = this->fields.tgrdel;
    this->fields.flg = !v9;
    if ( !tgrdel )
      goto LABEL_24;
    ((void (__fastcall *)(intptr_t, bool, intptr_t))tgrdel->fields.invoke_impl)(
      tgrdel->fields.method_code,
      !v9,
      tgrdel->fields.method);
    goto LABEL_22;
  }
  menudel = this->fields.menudel;
  if ( menudel )
    ((void (__fastcall *)(intptr_t, intptr_t))menudel->fields.invoke_impl)(
      menudel->fields.method_code,
      menudel->fields.method);
}


// local variable allocation has failed, the output may be wrong!
void DebugMenuComponent__SetFavorite(DebugMenuComponent_o *this, bool favorite, const MethodInfo *method)
{
  UnityEngine_GameObject_o *checkMark; // x0

  checkMark = this->fields.checkMark;
  if ( !checkMark )
    sub_21FFECC(0, favorite);
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
    sub_21FFECC(0, method);
  return UnityEngine_GameObject__get_activeSelf(checkMark, 0);
}


void DebugMenuComponent__setInitDlg(
        DebugMenuComponent_o *this,
        System_String_o *txt,
        DebugPanelRootComponent_menuDelegate_o *del,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x1

  this->fields.menudel = del;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.menudel,
    (int32_t)del,
    (System_String_o *)del,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.type = 0;
  this->fields.originalTitle = txt;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.originalTitle,
    (int32_t)txt,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.title = txt;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.title, (int32_t)txt, v16, v17, v18, v19, v20, v21);
  DebugMenuComponent__updateTitleLabel(this, v22);
}


// local variable allocation has failed, the output may be wrong!
void DebugMenuComponent__setInitDlg_50631520(
        DebugMenuComponent_o *this,
        System_String_o *txt,
        DebugPanelRootComponent_tgrDelegate_o *del,
        bool flg,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  const MethodInfo *v23; // x1

  this->fields.tgrdel = del;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tgrdel,
    (int32_t)del,
    (System_String_o *)del,
    (System_String_o *)flg,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.type = 1;
  this->fields.originalTitle = txt;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.originalTitle,
    (int32_t)txt,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.title = txt;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.title, (int32_t)txt, v17, v18, v19, v20, v21, v22);
  this->fields.flg = flg;
  DebugMenuComponent__updateTitleLabel(this, v23);
}


// local variable allocation has failed, the output may be wrong!
void DebugMenuComponent__setInitDlg_50631612(
        DebugMenuComponent_o *this,
        System_String_o *txt,
        DebugPanelRootComponent_paramDelegate_o *del,
        int32_t param,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  const MethodInfo *v23; // x1

  this->fields.paramdel = del;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.paramdel,
    (int32_t)del,
    (System_String_o *)del,
    *(System_String_o **)&param,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.type = 2;
  this->fields.originalTitle = txt;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.originalTitle,
    (int32_t)txt,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.title = txt;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.title, (int32_t)txt, v17, v18, v19, v20, v21, v22);
  this->fields.param = param;
  DebugMenuComponent__updateTitleLabel(this, v23);
}


// local variable allocation has failed, the output may be wrong!
void DebugMenuComponent__setInitDlg_50631704(
        DebugMenuComponent_o *this,
        System_String_o *txt,
        DebugPanelRootComponent_paramtgrDelegate_o *del,
        int32_t param,
        bool flg,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  char v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  char v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  const MethodInfo *v24; // x1

  this->fields.paramtgrdel = del;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.paramtgrdel,
    (int32_t)del,
    (System_String_o *)del,
    *(System_String_o **)&param,
    flg,
    (int32_t)method,
    v6,
    v7);
  this->fields.type = 3;
  this->fields.originalTitle = txt;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.originalTitle,
    (int32_t)txt,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.title = txt;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.title, (int32_t)txt, v18, v19, v20, v21, v22, v23);
  this->fields.flg = flg;
  this->fields.param = param;
  DebugMenuComponent__updateTitleLabel(this, v24);
}


void DebugMenuComponent__setInitDlg_50631812(
        DebugMenuComponent_o *this,
        System_String_o *txt,
        DebugPanelRootComponent_paramStrDelegate_o *del,
        System_String_o *param,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  const MethodInfo *v29; // x1

  this->fields.paramStrdel = del;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.paramStrdel,
    (int32_t)del,
    (System_String_o *)del,
    param,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.type = 4;
  this->fields.originalTitle = txt;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.originalTitle,
    (int32_t)txt,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.title = txt;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.title, (int32_t)txt, v17, v18, v19, v20, v21, v22);
  this->fields.strParam = param;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.strParam, (int32_t)param, v23, v24, v25, v26, v27, v28);
  DebugMenuComponent__updateTitleLabel(this, v29);
}


// local variable allocation has failed, the output may be wrong!
void DebugMenuComponent__setInitDlg_50631916(
        DebugMenuComponent_o *this,
        System_String_o *txt,
        DebugPanelRootComponent_paramDelegate_o *del,
        int32_t param,
        int32_t min,
        int32_t max,
        const MethodInfo *method)
{
  bool v7; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x1

  this->fields.paramdel = del;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.paramdel,
    (int32_t)del,
    (System_String_o *)del,
    *(System_String_o **)&param,
    min,
    max,
    (bool)method,
    v7);
  this->fields.type = 5;
  this->fields.originalTitle = txt;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.originalTitle,
    (int32_t)txt,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.title = txt;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.title, (int32_t)txt, v19, v20, v21, v22, v23, v24);
  this->fields.param = param;
  this->fields.min = min;
  this->fields.max = max;
  DebugMenuComponent__updateTitleLabel(this, v25);
}


// local variable allocation has failed, the output may be wrong!
void DebugMenuComponent__setInitDlg_50632028(
        DebugMenuComponent_o *this,
        System_String_o *txt,
        DebugPanelRootComponent_paramDelegate_o *del,
        int32_t param,
        int32_t min,
        int32_t max,
        System_Collections_Generic_Dictionary_int__string__o *dictionary,
        const MethodInfo *method)
{
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  const MethodInfo *v32; // x1

  this->fields.paramdel = del;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.paramdel,
    (int32_t)del,
    (System_String_o *)del,
    *(System_String_o **)&param,
    min,
    max,
    (bool)dictionary,
    (bool)method);
  this->fields.type = 6;
  this->fields.paramToStringDictionary = dictionary;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.paramToStringDictionary,
    (int32_t)dictionary,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.originalTitle = txt;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.originalTitle,
    (int32_t)txt,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.title = txt;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.title, (int32_t)txt, v26, v27, v28, v29, v30, v31);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.strParam = param;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.strParam,
    (int32_t)param,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  this->fields.originalTitle = txt;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.originalTitle,
    (int32_t)txt,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.title = txt;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.title, (int32_t)txt, v10, v11, v12, v13, v14, v15);
}


void DebugMenuComponent__updateTitleLabel(DebugMenuComponent_o *this, const MethodInfo *method)
{
  int32_t type; // w8
  System_String_o *title; // x20
  System_Collections_Generic_Dictionary_int__object__o *paramToStringDictionary; // x0
  System_String_o *v6; // x2
  __int64 *v7; // x8
  System_String_o *v8; // x0
  __int64 v9; // x0
  System_ArgumentOutOfRangeException_o *v10; // x19
  __int64 v11; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_5939CD1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__);
    sub_21FFC50(&StringLiteral_205/*" [ON] "*/);
    sub_21FFC50(&StringLiteral_16624/*"[​"*/);
    sub_21FFC50(&StringLiteral_204/*" [OFF] "*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_5939CD1 = 1;
  }
  type = this->fields.type;
  title = this->fields.title;
  value = 0;
  if ( type <= 1 )
  {
    if ( type )
    {
      if ( type == 1 )
      {
        if ( this->fields.flg )
          v7 = &StringLiteral_205/*" [ON] "*/;
        else
          v7 = &StringLiteral_204/*" [OFF] "*/;
        v8 = System_String__Concat_75438412(title, (System_String_o *)*v7, 0);
        goto LABEL_19;
      }
      goto LABEL_24;
    }
  }
  else if ( (unsigned int)(type - 2) >= 3 )
  {
    if ( type == 5 )
    {
      v6 = System_Int32__ToString((int)this + 64, 0);
LABEL_16:
      v8 = System_String__Concat_75483552(
             title,
             (System_String_o *)StringLiteral_16624/*"[​"*/,
             v6,
             (System_String_o *)StringLiteral_16659/*"]"*/,
             0);
LABEL_19:
      title = v8;
      goto LABEL_20;
    }
    if ( type == 6 )
    {
      paramToStringDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.paramToStringDictionary;
      if ( !paramToStringDictionary )
        goto LABEL_23;
      if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
             paramToStringDictionary,
             this->fields.param,
             &value,
             (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__) )
      {
        v6 = (System_String_o *)value;
      }
      else
      {
        v6 = System_Int32__ToString((int)this + 64, 0);
        value = (Il2CppObject *)v6;
      }
      goto LABEL_16;
    }
LABEL_24:
    v9 = sub_21FFC64(&System_ArgumentOutOfRangeException_TypeInfo);
    v10 = (System_ArgumentOutOfRangeException_o *)sub_21FFEBC(v9);
    System_ArgumentOutOfRangeException___ctor(v10, 0);
    v11 = sub_21FFC64(&Method_DebugMenuComponent_updateTitleLabel__);
    sub_21FFD90(v10, v11);
  }
LABEL_20:
  paramToStringDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.titlelabel;
  if ( !paramToStringDictionary
    || (UILabel__set_text((UILabel_o *)paramToStringDictionary, title, 0),
        (paramToStringDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.titlelabel) == 0) )
  {
LABEL_23:
    sub_21FFECC(paramToStringDictionary, method);
  }
  UILabel__set_effectStyle((UILabel_o *)paramToStringDictionary, 2, 0);
}