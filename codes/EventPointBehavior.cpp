void __fastcall EventPointBehavior___ctor(EventPointBehavior_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  v2 = (ServantStatusBattleListViewItem_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v2->fields.sortValue1 = 0LL;
  v2 = (ServantStatusBattleListViewItem_o *)((char *)v2 + 48);
  *(_QWORD *)&v2[-1].fields.isEnabled = 0LL;
  v2[-1].fields.name = 0LL;
  *(_QWORD *)&v2[-1].fields.dispLimitCount.fields.fakeValue = 0LL;
  *(_DWORD *)&v2[-1].fields.isMine = 0;
  sub_1B64814(v2, 0, v3, v4);
}