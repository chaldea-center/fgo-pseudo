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
    sub_1C372B4(this);
  v3 = !UnityEngine_GameObject__get_activeSelf(this->fields.checkMark, 0);
  UnityEngine_GameObject__SetActive(checkMark, v3, 0);
}


void DebugMenuComponent__OnClickMenu(DebugMenuComponent_o *this, const MethodInfo *method)
{
  int32_t max; // w9
  int32_t v4; // w1
  struct DebugPanelRootComponent_paramDelegate_o *v5; // x8
  const MethodInfo *v6; // x1
  struct DebugPanelRootComponent_menuDelegate_o *menudel; // x8
  _BOOL4 flg; // w8
  struct DebugPanelRootComponent_tgrDelegate_o *tgrdel; // x9
  struct DebugPanelRootComponent_paramDelegate_o *paramdel; // x8
  _BOOL4 v11; // w8
  struct DebugPanelRootComponent_paramtgrDelegate_o *paramtgrdel; // x9
  struct DebugPanelRootComponent_paramStrDelegate_o *paramStrdel; // x8
  __int64 v14; // x0
  System_ArgumentOutOfRangeException_o *v15; // x19
  __int64 v16; // x0

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
      v11 = this->fields.flg;
      paramtgrdel = this->fields.paramtgrdel;
      this->fields.flg = !v11;
      if ( !paramtgrdel )
        goto LABEL_18;
      ((void (__fastcall *)(intptr_t, _QWORD, bool, intptr_t))paramtgrdel->fields.invoke_impl)(
        paramtgrdel->fields.method_code,
        (unsigned int)this->fields.param,
        !v11,
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
      v4 = this->fields.param + 1;
      this->fields.param = v4;
      if ( max < v4 )
        this->fields.param = this->fields.min;
      v5 = this->fields.paramdel;
      if ( !v5 )
LABEL_18:
        sub_1C372B4(this);
      ((void (__fastcall *)(intptr_t))v5->fields.invoke_impl)(v5->fields.method_code);
LABEL_14:
      DebugMenuComponent__updateTitleLabel(this, v6);
      return;
    default:
      v14 = sub_1C3706C(&System_ArgumentOutOfRangeException_TypeInfo);
      v15 = (System_ArgumentOutOfRangeException_o *)sub_1C372A4(v14);
      System_ArgumentOutOfRangeException___ctor(v15, 0);
      v16 = sub_1C3706C(&Method_DebugMenuComponent_OnClickMenu__);
      sub_1C37180(v15, v16);
  }
}


void DebugMenuComponent__SetFavorite(DebugMenuComponent_o *this, bool favorite, const MethodInfo *method)
{
  UnityEngine_GameObject_o *checkMark; // x0

  checkMark = this->fields.checkMark;
  if ( !checkMark )
    sub_1C372B4(0);
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
    sub_1C372B4(0);
  return UnityEngine_GameObject__get_activeSelf(checkMark, 0);
}


void DebugMenuComponent__setInitDlg(
        DebugMenuComponent_o *this,
        System_String_o *txt,
        DebugPanelRootComponent_menuDelegate_o *del,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1

  this->fields.menudel = del;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.menudel, (int32_t)del, (int32_t)del, method);
  this->fields.type = 0;
  this->fields.originalTitle = txt;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.originalTitle, (int32_t)txt, v6, v7);
  this->fields.title = txt;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.title, (int32_t)txt, v8, v9);
  DebugMenuComponent__updateTitleLabel(this, v10);
}


// local variable allocation has failed, the output may be wrong!
void DebugMenuComponent__setInitDlg_43691476(
        DebugMenuComponent_o *this,
        System_String_o *txt,
        DebugPanelRootComponent_tgrDelegate_o *del,
        bool flg,
        const MethodInfo *method)
{
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1

  this->fields.tgrdel = del;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.tgrdel, (int32_t)del, (int32_t)del, (const MethodInfo *)flg);
  this->fields.type = 1;
  this->fields.originalTitle = txt;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.originalTitle, (int32_t)txt, v8, v9);
  this->fields.title = txt;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.title, (int32_t)txt, v10, v11);
  this->fields.flg = flg;
  DebugMenuComponent__updateTitleLabel(this, v12);
}


// local variable allocation has failed, the output may be wrong!
void DebugMenuComponent__setInitDlg_43691572(
        DebugMenuComponent_o *this,
        System_String_o *txt,
        DebugPanelRootComponent_paramDelegate_o *del,
        int32_t param,
        const MethodInfo *method)
{
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1

  this->fields.paramdel = del;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.paramdel, (int32_t)del, (int32_t)del, *(const MethodInfo **)&param);
  this->fields.type = 2;
  this->fields.originalTitle = txt;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.originalTitle, (int32_t)txt, v8, v9);
  this->fields.title = txt;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.title, (int32_t)txt, v10, v11);
  this->fields.param = param;
  DebugMenuComponent__updateTitleLabel(this, v12);
}


// local variable allocation has failed, the output may be wrong!
void DebugMenuComponent__setInitDlg_43691664(
        DebugMenuComponent_o *this,
        System_String_o *txt,
        DebugPanelRootComponent_paramtgrDelegate_o *del,
        int32_t param,
        bool flg,
        const MethodInfo *method)
{
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1

  this->fields.paramtgrdel = del;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.paramtgrdel,
    (int32_t)del,
    (int32_t)del,
    *(const MethodInfo **)&param);
  this->fields.type = 3;
  this->fields.originalTitle = txt;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.originalTitle, (int32_t)txt, v10, v11);
  this->fields.title = txt;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.title, (int32_t)txt, v12, v13);
  this->fields.flg = flg;
  this->fields.param = param;
  DebugMenuComponent__updateTitleLabel(this, v14);
}


void DebugMenuComponent__setInitDlg_43691776(
        DebugMenuComponent_o *this,
        System_String_o *txt,
        DebugPanelRootComponent_paramStrDelegate_o *del,
        System_String_o *param,
        const MethodInfo *method)
{
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1

  this->fields.paramStrdel = del;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.paramStrdel, (int32_t)del, (int32_t)del, (const MethodInfo *)param);
  this->fields.type = 4;
  this->fields.originalTitle = txt;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.originalTitle, (int32_t)txt, v8, v9);
  this->fields.title = txt;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.title, (int32_t)txt, v10, v11);
  this->fields.strParam = param;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.strParam, (int32_t)param, v12, v13);
  DebugMenuComponent__updateTitleLabel(this, v14);
}


// local variable allocation has failed, the output may be wrong!
void DebugMenuComponent__setInitDlg_43691880(
        DebugMenuComponent_o *this,
        System_String_o *txt,
        DebugPanelRootComponent_paramDelegate_o *del,
        int32_t param,
        int32_t min,
        int32_t max,
        const MethodInfo *method)
{
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1

  this->fields.paramdel = del;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.paramdel, (int32_t)del, (int32_t)del, *(const MethodInfo **)&param);
  this->fields.type = 5;
  this->fields.originalTitle = txt;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.originalTitle, (int32_t)txt, v12, v13);
  this->fields.title = txt;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.title, (int32_t)txt, v14, v15);
  this->fields.param = param;
  this->fields.min = min;
  this->fields.max = max;
  DebugMenuComponent__updateTitleLabel(this, v16);
}


// local variable allocation has failed, the output may be wrong!
void DebugMenuComponent__setInitDlg_43691992(
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
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1

  this->fields.paramdel = del;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.paramdel, (int32_t)del, (int32_t)del, *(const MethodInfo **)&param);
  this->fields.type = 6;
  this->fields.paramToStringDictionary = dictionary;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.paramToStringDictionary, (int32_t)dictionary, v14, v15);
  this->fields.originalTitle = txt;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.originalTitle, (int32_t)txt, v16, v17);
  this->fields.title = txt;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.title, (int32_t)txt, v18, v19);
  this->fields.param = param;
  this->fields.min = min;
  this->fields.max = max;
  DebugMenuComponent__updateTitleLabel(this, v20);
}


void DebugMenuComponent__setParam(DebugMenuComponent_o *this, int32_t param, const MethodInfo *method)
{
  this->fields.param = param;
}


void DebugMenuComponent__setStringParam(DebugMenuComponent_o *this, System_String_o *param, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.strParam = param;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.strParam, (int32_t)param, (int32_t)method, v3);
}


void DebugMenuComponent__setTgr(DebugMenuComponent_o *this, bool initFlg, const MethodInfo *method)
{
  this->fields.flg = initFlg;
}


void DebugMenuComponent__setTitle(DebugMenuComponent_o *this, System_String_o *txt, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  this->fields.originalTitle = txt;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.originalTitle, (int32_t)txt, (int32_t)method, v3);
  this->fields.title = txt;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.title, (int32_t)txt, v6, v7);
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

  if ( (byte_4C445AC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__);
    sub_1C37058(&StringLiteral_206/*" [ON] "*/);
    sub_1C37058(&StringLiteral_16024/*"[​"*/);
    sub_1C37058(&StringLiteral_205/*" [OFF] "*/);
    sub_1C37058(&StringLiteral_16058/*"]"*/);
    byte_4C445AC = 1;
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
        v4 = &StringLiteral_206/*" [ON] "*/;
      else
        v4 = &StringLiteral_205/*" [OFF] "*/;
      v7 = System_String__Concat_63561656(this->fields.title, (System_String_o *)*v4, 0);
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
             (const MethodInfo_33FBD10 *)Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__) )
      {
        v5 = value;
      }
      else
      {
        v5 = (Il2CppObject *)System_Int32__ToString((int)this + 64, 0);
        value = v5;
      }
LABEL_11:
      v7 = System_String__Concat_63601908(
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
        sub_1C372B4(paramToStringDictionary);
      }
      UILabel__set_effectStyle((UILabel_o *)paramToStringDictionary, 2, 0);
      return;
    default:
      v8 = sub_1C3706C(&System_ArgumentOutOfRangeException_TypeInfo);
      v9 = (System_ArgumentOutOfRangeException_o *)sub_1C372A4(v8);
      System_ArgumentOutOfRangeException___ctor(v9, 0);
      v10 = sub_1C3706C(&Method_DebugMenuComponent_updateTitleLabel__);
      sub_1C37180(v9, v10);
  }
}