include $(top_srcdir)/src/Makefile.include

AM_CPPFLAGS += -I$(top_srcdir)/src \
  -I$(top_builddir)/src/qt \
  -I$(top_builddir)/src/qt/forms \
  $(PROTOBUF_CFLAGS) \
  $(QR_CFLAGS)
bin_PROGRAMS = mtcoin-qt
noinst_LIBRARIES = libmtcoinqt.a
SUBDIRS = . $(BUILD_TEST_QT)
DIST_SUBDIRS = . test

# mtcoin qt core #
QT_TS = \
  locale/mtcoin_ach.ts \
  locale/mtcoin_af_ZA.ts \
  locale/mtcoin_ar.ts \
  locale/mtcoin_be_BY.ts \
  locale/mtcoin_bg.ts \
  locale/mtcoin_bs.ts \
  locale/mtcoin_ca_ES.ts \
  locale/mtcoin_ca.ts \
  locale/mtcoin_ca@valencia.ts \
  locale/mtcoin_cmn.ts \
  locale/mtcoin_cs.ts \
  locale/mtcoin_cy.ts \
  locale/mtcoin_da.ts \
  locale/mtcoin_de.ts \
  locale/mtcoin_el_GR.ts \
  locale/mtcoin_en.ts \
  locale/mtcoin_eo.ts \
  locale/mtcoin_es_CL.ts \
  locale/mtcoin_es_DO.ts \
  locale/mtcoin_es_MX.ts \
  locale/mtcoin_es.ts \
  locale/mtcoin_es_UY.ts \
  locale/mtcoin_et.ts \
  locale/mtcoin_eu_ES.ts \
  locale/mtcoin_fa_IR.ts \
  locale/mtcoin_fa.ts \
  locale/mtcoin_fi.ts \
  locale/mtcoin_fr_CA.ts \
  locale/mtcoin_fr.ts \
  locale/mtcoin_gl.ts \
  locale/mtcoin_gu_IN.ts \
  locale/mtcoin_he.ts \
  locale/mtcoin_hi_IN.ts \
  locale/mtcoin_hr.ts \
  locale/mtcoin_hu.ts \
  locale/mtcoin_id_ID.ts \
  locale/mtcoin_it.ts \
  locale/mtcoin_ja.ts \
  locale/mtcoin_ka.ts \
  locale/mtcoin_kk_KZ.ts \
  locale/mtcoin_ko_KR.ts \
  locale/mtcoin_ky.ts \
  locale/mtcoin_la.ts \
  locale/mtcoin_lt.ts \
  locale/mtcoin_lv_LV.ts \
  locale/mtcoin_mn.ts \
  locale/mtcoin_ms_MY.ts \
  locale/mtcoin_nb.ts \
  locale/mtcoin_nl.ts \
  locale/mtcoin_pam.ts \
  locale/mtcoin_pl.ts \
  locale/mtcoin_pt_BR.ts \
  locale/mtcoin_pt_PT.ts \
  locale/mtcoin_ro_RO.ts \
  locale/mtcoin_ru.ts \
  locale/mtcoin_sah.ts \
  locale/mtcoin_sk.ts \
  locale/mtcoin_sl_SI.ts \
  locale/mtcoin_sq.ts \
  locale/mtcoin_sr.ts \
  locale/mtcoin_sv.ts \
  locale/mtcoin_th_TH.ts \
  locale/mtcoin_tr.ts \
  locale/mtcoin_uk.ts \
  locale/mtcoin_ur_PK.ts \
  locale/mtcoin_uz@Cyrl.ts \
  locale/mtcoin_vi.ts \
  locale/mtcoin_vi_VN.ts \
  locale/mtcoin_zh_CN.ts \
  locale/mtcoin_zh_HK.ts \
  locale/mtcoin_zh_TW.ts

QT_FORMS_UI = \
  forms/aboutdialog.ui \
  forms/addressbookpage.ui \
  forms/askpassphrasedialog.ui \
  forms/coincontroldialog.ui \
  forms/editaddressdialog.ui \
  forms/helpmessagedialog.ui \
  forms/intro.ui \
  forms/openuridialog.ui \
  forms/optionsdialog.ui \
  forms/overviewpage.ui \
  forms/receivecoinsdialog.ui \
  forms/receiverequestdialog.ui \
  forms/rpcconsole.ui \
  forms/sendcoinsdialog.ui \
  forms/sendcoinsentry.ui \
  forms/signverifymessagedialog.ui \
  forms/transactiondescdialog.ui

QT_MOC_CPP = \
  moc_addressbookpage.cpp \
  moc_addresstablemodel.cpp \
  moc_askpassphrasedialog.cpp \
  moc_mtcoinaddressvalidator.cpp \
  moc_mtcoinamountfield.cpp \
  moc_mtcoingui.cpp \
  moc_mtcoinunits.cpp \
  moc_clientmodel.cpp \
  moc_coincontroldialog.cpp \
  moc_coincontroltreewidget.cpp \
  moc_csvmodelwriter.cpp \
  moc_editaddressdialog.cpp \
  moc_guiutil.cpp \
  moc_intro.cpp \
  moc_macdockiconhandler.cpp \
  moc_macnotificationhandler.cpp \
  moc_monitoreddatamapper.cpp \
  moc_notificator.cpp \
  moc_openuridialog.cpp \
  moc_optionsdialog.cpp \
  moc_optionsmodel.cpp \
  moc_overviewpage.cpp \
  moc_paymentserver.cpp \
  moc_qvalidatedlineedit.cpp \
  moc_qvaluecombobox.cpp \
  moc_receivecoinsdialog.cpp \
  moc_receiverequestdialog.cpp \
  moc_recentrequeststablemodel.cpp \
  moc_rpcconsole.cpp \
  moc_sendcoinsdialog.cpp \
  moc_sendcoinsentry.cpp \
  moc_signverifymessagedialog.cpp \
  moc_splashscreen.cpp \
  moc_trafficgraphwidget.cpp \
  moc_transactiondesc.cpp \
  moc_transactiondescdialog.cpp \
  moc_transactionfilterproxy.cpp \
  moc_transactiontablemodel.cpp \
  moc_transactionview.cpp \
  moc_utilitydialog.cpp \
  moc_walletframe.cpp \
  moc_walletmodel.cpp \
  moc_walletview.cpp

MTcoin_MM = \
  macdockiconhandler.mm \
  macnotificationhandler.mm

QT_MOC = \
  mtcoin.moc \
  intro.moc \
  overviewpage.moc \
  rpcconsole.moc

QT_QRC_CPP = qrc_mtcoin.cpp
QT_QRC = mtcoin.qrc

PROTOBUF_CC = paymentrequest.pb.cc
PROTOBUF_H = paymentrequest.pb.h
PROTOBUF_PROTO = paymentrequest.proto

MTcoin_QT_H = \
  addressbookpage.h \
  addresstablemodel.h \
  askpassphrasedialog.h \
  mtcoinaddressvalidator.h \
  mtcoinamountfield.h \
  mtcoingui.h \
  mtcoinunits.h \
  clientmodel.h \
  coincontroldialog.h \
  coincontroltreewidget.h \
  csvmodelwriter.h \
  editaddressdialog.h \
  guiconstants.h \
  guiutil.h \
  intro.h \
  macdockiconhandler.h \
  macnotificationhandler.h \
  monitoreddatamapper.h \
  notificator.h \
  openuridialog.h \
  optionsdialog.h \
  optionsmodel.h \
  overviewpage.h \
  paymentrequestplus.h \
  paymentserver.h \
  qvalidatedlineedit.h \
  qvaluecombobox.h \
  receivecoinsdialog.h \
  receiverequestdialog.h \
  recentrequeststablemodel.h \
  rpcconsole.h \
  sendcoinsdialog.h \
  sendcoinsentry.h \
  signverifymessagedialog.h \
  splashscreen.h \
  trafficgraphwidget.h \
  transactiondesc.h \
  transactiondescdialog.h \
  transactionfilterproxy.h \
  transactionrecord.h \
  transactiontablemodel.h \
  transactionview.h \
  utilitydialog.h \
  walletframe.h \
  walletmodel.h \
  walletmodeltransaction.h \
  walletview.h \
  winshutdownmonitor.h

RES_ICONS = \
  res/icons/add.png \
  res/icons/address-book.png \
  res/icons/mtcoin.ico \
  res/icons/mtcoin.png \
  res/icons/mtcoin_testnet.ico \
  res/icons/mtcoin_testnet.png \
  res/icons/clock1.png \
  res/icons/clock2.png \
  res/icons/clock3.png \
  res/icons/clock4.png \
  res/icons/clock5.png \
  res/icons/configure.png \
  res/icons/connect0_16.png \
  res/icons/connect1_16.png \
  res/icons/connect2_16.png \
  res/icons/connect3_16.png \
  res/icons/connect4_16.png \
  res/icons/debugwindow.png \
  res/icons/edit.png \
  res/icons/editcopy.png \
  res/icons/editpaste.png \
  res/icons/export.png \
  res/icons/filesave.png \
  res/icons/history.png \
  res/icons/key.png \
  res/icons/lock_closed.png \
  res/icons/lock_open.png \
  res/icons/overview.png \
  res/icons/qrcode.png \
  res/icons/quit.png \
  res/icons/receive.png \
  res/icons/remove.png \
  res/icons/send.png \
  res/icons/synced.png \
  res/icons/toolbar.png \
  res/icons/toolbar_testnet.png \
  res/icons/transaction0.png \
  res/icons/transaction2.png \
  res/icons/transaction_conflicted.png \
  res/icons/tx_inout.png \
  res/icons/tx_input.png \
  res/icons/tx_output.png \
  res/icons/tx_mined.png

MTcoin_QT_CPP = \
  mtcoin.cpp \
  mtcoinaddressvalidator.cpp \
  mtcoinamountfield.cpp \
  mtcoingui.cpp \
  mtcoinunits.cpp \
  clientmodel.cpp \
  csvmodelwriter.cpp \
  guiutil.cpp \
  intro.cpp \
  monitoreddatamapper.cpp \
  notificator.cpp \
  optionsdialog.cpp \
  optionsmodel.cpp \
  qvalidatedlineedit.cpp \
  qvaluecombobox.cpp \
  rpcconsole.cpp \
  splashscreen.cpp \
  trafficgraphwidget.cpp \
  utilitydialog.cpp \
  winshutdownmonitor.cpp

if ENABLE_WALLET
MTcoin_QT_CPP += \
  addressbookpage.cpp \
  addresstablemodel.cpp \
  askpassphrasedialog.cpp \
  coincontroldialog.cpp \
  coincontroltreewidget.cpp \
  editaddressdialog.cpp \
  openuridialog.cpp \
  overviewpage.cpp \
  paymentrequestplus.cpp \
  paymentserver.cpp \
  receivecoinsdialog.cpp \
  receiverequestdialog.cpp \
  recentrequeststablemodel.cpp \
  sendcoinsdialog.cpp \
  sendcoinsentry.cpp \
  signverifymessagedialog.cpp \
  transactiondesc.cpp \
  transactiondescdialog.cpp \
  transactionfilterproxy.cpp \
  transactionrecord.cpp \
  transactiontablemodel.cpp \
  transactionview.cpp \
  walletframe.cpp \
  walletmodel.cpp \
  walletmodeltransaction.cpp \
  walletview.cpp
endif

RES_IMAGES = \
  res/images/about.png \
  res/images/splash.png \
  res/images/splash_testnet.png

RES_MOVIES = $(wildcard res/movies/spinner-*.png)

MTcoin_RC = res/mtcoin-qt-res.rc

libmtcoinqt_a_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms $(QT_DBUS_INCLUDES)
libmtcoinqt_a_SOURCES = $(MTcoin_QT_CPP) $(MTcoin_QT_H) $(QT_FORMS_UI) \
  $(QT_QRC) $(QT_TS) $(PROTOBUF_PROTO) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES)

nodist_libmtcoinqt_a_SOURCES = $(QT_MOC_CPP) $(QT_MOC) $(PROTOBUF_CC) \
  $(PROTOBUF_H) $(QT_QRC_CPP)

BUILT_SOURCES = $(nodist_libmtcoinqt_a_SOURCES)

#Generating these with a half-written protobuf header leads to wacky results.
#This makes sure it's done.
$(QT_MOC): $(PROTOBUF_H)
$(QT_MOC_CPP): $(PROTOBUF_H)

# mtcoin-qt binary #
mtcoin_qt_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms
mtcoin_qt_SOURCES = mtcoin.cpp
if TARGET_DARWIN
  mtcoin_qt_SOURCES += $(MTcoin_MM)
endif
if TARGET_WINDOWS
  mtcoin_qt_SOURCES += $(MTcoin_RC)
endif
mtcoin_qt_LDADD = libmtcoinqt.a $(LIBMTcoin_SERVER)
if ENABLE_WALLET
mtcoin_qt_LDADD += $(LIBMTcoin_WALLET)
endif
mtcoin_qt_LDADD += $(LIBMTcoin_CLI) $(LIBMTcoin_COMMON) $(LIBLEVELDB) $(LIBMEMENV) \
  $(BOOST_LIBS) $(QT_LIBS) $(QT_DBUS_LIBS) $(QR_LIBS) $(PROTOBUF_LIBS) $(BDB_LIBS)
mtcoin_qt_LDFLAGS = $(QT_LDFLAGS)

# forms/foo.h -> forms/ui_foo.h
QT_FORMS_H=$(join $(dir $(QT_FORMS_UI)),$(addprefix ui_, $(notdir $(QT_FORMS_UI:.ui=.h))))

#locale/foo.ts -> locale/foo.qm
QT_QM=$(QT_TS:.ts=.qm)

.PHONY: FORCE
.SECONDARY: $(QT_QM)

mtcoinstrings.cpp: FORCE
	$(MAKE) -C $(top_srcdir)/src qt/mtcoinstrings.cpp

translate: mtcoinstrings.cpp $(QT_FORMS_UI) $(QT_FORMS_UI) $(MTcoin_QT_CPP) $(MTcoin_QT_H) $(MTcoin_MM)
	@test -n $(LUPDATE) || echo "lupdate is required for updating translations"
	@QT_SELECT=$(QT_SELECT) $(LUPDATE) $^ -locations relative -no-obsolete -ts locale/mtcoin_en.ts

$(QT_QRC_CPP): $(QT_QRC) $(QT_QM) $(QT_FORMS_H) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES) $(PROTOBUF_H)
	@cd $(abs_srcdir); test -f $(RCC) && QT_SELECT=$(QT_SELECT) $(RCC) -name mtcoin -o $(abs_builddir)/$@ $< || \
	  echo error: could not build $@
	$(SED) -e '/^\*\*.*Created:/d' $@ > $@.n && mv $@{.n,}
	$(SED) -e '/^\*\*.*by:/d' $@  > $@.n && mv $@{.n,}

CLEANFILES = $(BUILT_SOURCES) $(QT_QM) $(QT_FORMS_H) *.gcda *.gcno
